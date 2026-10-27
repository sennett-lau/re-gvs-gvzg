#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0022[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0,
    34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316,
    0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332,
};

void unit_0022(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00188000;
    case 2u: goto L_00188040;
    case 3u: goto L_00188054;
    case 4u: goto L_00188058;
    case 5u: goto L_00188068;
    case 6u: goto L_001880A0;
    case 7u: goto L_001880B8;
    case 8u: goto L_00188134;
    case 9u: goto L_00188154;
    case 10u: goto L_00188170;
    case 11u: goto L_00188190;
    case 12u: goto L_001881F0;
    case 13u: goto L_00188228;
    case 14u: goto L_0018824C;
    case 15u: goto L_0018826C;
    case 16u: goto L_00188278;
    case 17u: goto L_00188280;
    case 18u: goto L_00188290;
    case 19u: goto L_001882D4;
    case 20u: goto L_00188358;
    case 21u: goto L_0018837C;
    case 22u: goto L_00188390;
    case 23u: goto L_001883A8;
    case 24u: goto L_001883BC;
    case 25u: goto L_001883C4;
    case 26u: goto L_001883F0;
    case 27u: goto L_00188400;
    case 28u: goto L_00188410;
    case 29u: goto L_00188510;
    case 30u: goto L_00188558;
    case 31u: goto L_00188560;
    case 32u: goto L_00188568;
    case 33u: goto L_00188570;
    case 34u: goto L_00188580;
    case 35u: goto L_00188588;
    case 36u: goto L_00188594;
    case 37u: goto L_001885F8;
    case 38u: goto L_00188788;
    case 39u: goto L_00188790;
    case 40u: goto L_00188798;
    case 41u: goto L_001887A0;
    case 42u: goto L_001887B0;
    case 43u: goto L_001887B8;
    case 44u: goto L_001887C4;
    case 45u: goto L_00188810;
    case 46u: goto L_00188828;
    case 47u: goto L_0018888C;
    case 48u: goto L_001888A0;
    case 49u: goto L_001888C0;
    case 50u: goto L_00188920;
    case 51u: goto L_0018892C;
    case 52u: goto L_00188950;
    case 53u: goto L_0018896C;
    case 54u: goto L_00188978;
    case 55u: goto L_00188980;
    case 56u: goto L_00188990;
    case 57u: goto L_00188A1C;
    case 58u: goto L_00188A3C;
    case 59u: goto L_00188A70;
    case 60u: goto L_00188A84;
    case 61u: goto L_00188AA0;
    case 62u: goto L_00188AD8;
    case 63u: goto L_00188B0C;
    case 64u: goto L_00188B18;
    case 65u: goto L_00188B40;
    case 66u: goto L_00188BE8;
    case 67u: goto L_00188D48;
    case 68u: goto L_00188D58;
    case 69u: goto L_00188D60;
    case 70u: goto L_00188D6C;
    case 71u: goto L_00188DC0;
    case 72u: goto L_00188DD8;
    case 73u: goto L_00188DE0;
    case 74u: goto L_00188E10;
    case 75u: goto L_00188E50;
    case 76u: goto L_00188E64;
    case 77u: goto L_00188EA0;
    case 78u: goto L_00188EB0;
    case 79u: goto L_00188EF0;
    case 80u: goto L_00188F0C;
    case 81u: goto L_00188F30;
    case 82u: goto L_00188F7C;
    case 83u: goto L_00189010;
    case 84u: goto L_00189030;
    case 85u: goto L_00189060;
    case 86u: goto L_00189100;
    case 87u: goto L_00189120;
    case 88u: goto L_0018912C;
    case 89u: goto L_00189140;
    case 90u: goto L_00189160;
    case 91u: goto L_00189188;
    case 92u: goto L_001891B0;
    case 93u: goto L_00189210;
    case 94u: goto L_00189244;
    case 95u: goto L_0018924C;
    case 96u: goto L_00189270;
    case 97u: goto L_00189290;
    case 98u: goto L_001892A4;
    case 99u: goto L_001893F0;
    case 100u: goto L_00189410;
    case 101u: goto L_00189424;
    case 102u: goto L_001894E0;
    case 103u: goto L_00189500;
    case 104u: goto L_00189514;
    case 105u: goto L_00189580;
    case 106u: goto L_001895A0;
    case 107u: goto L_001895AC;
    case 108u: goto L_001895B8;
    case 109u: goto L_001895CC;
    case 110u: goto L_00189640;
    case 111u: goto L_00189660;
    case 112u: goto L_00189710;
    case 113u: goto L_00189744;
    case 114u: goto L_001897A4;
    case 115u: goto L_001897D0;
    case 116u: goto L_001897F0;
    case 117u: goto L_00189838;
    case 118u: goto L_00189840;
    case 119u: goto L_00189848;
    case 120u: goto L_00189850;
    case 121u: goto L_00189858;
    case 122u: goto L_00189860;
    case 123u: goto L_0018987C;
    case 124u: goto L_00189888;
    case 125u: goto L_001898A0;
    case 126u: goto L_001898AC;
    case 127u: goto L_001898B8;
    case 128u: goto L_001898D8;
    case 129u: goto L_001898E0;
    case 130u: goto L_001898E8;
    case 131u: goto L_00189910;
    case 132u: goto L_0018991C;
    case 133u: goto L_00189938;
    case 134u: goto L_00189944;
    case 135u: goto L_00189950;
    case 136u: goto L_00189970;
    case 137u: goto L_00189978;
    case 138u: goto L_00189980;
    case 139u: goto L_001899A8;
    case 140u: goto L_001899B4;
    case 141u: goto L_001899E8;
    case 142u: goto L_001899F8;
    case 143u: goto L_00189A28;
    case 144u: goto L_00189A8C;
    case 145u: goto L_00189AA4;
    case 146u: goto L_00189AB0;
    case 147u: goto L_00189AB8;
    case 148u: goto L_00189AE0;
    case 149u: goto L_00189B00;
    case 150u: goto L_00189BAC;
    case 151u: goto L_00189BC8;
    case 152u: goto L_00189BD4;
    case 153u: goto L_00189BE4;
    case 154u: goto L_00189BF0;
    case 155u: goto L_00189C18;
    case 156u: goto L_00189C20;
    case 157u: goto L_00189C28;
    case 158u: goto L_00189C30;
    case 159u: goto L_00189C38;
    case 160u: goto L_00189C40;
    case 161u: goto L_00189C48;
    case 162u: goto L_00189C9C;
    case 163u: goto L_00189CA4;
    case 164u: goto L_00189CAC;
    case 165u: goto L_00189CD0;
    case 166u: goto L_00189CE0;
    case 167u: goto L_00189CF0;
    case 168u: goto L_00189D08;
    case 169u: goto L_00189D14;
    case 170u: goto L_00189D1C;
    case 171u: goto L_00189D30;
    case 172u: goto L_00189D60;
    case 173u: goto L_00189DF0;
    case 174u: goto L_00189E20;
    case 175u: goto L_00189E88;
    case 176u: goto L_00189EA0;
    case 177u: goto L_00189F08;
    case 178u: goto L_00189F24;
    case 179u: goto L_00189F34;
    case 180u: goto L_00189F40;
    case 181u: goto L_00189F48;
    case 182u: goto L_00189F50;
    case 183u: goto L_00189F80;
    case 184u: goto L_0018A040;
    case 185u: goto L_0018A04C;
    case 186u: goto L_0018A060;
    case 187u: goto L_0018A090;
    case 188u: goto L_0018A130;
    case 189u: goto L_0018A140;
    case 190u: goto L_0018A150;
    case 191u: goto L_0018A168;
    case 192u: goto L_0018A178;
    case 193u: goto L_0018A180;
    case 194u: goto L_0018A188;
    case 195u: goto L_0018A1A0;
    case 196u: goto L_0018A1C8;
    case 197u: goto L_0018A1D0;
    case 198u: goto L_0018A1D8;
    case 199u: goto L_0018A1E0;
    case 200u: goto L_0018A1E8;
    case 201u: goto L_0018A1F8;
    case 202u: goto L_0018A228;
    case 203u: goto L_0018A230;
    case 204u: goto L_0018A260;
    case 205u: goto L_0018A290;
    case 206u: goto L_0018A298;
    case 207u: goto L_0018A2E0;
    case 208u: goto L_0018A310;
    case 209u: goto L_0018A318;
    case 210u: goto L_0018A370;
    case 211u: goto L_0018A390;
    case 212u: goto L_0018A460;
    case 213u: goto L_0018A4A0;
    case 214u: goto L_0018A5F0;
    case 215u: goto L_0018A600;
    case 216u: goto L_0018A610;
    case 217u: goto L_0018A644;
    case 218u: goto L_0018A6B0;
    case 219u: goto L_0018A720;
    case 220u: goto L_0018A730;
    case 221u: goto L_0018A73C;
    case 222u: goto L_0018A750;
    case 223u: goto L_0018A758;
    case 224u: goto L_0018A7A8;
    case 225u: goto L_0018A7F0;
    case 226u: goto L_0018A810;
    case 227u: goto L_0018A840;
    case 228u: goto L_0018A8F0;
    case 229u: goto L_0018A948;
    case 230u: goto L_0018AAD0;
    case 231u: goto L_0018AB24;
    case 232u: goto L_0018AB60;
    case 233u: goto L_0018AB70;
    case 234u: goto L_0018ABD8;
    case 235u: goto L_0018ABE0;
    case 236u: goto L_0018ABF0;
    case 237u: goto L_0018ABF8;
    case 238u: goto L_0018AC04;
    case 239u: goto L_0018AC80;
    case 240u: goto L_0018ACC0;
    case 241u: goto L_0018ACE8;
    case 242u: goto L_0018AD60;
    case 243u: goto L_0018AD80;
    case 244u: goto L_0018ADF0;
    case 245u: goto L_0018AEA0;
    case 246u: goto L_0018AEA8;
    case 247u: goto L_0018AEB0;
    case 248u: goto L_0018AED0;
    case 249u: goto L_0018AEE0;
    case 250u: goto L_0018AEF0;
    case 251u: goto L_0018AF74;
    case 252u: goto L_0018AFC0;
    case 253u: goto L_0018B0B0;
    case 254u: goto L_0018B100;
    case 255u: goto L_0018B128;
    case 256u: goto L_0018B1A0;
    case 257u: goto L_0018B1C0;
    case 258u: goto L_0018B230;
    case 259u: goto L_0018B280;
    case 260u: goto L_0018B338;
    case 261u: goto L_0018B340;
    case 262u: goto L_0018B348;
    case 263u: goto L_0018B360;
    case 264u: goto L_0018B370;
    case 265u: goto L_0018B380;
    case 266u: goto L_0018B418;
    case 267u: goto L_0018B460;
    case 268u: goto L_0018B568;
    case 269u: goto L_0018B5C0;
    case 270u: goto L_0018B5F0;
    case 271u: goto L_0018B650;
    case 272u: goto L_0018B670;
    case 273u: goto L_0018B6B8;
    case 274u: goto L_0018B6C4;
    case 275u: goto L_0018B6EC;
    case 276u: goto L_0018B6F4;
    case 277u: goto L_0018B754;
    case 278u: goto L_0018B75C;
    case 279u: goto L_0018B770;
    case 280u: goto L_0018B7A8;
    case 281u: goto L_0018B820;
    case 282u: goto L_0018B850;
    case 283u: goto L_0018B860;
    case 284u: goto L_0018B870;
    case 285u: goto L_0018B910;
    case 286u: goto L_0018B954;
    case 287u: goto L_0018BA18;
    case 288u: goto L_0018BA60;
    case 289u: goto L_0018BA78;
    case 290u: goto L_0018BA80;
    case 291u: goto L_0018BAB0;
    case 292u: goto L_0018BAF0;
    case 293u: goto L_0018BB04;
    case 294u: goto L_0018BB40;
    case 295u: goto L_0018BB50;
    case 296u: goto L_0018BB90;
    case 297u: goto L_0018BBAC;
    case 298u: goto L_0018BBD0;
    case 299u: goto L_0018BD40;
    case 300u: goto L_0018BD60;
    case 301u: goto L_0018BD80;
    case 302u: goto L_0018BDD0;
    case 303u: goto L_0018BDF0;
    case 304u: goto L_0018BE14;
    case 305u: goto L_0018BE68;
    case 306u: goto L_0018BE70;
    case 307u: goto L_0018BE7C;
    case 308u: goto L_0018BEA0;
    case 309u: goto L_0018BEA8;
    case 310u: goto L_0018BEB8;
    case 311u: goto L_0018BED0;
    case 312u: goto L_0018BF50;
    case 313u: goto L_0018BF5C;
    case 314u: goto L_0018BF64;
    case 315u: goto L_0018BF6C;
    case 316u: goto L_0018BF7C;
    case 317u: goto L_0018BF84;
    case 318u: goto L_0018BF8C;
    case 319u: goto L_0018BFB0;
    case 320u: goto L_0018BFC0;
    case 321u: goto L_0018BFD0;
    case 322u: goto L_0018BFD4;
    case 323u: goto L_0018BFD8;
    case 324u: goto L_0018BFDC;
    case 325u: goto L_0018BFE0;
    case 326u: goto L_0018BFE4;
    case 327u: goto L_0018BFE8;
    case 328u: goto L_0018BFEC;
    case 329u: goto L_0018BFF0;
    case 330u: goto L_0018BFF4;
    case 331u: goto L_0018BFF8;
    case 332u: goto L_0018BFFC;
    default: bad_entry(c, 0x00188000u); return;
    }
