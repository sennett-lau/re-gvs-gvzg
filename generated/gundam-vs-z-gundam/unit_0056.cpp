#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0056[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
};

void unit_0056(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00258000;
    case 2u: goto L_00258020;
    case 3u: goto L_00258060;
    case 4u: goto L_002580F8;
    case 5u: goto L_00258130;
    case 6u: goto L_00258140;
    case 7u: goto L_00258194;
    case 8u: goto L_002581BC;
    case 9u: goto L_002581F0;
    case 10u: goto L_00258268;
    case 11u: goto L_00258270;
    case 12u: goto L_002582C0;
    case 13u: goto L_00258318;
    case 14u: goto L_00258328;
    case 15u: goto L_0025836C;
    case 16u: goto L_00258378;
    case 17u: goto L_00258390;
    case 18u: goto L_002583C0;
    case 19u: goto L_002583D8;
    case 20u: goto L_002583F0;
    case 21u: goto L_0025842C;
    case 22u: goto L_00258478;
    case 23u: goto L_00258488;
    case 24u: goto L_002584CC;
    case 25u: goto L_002584D8;
    case 26u: goto L_002584F0;
    case 27u: goto L_00258534;
    case 28u: goto L_002585B8;
    case 29u: goto L_002585C8;
    case 30u: goto L_002585D8;
    case 31u: goto L_002585E0;
    case 32u: goto L_00258600;
    case 33u: goto L_002586A4;
    case 34u: goto L_002586D0;
    case 35u: goto L_002586E4;
    case 36u: goto L_00258760;
    case 37u: goto L_00258780;
    case 38u: goto L_0025878C;
    case 39u: goto L_002587A0;
    case 40u: goto L_002587E4;
    case 41u: goto L_00258830;
    case 42u: goto L_0025883C;
    case 43u: goto L_00258850;
    case 44u: goto L_00258870;
    case 45u: goto L_002588A0;
    case 46u: goto L_002588B4;
    case 47u: goto L_002588C8;
    case 48u: goto L_002588F0;
    case 49u: goto L_00258940;
    case 50u: goto L_00258994;
    case 51u: goto L_002589A8;
    case 52u: goto L_002589B4;
    case 53u: goto L_002589D0;
    case 54u: goto L_00258A0C;
    case 55u: goto L_00258A18;
    case 56u: goto L_00258A34;
    case 57u: goto L_00258A9C;
    case 58u: goto L_00258AC8;
    case 59u: goto L_00258AD8;
    case 60u: goto L_00258AF8;
    case 61u: goto L_00258B08;
    case 62u: goto L_00258B14;
    case 63u: goto L_00258B48;
    case 64u: goto L_00258B60;
    case 65u: goto L_00258B9C;
    case 66u: goto L_00258BB4;
    case 67u: goto L_00258C10;
    case 68u: goto L_00258D30;
    case 69u: goto L_00258DA8;
    case 70u: goto L_00258DB8;
    case 71u: goto L_00258DF8;
    case 72u: goto L_00258E08;
    case 73u: goto L_00258E14;
    case 74u: goto L_00258E48;
    case 75u: goto L_00258E60;
    case 76u: goto L_00258E9C;
    case 77u: goto L_00258EB4;
    case 78u: goto L_00258ED0;
    case 79u: goto L_00258EE8;
    case 80u: goto L_00258F24;
    case 81u: goto L_00258F70;
    case 82u: goto L_00258F94;
    case 83u: goto L_00258FA0;
    case 84u: goto L_00259034;
    case 85u: goto L_00259048;
    case 86u: goto L_00259078;
    case 87u: goto L_00259088;
    case 88u: goto L_002590A4;
    case 89u: goto L_002590D4;
    case 90u: goto L_00259100;
    case 91u: goto L_00259170;
    case 92u: goto L_00259188;
    case 93u: goto L_002591F4;
    case 94u: goto L_00259210;
    case 95u: goto L_0025921C;
    case 96u: goto L_00259224;
    case 97u: goto L_00259250;
    case 98u: goto L_002592A4;
    case 99u: goto L_002592B0;
    case 100u: goto L_002592E0;
    case 101u: goto L_002592F4;
    case 102u: goto L_00259360;
    case 103u: goto L_002593D0;
    case 104u: goto L_002593DC;
    case 105u: goto L_002593E8;
    case 106u: goto L_0025941C;
    case 107u: goto L_0025942C;
    case 108u: goto L_00259460;
    case 109u: goto L_002594A0;
    case 110u: goto L_002594A8;
    case 111u: goto L_002594C0;
    case 112u: goto L_00259500;
    case 113u: goto L_0025951C;
    case 114u: goto L_00259558;
    case 115u: goto L_00259560;
    case 116u: goto L_00259570;
    case 117u: goto L_00259590;
    case 118u: goto L_002595D8;
    case 119u: goto L_00259638;
    case 120u: goto L_00259640;
    case 121u: goto L_00259710;
    case 122u: goto L_00259744;
    case 123u: goto L_0025974C;
    case 124u: goto L_00259754;
    case 125u: goto L_00259770;
    case 126u: goto L_00259778;
    case 127u: goto L_00259790;
    case 128u: goto L_00259844;
    case 129u: goto L_0025984C;
    case 130u: goto L_00259854;
    case 131u: goto L_0025985C;
    case 132u: goto L_00259880;
    case 133u: goto L_002598BC;
    case 134u: goto L_002598C4;
    case 135u: goto L_002598CC;
    case 136u: goto L_002598D4;
    case 137u: goto L_00259920;
    case 138u: goto L_00259AA4;
    case 139u: goto L_00259AB0;
    case 140u: goto L_00259AB8;
    case 141u: goto L_00259AD0;
    case 142u: goto L_00259AD8;
    case 143u: goto L_00259AE8;
    case 144u: goto L_00259AF4;
    case 145u: goto L_00259B08;
    case 146u: goto L_00259B18;
    case 147u: goto L_00259B20;
    case 148u: goto L_00259B40;
    case 149u: goto L_00259B60;
    case 150u: goto L_00259B80;
    case 151u: goto L_00259BA8;
    case 152u: goto L_00259BC0;
    case 153u: goto L_00259BE8;
    case 154u: goto L_00259BF0;
    case 155u: goto L_00259BF8;
    case 156u: goto L_00259C28;
    case 157u: goto L_00259C50;
    case 158u: goto L_00259C70;
    case 159u: goto L_00259C84;
    case 160u: goto L_00259CC8;
    case 161u: goto L_00259CD0;
    case 162u: goto L_00259CF8;
    case 163u: goto L_00259D2C;
    case 164u: goto L_00259D40;
    case 165u: goto L_00259D68;
    case 166u: goto L_00259D90;
    case 167u: goto L_00259DA4;
    case 168u: goto L_00259DB0;
    case 169u: goto L_00259DB8;
    case 170u: goto L_00259DE0;
    case 171u: goto L_00259E00;
    case 172u: goto L_00259E5C;
    case 173u: goto L_00259F20;
    case 174u: goto L_00259F58;
    case 175u: goto L_00259F70;
    case 176u: goto L_00259FDC;
    case 177u: goto L_0025A078;
    case 178u: goto L_0025A080;
    case 179u: goto L_0025A088;
    case 180u: goto L_0025A090;
    case 181u: goto L_0025A0B0;
    case 182u: goto L_0025A188;
    case 183u: goto L_0025A190;
    case 184u: goto L_0025A274;
    case 185u: goto L_0025A2D0;
    case 186u: goto L_0025A2E0;
    case 187u: goto L_0025A2E8;
    case 188u: goto L_0025A310;
    case 189u: goto L_0025A330;
    case 190u: goto L_0025A338;
    case 191u: goto L_0025A340;
    case 192u: goto L_0025A35C;
    case 193u: goto L_0025A384;
    case 194u: goto L_0025A3B8;
    case 195u: goto L_0025A3D0;
    case 196u: goto L_0025A3D8;
    case 197u: goto L_0025A3F0;
    case 198u: goto L_0025A404;
    case 199u: goto L_0025A434;
    case 200u: goto L_0025A46C;
    case 201u: goto L_0025A490;
    case 202u: goto L_0025A588;
    case 203u: goto L_0025A5B8;
    case 204u: goto L_0025A68C;
    case 205u: goto L_0025A6D8;
    case 206u: goto L_0025A730;
    case 207u: goto L_0025A80C;
    case 208u: goto L_0025A820;
    case 209u: goto L_0025A880;
    case 210u: goto L_0025A898;
    case 211u: goto L_0025A8BC;
    case 212u: goto L_0025A8CC;
    case 213u: goto L_0025A8F4;
    case 214u: goto L_0025A904;
    case 215u: goto L_0025A9A0;
    case 216u: goto L_0025A9B8;
    case 217u: goto L_0025A9DC;
    case 218u: goto L_0025AA38;
    case 219u: goto L_0025AA44;
    case 220u: goto L_0025AA58;
    case 221u: goto L_0025AA80;
    case 222u: goto L_0025AA8C;
    case 223u: goto L_0025AAA4;
    case 224u: goto L_0025AAF0;
    case 225u: goto L_0025AB28;
    case 226u: goto L_0025AB48;
    case 227u: goto L_0025ABB0;
    case 228u: goto L_0025ABBC;
    case 229u: goto L_0025ABE0;
    case 230u: goto L_0025AC18;
    case 231u: goto L_0025AC2C;
    case 232u: goto L_0025AC80;
    case 233u: goto L_0025AC8C;
    case 234u: goto L_0025ACBC;
    case 235u: goto L_0025ACC8;
    case 236u: goto L_0025ACE0;
    case 237u: goto L_0025AD24;
    case 238u: goto L_0025AD38;
    case 239u: goto L_0025AD48;
    case 240u: goto L_0025AD80;
    case 241u: goto L_0025ADA0;
    case 242u: goto L_0025ADD0;
    case 243u: goto L_0025ADEC;
    case 244u: goto L_0025ADF8;
    case 245u: goto L_0025AE00;
    case 246u: goto L_0025AE10;
    case 247u: goto L_0025AE40;
    case 248u: goto L_0025AE8C;
    case 249u: goto L_0025AEF4;
    case 250u: goto L_0025AF00;
    case 251u: goto L_0025AF38;
    case 252u: goto L_0025AF44;
    case 253u: goto L_0025AF4C;
    case 254u: goto L_0025AF74;
    case 255u: goto L_0025AFC0;
    case 256u: goto L_0025B050;
    case 257u: goto L_0025B058;
    case 258u: goto L_0025B060;
    case 259u: goto L_0025B0AC;
    case 260u: goto L_0025B100;
    case 261u: goto L_0025B10C;
    case 262u: goto L_0025B120;
    case 263u: goto L_0025B128;
    case 264u: goto L_0025B168;
    case 265u: goto L_0025B170;
    case 266u: goto L_0025B178;
    case 267u: goto L_0025B190;
    case 268u: goto L_0025B1A8;
    case 269u: goto L_0025B1B8;
    case 270u: goto L_0025B1C8;
    case 271u: goto L_0025B1D0;
    case 272u: goto L_0025B1DC;
    case 273u: goto L_0025B25C;
    case 274u: goto L_0025B280;
    case 275u: goto L_0025B2C4;
    case 276u: goto L_0025B2D8;
    case 277u: goto L_0025B2E8;
    case 278u: goto L_0025B320;
    case 279u: goto L_0025B360;
    case 280u: goto L_0025B370;
    case 281u: goto L_0025B3D8;
    case 282u: goto L_0025B3F0;
    case 283u: goto L_0025B438;
    case 284u: goto L_0025B444;
    case 285u: goto L_0025B460;
    case 286u: goto L_0025B4B8;
    case 287u: goto L_0025B4D0;
    case 288u: goto L_0025B510;
    case 289u: goto L_0025B520;
    case 290u: goto L_0025B5C8;
    case 291u: goto L_0025B5E0;
    case 292u: goto L_0025B648;
    case 293u: goto L_0025B654;
    case 294u: goto L_0025B670;
    case 295u: goto L_0025B700;
    case 296u: goto L_0025B760;
    case 297u: goto L_0025B7E0;
    case 298u: goto L_0025B800;
    case 299u: goto L_0025B858;
    case 300u: goto L_0025B870;
    case 301u: goto L_0025B8E8;
    case 302u: goto L_0025B900;
    case 303u: goto L_0025B948;
    case 304u: goto L_0025B954;
    case 305u: goto L_0025B974;
    case 306u: goto L_0025B990;
    case 307u: goto L_0025BA30;
    case 308u: goto L_0025BA40;
    case 309u: goto L_0025BAA8;
    case 310u: goto L_0025BAB4;
    case 311u: goto L_0025BAD0;
    case 312u: goto L_0025BBCC;
    case 313u: goto L_0025BC10;
    case 314u: goto L_0025BC60;
    case 315u: goto L_0025BC70;
    case 316u: goto L_0025BCE0;
    case 317u: goto L_0025BD24;
    case 318u: goto L_0025BD5C;
    case 319u: goto L_0025BD84;
    case 320u: goto L_0025BD94;
    case 321u: goto L_0025BDA0;
    case 322u: goto L_0025BDC0;
    case 323u: goto L_0025BE0C;
    case 324u: goto L_0025BE18;
    case 325u: goto L_0025BE30;
    case 326u: goto L_0025BE88;
    case 327u: goto L_0025BEBC;
    case 328u: goto L_0025BEE4;
    case 329u: goto L_0025BEF4;
    case 330u: goto L_0025BF10;
    case 331u: goto L_0025BF38;
    case 332u: goto L_0025BF6C;
    case 333u: goto L_0025BF90;
    case 334u: goto L_0025BFD0;
    case 335u: goto L_0025BFF0;
    default: bad_entry(c, 0x00258000u); return;
    }