L_00188000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 23376u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 100u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00188048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188040u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x00188040u) [[unlikely]] return; }
L_00188040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188058; } }
L_00188048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188054u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 15u, depth + 1u); else { c.pc = 0x0029C3B0u; return; } if (c.pc != 0x00188054u) [[unlikely]] return; }
L_00188054:
    c.budget -= 1;
L_00188058:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
L_00188068:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00187EE8u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 263u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001880A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001880B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001880B8u) [[unlikely]] return; }
L_001880B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188138; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[10], 0u + 19u);
    set32(c.r[9], 0u + 43u);
    set32(c.r[8], c.r[8].w[0] - 23344u);
    set32(c.r[5], c.r[5].w[0] - 32400u);
    set32(c.r[3], c.r[3].w[0] - 31728u);
    set32(c.r[2], c.r[2].w[0] - 27712u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188134u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00188134u) [[unlikely]] return; }
L_00188134:
    c.budget -= 1;
L_00188138:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00188158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188154u);  if (depth < kMaxDepth) unit_0022(c, 45u, depth + 1u); else { c.pc = 0x00188810u; return; } if (c.pc != 0x00188154u) [[unlikely]] return; }
L_00188154:
    c.budget -= 1;
L_00188158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00188170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00188190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 23280u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001881F0u); st32((c.r[4].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 71u, depth + 1u); else { c.pc = 0x00188DC0u; return; } if (c.pc != 0x001881F0u) [[unlikely]] return; }
L_001881F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00188208; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00188218; } }
L_00188208:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 464u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188220; } }
    c.budget -= 1;
L_00188218:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 464u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00188220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188228u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00188228u) [[unlikely]] return; }
L_00188228:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00188258; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[13] = ld32((c.r[2].w[0] + 644u));
    c.f[14] = ld32((c.r[2].w[0] + 648u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018824Cu); c.f[12] = ld32((c.r[2].w[0] + 640u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0018824Cu) [[unlikely]] return; }
L_0018824C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188270; } }
    c.budget -= 1;
L_00188258:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[13] = ld32((c.r[2].w[0] + 660u));
    c.f[14] = ld32((c.r[2].w[0] + 664u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018826Cu); c.f[12] = ld32((c.r[2].w[0] + 656u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0018826Cu) [[unlikely]] return; }
L_0018826C:
    c.budget -= 1;
L_00188270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188278u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00188278u) [[unlikely]] return; }
L_00188278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188280u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 18u, depth + 1u); else { c.pc = 0x00188290u; return; } if (c.pc != 0x00188280u) [[unlikely]] return; }
L_00188280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00188388; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00188388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001882D4u); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 77u, depth + 1u); else { c.pc = 0x00188EA0u; return; } if (c.pc != 0x001882D4u) [[unlikely]] return; }
L_001882D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188388; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00188340; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00188340; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00188340; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00188340; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00188330; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00188328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188350; } }
L_00188328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188368; } }
L_00188330:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188368; } }
    c.budget -= 1;
L_00188340:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188368; } }
    c.budget -= 1;
L_00188350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188358u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00188358u) [[unlikely]] return; }
L_00188358:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00188368:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 464u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018837Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x00189210u; return; } if (c.pc != 0x0018837Cu) [[unlikely]] return; }
L_0018837C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00188388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188390u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 74u, depth + 1u); else { c.pc = 0x00188E10u; return; } if (c.pc != 0x00188390u) [[unlikely]] return; }
L_00188390:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001883C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001883A8u) [[unlikely]] return; }
L_001883A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[13] = ld32((c.r[2].w[0] + 660u));
    c.f[14] = ld32((c.r[2].w[0] + 664u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883BCu); c.f[12] = ld32((c.r[2].w[0] + 656u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001883BCu) [[unlikely]] return; }
L_001883BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883C4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001883C4u) [[unlikely]] return; }
L_001883C4:
    c.budget -= 1;
L_001883C8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001883F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00188400:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00188410:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 32608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] + 20280u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 31;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_001885B0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_001885B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001885B0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[6].w[0] - 22544u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 15680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 23120u);
    set32(c.r[3], c.r[3].w[0] - 22960u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[1].w[0] + 20276u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.budget -= 28;
L_00188510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00188598; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.r[6].d[0] = c.r[3].d[0] & 31ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 23352u);
    set32(c.r[2], c.r[2].w[0] - 22800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[20].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188558u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00188558u) [[unlikely]] return; }
L_00188558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188560u); c.r[4].d[0] = ld16((c.r[19].w[0] + 6u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00188560u) [[unlikely]] return; }
L_00188560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188568u); c.r[4].d[0] = ld16((c.r[19].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00188568u) [[unlikely]] return; }
L_00188568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188570u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00188570u) [[unlikely]] return; }
L_00188570:
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188580u); c.f[12] = ld32((c.r[20].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00188580u) [[unlikely]] return; }
L_00188580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188588u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00188588u) [[unlikely]] return; }
L_00188588:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188594u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x00188594u) [[unlikely]] return; }
L_00188594:
    c.budget -= 1;
L_00188598:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188510u | kUnwind; return; } goto L_00188510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001887D8; } }
L_001885B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[4], c.r[4].w[0] - 22544u);
    set32(c.r[3], c.r[3].w[0] + 15680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 148u);
    set32(c.r[21], c.r[29].w[0] + 255u);
    set32(c.r[22], c.r[29].w[0] + 254u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[23], c.r[29].w[0] + 253u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.budget -= 18;
L_001885F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001887C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001887C8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].d[0] = c.r[4].d[0] & 31ull;
    c.f[3] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[4].d[0] = c.r[4].d[0] | 55050ull;
    set32(c.r[7], c.r[7].w[0] - 23120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[5] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[7] = ld32((c.r[7].w[0]));
    c.f[6] = ld32((c.r[7].w[0] + 4u));
    c.f[4] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    st32((c.r[6].w[0]), c.f[7]);
    st32((c.r[6].w[0] + 4u), c.f[6]);
    st32((c.r[6].w[0] + 8u), c.f[4]);
    st32((c.r[6].w[0] + 12u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[18].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[1].w[0] + 20256u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[1].w[0] + 20252u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 60;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00188710; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0018872C; } }
L_00188710:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
L_0018872C:
    set32(c.r[4], c.r[29].w[0] + 252u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20260u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_00188770; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 22800u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (t) { goto L_00188780; } }
L_00188770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 22792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.budget -= 4;
L_00188780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188788u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00188788u) [[unlikely]] return; }
L_00188788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188790u); c.r[4].d[0] = ld16((c.r[19].w[0] + 6u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00188790u) [[unlikely]] return; }
L_00188790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188798u); c.r[4].d[0] = ld16((c.r[19].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00188798u) [[unlikely]] return; }
L_00188798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887A0u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001887A0u) [[unlikely]] return; }
L_001887A0:
    c.f[13] = ld32((c.r[20].w[0] + 52u));
    c.f[14] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887B0u); c.f[12] = ld32((c.r[20].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001887B0u) [[unlikely]] return; }
L_001887B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887B8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001887B8u) [[unlikely]] return; }
L_001887B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887C4u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x001887C4u) [[unlikely]] return; }
L_001887C4:
    c.budget -= 1;
L_001887C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001885F8u | kUnwind; return; } goto L_001885F8; } }
L_001887D8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00188810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188828u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00188828u) [[unlikely]] return; }
L_00188828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188890; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], 0u + 19u);
    set32(c.r[8], 0u + 43u);
    set32(c.r[5], c.r[5].w[0] - 30560u);
    set32(c.r[3], c.r[3].w[0] - 29888u);
    set32(c.r[2], c.r[2].w[0] - 27712u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018888Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0018888Cu) [[unlikely]] return; }