L_00258000:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_00258048; } }
L_00258020:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { goto L_00258048; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 4;
L_00258048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00258060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00258188; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00258138; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258198; } }
L_00258098:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[3], c.r[3].w[0] + 13681u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 728u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002580F8u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x002580F8u) [[unlikely]] return; }
L_002580F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258130u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x00258130u) [[unlikely]] return; }
L_00258130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258198; } }
L_00258138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258140u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x00258140u) [[unlikely]] return; }
L_00258140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258198; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u - 73u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00258188:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 325u, depth + 1u); else { c.pc = 0x0025BE30u; return; } if (c.pc != 0x00258194u) [[unlikely]] return; }
L_00258194:
    c.budget -= 1;
L_00258198:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 793u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002581B0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002581B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002581BCu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x002581BCu) [[unlikely]] return; }
L_002581BC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002581E0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_002581E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002581F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00258308; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002582C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00258268; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00258230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258380; } }
L_00258230:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 63999ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 280u), 0u);
    set32(c.r[7], 0u + 10u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258268u); st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x00258268u) [[unlikely]] return; }
L_00258268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x00258270u) [[unlikely]] return; }
L_00258270:
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00258380; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 799u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002582C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002582C0u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x002582C0u) [[unlikely]] return; }
L_002582C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 799u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258380; } }
L_002582C8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 389u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], c.r[2].w[0] - 7456u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 768u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 16;
L_00258308:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258318u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x00258318u) [[unlikely]] return; }
L_00258318:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258328u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 177u, depth + 1u); else { c.pc = 0x00269C70u; return; } if (c.pc != 0x00258328u) [[unlikely]] return; }
L_00258328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258380; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00258380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025836Cu); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025836Cu) [[unlikely]] return; }
L_0025836C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258378u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x00258378u) [[unlikely]] return; }
L_00258378:
    st32((c.r[16].w[0] + 980u), 0u);
    st32((c.r[16].w[0] + 976u), 0u);
    c.budget -= 2;