L_0018888C:
    c.budget -= 1;
L_00188890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001888A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 22528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001888C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 22512u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188920u); st32((c.r[4].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 71u, depth + 1u); else { c.pc = 0x00188DC0u; return; } if (c.pc != 0x00188920u) [[unlikely]] return; }
L_00188920:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018892Cu); st8((c.r[16].w[0] + 464u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018892Cu) [[unlikely]] return; }
L_0018892C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00188958; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[13] = ld32((c.r[2].w[0] + 644u));
    c.f[14] = ld32((c.r[2].w[0] + 648u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188950u); c.f[12] = ld32((c.r[2].w[0] + 640u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00188950u) [[unlikely]] return; }
L_00188950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188970; } }
L_00188958:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[13] = ld32((c.r[2].w[0] + 660u));
    c.f[14] = ld32((c.r[2].w[0] + 664u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018896Cu); c.f[12] = ld32((c.r[2].w[0] + 656u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0018896Cu) [[unlikely]] return; }
L_0018896C:
    c.budget -= 1;
L_00188970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188978u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00188978u) [[unlikely]] return; }
L_00188978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 56u, depth + 1u); else { c.pc = 0x00188990u; return; } if (c.pc != 0x00188980u) [[unlikely]] return; }
L_00188980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[5].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 51u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00188A48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00188A48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A1Cu); st16((c.r[20].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 77u, depth + 1u); else { c.pc = 0x00188EA0u; return; } if (c.pc != 0x00188A1Cu) [[unlikely]] return; }
L_00188A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188A48; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 464u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A3Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x00189210u; return; } if (c.pc != 0x00188A3Cu) [[unlikely]] return; }
L_00188A3C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00188A48:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[3], c.r[20].w[0] + 304u);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00188A98; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00188A70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00188A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 85u, depth + 1u); else { c.pc = 0x00189060u; return; } if (c.pc != 0x00188A84u) [[unlikely]] return; }
L_00188A84:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00188A88:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188A70u | kUnwind; return; } goto L_00188A70; } }
L_00188A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188AA0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00188AA0u) [[unlikely]] return; }
L_00188AA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188AE0; } }
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188AD8u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00188AD8u) [[unlikely]] return; }
L_00188AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188B10; } }
L_00188AE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[5] = ld32((c.r[2].w[0] + 640u));
    c.f[3] = ld32((c.r[2].w[0] + 644u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188B0Cu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00188B0Cu) [[unlikely]] return; }
L_00188B0C:
    c.budget -= 1;
L_00188B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188B18u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00188B18u) [[unlikely]] return; }
L_00188B18:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00188B40:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 269u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 270u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 271u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[20].w[0] - 22464u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[18], c.r[29].w[0] + 164u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 32604u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 15688u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.budget -= 42;
L_00188BE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00188D70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00188D70; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    set32(c.r[5], c.r[5].w[0] - 22496u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[3] = c.r[2].w[0];
    c.f[5] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0]), c.f[7]);
    st32((c.r[4].w[0] + 4u), c.f[6]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    st32((c.r[4].w[0] + 12u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[19].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 59;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00188CFC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00188D18; } }
L_00188CFC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
L_00188D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[29].w[0] + 268u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[17].w[0] + 192u);
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D48u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00188D48u) [[unlikely]] return; }
L_00188D48:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D58u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00188D58u) [[unlikely]] return; }
L_00188D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D60u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00188D60u) [[unlikely]] return; }
L_00188D60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D6Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x00188D6Cu) [[unlikely]] return; }
L_00188D6C:
    c.budget -= 1;
L_00188D70:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188BE8u | kUnwind; return; } goto L_00188BE8; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00188DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00188DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x00188EF0u; return; } if (c.pc != 0x00188DE0u) [[unlikely]] return; }
L_00188DE0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 10u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188DD8u | kUnwind; return; } goto L_00188DD8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00188E10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[3], c.r[18].w[0] + 304u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00188E78; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00188E50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00188E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E64u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x00188F30u; return; } if (c.pc != 0x00188E64u) [[unlikely]] return; }
L_00188E64:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00188E68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188E50u | kUnwind; return; } goto L_00188E50; } }
L_00188E78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00188EA0:
    set32(c.r[4], c.r[4].w[0] + 304u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00188ED0; } }
L_00188EB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00188EC8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_00188EC8:
    set32(c.r[4], c.r[4].w[0] + 10u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00188ED0:
    c.r[1].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00188EE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188EB0u | kUnwind; return; } goto L_00188EB0; } }
    c.budget -= 1;
L_00188EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00188F0Cu) [[unlikely]] return; }
L_00188F0C:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 100u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00188F70; } }
    set32(c.r[7], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00188F70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00188F88; } }
L_00188F70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F7Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 85u, depth + 1u); else { c.pc = 0x00189060u; return; } if (c.pc != 0x00188F7Cu) [[unlikely]] return; }
L_00188F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189040; } }
    c.budget -= 1;
L_00188F88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189038; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] - 23351u);
    set32(c.r[3], c.r[3].w[0] - 23352u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 464u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[16].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00189030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00189008; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00189020; } }
    c.budget -= 1;
L_00189008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189010u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00189010u) [[unlikely]] return; }
L_00189010:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00189020:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189030u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x00189210u; return; } if (c.pc != 0x00189030u) [[unlikely]] return; }
L_00189030:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_00189038:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00189040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00189138; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] - 23351u);
    set32(c.r[3], c.r[3].w[0] - 23352u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 464u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[16].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00189120; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001890F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00189110; } }
L_001890F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189100u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00189100u) [[unlikely]] return; }
L_00189100:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00189110:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189120u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x00189210u; return; } if (c.pc != 0x00189120u) [[unlikely]] return; }
L_00189120:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018912Cu); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0022(c, 90u, depth + 1u); else { c.pc = 0x00189160u; return; } if (c.pc != 0x0018912Cu) [[unlikely]] return; }
L_0018912C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189140; } }
    c.budget -= 1;
L_00189138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189140u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001891B0u; return; } if (c.pc != 0x00189140u) [[unlikely]] return; }
L_00189140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22416u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 40u);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189188u); st64((c.r[3].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00189188u) [[unlikely]] return; }
L_00189188:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 40u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001891B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00189200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001891D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001891D8; } }
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001891D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00189200; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00189200; } }
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00189200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00189210:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22400u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00189244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00189244u) [[unlikely]] return; }
L_00189244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018924Cu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0018924Cu) [[unlikely]] return; }
L_0018924C:
    set32(c.r[3], c.r[2].w[0] << 8);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 45u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189290u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x00189290u) [[unlikely]] return; }
L_00189290:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 70u);
    set32(c.r[5], 0u + 290u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001892A4u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x001892A4u) [[unlikely]] return; }
L_001892A4:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_001892E0; } }
    c.r[1].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_001892E0; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 170ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 186ll ? 1ull : 0ull;  if (t) { goto L_001892E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00189370; } }
L_001892E0:
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_00189310; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_00189310; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 260ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 276ll ? 1ull : 0ull;  if (t) { goto L_00189310; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00189370; } }
    c.budget -= 1;
L_00189310:
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_00189340; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_00189340; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 199ll ? 1ull : 0ull;  if (t) { goto L_00189340; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00189370; } }
    c.budget -= 1;
L_00189340:
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00189380; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_00189380; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 75ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 101ll ? 1ull : 0ull;  if (t) { goto L_00189380; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00189380; } }
    c.budget -= 1;
L_00189370:
    set32(c.r[3], c.r[16].w[0] + 20u);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
L_00189380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[16].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = c.r[6].w[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001893F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 45u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189410u); set32(c.r[4], 0u - 10u);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x00189410u) [[unlikely]] return; }
L_00189410:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189424u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x00189424u) [[unlikely]] return; }
L_00189424:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_00189470; } }
    c.r[1].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00189470; } }
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 165ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 196ll ? 1ull : 0ull;  if (t) { goto L_00189470; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 180u);  if (t) { goto L_00189470; } }
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
L_00189470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[16].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = c.r[5].w[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001894E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 90u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189500u); set32(c.r[4], 0u - 90u);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x00189500u) [[unlikely]] return; }
L_00189500:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189514u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x00189514u) [[unlikely]] return; }
L_00189514:
    c.f[1] = c.r[16].w[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.f[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 90u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895A0u); set32(c.r[4], 0u - 90u);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x001895A0u) [[unlikely]] return; }
L_001895A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895ACu); set32(c.r[5], 0u + 360u);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x001895ACu) [[unlikely]] return; }
L_001895AC:
    set32(c.r[4], 0u - 90u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895B8u); set32(c.r[5], 0u + 90u);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x001895B8u) [[unlikely]] return; }
L_001895B8:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895CCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0022(c, 110u, depth + 1u); else { c.pc = 0x00189640u; return; } if (c.pc != 0x001895CCu) [[unlikely]] return; }
L_001895CC:
    c.f[1] = c.r[16].w[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.f[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189660u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00189660u) [[unlikely]] return; }
L_00189660:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00189674; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0018968C; } }
L_00189674:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0018968C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189744u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00189744u) [[unlikely]] return; }
L_00189744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001897A8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[5], 0u + 44u);
    set32(c.r[3], c.r[3].w[0] - 25360u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001897A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001897A4u) [[unlikely]] return; }
L_001897A4:
    c.budget -= 1;
L_001897A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001897D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 22256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001897F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 396u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189838u); st32((c.r[4].w[0] + 400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00189838u) [[unlikely]] return; }
L_00189838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00189840u) [[unlikely]] return; }
L_00189840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189848u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00189848u) [[unlikely]] return; }
L_00189848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189850u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x00189850u) [[unlikely]] return; }
L_00189850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189858u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00189858u) [[unlikely]] return; }
L_00189858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00189860u) [[unlikely]] return; }
L_00189860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 22304u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018987Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0018987Cu) [[unlikely]] return; }
L_0018987C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189888u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00189888u) [[unlikely]] return; }
L_00189888:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00189930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898A0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001898A0u) [[unlikely]] return; }
L_001898A0:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898ACu); c.r[19].d[0] = c.r[2].d[0] & 65520ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001898ACu) [[unlikely]] return; }
L_001898AC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898B8u); c.r[16].d[0] = c.r[2].d[0] & 4080ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001898B8u) [[unlikely]] return; }
L_001898B8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001898D0; } }
    set32(c.r[19], 0u - c.r[19].w[0]);
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 3;
L_001898D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001898D8u) [[unlikely]] return; }
L_001898D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001898E0u) [[unlikely]] return; }
L_001898E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898E8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001898E8u) [[unlikely]] return; }
L_001898E8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22336u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189910u); set32(c.r[5], c.r[5].w[0] - 22320u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00189910u) [[unlikely]] return; }
L_00189910:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018991Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0018991Cu) [[unlikely]] return; }
L_0018991C:
    st32((c.r[18].w[0] + 64u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { goto L_001899E0; } }
    c.budget -= 1;
L_00189930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189938u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00189938u) [[unlikely]] return; }
L_00189938:
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189944u); c.r[19].d[0] = c.r[2].d[0] & 1023ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00189944u) [[unlikely]] return; }
L_00189944:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189950u); c.r[16].d[0] = c.r[2].d[0] & 4080ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00189950u) [[unlikely]] return; }
L_00189950:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00189968; } }
    set32(c.r[19], 0u - c.r[19].w[0]);
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 3;
L_00189968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189970u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00189970u) [[unlikely]] return; }
L_00189970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189978u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00189978u) [[unlikely]] return; }
L_00189978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189980u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00189980u) [[unlikely]] return; }
L_00189980:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22352u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899A8u); set32(c.r[5], c.r[5].w[0] - 22320u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001899A8u) [[unlikely]] return; }
L_001899A8:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899B4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001899B4u) [[unlikely]] return; }
L_001899B4:
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F770000u);
    st32((c.r[18].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 2621ull;
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.budget -= 11;
L_001899E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899E8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001899E8u) [[unlikely]] return; }
L_001899E8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 1008ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899F8u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001899F8u) [[unlikely]] return; }
L_001899F8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 1008ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189A28u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00189A28u) [[unlikely]] return; }
L_00189A28:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189A50; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 7;
L_00189A50:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00189A78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 7;
L_00189A78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189A8Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00189A8Cu) [[unlikely]] return; }
L_00189A8C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 48u);  if (t) { goto L_00189AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189AA4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x00189AA4u) [[unlikely]] return; }
L_00189AA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189AB0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x00189AB0u) [[unlikely]] return; }
L_00189AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189AB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 148u, depth + 1u); else { c.pc = 0x00189AE0u; return; } if (c.pc != 0x00189AB8u) [[unlikely]] return; }
L_00189AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00189AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189B00u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x00189B00u) [[unlikely]] return; }
L_00189B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_00189B18; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00189B20; } }
    c.budget -= 1;
L_00189B18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_00189B20:
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[3] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_00189B50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00189CB8; } }
    c.budget -= 1;
L_00189B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00189B88; } }
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_00189B88; } }
    st32((c.r[16].w[0] + 88u), c.f[3]);
    c.budget -= 1;
L_00189B88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_00189BB8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189BACu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00189BACu) [[unlikely]] return; }
L_00189BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189BC8; } }
    c.budget -= 1;
L_00189BB8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189BC8u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00189BC8u) [[unlikely]] return; }
L_00189BC8:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189BD4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00189BD4u) [[unlikely]] return; }
L_00189BD4:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189BE4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00189BE4u) [[unlikely]] return; }
L_00189BE4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189BF0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00189BF0u) [[unlikely]] return; }
L_00189BF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C18u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00189C18u) [[unlikely]] return; }
L_00189C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C20u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00189C20u) [[unlikely]] return; }
L_00189C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00189C28u) [[unlikely]] return; }
L_00189C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C30u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00189C30u) [[unlikely]] return; }
L_00189C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C38u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00189C38u) [[unlikely]] return; }
L_00189C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C40u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00189C40u) [[unlikely]] return; }
L_00189C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00189C48u) [[unlikely]] return; }
L_00189C48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 22304u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[12] = c.f[2] ^ fp::kSign;
    c.f[13] = c.f[1] ^ fp::kSign;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C9Cu); c.f[14] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00189C9Cu) [[unlikely]] return; }