L_00258380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00258390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 63999ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583C0u); st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x002583C0u) [[unlikely]] return; }
L_002583C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583D8u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 172u, depth + 1u); else { c.pc = 0x00269BC0u; return; } if (c.pc != 0x002583D8u) [[unlikely]] return; }
L_002583D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002583F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00258480; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002584D8; } }
    c.budget -= 1;
L_00258420:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025842Cu); st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025842Cu) [[unlikely]] return; }
L_0025842C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 13713u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258478u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x00258478u) [[unlikely]] return; }
L_00258478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002584D8; } }
L_00258480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258488u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x00258488u) [[unlikely]] return; }
L_00258488:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_002584D8; } }
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 33u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584CCu); st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0056(c, 325u, depth + 1u); else { c.pc = 0x0025BE30u; return; } if (c.pc != 0x002584CCu) [[unlikely]] return; }
L_002584CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 322u, depth + 1u); else { c.pc = 0x0025BDC0u; return; } if (c.pc != 0x002584D8u) [[unlikely]] return; }
L_002584D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002584F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258534u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00258534u) [[unlikely]] return; }
L_00258534:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_00258678; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00258648; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002586D0; } }
    c.budget -= 1;
L_00258560:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 453u);
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 802u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 16u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585B8u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002585B8u) [[unlikely]] return; }
L_002585B8:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585C8u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002585C8u) [[unlikely]] return; }
L_002585C8:
    set32(c.r[4], c.r[17].w[0] + 1392u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585D8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002585D8u) [[unlikely]] return; }
L_002585D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585E0u); set32(c.r[4], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002585E0u) [[unlikely]] return; }
L_002585E0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_00258600; } }
    set32(c.r[4], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258600u); set32(c.r[5], c.r[17].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00258600u) [[unlikely]] return; }
L_00258600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 13648u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 728u), c.f[0]);  if (t) { goto L_002586D0; } }
    c.budget -= 1;
L_00258648:
    c.f[2] = ld32((c.r[17].w[0] + 1016u));
    c.f[1] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 728u), c.f[1]);  if (t) { goto L_002586D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00258678:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586A4u); st32((c.r[17].w[0] + 1416u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002586A4u) [[unlikely]] return; }
L_002586A4:
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    set32(c.r[5], 0u + 19u);
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586D0u); st32((c.r[17].w[0] + 1436u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x002586D0u) [[unlikely]] return; }
L_002586D0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586E4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x002586E4u) [[unlikely]] return; }
L_002586E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258718; } }
    c.f[3] = ld32((c.r[17].w[0] + 1376u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[17].w[0] + 1380u));
    c.f[1] = ld32((c.r[17].w[0] + 1384u));
    c.f[0] = ld32((c.r[17].w[0] + 1388u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00258730; } }
    c.budget -= 1;
L_00258718:
    c.f[0] = ld32((c.r[17].w[0] + 8624u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8628u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8632u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_00258730:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258760u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00258760u) [[unlikely]] return; }
L_00258760:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258780u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00258780u) [[unlikely]] return; }
L_00258780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025878Cu); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x0025878Cu) [[unlikely]] return; }
L_0025878C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002587A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002587E4u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x002587E4u) [[unlikely]] return; }
L_002587E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002587F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258898; } }
L_002587F8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 7u);
    c.f[0] = ld32((c.r[17].w[0] + 1076u));
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], c.r[17].w[0] + 1392u);
    set32(c.r[5], c.r[17].w[0] + 8624u);
    st32((c.r[17].w[0] + 728u), c.f[0]);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258830u); st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00258830u) [[unlikely]] return; }
L_00258830:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025883Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x0025883Cu) [[unlikely]] return; }
L_0025883C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258880; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258850u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00258850u) [[unlikely]] return; }
L_00258850:
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 1156u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258870u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00258870u) [[unlikely]] return; }
L_00258870:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_00258890; } }
L_00258880:
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1000u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00258890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_002588A0; } }
L_00258898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x002588A0u) [[unlikely]] return; }
L_002588A0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588B4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x002588B4u) [[unlikely]] return; }
L_002588B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258A40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x002588C8u) [[unlikely]] return; }
L_002588C8:
    c.f[3] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = ld32((c.r[17].w[0] + 1156u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588F0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x002588F0u) [[unlikely]] return; }
L_002588F0:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1080u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258920; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_00258920:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1392u);
    set32(c.r[6], c.r[17].w[0] + 1376u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258940u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 224u, depth + 1u); else { c.pc = 0x0026A3F0u; return; } if (c.pc != 0x00258940u) [[unlikely]] return; }
L_00258940:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002589F8; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258994u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00258994u) [[unlikely]] return; }
L_00258994:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002589A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002589A8u) [[unlikely]] return; }
L_002589A8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002589B4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002589B4u) [[unlikely]] return; }
L_002589B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002589D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x002589D0u) [[unlikely]] return; }
L_002589D0:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1436u), c.f[0]);  if (t) { goto L_00258AA0; } }
L_002589F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A0Cu); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00258A0Cu) [[unlikely]] return; }
L_00258A0C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A18u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00258A18u) [[unlikely]] return; }
L_00258A18:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A34u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00258A34u) [[unlikely]] return; }
L_00258A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258AA0; } }
    c.budget -= 1;
L_00258A40:
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
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258A80; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_00258A80:
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[17].w[0] + 1408u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A9Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00258A9Cu) [[unlikely]] return; }
L_00258A9C:
    c.budget -= 1;
L_00258AA0:
    c.f[1] = ld32((c.r[17].w[0] + 1084u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258AB8; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00258AB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AC8u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00258AC8u) [[unlikely]] return; }
L_00258AC8:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AD8u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00258AD8u) [[unlikely]] return; }
L_00258AD8:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00258B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AF8u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00258AF8u) [[unlikely]] return; }
L_00258AF8:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B08u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00258B08u) [[unlikely]] return; }
L_00258B08:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B14u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00258B14u) [[unlikely]] return; }
L_00258B14:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B48u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00258B48u) [[unlikely]] return; }
L_00258B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B60u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00258B60u) [[unlikely]] return; }
L_00258B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258BB8; } }
L_00258B68:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B9Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00258B9Cu) [[unlikely]] return; }
L_00258B9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258BB4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00258BB4u) [[unlikely]] return; }
L_00258BB4:
    c.budget -= 1;
L_00258BB8:
    c.f[2] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00258BF8; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 728u), c.f[0]);  if (t) { goto L_00258BF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00258BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258BF8; } }
L_00258BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00258C10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00258CC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258D30; } }
    c.budget -= 1;
L_00258C40:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1024u);
    set32(c.r[4], 0u + 8u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13649u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.f[2] = c.r[2].w[0];
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_00258D30; } }
    c.budget -= 1;
L_00258CC8:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00258D30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u - 73u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258D30u); st32((c.r[16].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0056(c, 325u, depth + 1u); else { c.pc = 0x0025BE30u; return; } if (c.pc != 0x00258D30u) [[unlikely]] return; }
L_00258D30:
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258D70; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_00258D70:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258D98; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00258D98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DA8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00258DA8u) [[unlikely]] return; }
L_00258DA8:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DB8u); set32(c.r[5], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00258DB8u) [[unlikely]] return; }
L_00258DB8:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258EB8; } }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_00258E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DF8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00258DF8u) [[unlikely]] return; }
L_00258DF8:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E08u); set32(c.r[5], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00258E08u) [[unlikely]] return; }
L_00258E08:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E14u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00258E14u) [[unlikely]] return; }
L_00258E14:
    c.f[0] = ld32((c.r[16].w[0] + 8608u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8612u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8616u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E48u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00258E48u) [[unlikely]] return; }