L_00189C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CA4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00189CA4u) [[unlikely]] return; }
L_00189CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00189CACu) [[unlikely]] return; }
L_00189CAC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00189CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00189CE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00189CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D08u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00189D08u) [[unlikely]] return; }
L_00189D08:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D14u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x00189D14u) [[unlikely]] return; }
L_00189D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D1Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00189D1Cu) [[unlikely]] return; }
L_00189D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00189D60u) [[unlikely]] return; }
L_00189D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00189DD0; } }
L_00189D70:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 45u);
    set32(c.r[4], c.r[4].w[0] - 24240u);
    set32(c.r[3], c.r[3].w[0] - 25104u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 264u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 24;
L_00189DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189DF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21984u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00189E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00189E70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189E70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189E80; } }
L_00189E70:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00189E88; } }
    c.budget -= 1;
L_00189E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189E88u);  if (depth < kMaxDepth) unit_0022(c, 176u, depth + 1u); else { c.pc = 0x00189EA0u; return; } if (c.pc != 0x00189E88u) [[unlikely]] return; }
L_00189E88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00189EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00189ED8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189ED8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189EE8; } }
L_00189ED8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00189F68; } }
    c.budget -= 1;
L_00189EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00189F08u) [[unlikely]] return; }
L_00189F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - 22240u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F24u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00189F24u) [[unlikely]] return; }
L_00189F24:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F34u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00189F34u) [[unlikely]] return; }
L_00189F34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F40u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00189F40u) [[unlikely]] return; }
L_00189F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F48u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00189F48u) [[unlikely]] return; }
L_00189F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00189F50u) [[unlikely]] return; }
L_00189F50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00189F68; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00189F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BCC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A4C0000u);
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA660000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B4C0000u);
    c.f[1] = fp::mul(c.f[2], c.f[2]);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 160u));
    c.f[3] = c.r[5].w[0];
    c.f[2] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_0018A050; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A040; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8658u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A040u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x0018A040u) [[unlikely]] return; }
L_0018A040:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 172u, depth + 1u); else { c.pc = 0x0018D6F0u; return; } if (c.pc != 0x0018A04Cu) [[unlikely]] return; }
L_0018A04C:
    c.budget -= 1;
L_0018A050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018A060:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[5].w[0] + 336u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0018A088; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_0018A088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018A090:
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3BCC0000u);
    c.r[6].d[0] = c.r[5].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A4C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B4C0000u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[4].w[0] + 160u));
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 34;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_0018A128; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0018A128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018A130:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018A140:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0018A150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A168u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0018A168u) [[unlikely]] return; }
L_0018A168:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A178u); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0018A178u) [[unlikely]] return; }
L_0018A178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A180u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0018A180u) [[unlikely]] return; }
L_0018A180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A188u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0018A188u) [[unlikely]] return; }
L_0018A188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018A1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23828u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018A358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1C8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018A1C8u) [[unlikely]] return; }
L_0018A1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1D0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0018A1D0u) [[unlikely]] return; }
L_0018A1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1D8u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0018A1D8u) [[unlikely]] return; }
L_0018A1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1E0u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0018A1E0u) [[unlikely]] return; }
L_0018A1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1E8u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0018A1E8u) [[unlikely]] return; }
L_0018A1E8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1F8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018A1F8u) [[unlikely]] return; }
L_0018A1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0018A250; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], 0u + 21u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A228u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0018A228u) [[unlikely]] return; }
L_0018A228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A230u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018A230u) [[unlikely]] return; }
L_0018A230:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[3], c.r[3].w[0] - 23696u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 23024u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 8;
L_0018A250:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A260u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018A260u) [[unlikely]] return; }
L_0018A260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0018A2D0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], 0u + 21u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A290u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0018A290u) [[unlikely]] return; }
L_0018A290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A298u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0018A298u) [[unlikely]] return; }
L_0018A298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 22544u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[2], c.r[2].w[0] - 21808u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 14;
L_0018A2D0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A2E0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018A2E0u) [[unlikely]] return; }
L_0018A2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0018A358; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], 0u + 21u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A310u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0018A310u) [[unlikely]] return; }
L_0018A310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A318u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0018A318u) [[unlikely]] return; }
L_0018A318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 22544u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[3], c.r[3].w[0] - 21808u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 84u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_0018A358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018A370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018A390:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[10].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[11], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], 0u + 80u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 120u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 308u), 0u);
    st32((c.r[4].w[0] + 312u), 0u);
    st32((c.r[4].w[0] + 316u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 320u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 324u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 328u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 330u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 329u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 331u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 332u), 0u);
    st32((c.r[4].w[0] + 336u), 0u);
    st32((c.r[4].w[0] + 340u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 344u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 348u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 352u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 354u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 353u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 355u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 356u), 0u);
    st32((c.r[4].w[0] + 360u), 0u);
    st32((c.r[4].w[0] + 364u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 368u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 372u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 376u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 378u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 377u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 379u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 380u), 0u);
    st32((c.r[4].w[0] + 384u), 0u);
    st32((c.r[4].w[0] + 388u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 392u), c.r[10].w[0]);
    c.budget -= 51;
    { st32((c.r[4].w[0] + 396u), c.r[9].w[0]);  goto L_0018A460; }
L_0018A460:
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[10], c.r[4].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DB30000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.r[12].d[0] = c.r[6].d[0] | 13107ull;
    c.f[3] = c.r[3].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBFA00000u);
    c.f[2] = c.r[12].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[1] = c.r[11].w[0];
    set32(c.r[13], 0u + 3u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 16;
L_0018A4A0:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[6].d[0];  if (t) { goto L_0018A530; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[5].d[0];  if (t) { goto L_0018A500; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0018A4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018A570; } }
    c.budget -= 1;
L_0018A4C8:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[11], c.r[11].w[0] - 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[11].sd[0] > 0;  if (t) { goto L_0018A570; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0018A570; } }
    c.budget -= 1;
L_0018A500:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[11], c.r[11].w[0] - 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[11].sd[0] > 0;  if (t) { goto L_0018A570; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_0018A570; } }
L_0018A530:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[11], c.r[11].w[0] - 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[11].sd[0] > 0;  if (t) { goto L_0018A560; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018A570; } }
L_0018A560:
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_0018A570:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0018A598; } }
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_0018A598:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[11].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A4A0u | kUnwind; return; } goto L_0018A4A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0018A5D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018A5E0; } }
L_0018A5D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018A5E0; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0018A5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018A5F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018A600:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0018A610:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A644u); st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0018A644u) [[unlikely]] return; }
L_0018A644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20280u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 21952u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);  if (t) { goto L_0018A7B8; } }
    c.budget -= 1;