L_00258E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E60u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00258E60u) [[unlikely]] return; }
L_00258E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258EB8; } }
L_00258E68:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 8608u));
    set32(c.r[5], c.r[16].w[0] + 1408u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8612u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8616u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258E9Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x00258E9Cu) [[unlikely]] return; }
L_00258E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258EB4u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00269E90u; return; } if (c.pc != 0x00258EB4u) [[unlikely]] return; }
L_00258EB4:
    c.budget -= 1;
L_00258EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00258ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258EE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00258EE8u) [[unlikely]] return; }
L_00258EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00259080; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00259038; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002590A8; } }
L_00258F10:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x00258F24u) [[unlikely]] return; }
L_00258F24:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 19u);
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4104ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00258F70u) [[unlikely]] return; }
L_00258F70:
    c.f[1] = ld32((c.r[16].w[0] + 1124u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258F88; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_00258F88:
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F94u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00258F94u) [[unlikely]] return; }
L_00258F94:
    set32(c.r[4], c.r[16].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258FA0u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00258FA0u) [[unlikely]] return; }
L_00258FA0:
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], c.r[9].w[0] + 13280u);
    set32(c.r[3], c.r[3].w[0] + 13284u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 862u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259034u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x00259034u) [[unlikely]] return; }
L_00259034:
    c.budget -= 1;
L_00259038:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x00259048u) [[unlikely]] return; }
L_00259048:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002590A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259078u); st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x00259078u) [[unlikely]] return; }
L_00259078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002590A8; } }
L_00259080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x00259088u) [[unlikely]] return; }
L_00259088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002590A8; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590A4u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x002590A4u) [[unlikely]] return; }
L_002590A4:
    c.budget -= 1;
L_002590A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 862u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590D4u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00269DD0u; return; } if (c.pc != 0x002590D4u) [[unlikely]] return; }
L_002590D4:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00259160; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259100u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00259100u) [[unlikely]] return; }
L_00259100:
    c.f[2] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259138; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_00259160; } }
    c.budget -= 1;
L_00259138:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259160; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_00259160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259188u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00259188u) [[unlikely]] return; }
L_00259188:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002591C8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], 0u + 20u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_002591C8:
    c.f[1] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002591E8; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 3;
L_002591E8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x002591F4u) [[unlikely]] return; }
L_002591F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1376u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259210u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00259210u) [[unlikely]] return; }
L_00259210:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025921Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0025921Cu) [[unlikely]] return; }
L_0025921C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259224u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 255u, depth + 1u); else { c.pc = 0x001E7CF0u; return; } if (c.pc != 0x00259224u) [[unlikely]] return; }
L_00259224:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259250u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00259250u) [[unlikely]] return; }
L_00259250:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002592D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592A4u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002592A4u) [[unlikely]] return; }
L_002592A4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002592B0u) [[unlikely]] return; }
L_002592B0:
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
L_002592D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592E0u); set32(c.r[4], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002592E0u) [[unlikely]] return; }
L_002592E0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592F4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x002592F4u) [[unlikely]] return; }
L_002592F4:
    c.f[2] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259328; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_00259350; } }
L_00259328:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259350; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_00259350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00259360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002593E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259420; } }
    c.budget -= 1;
L_00259390:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1060u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002593D0u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x002593D0u) [[unlikely]] return; }
L_002593D0:
    set32(c.r[4], c.r[16].w[0] + 1376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002593DCu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002593DCu) [[unlikely]] return; }
L_002593DC:
    c.budget -= 1;
L_002593E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002593E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8260u; return; } if (c.pc != 0x002593E8u) [[unlikely]] return; }
L_002593E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_00259420; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 13288u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025941Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 325u, depth + 1u); else { c.pc = 0x0025BE30u; return; } if (c.pc != 0x0025941Cu) [[unlikely]] return; }
L_0025941C:
    c.budget -= 1;
L_00259420:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025942Cu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x0025942Cu) [[unlikely]] return; }
L_0025942C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259450; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00259450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002594A0; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002594A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002594A0u) [[unlikely]] return; }
L_002594A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 136u, depth + 1u); else { c.pc = 0x00255210u; return; } if (c.pc != 0x002594A8u) [[unlikely]] return; }
L_002594A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002594C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00259558; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259500u) [[unlikely]] return; }
L_00259500:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00259520; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025951Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025951Cu) [[unlikely]] return; }
L_0025951C:
    c.budget -= 1;
L_00259520:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00259558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259558; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00259558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259558u);  if (depth < kMaxDepth) unit_0072(c, 39u, depth + 1u); else { c.pc = 0x002C88A0u; return; } if (c.pc != 0x00259558u) [[unlikely]] return; }
L_00259558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 347u, depth + 1u); else { c.pc = 0x001AF260u; return; } if (c.pc != 0x00259560u) [[unlikely]] return; }
L_00259560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 14272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00259590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[5].w[0] - 64u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 769u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595D8u); st8((c.r[4].w[0] + 771u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E9450u; return; } if (c.pc != 0x002595D8u) [[unlikely]] return; }
L_002595D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 18740u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12288u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 8520u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8524u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16928u);
    st8((c.r[17].w[0] + 271u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259638u); set32(c.r[5], c.r[8].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00259638u) [[unlikely]] return; }
L_00259638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x00259640u) [[unlikely]] return; }
L_00259640:
    st32((c.r[17].w[0] + 8664u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 3728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 8668u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259688; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00259690; } }
    c.budget -= 1;
L_00259688:
    st8((c.r[17].w[0] + 750u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00259690:
    set32(c.r[6], ld32((c.r[17].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] + 14484u);
    set32(c.r[3], c.r[3].w[0] + 14486u);
    set32(c.r[2], c.r[2].w[0] + 14488u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 109u)));
    st8((c.r[17].w[0] + 8681u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 1608u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 110u)));
    st8((c.r[17].w[0] + 8682u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    st8((c.r[17].w[0] + 515u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 834u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 832u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259710u); st8((c.r[17].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x00259710u) [[unlikely]] return; }
L_00259710:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = 0ull | 62464ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    st8((c.r[17].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    st8((c.r[17].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 264u), c.r[17].w[0]);
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259744u); st16((c.r[17].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x00259744u) [[unlikely]] return; }
L_00259744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025974Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x0025974Cu) [[unlikely]] return; }
L_0025974C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 270u, depth + 1u); else { c.pc = 0x001F3570u; return; } if (c.pc != 0x00259754u) [[unlikely]] return; }
L_00259754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259770u) [[unlikely]] return; }
L_00259770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 127u, depth + 1u); else { c.pc = 0x00259790u; return; } if (c.pc != 0x00259778u) [[unlikely]] return; }
L_00259778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00259790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 14288u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8328u)));
    st32((c.r[4].w[0] + 8568u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8332u)));
    st32((c.r[4].w[0] + 8572u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8264u));
    st32((c.r[4].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8304u));
    st32((c.r[4].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8268u));
    st32((c.r[4].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    st32((c.r[4].w[0] + 8316u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 45;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259844u) [[unlikely]] return; }
L_00259844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025984Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x0025984Cu) [[unlikely]] return; }
L_0025984C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x00259854u) [[unlikely]] return; }
L_00259854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025985Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x0025985Cu) [[unlikely]] return; }
L_0025985C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00259870; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00259870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 796u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 803u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598BCu); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002598BCu) [[unlikely]] return; }
L_002598BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598C4u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002598C4u) [[unlikely]] return; }
L_002598C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 208u, depth + 1u); else { c.pc = 0x0025A820u; return; } if (c.pc != 0x002598CCu) [[unlikely]] return; }
L_002598CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 215u, depth + 1u); else { c.pc = 0x0025A9A0u; return; } if (c.pc != 0x002598D4u) [[unlikely]] return; }
L_002598D4:
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 17376u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 556u), static_cast<std::uint16_t>(0u));
    c.budget -= 19;