L_0018A6B0:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018A7A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 21952u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A720u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0018A720u) [[unlikely]] return; }
L_0018A720:
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A730u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0018A730u) [[unlikely]] return; }
L_0018A730:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A73Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0018A73Cu) [[unlikely]] return; }
L_0018A73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = ld32((c.r[17].w[0] + 16u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A750u); c.f[12] = ld32((c.r[17].w[0] + 12u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0018A750u) [[unlikely]] return; }
L_0018A750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A758u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018A758u) [[unlikely]] return; }
L_0018A758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21776u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 21744u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21760u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A7A8u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0018A7A8u) [[unlikely]] return; }
L_0018A7A8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_0018A7B8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A6B0u | kUnwind; return; } goto L_0018A6B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0018A7F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018A810:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[12], c.r[4].w[0] + 304u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 12;
L_0018A840:
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[12].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[12].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[12].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[12].w[0] + 16u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[11].d[0] << 56;  if (t) { goto L_0018A890; } }
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0018A87C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A87C; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0018A87C:
    st8((c.r[12].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[12].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_0018A8C0; } }
    c.budget -= 1;
L_0018A890:
    c.r[6].d[0] = c.r[11].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0018A8AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A8AC; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0018A8AC:
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    st8((c.r[12].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[12].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[12].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 5;
L_0018A8C0:
    set32(c.r[2], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[2].d[0] << 56;
    set32(c.r[12], c.r[12].w[0] + 24u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[2].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A840u | kUnwind; return; } goto L_0018A840; } }
    c.budget -= 2;
    {  goto L_0018A8F0; }
L_0018A8F0:
    set32(c.r[10], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[11], c.r[4].w[0] + 304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3E400000u);
    c.f[5] = c.r[12].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[5].d[0] = c.r[3].d[0] | 43691ull;
    set32(c.r[6], 0u + 1u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0xBEC00000u);
    set32(c.r[3], 0u + 3u);
    c.f[4] = c.r[7].w[0];
    c.f[1] = c.r[12].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBFD00000u);
    c.f[6] = c.r[5].w[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3EC00000u);
    c.f[2] = c.r[7].w[0];
    c.f[3] = c.r[12].w[0];
    set32(c.r[5], 0u + 5u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 22;
L_0018A948:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[7].d[0];  if (t) { goto L_0018A9D8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[6].d[0];  if (t) { goto L_0018A9A8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0018A970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018AA18; } }
    c.budget -= 1;
L_0018A970:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[12].sd[0] > 0;  if (t) { goto L_0018AA18; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018AA18; } }
    c.budget -= 1;
L_0018A9A8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[12].sd[0] > 0;  if (t) { goto L_0018AA18; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018AA18; } }
L_0018A9D8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[12].sd[0] > 0;  if (t) { goto L_0018AA08; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018AA18; } }
L_0018AA08:
    c.f[0] = ld32((c.r[8].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    st32((c.r[8].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_0018AA18:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0018AA80; } }
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[8].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0018AA68; } }
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.f[0]);  if (t) { goto L_0018AA80; } }
    c.budget -= 1;
L_0018AA68:
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_0018AA80:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[12].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A948u | kUnwind; return; } goto L_0018A948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0018AAB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018AAC8; } }
L_0018AAB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018AAC8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0018AAC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018AAD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 21952u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AB24u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0018AB24u) [[unlikely]] return; }
L_0018AB24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AB60u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x0018AB60u) [[unlikely]] return; }
L_0018AB60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20268u), c.f[0]);  if (t) { goto L_0018AC90; } }
L_0018AB70:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018AC80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 21952u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ABD8u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018ABD8u) [[unlikely]] return; }
L_0018ABD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ABE0u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0018ABE0u) [[unlikely]] return; }
L_0018ABE0:
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ABF0u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0018ABF0u) [[unlikely]] return; }
L_0018ABF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ABF8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0018ABF8u) [[unlikely]] return; }
L_0018ABF8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AC04u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0018AC04u) [[unlikely]] return; }
L_0018AC04:
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 21712u);
    set32(c.r[2], c.r[2].w[0] - 21680u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 21696u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AC80u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0018AC80u) [[unlikely]] return; }
L_0018AC80:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_0018AC90:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018AB70u | kUnwind; return; } goto L_0018AB70; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018ACC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ACE8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018ACE8u) [[unlikely]] return; }
L_0018ACE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018AD48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 47u);
    set32(c.r[4], c.r[4].w[0] - 21152u);
    set32(c.r[3], c.r[3].w[0] - 20752u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
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
    c.budget -= 22;
L_0018AD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018AD60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21616u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018AD80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[28].w[0] - 32600u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 336u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 344u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 308u), 0u);
    st32((c.r[4].w[0] + 312u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 340u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[4].w[0] + 345u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 320u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 324u), 0u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 328u), c.r[7].w[0]);  c.pc = t; return; }
L_0018ADF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B360000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 2913ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C360000u);
    c.f[0] = ld32((c.r[4].w[0] + 304u));
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBBB60000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 336u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 340u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 38;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018AE98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018AE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AEA0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018AEA0u) [[unlikely]] return; }
L_0018AEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AEA8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0018AEA8u) [[unlikely]] return; }
L_0018AEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AEB0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018AEB0u) [[unlikely]] return; }
L_0018AEB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018AED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018AEE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0018AEF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[21], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 21584u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32596u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 21600u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AF74u); st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0018AF74u) [[unlikely]] return; }
L_0018AF74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[18], c.r[18].w[0] - 21648u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[23], c.r[29].w[0] + 168u);
    set32(c.r[30], c.r[29].w[0] + 172u);
    c.budget -= 19;
L_0018AFC0:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 117u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0018AFE0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0018AFE0:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[22].w[0]), c.f[1]);
    c.f[3] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0018B070; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018B08C; } }
L_0018B070:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 32593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0018B08C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B0B0u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0018B0B0u) [[unlikely]] return; }
L_0018B0B0:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[19].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018AFC0u | kUnwind; return; } goto L_0018AFC0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0018B100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B128u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018B128u) [[unlikely]] return; }
L_0018B128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B188; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 48u);
    set32(c.r[4], c.r[4].w[0] - 20064u);
    set32(c.r[3], c.r[3].w[0] - 19584u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
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
    c.budget -= 22;
L_0018B188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B1A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 21360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018B1C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[28].w[0] - 32592u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 336u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 344u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 308u), 0u);
    st32((c.r[4].w[0] + 312u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 340u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[4].w[0] + 345u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 320u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 324u), 0u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 328u), c.r[7].w[0]);  c.pc = t; return; }
L_0018B230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 304u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[4] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[3].d[0] | 52429ull;
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 61681ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 20;
L_0018B280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018B2B0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_0018B2C8; } }
    c.budget -= 1;