L_00259920:
    st16((c.r[4].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 526u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st16((c.r[4].w[0] + 528u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[4].w[0] + 530u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 532u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 534u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 538u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259920u | kUnwind; return; } goto L_00259920; } }
    st32((c.r[16].w[0] + 672u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st8((c.r[16].w[0] + 558u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 1u);
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 255u);
    st8((c.r[16].w[0] + 559u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 14460u);
    st16((c.r[16].w[0] + 564u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 814u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 704u), 0u);
    st32((c.r[16].w[0] + 708u), 0u);
    st32((c.r[16].w[0] + 1256u), 0u);
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 777u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 773u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 850u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 772u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8412u), 0u);
    st32((c.r[16].w[0] + 8408u), 0u);
    st32((c.r[16].w[0] + 8404u), 0u);
    st32((c.r[16].w[0] + 8400u), 0u);
    st32((c.r[16].w[0] + 8420u), 0u);
    st32((c.r[16].w[0] + 8416u), 0u);
    st32((c.r[16].w[0] + 8428u), 0u);
    st32((c.r[16].w[0] + 8424u), 0u);
    st32((c.r[16].w[0] + 8332u), 0u);
    st32((c.r[16].w[0] + 8328u), 0u);
    st32((c.r[16].w[0] + 8436u), 0u);
    st32((c.r[16].w[0] + 8432u), 0u);
    st32((c.r[16].w[0] + 8472u), 0u);
    st32((c.r[16].w[0] + 8468u), 0u);
    st32((c.r[16].w[0] + 8464u), 0u);
    st32((c.r[16].w[0] + 8456u), 0u);
    st32((c.r[16].w[0] + 8452u), 0u);
    st32((c.r[16].w[0] + 8448u), 0u);
    st8((c.r[16].w[0] + 8567u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8566u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1488u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1626u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1627u), static_cast<std::uint8_t>(0u));
    c.budget -= 85;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AA4u); st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x00259AA4u) [[unlikely]] return; }
L_00259AA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x00259AB0u) [[unlikely]] return; }
L_00259AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 124u, depth + 1u); else { c.pc = 0x001B1C90u; return; } if (c.pc != 0x00259AB8u) [[unlikely]] return; }
L_00259AB8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AD0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x00259AD0u) [[unlikely]] return; }
L_00259AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 127u, depth + 1u); else { c.pc = 0x001B1D30u; return; } if (c.pc != 0x00259AD8u) [[unlikely]] return; }
L_00259AD8:
    set32(c.r[17], c.r[16].w[0] + 8624u);
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00259AE8u) [[unlikely]] return; }
L_00259AE8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AF4u); set32(c.r[4], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00259AF4u) [[unlikely]] return; }
L_00259AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 1440u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B08u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00259B08u) [[unlikely]] return; }
L_00259B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B18u); st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x00259B18u) [[unlikely]] return; }
L_00259B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259B20u) [[unlikely]] return; }
L_00259B20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259B38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259B40; } }
L_00259B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 16u, depth + 1u); else { c.pc = 0x00194740u; return; } if (c.pc != 0x00259B40u) [[unlikely]] return; }
L_00259B40:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259B60u) [[unlikely]] return; }
L_00259B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00259B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00259BB0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BA8u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259BA8u) [[unlikely]] return; }
L_00259BA8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00259BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 224u, depth + 1u); else { c.pc = 0x0025AAF0u; return; } if (c.pc != 0x00259BC0u) [[unlikely]] return; }
L_00259BC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259BE8; } }
    c.budget -= 1;
L_00259BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x00259BE8u) [[unlikely]] return; }
L_00259BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x0025A310u; return; } if (c.pc != 0x00259BF0u) [[unlikely]] return; }
L_00259BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x00259BF8u) [[unlikely]] return; }
L_00259BF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00259C28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C28u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259C28u) [[unlikely]] return; }
L_00259C28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00259C58; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C50u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259C50u) [[unlikely]] return; }
L_00259C50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00259C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x00259C84u) [[unlikely]] return; }
L_00259C84:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CC8u); st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x00259CC8u) [[unlikely]] return; }
L_00259CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x00259CD0u) [[unlikely]] return; }
L_00259CD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00259D00; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CF8u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259CF8u) [[unlikely]] return; }
L_00259CF8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00259D00:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00259D30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259D2Cu) [[unlikely]] return; }
L_00259D2C:
    c.budget -= 1;
L_00259D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00259D70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D68u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259D68u) [[unlikely]] return; }
L_00259D68:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00259D70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259D88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259D90; } }
L_00259D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 127u, depth + 1u); else { c.pc = 0x00251AD0u; return; } if (c.pc != 0x00259D90u) [[unlikely]] return; }
L_00259D90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00259DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DA4u);  if (depth < kMaxDepth) unit_0056(c, 246u, depth + 1u); else { c.pc = 0x0025AE10u; return; } if (c.pc != 0x00259DA4u) [[unlikely]] return; }
L_00259DA4:
    c.budget -= 1;
L_00259DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x00259DB0u) [[unlikely]] return; }
L_00259DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x0025A310u; return; } if (c.pc != 0x00259DB8u) [[unlikely]] return; }
L_00259DB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00259DE8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DE0u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x00259DE0u) [[unlikely]] return; }
L_00259DE0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00259DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00259E68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259E68; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00259E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00259E5Cu) [[unlikely]] return; }
L_00259E5C:
    c.budget -= 1;
L_00259E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259F58; } }
L_00259E68:
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259F50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259F50; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00259EE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00259F50; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00259F50; } }
    st8((c.r[17].w[0] + 838u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00259F50; } }
    c.budget -= 1;
L_00259EE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[2], c.r[2].w[0] - 19195u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00259F40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_00259F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F20u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00259F20u) [[unlikely]] return; }
L_00259F20:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259F50; } }
L_00259F40:
    st8((c.r[17].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00259F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x0025A310u; return; } if (c.pc != 0x00259F58u) [[unlikely]] return; }
L_00259F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00259F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00259FE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00259FE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00259FE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259FE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00259FE8; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259FDCu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0056(c, 181u, depth + 1u); else { c.pc = 0x0025A0B0u; return; } if (c.pc != 0x00259FDCu) [[unlikely]] return; }
L_00259FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A098; } }
    c.budget -= 1;
L_00259FE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[16].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[16].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    st32((c.r[16].w[0] + 8568u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8332u)));
    st32((c.r[16].w[0] + 8572u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8264u));
    st32((c.r[16].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8304u));
    st32((c.r[16].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8268u));
    st32((c.r[16].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8308u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A078u); st32((c.r[16].w[0] + 8316u), c.f[0]);  if (depth < kMaxDepth) unit_0056(c, 164u, depth + 1u); else { c.pc = 0x00259D40u; return; } if (c.pc != 0x0025A078u) [[unlikely]] return; }
L_0025A078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A080u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x0025A080u) [[unlikely]] return; }
L_0025A080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x0025A088u) [[unlikely]] return; }
L_0025A088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x0025A090u) [[unlikely]] return; }
L_0025A090:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025A098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025A0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025A118; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0025A110; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A110; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A110; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A118; } }
    c.budget -= 1;
L_0025A110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A2F8; } }
L_0025A118:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A2D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A1A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A1A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A168; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A180; } }
L_0025A168:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0025A180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0025A188u) [[unlikely]] return; }
L_0025A188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x0025A190u) [[unlikely]] return; }
L_0025A190:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025A2F8; } }
    c.budget -= 1;
L_0025A1A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 41u)));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0025A1E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A210; } }
    c.budget -= 1;
L_0025A1E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025A200; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A228; } }
L_0025A200:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (t) { goto L_0025A228; } }
    c.budget -= 1;
L_0025A210:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A228; } }
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0025A228:
    c.r[1].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A2F8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);  if (t) { goto L_0025A2F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A280; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0025A268; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025A268; } }
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025A268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A274u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x0025A274u) [[unlikely]] return; }
L_0025A274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A2F8; } }
    c.budget -= 1;
L_0025A280:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A2F8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0025A2F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A2F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A2F8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[5].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A2D0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x0025A2D0u) [[unlikely]] return; }
L_0025A2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A2F8; } }
L_0025A2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A2E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0025A2E0u) [[unlikely]] return; }
L_0025A2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A2E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x0025A2E8u) [[unlikely]] return; }
L_0025A2E8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025A2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025A310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A330u); set32(c.r[16], c.r[2].w[0] - 64u);  if (depth < kMaxDepth) unit_0039(c, 148u, depth + 1u); else { c.pc = 0x001E5E00u; return; } if (c.pc != 0x0025A330u) [[unlikely]] return; }
L_0025A330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 197u, depth + 1u); else { c.pc = 0x0025A3F0u; return; } if (c.pc != 0x0025A338u) [[unlikely]] return; }
L_0025A338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 18u, depth + 1u); else { c.pc = 0x00254400u; return; } if (c.pc != 0x0025A340u) [[unlikely]] return; }
L_0025A340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9088u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A35Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025A35Cu) [[unlikely]] return; }
L_0025A35C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 821u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0025A388; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13584u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A384u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025A384u) [[unlikely]] return; }
L_0025A384:
    c.budget -= 1;
L_0025A388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 820u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0025A3B8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025A3B8u) [[unlikely]] return; }
L_0025A3B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025A3D0u) [[unlikely]] return; }
L_0025A3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 268u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x0025A3D8u) [[unlikely]] return; }
L_0025A3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025A3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 123u, depth + 1u); else { c.pc = 0x001E5840u; return; } if (c.pc != 0x0025A404u) [[unlikely]] return; }
L_0025A404:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A478; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A438; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025A438; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A434u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x0025A434u) [[unlikely]] return; }
L_0025A434:
    c.budget -= 1;
L_0025A438:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A490; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025A490; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A46Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025A46Cu) [[unlikely]] return; }
L_0025A46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A490; } }
    c.budget -= 1;
L_0025A478:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025A490; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A490u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025A490u) [[unlikely]] return; }
L_0025A490:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 240ull;  if (t) { goto L_0025A4B0; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0025A4B0:
    c.r[2].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_0025A4C0; } }
    set32(c.r[3], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_0025A4C0:
    st8((c.r[16].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 788u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A4D8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025A4D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A508; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A508; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0025A508:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 522u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A520; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 522u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A528; } }
L_0025A520:
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0025A528:
    c.f[1] = ld32((c.r[16].w[0] + 1072u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A550; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1072u), c.f[0]);
    c.budget -= 4;
L_0025A550:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A580; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A580; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025A580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 260u, depth + 1u); else { c.pc = 0x003C6160u; return; } if (c.pc != 0x0025A588u) [[unlikely]] return; }
L_0025A588:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025A730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A5B8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003B(c, 184u, depth + 1u); else { c.pc = 0x001EDF30u; return; } if (c.pc != 0x0025A5B8u) [[unlikely]] return; }
L_0025A5B8:
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 811u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A730; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A600; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A730; } }
L_0025A600:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025A618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A628; } }
L_0025A618:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_0025A628:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025A690; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A690; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A680; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_0025A680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A68Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x0025A68Cu) [[unlikely]] return; }
L_0025A68C:
    c.budget -= 1;
L_0025A690:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A6B8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0025A6B8; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025A6B8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x0025A6D8u) [[unlikely]] return; }
L_0025A6D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A730; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0025A718; } }
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025A718:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025A730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A730u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x0025A730u) [[unlikely]] return; }
L_0025A730:
    c.f[2] = ld32((c.r[16].w[0] + 1088u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A770; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1088u), c.f[0]);  if (t) { goto L_0025A768; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.f[1]);  if (t) { goto L_0025A770; } }
L_0025A768:
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025A770:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A7E8; } }
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A7B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0025A7B8; } }
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0025A7B8:
    c.f[2] = ld32((c.r[16].w[0] + 1220u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A7E8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_0025A7E8; } }
    st32((c.r[16].w[0] + 1220u), c.f[1]);
    c.budget -= 1;
L_0025A7E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 766u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A800; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025A800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A80Cu); st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 52u, depth + 1u); else { c.pc = 0x003B0670u; return; } if (c.pc != 0x0025A80Cu) [[unlikely]] return; }
L_0025A80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025A820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[4].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    st8((c.r[4].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[4].w[0] + 8532u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[4].w[0] + 8536u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A880u); st32((c.r[4].w[0] + 8540u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 145u, depth + 1u); else { c.pc = 0x001F14B0u; return; } if (c.pc != 0x0025A880u) [[unlikely]] return; }
L_0025A880:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A898u); st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 252u, depth + 1u); else { c.pc = 0x003C6020u; return; } if (c.pc != 0x0025A898u) [[unlikely]] return; }
L_0025A898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8928u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A8D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8BCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025A8BCu) [[unlikely]] return; }
L_0025A8BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8CCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025A8CCu) [[unlikely]] return; }
L_0025A8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A908; } }
    c.budget -= 1;
L_0025A8D8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A908; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8F4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025A8F4u) [[unlikely]] return; }
L_0025A8F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A904u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025A904u) [[unlikely]] return; }
L_0025A904:
    c.budget -= 1;
L_0025A908:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 14452u);
    set32(c.r[3], c.r[3].w[0] + 14456u);
    set32(c.r[6], c.r[6].w[0] - 14800u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1600u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 1604u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025A9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A9B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x0025A9B8u) [[unlikely]] return; }
L_0025A9B8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A9DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 20u, depth + 1u); else { c.pc = 0x002C4480u; return; } if (c.pc != 0x0025A9DCu) [[unlikely]] return; }
L_0025A9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AA58; } }
    c.budget -= 1;
L_0025A9E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AA58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AA20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AA20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AA58; } }
    c.budget -= 1;
L_0025AA20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025AA50; } }
    st8((c.r[16].w[0] + 810u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA38u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x0025AA38u) [[unlikely]] return; }
L_0025AA38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 211u, depth + 1u); else { c.pc = 0x001CAB20u; return; } if (c.pc != 0x0025AA44u) [[unlikely]] return; }
L_0025AA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_0025AA58; } }
    c.budget -= 1;
L_0025AA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 139u, depth + 1u); else { c.pc = 0x0025DAB0u; return; } if (c.pc != 0x0025AA58u) [[unlikely]] return; }
L_0025AA58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AA98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA80u); set32(c.r[5], c.r[3].w[0] + 656u);  if (depth < kMaxDepth) unit_005A(c, 156u, depth + 1u); else { c.pc = 0x002699E0u; return; } if (c.pc != 0x0025AA80u) [[unlikely]] return; }
L_0025AA80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x0025AA8Cu) [[unlikely]] return; }
L_0025AA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AAA8; } }
    c.budget -= 1;
L_0025AA98:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AAA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00269F40u; return; } if (c.pc != 0x0025AAA4u) [[unlikely]] return; }
L_0025AAA4:
    c.budget -= 1;