L_0018B2B0:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_0018B2C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B2E8; } }
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_0018B2E8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B280u | kUnwind; return; } goto L_0018B280; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B330; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B338u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018B338u) [[unlikely]] return; }
L_0018B338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B340u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0018B340u) [[unlikely]] return; }
L_0018B340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B348u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018B348u) [[unlikely]] return; }
L_0018B348:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018B360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018B370:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0018B380:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] - 21328u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] - 21552u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[21], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 20244u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 21344u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st32((c.r[1].w[0] + 20288u), c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B418u); st32((c.r[1].w[0] + 20268u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0018B418u) [[unlikely]] return; }
L_0018B418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[18], c.r[18].w[0] - 21392u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[23], c.r[29].w[0] + 168u);
    set32(c.r[30], c.r[29].w[0] + 172u);
    c.budget -= 18;
L_0018B460:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 114u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0018B480; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0018B480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[22].w[0]), c.f[1]);
    c.f[3] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0018B4F0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_0018B50C; } }
L_0018B4F0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.budget -= 7;
L_0018B50C:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 21552u);
    set32(c.r[2], c.r[2].w[0] - 21312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B568u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0018B568u) [[unlikely]] return; }
L_0018B568:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[19].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B460u | kUnwind; return; } goto L_0018B460; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0018B5C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B5F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018B5F0u) [[unlikely]] return; }
L_0018B5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B638; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 49u);
    set32(c.r[4], c.r[4].w[0] - 18864u);
    set32(c.r[3], c.r[3].w[0] - 18320u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_0018B638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018B650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 20320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018B670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 21296u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] << 5);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B6B8u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0018B6B8u) [[unlikely]] return; }
L_0018B6B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B6C4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0018B6C4u) [[unlikely]] return; }
L_0018B6C4:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B6ECu); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 288u, depth + 1u); else { c.pc = 0x0018BA60u; return; } if (c.pc != 0x0018B6ECu) [[unlikely]] return; }
L_0018B6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B6F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 294u, depth + 1u); else { c.pc = 0x0018BB40u; return; } if (c.pc != 0x0018B6F4u) [[unlikely]] return; }
L_0018B6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B748; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 20344u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 19;
L_0018B748:
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B754u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x0018B754u) [[unlikely]] return; }
L_0018B754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 279u, depth + 1u); else { c.pc = 0x0018B770u; return; } if (c.pc != 0x0018B75Cu) [[unlikely]] return; }
L_0018B75C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018B7F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B7A8u);  if (depth < kMaxDepth) unit_0022(c, 294u, depth + 1u); else { c.pc = 0x0018BB40u; return; } if (c.pc != 0x0018B7A8u) [[unlikely]] return; }
L_0018B7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0018B7F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 20344u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 18;
L_0018B7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 144u));
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B820u); st32((c.r[16].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 291u, depth + 1u); else { c.pc = 0x0018BAB0u; return; } if (c.pc != 0x0018B820u) [[unlikely]] return; }
L_0018B820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018B830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018B840; } }
L_0018B830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0018B840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018B850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018B860:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0018B870:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 159u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 158u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 157u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[21].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 156u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20236u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20232u), c.r[3].w[0]);
    c.budget -= 40;
L_0018B910:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[19].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0018BA18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] - 21296u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B954u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0018B954u) [[unlikely]] return; }
L_0018B954:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 20176u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[5], c.r[5].w[0] - 20304u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 20252u), c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[6].w[0] << 3);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0018B9E0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018B9FC; } }
L_0018B9E0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0018B9FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BA18u); st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0018BA18u) [[unlikely]] return; }
L_0018BA18:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B910u | kUnwind; return; } goto L_0018B910; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0018BA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0018BA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BA80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 296u, depth + 1u); else { c.pc = 0x0018BB90u; return; } if (c.pc != 0x0018BA80u) [[unlikely]] return; }
L_0018BA80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BA78u | kUnwind; return; } goto L_0018BA78; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018BAB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[18].w[0] + 304u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0018BB18; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0018BAF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0018BB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BB04u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 298u, depth + 1u); else { c.pc = 0x0018BBD0u; return; } if (c.pc != 0x0018BB04u) [[unlikely]] return; }
L_0018BB04:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0018BB08:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BAF0u | kUnwind; return; } goto L_0018BAF0; } }
L_0018BB18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018BB40:
    set32(c.r[4], c.r[4].w[0] + 304u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0018BB70; } }
L_0018BB50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018BB68; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0018BB68:
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0018BB70:
    c.r[1].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018BB88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BB50u | kUnwind; return; } goto L_0018BB50; } }
    c.budget -= 1;
L_0018BB88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018BB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BBACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0018BBACu) [[unlikely]] return; }
L_0018BBAC:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018BBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] - 20344u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] - 20336u);
    set32(c.r[2], 0u - 1u);
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0018BC80; } }
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0018BC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018BC88; } }
L_0018BC80:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_0018BC88:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018BCC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_0018BCC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018BD18; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018BD18; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0018BD10; } }
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018BD10:
    set32(c.r[2], 0u + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018BD18:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018BD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018BD48; } }
L_0018BD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BD40u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 296u, depth + 1u); else { c.pc = 0x0018BB90u; return; } if (c.pc != 0x0018BD40u) [[unlikely]] return; }
L_0018BD40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0018BD48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018BD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BD80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0018BD80u) [[unlikely]] return; }
L_0018BD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018BDC0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 51u);
    set32(c.r[4], c.r[4].w[0] - 16944u);
    set32(c.r[3], c.r[3].w[0] - 16432u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 14;
L_0018BDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018BDD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 20080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018BDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0018BE30; } }
L_0018BE14:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BE14u | kUnwind; return; } goto L_0018BE14; } }
L_0018BE30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 68u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE68u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0018BE68u) [[unlikely]] return; }
L_0018BE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018BE70u) [[unlikely]] return; }
L_0018BE70:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE7Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0018BE7Cu) [[unlikely]] return; }
L_0018BE7C:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEA0u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018BEA0u) [[unlikely]] return; }
L_0018BEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0018BEA8u) [[unlikely]] return; }
L_0018BEA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEB8u); set32(c.r[4], c.r[4].w[0] - 20096u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0018BEB8u) [[unlikely]] return; }
L_0018BEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018BED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018BF08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018BF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF50u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018BF50u) [[unlikely]] return; }
L_0018BF50:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF5Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0018BF5Cu) [[unlikely]] return; }
L_0018BF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018BF64u) [[unlikely]] return; }
L_0018BF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF6Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0018BF6Cu) [[unlikely]] return; }
L_0018BF6C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF7Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0018BF7Cu) [[unlikely]] return; }
L_0018BF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0018BF84u) [[unlikely]] return; }
L_0018BF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF8Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0018BF8Cu) [[unlikely]] return; }
L_0018BF8C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018BFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018BFC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0018BFD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.budget -= 1;
L_0018BFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.budget -= 1;
L_0018BFD8:
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 1;
L_0018BFDC:
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.budget -= 1;
L_0018BFE0:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_0018BFE4:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_0018BFE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 1;
L_0018BFEC:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0018BFF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.budget -= 1;
L_0018BFF4:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.budget -= 1;
L_0018BFF8:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0018BFFC:
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 1;
    [[clang::musttail]] return unit_0023(c, 1u, depth);
}

}