L_0025AAA8:
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 871u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 868u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1016u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025AAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025AB20; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 75u);  if (t) { goto L_0025AB20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0025AB30; } }
L_0025AB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AB28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 150u, depth + 1u); else { c.pc = 0x0025DD10u; return; } if (c.pc != 0x0025AB28u) [[unlikely]] return; }
L_0025AB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025ACC8; } }
L_0025AB30:
    st32((c.r[16].w[0] + 700u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025ACC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AB48u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025AB48u) [[unlikely]] return; }
L_0025AB48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0025ACA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025AB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025ACC8; } }
L_0025AB68:
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0025AC68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025AC10; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025ABD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025ABA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025ACC8; } }
L_0025ABA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 240u, depth + 1u); else { c.pc = 0x0025AD80u; return; } if (c.pc != 0x0025ABB0u) [[unlikely]] return; }
L_0025ABB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABBCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025ABBCu) [[unlikely]] return; }
L_0025ABBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025ACC8; } }
L_0025ABD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ABE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 240u, depth + 1u); else { c.pc = 0x0025AD80u; return; } if (c.pc != 0x0025ABE0u) [[unlikely]] return; }
L_0025ABE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025AC00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025ACC8; } }
L_0025AC00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025ACC8; } }
L_0025AC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 240u, depth + 1u); else { c.pc = 0x0025AD80u; return; } if (c.pc != 0x0025AC18u) [[unlikely]] return; }
L_0025AC18:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC2Cu); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 236u, depth + 1u); else { c.pc = 0x0025ACE0u; return; } if (c.pc != 0x0025AC2Cu) [[unlikely]] return; }
L_0025AC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025ACC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025ACC8; } }
    c.budget -= 1;
L_0025AC68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025AC98; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC80u); st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025AC80u) [[unlikely]] return; }
L_0025AC80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x0025AC8Cu) [[unlikely]] return; }
L_0025AC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025ACC8; } }
    c.budget -= 1;
L_0025AC98:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025ACC8; } }
    c.budget -= 1;
L_0025ACA8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ACBCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025ACBCu) [[unlikely]] return; }
L_0025ACBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ACC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x0025ACC8u) [[unlikely]] return; }
L_0025ACC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025ACE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4168ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AD10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025AD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AD70; } }
    c.budget -= 1;
L_0025AD10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD24u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0025AD24u) [[unlikely]] return; }
L_0025AD24:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD38u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025AD38u) [[unlikely]] return; }
L_0025AD38:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD48u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025AD48u) [[unlikely]] return; }
L_0025AD48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0025AD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AD70; } }
L_0025AD68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0025AD70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025AD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ADA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 242u, depth + 1u); else { c.pc = 0x0025ADD0u; return; } if (c.pc != 0x0025ADA0u) [[unlikely]] return; }
L_0025ADA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025ADB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_0025ADB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025ADD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] + 8592u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ADECu); st32((c.r[29].w[0] + 24u), c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0025ADECu) [[unlikely]] return; }
L_0025ADEC:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ADF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0025ADF8u) [[unlikely]] return; }
L_0025ADF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE00u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0025AE00u) [[unlikely]] return; }
L_0025AE00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025AE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025AE38; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE48; } }
L_0025AE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0025E2F0u; return; } if (c.pc != 0x0025AE40u) [[unlikely]] return; }
L_0025AE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B180; } }
L_0025AE48:
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025B078; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025AE68; } }
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025AE68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_0025AE80; } }
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 2;
L_0025AE80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE8Cu); st32((c.r[16].w[0] + 700u), 0u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025AE8Cu) [[unlikely]] return; }
L_0025AE8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0025AEA0; } }
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025AEA0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025B020; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0025AF08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025AEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B180; } }
L_0025AEC8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0025B180; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AEF4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025AEF4u) [[unlikely]] return; }
L_0025AEF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x0025AF00u) [[unlikely]] return; }
L_0025AF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B180; } }
L_0025AF08:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], c.r[16].w[0] + 8592u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF38u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0025AF38u) [[unlikely]] return; }
L_0025AF38:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF44u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0025AF44u) [[unlikely]] return; }
L_0025AF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF4Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0025AF4Cu) [[unlikely]] return; }
L_0025AF4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AF68; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AFB8; } }
    c.budget -= 1;
L_0025AF68:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF74u); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025AF74u) [[unlikely]] return; }
L_0025AF74:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025AF90; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025AFB8; } }
    c.budget -= 1;
L_0025AF90:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025AFB8; } }
    c.budget -= 1;
L_0025AFA0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1952u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 6;
L_0025AFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 274u, depth + 1u); else { c.pc = 0x0025B280u; return; } if (c.pc != 0x0025AFC0u) [[unlikely]] return; }
L_0025AFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B180; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025B010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025B180; } }
    c.budget -= 1;
L_0025B010:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025B180; } }
    c.budget -= 1;
L_0025B020:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025B038; } }
    st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025B038:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025B068; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B050u); st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025B050u) [[unlikely]] return; }
L_0025B050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025B058u) [[unlikely]] return; }
L_0025B058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x0025B060u) [[unlikely]] return; }
L_0025B060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025B180; } }
L_0025B068:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025B180; } }
    c.budget -= 1;
L_0025B078:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025B088; } }
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025B088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_0025B0A0; } }
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 2;
L_0025B0A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B0ACu); st32((c.r[16].w[0] + 700u), 0u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025B0ACu) [[unlikely]] return; }
L_0025B0AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0025B0C0; } }
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025B0C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025B158; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025B118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025B0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B180; } }
L_0025B0E8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B100u); st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025B100u) [[unlikely]] return; }
L_0025B100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B10Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x0025B10Cu) [[unlikely]] return; }
L_0025B10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B180; } }
    c.budget -= 1;
L_0025B118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B120u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 267u, depth + 1u); else { c.pc = 0x0025B190u; return; } if (c.pc != 0x0025B120u) [[unlikely]] return; }
L_0025B120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 274u, depth + 1u); else { c.pc = 0x0025B280u; return; } if (c.pc != 0x0025B128u) [[unlikely]] return; }
L_0025B128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B180; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025B180; } }
L_0025B158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B168u); st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025B168u) [[unlikely]] return; }
L_0025B168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B170u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025B170u) [[unlikely]] return; }
L_0025B170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B178u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x0025B178u) [[unlikely]] return; }
L_0025B178:
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025B180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025B190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B1A8u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0025B1A8u) [[unlikely]] return; }
L_0025B1A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B1B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0025B1B8u) [[unlikely]] return; }
L_0025B1B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B1C8u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0025B1C8u) [[unlikely]] return; }
L_0025B1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B1D0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0025B1D0u) [[unlikely]] return; }
L_0025B1D0:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B1DCu); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0025B1DCu) [[unlikely]] return; }
L_0025B1DC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025B208; } }
    c.r[2].d[0] = 0ull | 61440ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B218; } }
    c.budget -= 1;
L_0025B208:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (t) { goto L_0025B248; } }
L_0025B218:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025B238; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (t) { goto L_0025B248; } }
L_0025B238:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 4;
L_0025B248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 242u, depth + 1u); else { c.pc = 0x0025ADD0u; return; } if (c.pc != 0x0025B25Cu) [[unlikely]] return; }
L_0025B25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B270; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_0025B270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025B280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4168ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B2B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B310; } }
    c.budget -= 1;
L_0025B2B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B2C4u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0025B2C4u) [[unlikely]] return; }
L_0025B2C4:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B2D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025B2D8u) [[unlikely]] return; }
L_0025B2D8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B2E8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025B2E8u) [[unlikely]] return; }
L_0025B2E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0025B308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B310; } }
L_0025B308:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0025B310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B360; } }
L_0025B340:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025B358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B360; } }
L_0025B358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B360u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B360u) [[unlikely]] return; }
L_0025B360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B3E0; } }
L_0025B390:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B3E0; } }
    c.budget -= 1;
L_0025B3A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B3E0; } }
L_0025B3C0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 684u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B3D8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B3D8u) [[unlikely]] return; }
L_0025B3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B3E0; } }
L_0025B3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025B430; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B428; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B430; } }
    c.budget -= 1;
L_0025B428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B448; } }
L_0025B430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B438u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025B438u) [[unlikely]] return; }
L_0025B438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B444u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B444u) [[unlikely]] return; }
L_0025B444:
    c.budget -= 1;
L_0025B448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_0025B480; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0025B488; } }
L_0025B480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B4C0; } }
L_0025B488:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B4C0; } }
L_0025B4A0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4B8u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B4B8u) [[unlikely]] return; }
L_0025B4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B4C0; } }
L_0025B4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B510; } }
L_0025B4F0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0025B508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B510; } }
L_0025B508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B510u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B510u) [[unlikely]] return; }
L_0025B510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B5C8; } }
L_0025B540:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B5C8; } }
    c.budget -= 1;
L_0025B558:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B5C8; } }
    c.budget -= 1;
L_0025B570:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B590; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B598; } }
    c.budget -= 1;
L_0025B590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B5C8; } }
L_0025B598:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B5B8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B5C0; } }
    c.budget -= 1;
L_0025B5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B5C8; } }
L_0025B5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5C8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B5C8u) [[unlikely]] return; }
L_0025B5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025B608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B658; } }
    c.budget -= 1;
L_0025B608:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B630; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B658; } }
    c.budget -= 1;
L_0025B630:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025B648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B648u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B648u) [[unlikely]] return; }
L_0025B648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B654u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025B654u) [[unlikely]] return; }
L_0025B654:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025B658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025B698; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025B6A0; } }
L_0025B698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B750; } }
L_0025B6A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B750; } }
L_0025B6B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B750; } }
    c.budget -= 1;
L_0025B6D0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B750; } }
    c.budget -= 1;
L_0025B6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B700u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B700u) [[unlikely]] return; }
L_0025B700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B750; } }
L_0025B710:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] + 14320u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] >> 20);
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 10);
    st16((c.r[16].w[0] + 858u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 16;
L_0025B750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B7E8; } }
    c.budget -= 1;
L_0025B780:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B7E8; } }
    c.budget -= 1;
L_0025B798:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B7E8; } }
L_0025B7B0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B7E8; } }
    c.budget -= 1;
L_0025B7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B7E0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B7E0u) [[unlikely]] return; }
L_0025B7E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0025B7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B858; } }
L_0025B820:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B850; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B848; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B850; } }
L_0025B848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B858; } }
L_0025B850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B858u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B858u) [[unlikely]] return; }
L_0025B858:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8676u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B8E8; } }
L_0025B890:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B8E8; } }
L_0025B8A8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 682u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B8E8; } }
L_0025B8C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_0025B8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B8E8; } }
L_0025B8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B8E8u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B8E8u) [[unlikely]] return; }
L_0025B8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025B928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B978; } }
    c.budget -= 1;
L_0025B928:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B978; } }
L_0025B940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B948u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0025B948u) [[unlikely]] return; }
L_0025B948:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B954u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025B954u) [[unlikely]] return; }
L_0025B954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B978; } }
    c.budget -= 1;
L_0025B968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B974u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x0025B974u) [[unlikely]] return; }
L_0025B974:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025B978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BA30; } }
    c.budget -= 1;
L_0025B9B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025B9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BA30; } }
    c.budget -= 1;
L_0025B9C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B9E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B9F0; } }
    c.budget -= 1;
L_0025B9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BA30; } }
L_0025B9F0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BA30; } }
L_0025BA08:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BA20; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025BA28; } }
L_0025BA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BA30; } }
L_0025BA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA30u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025BA30u) [[unlikely]] return; }
L_0025BA30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025BA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025BA68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BAB8; } }
    c.budget -= 1;
L_0025BA68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BA90; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BAB8; } }
    c.budget -= 1;
L_0025BA90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025BAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BAA8u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025BAA8u) [[unlikely]] return; }
L_0025BAA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BAB4u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025BAB4u) [[unlikely]] return; }
L_0025BAB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025BAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025BAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BBF8; } }
L_0025BAF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
    c.budget -= 1;
L_0025BB10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
    c.budget -= 1;
L_0025BB28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
    c.budget -= 1;
L_0025BB40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
L_0025BB58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
    c.budget -= 1;
L_0025BB70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025BB98; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
L_0025BB98:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BBF8; } }
    c.budget -= 1;
L_0025BBC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BBCCu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025BBCCu) [[unlikely]] return; }
L_0025BBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025BBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BBF8; } }
    c.budget -= 1;
L_0025BBE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 6;
L_0025BBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BC60; } }
L_0025BC30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BC58; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025BC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BC60; } }
    c.budget -= 1;
L_0025BC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC60u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025BC60u) [[unlikely]] return; }
L_0025BC60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025BC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025BCB8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 792u));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025BCB8; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025BCB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8682u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025BCD8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0025BCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0025BCE0u) [[unlikely]] return; }
L_0025BCE0:
    st32((c.r[17].w[0] + 1264u), 0u);
    set32(c.r[2], 0u - 31229u);
    st32((c.r[17].w[0] + 1260u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025BD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD24u);  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025BD24u) [[unlikely]] return; }
L_0025BD24:
    c.budget -= 1;
L_0025BD28:
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 70u);
    st8((c.r[17].w[0] + 787u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0025BD68; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x0025BD5Cu) [[unlikely]] return; }
L_0025BD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BD88; } }
    c.budget -= 1;
L_0025BD68:
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x0025BD84u) [[unlikely]] return; }
L_0025BD84:
    c.budget -= 1;
L_0025BD88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x0025BD94u) [[unlikely]] return; }
L_0025BD94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BDA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025BDA0u) [[unlikely]] return; }
L_0025BDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025BDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025BE00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025BE00; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025BE00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE0Cu); st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0025BE0Cu) [[unlikely]] return; }
L_0025BE0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x0025BE18u) [[unlikely]] return; }
L_0025BE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 31229u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1264u), 0u);
    st32((c.r[4].w[0] + 1260u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025BE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE88u);  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025BE88u) [[unlikely]] return; }
L_0025BE88:
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 70u);
    st8((c.r[17].w[0] + 787u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0025BEC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x0025BEBCu) [[unlikely]] return; }
L_0025BEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BEE8; } }
    c.budget -= 1;
L_0025BEC8:
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x0025BEE4u) [[unlikely]] return; }
L_0025BEE4:
    c.budget -= 1;
L_0025BEE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0025BEF4u) [[unlikely]] return; }
L_0025BEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025BF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 10;
L_0025BF38:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0025BF70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025BF70; } }
    set32(c.r[2], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF6Cu); c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 44u, depth + 1u); else { c.pc = 0x003AC540u; return; } if (c.pc != 0x0025BF6Cu) [[unlikely]] return; }
L_0025BF6C:
    c.budget -= 1;
L_0025BF70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BF38u | kUnwind; return; } goto L_0025BF38; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_0025BF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0025BFD0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_0025BFD0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] << (c.r[16].w[0] & 31u));  if (t) { goto L_0025BFD0; } }
    c.r[3].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025BFD0; } }
    c.r[18].d[0] = c.r[18].d[0] | c.r[4].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 116u, depth + 1u); else { c.pc = 0x00259570u; return; } if (c.pc != 0x0025BFD0u) [[unlikely]] return; }
L_0025BFD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BF90u | kUnwind; return; } goto L_0025BF90; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_0025BFF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0057(c, 3u, depth); } }
    [[clang::musttail]] return unit_0057(c, 1u, depth);
}

}
