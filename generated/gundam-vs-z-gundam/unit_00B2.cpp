#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B2[4096] = {
    1, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82,
    0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0,
    139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0,
    0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0,
    325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    361, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C8000;
    case 2u: goto L_003C8004;
    case 3u: goto L_003C8008;
    case 4u: goto L_003C8018;
    case 5u: goto L_003C8038;
    case 6u: goto L_003C8050;
    case 7u: goto L_003C8060;
    case 8u: goto L_003C8130;
    case 9u: goto L_003C81E0;
    case 10u: goto L_003C8208;
    case 11u: goto L_003C822C;
    case 12u: goto L_003C8238;
    case 13u: goto L_003C8248;
    case 14u: goto L_003C8258;
    case 15u: goto L_003C8274;
    case 16u: goto L_003C82A4;
    case 17u: goto L_003C82BC;
    case 18u: goto L_003C82CC;
    case 19u: goto L_003C82EC;
    case 20u: goto L_003C8314;
    case 21u: goto L_003C835C;
    case 22u: goto L_003C83A0;
    case 23u: goto L_003C8410;
    case 24u: goto L_003C8570;
    case 25u: goto L_003C85A8;
    case 26u: goto L_003C8630;
    case 27u: goto L_003C8690;
    case 28u: goto L_003C86C8;
    case 29u: goto L_003C8738;
    case 30u: goto L_003C8930;
    case 31u: goto L_003C89E0;
    case 32u: goto L_003C8A60;
    case 33u: goto L_003C8CD0;
    case 34u: goto L_003C8EA8;
    case 35u: goto L_003C8FB8;
    case 36u: goto L_003C9040;
    case 37u: goto L_003C90A0;
    case 38u: goto L_003C9148;
    case 39u: goto L_003C91C0;
    case 40u: goto L_003C91E4;
    case 41u: goto L_003C9260;
    case 42u: goto L_003C9280;
    case 43u: goto L_003C92B0;
    case 44u: goto L_003C92F4;
    case 45u: goto L_003C9300;
    case 46u: goto L_003C9308;
    case 47u: goto L_003C9314;
    case 48u: goto L_003C9330;
    case 49u: goto L_003C9380;
    case 50u: goto L_003C93A8;
    case 51u: goto L_003C93B0;
    case 52u: goto L_003C93BC;
    case 53u: goto L_003C93C4;
    case 54u: goto L_003C93CC;
    case 55u: goto L_003C93D4;
    case 56u: goto L_003C93DC;
    case 57u: goto L_003C9410;
    case 58u: goto L_003C9488;
    case 59u: goto L_003C94A0;
    case 60u: goto L_003C94BC;
    case 61u: goto L_003C94F4;
    case 62u: goto L_003C9514;
    case 63u: goto L_003C9520;
    case 64u: goto L_003C9530;
    case 65u: goto L_003C953C;
    case 66u: goto L_003C9564;
    case 67u: goto L_003C9580;
    case 68u: goto L_003C95C0;
    case 69u: goto L_003C95F0;
    case 70u: goto L_003C969C;
    case 71u: goto L_003C96A8;
    case 72u: goto L_003C96B4;
    case 73u: goto L_003C96D8;
    case 74u: goto L_003C96E4;
    case 75u: goto L_003C96EC;
    case 76u: goto L_003C96F4;
    case 77u: goto L_003C96FC;
    case 78u: goto L_003C9704;
    case 79u: goto L_003C9740;
    case 80u: goto L_003C9750;
    case 81u: goto L_003C9770;
    case 82u: goto L_003C977C;
    case 83u: goto L_003C9784;
    case 84u: goto L_003C978C;
    case 85u: goto L_003C9794;
    case 86u: goto L_003C979C;
    case 87u: goto L_003C97A4;
    case 88u: goto L_003C97B0;
    case 89u: goto L_003C97D0;
    case 90u: goto L_003C97F0;
    case 91u: goto L_003C9800;
    case 92u: goto L_003C9960;
    case 93u: goto L_003C9990;
    case 94u: goto L_003C99E0;
    case 95u: goto L_003C99F8;
    case 96u: goto L_003C9A24;
    case 97u: goto L_003C9A34;
    case 98u: goto L_003C9AB8;
    case 99u: goto L_003C9AC0;
    case 100u: goto L_003C9AE0;
    case 101u: goto L_003C9B0C;
    case 102u: goto L_003C9B58;
    case 103u: goto L_003C9B70;
    case 104u: goto L_003C9B8C;
    case 105u: goto L_003C9B98;
    case 106u: goto L_003C9BB0;
    case 107u: goto L_003C9BC0;
    case 108u: goto L_003C9BE8;
    case 109u: goto L_003C9C10;
    case 110u: goto L_003C9C1C;
    case 111u: goto L_003C9C34;
    case 112u: goto L_003C9C40;
    case 113u: goto L_003C9C5C;
    case 114u: goto L_003C9C68;
    case 115u: goto L_003C9C78;
    case 116u: goto L_003C9C94;
    case 117u: goto L_003C9CA0;
    case 118u: goto L_003C9CAC;
    case 119u: goto L_003C9CC0;
    case 120u: goto L_003C9CD0;
    case 121u: goto L_003C9D08;
    case 122u: goto L_003C9D88;
    case 123u: goto L_003C9D90;
    case 124u: goto L_003C9DB0;
    case 125u: goto L_003C9DF0;
    case 126u: goto L_003C9E00;
    case 127u: goto L_003C9E18;
    case 128u: goto L_003C9E38;
    case 129u: goto L_003C9E40;
    case 130u: goto L_003C9E60;
    case 131u: goto L_003C9E88;
    case 132u: goto L_003C9EA0;
    case 133u: goto L_003C9EC0;
    case 134u: goto L_003C9F20;
    case 135u: goto L_003C9F50;
    case 136u: goto L_003C9F68;
    case 137u: goto L_003C9F70;
    case 138u: goto L_003C9F78;
    case 139u: goto L_003C9F80;
    case 140u: goto L_003C9F88;
    case 141u: goto L_003C9F98;
    case 142u: goto L_003C9FB8;
    case 143u: goto L_003C9FC8;
    case 144u: goto L_003C9FFC;
    case 145u: goto L_003CA010;
    case 146u: goto L_003CA02C;
    case 147u: goto L_003CA038;
    case 148u: goto L_003CA044;
    case 149u: goto L_003CA060;
    case 150u: goto L_003CA0A0;
    case 151u: goto L_003CA0A8;
    case 152u: goto L_003CA0C0;
    case 153u: goto L_003CA0D4;
    case 154u: goto L_003CA0DC;
    case 155u: goto L_003CA0E4;
    case 156u: goto L_003CA0F0;
    case 157u: goto L_003CA100;
    case 158u: goto L_003CA120;
    case 159u: goto L_003CA150;
    case 160u: goto L_003CA164;
    case 161u: goto L_003CA174;
    case 162u: goto L_003CA198;
    case 163u: goto L_003CA1C0;
    case 164u: goto L_003CA1F0;
    case 165u: goto L_003CA210;
    case 166u: goto L_003CA240;
    case 167u: goto L_003CA248;
    case 168u: goto L_003CA260;
    case 169u: goto L_003CA274;
    case 170u: goto L_003CA2A0;
    case 171u: goto L_003CA2C0;
    case 172u: goto L_003CA2E0;
    case 173u: goto L_003CA334;
    case 174u: goto L_003CA33C;
    case 175u: goto L_003CA34C;
    case 176u: goto L_003CA360;
    case 177u: goto L_003CA374;
    case 178u: goto L_003CA3A0;
    case 179u: goto L_003CA3C0;
    case 180u: goto L_003CA3D0;
    case 181u: goto L_003CA3D8;
    case 182u: goto L_003CA3E0;
    case 183u: goto L_003CA3F0;
    case 184u: goto L_003CA404;
    case 185u: goto L_003CA410;
    case 186u: goto L_003CA420;
    case 187u: goto L_003CA450;
    case 188u: goto L_003CA45C;
    case 189u: goto L_003CA464;
    case 190u: goto L_003CA480;
    case 191u: goto L_003CA4D0;
    case 192u: goto L_003CA4D8;
    case 193u: goto L_003CA4E0;
    case 194u: goto L_003CA50C;
    case 195u: goto L_003CA51C;
    case 196u: goto L_003CA5B0;
    case 197u: goto L_003CA5DC;
    case 198u: goto L_003CA630;
    case 199u: goto L_003CA648;
    case 200u: goto L_003CA664;
    case 201u: goto L_003CA670;
    case 202u: goto L_003CA688;
    case 203u: goto L_003CA698;
    case 204u: goto L_003CA6C0;
    case 205u: goto L_003CA6E8;
    case 206u: goto L_003CA6F4;
    case 207u: goto L_003CA70C;
    case 208u: goto L_003CA718;
    case 209u: goto L_003CA734;
    case 210u: goto L_003CA740;
    case 211u: goto L_003CA750;
    case 212u: goto L_003CA764;
    case 213u: goto L_003CA770;
    case 214u: goto L_003CA77C;
    case 215u: goto L_003CA790;
    case 216u: goto L_003CA7A0;
    case 217u: goto L_003CA7C0;
    case 218u: goto L_003CA7D0;
    case 219u: goto L_003CA808;
    case 220u: goto L_003CA8A0;
    case 221u: goto L_003CA8C8;
    case 222u: goto L_003CA8E0;
    case 223u: goto L_003CA8F4;
    case 224u: goto L_003CA900;
    case 225u: goto L_003CA910;
    case 226u: goto L_003CA958;
    case 227u: goto L_003CA974;
    case 228u: goto L_003CA980;
    case 229u: goto L_003CA988;
    case 230u: goto L_003CA990;
    case 231u: goto L_003CA998;
    case 232u: goto L_003CA9A0;
    case 233u: goto L_003CA9B8;
    case 234u: goto L_003CA9E4;
    case 235u: goto L_003CA9F8;
    case 236u: goto L_003CAA24;
    case 237u: goto L_003CAA3C;
    case 238u: goto L_003CAA50;
    case 239u: goto L_003CAA68;
    case 240u: goto L_003CAA88;
    case 241u: goto L_003CAA94;
    case 242u: goto L_003CAAA8;
    case 243u: goto L_003CAAD8;
    case 244u: goto L_003CAAF0;
    case 245u: goto L_003CAB08;
    case 246u: goto L_003CAB30;
    case 247u: goto L_003CAB48;
    case 248u: goto L_003CAB64;
    case 249u: goto L_003CAB70;
    case 250u: goto L_003CAB88;
    case 251u: goto L_003CABA0;
    case 252u: goto L_003CABA8;
    case 253u: goto L_003CABB4;
    case 254u: goto L_003CABC8;
    case 255u: goto L_003CABE0;
    case 256u: goto L_003CABF4;
    case 257u: goto L_003CAC08;
    case 258u: goto L_003CAC20;
    case 259u: goto L_003CAC28;
    case 260u: goto L_003CAC54;
    case 261u: goto L_003CAC74;
    case 262u: goto L_003CAC94;
    case 263u: goto L_003CACA8;
    case 264u: goto L_003CACCC;
    case 265u: goto L_003CACEC;
    case 266u: goto L_003CAD04;
    case 267u: goto L_003CADA0;
    case 268u: goto L_003CADB8;
    case 269u: goto L_003CADD4;
    case 270u: goto L_003CADFC;
    case 271u: goto L_003CAE20;
    case 272u: goto L_003CAE3C;
    case 273u: goto L_003CAE4C;
    case 274u: goto L_003CAE7C;
    case 275u: goto L_003CAE94;
    case 276u: goto L_003CAEA0;
    case 277u: goto L_003CAEC4;
    case 278u: goto L_003CAED8;
    case 279u: goto L_003CAEE8;
    case 280u: goto L_003CAF10;
    case 281u: goto L_003CAF50;
    case 282u: goto L_003CAFB0;
    case 283u: goto L_003CAFC0;
    case 284u: goto L_003CAFD8;
    case 285u: goto L_003CAFE0;
    case 286u: goto L_003CAFE8;
    case 287u: goto L_003CAFF0;
    case 288u: goto L_003CB008;
    case 289u: goto L_003CB018;
    case 290u: goto L_003CB038;
    case 291u: goto L_003CB048;
    case 292u: goto L_003CB07C;
    case 293u: goto L_003CB090;
    case 294u: goto L_003CB0AC;
    case 295u: goto L_003CB0B8;
    case 296u: goto L_003CB0C8;
    case 297u: goto L_003CB100;
    case 298u: goto L_003CB140;
    case 299u: goto L_003CB150;
    case 300u: goto L_003CB180;
    case 301u: goto L_003CB260;
    case 302u: goto L_003CB2AC;
    case 303u: goto L_003CB2D0;
    case 304u: goto L_003CB318;
    case 305u: goto L_003CB348;
    case 306u: goto L_003CB3B8;
    case 307u: goto L_003CB3F0;
    case 308u: goto L_003CB4F0;
    case 309u: goto L_003CB53C;
    case 310u: goto L_003CB5B0;
    case 311u: goto L_003CB668;
    case 312u: goto L_003CB67C;
    case 313u: goto L_003CB76C;
    case 314u: goto L_003CB794;
    case 315u: goto L_003CB7B8;
    case 316u: goto L_003CB7C4;
    case 317u: goto L_003CB7F0;
    case 318u: goto L_003CB868;
    case 319u: goto L_003CB874;
    case 320u: goto L_003CB8A8;
    case 321u: goto L_003CB8D0;
    case 322u: goto L_003CB8E0;
    case 323u: goto L_003CB8F0;
    case 324u: goto L_003CB8F8;
    case 325u: goto L_003CB900;
    case 326u: goto L_003CB910;
    case 327u: goto L_003CB924;
    case 328u: goto L_003CB930;
    case 329u: goto L_003CB940;
    case 330u: goto L_003CB954;
    case 331u: goto L_003CB95C;
    case 332u: goto L_003CB97C;
    case 333u: goto L_003CB990;
    case 334u: goto L_003CB9E0;
    case 335u: goto L_003CB9F0;
    case 336u: goto L_003CBA1C;
    case 337u: goto L_003CBA2C;
    case 338u: goto L_003CBAC0;
    case 339u: goto L_003CBAEC;
    case 340u: goto L_003CBB30;
    case 341u: goto L_003CBB40;
    case 342u: goto L_003CBB68;
    case 343u: goto L_003CBB88;
    case 344u: goto L_003CBB94;
    case 345u: goto L_003CBBC0;
    case 346u: goto L_003CBBD4;
    case 347u: goto L_003CBBE0;
    case 348u: goto L_003CBBFC;
    case 349u: goto L_003CBC08;
    case 350u: goto L_003CBC18;
    case 351u: goto L_003CBC34;
    case 352u: goto L_003CBC40;
    case 353u: goto L_003CBC4C;
    case 354u: goto L_003CBC60;
    case 355u: goto L_003CBC70;
    case 356u: goto L_003CBC90;
    case 357u: goto L_003CBD30;
    case 358u: goto L_003CBD48;
    case 359u: goto L_003CBD54;
    case 360u: goto L_003CBD70;
    case 361u: goto L_003CBD80;
    case 362u: goto L_003CBD88;
    case 363u: goto L_003CBD90;
    case 364u: goto L_003CBDA0;
    case 365u: goto L_003CBDB4;
    case 366u: goto L_003CBDC0;
    case 367u: goto L_003CBDD0;
    case 368u: goto L_003CBDF4;
    case 369u: goto L_003CBE50;
    case 370u: goto L_003CBE70;
    case 371u: goto L_003CBEA0;
    case 372u: goto L_003CBF88;
    case 373u: goto L_003CBF90;
    case 374u: goto L_003CBF9C;
    case 375u: goto L_003CBFC0;
    default: bad_entry(c, 0x003C8000u); return;
    }
L_003C8000:
    c.budget -= 1;
L_003C8004:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.budget -= 1;
L_003C8008:
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C8030; } }
    c.budget -= 1;
L_003C8018:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003C8030; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C8030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8050; } }
L_003C8038:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003C8050; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C8050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C8060:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 247ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8120; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    c.r[3].d[0] = c.r[3].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C80A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.r[3].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 65u);  if (t) { goto L_003C80A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C8120; } }
L_003C80A8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C80F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + 14492u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8120; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C8120; } }
    c.budget -= 1;
L_003C80F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + 14492u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8120; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C8120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C8130:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C8158; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 239ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C81D0; } }
    c.budget -= 1;
L_003C8158:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C81D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 27u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C81D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C81B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C81D0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 239ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C81D0; } }
    c.budget -= 1;
L_003C81B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C81D0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 239ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C81D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C81E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8363u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8208u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00AB(c, 334u, depth + 1u); else { c.pc = 0x003AFB40u; return; } if (c.pc != 0x003C8208u) [[unlikely]] return; }
L_003C8208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8220; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8348; } }
L_003C8220:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C822Cu); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00B2(c, 22u, depth + 1u); else { c.pc = 0x003C83A0u; return; } if (c.pc != 0x003C822Cu) [[unlikely]] return; }
L_003C822C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8238u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C8238u) [[unlikely]] return; }
L_003C8238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003C8260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8248u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C8248u) [[unlikely]] return; }
L_003C8248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003C8260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8258u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C8258u) [[unlikely]] return; }
L_003C8258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8268; } }
L_003C8260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003C8380; } }
L_003C8268:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8274u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C8274u) [[unlikely]] return; }
L_003C8274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8290; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003C8380; } }
L_003C8290:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 62u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C8348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82A4u);  if (depth < kMaxDepth) unit_00B2(c, 24u, depth + 1u); else { c.pc = 0x003C8570u; return; } if (c.pc != 0x003C82A4u) [[unlikely]] return; }
L_003C82A4:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003C8348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82BCu); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C82BCu) [[unlikely]] return; }
L_003C82BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003C82D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82CCu); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C82CCu) [[unlikely]] return; }
L_003C82CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C82E0; } }
    c.budget -= 1;
L_003C82D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003C8380; } }
L_003C82E0:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82ECu); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C82ECu) [[unlikely]] return; }
L_003C82EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8308; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003C8380; } }
L_003C8308:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8314u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003C8314u) [[unlikely]] return; }
L_003C8314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_003C8348; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003C8340; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8473u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C8340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8380; } }
L_003C8340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003C8380; } }
L_003C8348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8375u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C835Cu); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00AB(c, 334u, depth + 1u); else { c.pc = 0x003AFB40u; return; } if (c.pc != 0x003C835Cu) [[unlikely]] return; }
L_003C835C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8378; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8380; } }
    c.budget -= 1;
L_003C8378:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003C8380:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C83A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 20808u);
    set32(c.r[7], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + 20848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[10].d[0] = ld16((c.r[6].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C84B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[11], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 18016u);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[12], 0u + 65u);
    set32(c.r[13], c.r[13].w[0] + 14384u);
    c.budget -= 12;
L_003C8410:
    c.r[11].d[0] = ld8((c.r[7].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_003C84A0; } }
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[6].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0] + 1u));
    c.r[15].d[0] = c.r[11].d[0] & 127ull;
    set32(c.r[11], c.r[15].w[0] << 7);
    set32(c.r[11], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[14], c.r[11].w[0] + 108u);
    c.r[11].d[0] = ld8((c.r[11].w[0] + 108u));
    c.r[11].d[0] = c.r[11].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_003C8458; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 4;
L_003C8458:
    c.r[11].d[0] = ld8((c.r[14].w[0]));
    c.r[11].d[0] = c.r[11].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_003C8478; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 4;
L_003C8478:
    c.r[11].d[0] = c.r[15].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_003C8490; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[12].d[0];  if (t) { goto L_003C84A0; } }
    c.budget -= 1;
L_003C8490:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 4;
L_003C84A0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[11].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8410u | kUnwind; return; } goto L_003C8410; } }
    c.budget -= 1;
L_003C84B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003C84E0; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8363u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C8500; } }
L_003C84E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8375u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C8500:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003C8560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C8540; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[10].w[0] + 182u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C8560; } }
    c.budget -= 1;
L_003C8540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[10].w[0] + 182u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8560; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003C8560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C8570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 20860u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20814u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C8608; } }
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003C8688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 18040u)));
    set32(c.r[4], c.r[4].w[0] + 8064u);
    set32(c.r[8], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_003C85A8:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C85E8; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[4].d[0] = c.r[6].d[0] & 127ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 7));
    c.r[4].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_003C85E8; } }
    c.r[1].d[0] = c.r[6].sd[0] < 38ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C85E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003C85E8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_003C85E8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[4].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C85A8u | kUnwind; return; } goto L_003C85A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8688; } }
    c.budget -= 1;
L_003C8608:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C8688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 18040u)));
    set32(c.r[4], c.r[4].w[0] + 8064u);
    set32(c.r[9], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_003C8630:
    c.r[4].d[0] = ld8((c.r[9].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C8670; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 7));
    c.r[10].d[0] = c.r[6].d[0] & 127ull;
    c.r[6].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = c.r[10].sd[0] < 38ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[10].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_003C8670; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C8670; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003C8670; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_003C8670:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8630u | kUnwind; return; } goto L_003C8630; } }
    c.budget -= 1;
L_003C8688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C8690:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[6], 0u + 320u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C86C8u); set32(c.r[4], c.r[4].w[0] + 11472u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003C86C8u) [[unlikely]] return; }
L_003C86C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[18].d[0] = 0ull << 48;
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20850u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20809u)));
    c.r[1].d[0] = 0ll < c.r[24].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C8888; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 18020u)));
    set32(c.r[3], c.r[3].w[0] + 8064u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[13], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[11], c.r[11].w[0] + 8363u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 18028u)));
    set32(c.r[10], c.r[3].w[0] + 17u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] + 11472u);
    set32(c.r[3], 0u + 54u);
    set32(c.r[4], 0u + 52u);
    set32(c.r[8], c.r[8].w[0] + 13136u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 18;
L_003C8738:
    c.r[9].d[0] = ld8((c.r[13].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003C8870; } }
    c.r[9].d[0] = ld8((c.r[12].w[0] + 1u));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    c.r[15].d[0] = c.r[9].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[1].d[0] = c.r[15].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003C8774; } }
    c.r[9].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
L_003C8774:
    set32(c.r[14], c.r[7].w[0] << (c.r[9].w[0] & 31u));
    c.r[9].d[0] = c.r[17].d[0] << 48;
    c.r[14].d[0] = c.r[14].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);  if (t) { goto L_003C87D8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[6].d[0];  if (t) { goto L_003C87D8; } }
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_003C87D8; } }
    c.r[20].d[0] = ld8((c.r[10].w[0]));
    c.r[9].d[0] = c.r[18].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[25], c.r[9].w[0] << 1);
    set32(c.r[9], c.r[18].w[0] + 1u);
    set32(c.r[21], c.r[5].w[0] + c.r[25].w[0]);
    c.r[18].d[0] = c.r[9].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[9].d[0] = c.r[20].d[0] & 127ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 12;
L_003C87D8:
    c.r[21].d[0] = c.r[18].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[9], c.r[21].w[0] << 1);  if (t) { goto L_003C8850; } }
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] - 2u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[20].d[0];  if (t) { goto L_003C8810; } }
    c.r[15].d[0] = c.r[14].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[9].w[0] - 1u));
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_003C8870; } }
    c.budget -= 1;
L_003C8810:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_003C8830; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[3].d[0];  if (t) { goto L_003C8830; } }
    c.r[14].d[0] = ld8((c.r[9].w[0] - 1u));
    set32(c.r[14], c.r[14].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_003C8870; } }
L_003C8830:
    set32(c.r[9], c.r[21].w[0] << 1);
    set32(c.r[20], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[18].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[18].d[0] = c.r[9].d[0] << 48;
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_003C8870; } }
L_003C8850:
    set32(c.r[9], c.r[21].w[0] << 1);
    set32(c.r[20], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[18].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[18].d[0] = c.r[9].d[0] << 48;
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 8;
L_003C8870:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[9].d[0] = c.r[19].sd[0] < c.r[24].sd[0] ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8738u | kUnwind; return; } goto L_003C8738; } }
    c.budget -= 1;
L_003C8888:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003C88F0; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8363u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_003C88F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[7], ld32((c.r[1].w[0] + 18028u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 11473u);
    set32(c.r[3], c.r[3].w[0] + 11472u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = ld8((c.r[7].w[0] + 17u));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 19;
L_003C88F0:
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 20852u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20810u)));
    c.r[1].d[0] = 0ll < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C8A00; } }
    c.r[1].d[0] = c.r[13].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[13].w[0] - 8u);  if (t) { goto L_003C89C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 18024u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    c.budget -= 5;
L_003C8930:
    c.r[8].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[18], c.r[4].w[0] + 1u);
    set32(c.r[17], c.r[4].w[0] + 2u);
    set32(c.r[15], c.r[4].w[0] + 3u);
    set32(c.r[14], c.r[4].w[0] + 4u);
    set32(c.r[12], c.r[4].w[0] + 5u);
    set32(c.r[11], c.r[4].w[0] + 6u);
    set32(c.r[10], c.r[4].w[0] + 7u);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 2052u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[8].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 16u));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 24u));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 32u));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 40u));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 48u));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 56u));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 35;
    { const bool t = c.r[8].d[0] != 0ull; st8((c.r[9].w[0] + 2052u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8930u | kUnwind; return; } goto L_003C8930; } }
    c.budget -= 1;
L_003C89C0:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);  if (t) { goto L_003C8A00; } }
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[3], ld32((c.r[1].w[0] + 18024u)));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[6].w[0] + 8064u);
    c.budget -= 5;
L_003C89E0:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 2052u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C89E0u | kUnwind; return; } goto L_003C89E0; } }
    c.budget -= 1;
L_003C8A00:
    c.r[11].d[0] = 0ull << 48;
    c.r[1].d[0] = 0ll < c.r[13].sd[0] ? 1ull : 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003C8BB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 18024u)));
    set32(c.r[19], c.r[19].w[0] + 8064u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[18], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8375u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 18028u)));
    set32(c.r[24], c.r[3].w[0] + 113u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] + 11472u);
    set32(c.r[3], 0u + 54u);
    set32(c.r[4], 0u + 52u);
    set32(c.r[8], c.r[8].w[0] + 13136u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 18;
L_003C8A60:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2052u)));
    set32(c.r[9], c.r[18].w[0] + c.r[14].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0] + 129u));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[9], c.r[14].w[0] << 3);  if (t) { goto L_003C8BA8; } }
    set32(c.r[9], c.r[17].w[0] + c.r[9].w[0]);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[14].d[0] = c.r[14].d[0] << 48;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);
    c.r[14].d[0] = c.r[14].d[0] & 127ull;
    c.r[15].d[0] = c.r[14].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[1].d[0] = c.r[15].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = ld8((c.r[9].w[0]));  if (t) { goto L_003C8AA8; } }
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));  if (t) { goto L_003C8AAC; } }
L_003C8AA8:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C8AAC:
    set32(c.r[9], c.r[7].w[0] << (c.r[9].w[0] & 31u));
    c.r[14].d[0] = c.r[12].d[0] << 48;
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != 0ull; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);  if (t) { goto L_003C8B10; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[6].d[0];  if (t) { goto L_003C8B10; } }
    c.r[14].d[0] = ld8((c.r[25].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[12].d[0] << 48;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull; c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);  if (t) { goto L_003C8B10; } }
    c.r[14].d[0] = ld8((c.r[24].w[0]));
    c.r[20].d[0] = c.r[11].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] << 1);
    c.r[11].d[0] = c.r[11].d[0] << 48;
    set32(c.r[20], c.r[5].w[0] + c.r[20].w[0]);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[14].d[0] = c.r[14].d[0] & 127ull;
    st8((c.r[20].w[0] + 160u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[20].w[0] + 161u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 12;
L_003C8B10:
    c.r[21].d[0] = c.r[11].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[14], c.r[21].w[0] << 1);  if (t) { goto L_003C8B88; } }
    set32(c.r[14], c.r[5].w[0] + c.r[14].w[0]);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0] + 158u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[15].d[0];  if (t) { goto L_003C8B48; } }
    c.r[15].d[0] = c.r[9].d[0] & 255ull;
    c.r[9].d[0] = ld8((c.r[14].w[0] + 159u));
    set32(c.r[9], c.r[9].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0] + 159u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_003C8BA8; } }
    c.budget -= 1;
L_003C8B48:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_003C8B68; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[3].d[0];  if (t) { goto L_003C8B68; } }
    c.r[9].d[0] = ld8((c.r[14].w[0] + 159u));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0] + 159u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_003C8BA8; } }
L_003C8B68:
    set32(c.r[14], c.r[21].w[0] << 1);
    set32(c.r[14], c.r[5].w[0] + c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[14].w[0] + 160u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0] + 161u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_003C8BA8; } }
L_003C8B88:
    set32(c.r[14], c.r[21].w[0] << 1);
    set32(c.r[14], c.r[5].w[0] + c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[14].w[0] + 160u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    st8((c.r[14].w[0] + 161u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 8;
L_003C8BA8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[9].d[0] = c.r[10].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8A60u | kUnwind; return; } goto L_003C8A60; } }
L_003C8BB8:
    c.r[3].d[0] = c.r[12].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003C8C20; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8375u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[11].d[0] << 48;  if (t) { goto L_003C8C20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[7], ld32((c.r[1].w[0] + 18028u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 11633u);
    set32(c.r[3], c.r[3].w[0] + 11632u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = ld8((c.r[7].w[0] + 113u));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 19;
L_003C8C20:
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 20860u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[14], c.r[29].w[0] + 125u);
    set32(c.r[9], c.r[9].w[0] + 11408u);
    set32(c.r[3], c.r[3].w[0] + 11440u);
    set32(c.r[5], 0u + 47u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20814u)));
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(0u));
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 30;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C8E50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 18040u)));
    set32(c.r[3], c.r[3].w[0] + 8064u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[18], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[15], c.r[15].w[0] + 15712u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], 0u + 29u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], 0u + 22u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 22256u);
    set32(c.r[19], 0u + 31u);
    c.budget -= 14;
L_003C8CD0:
    c.r[8].d[0] = ld8((c.r[18].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003C8E38; } }
    c.r[8].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[12].d[0] = c.r[8].d[0] << 48;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    c.r[8].d[0] = c.r[12].d[0] & 127ull;
    c.r[13].d[0] = c.r[8].d[0] << 48;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    c.r[1].d[0] = c.r[13].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C8E38; } }
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 7));
    set32(c.r[8], c.r[7].w[0] + c.r[13].w[0]);
    c.r[24].d[0] = c.r[12].d[0] & 1ull;
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[8].d[0] = c.r[24].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != c.r[8].d[0];  if (t) { goto L_003C8E30; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[6].d[0];  if (t) { goto L_003C8D78; } }
    c.r[12].d[0] = ld8((c.r[16].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[12], c.r[8].w[0] + c.r[29].w[0]);  if (t) { goto L_003C8D58; } }
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[20], c.r[12].w[0] + 124u);
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 9;
L_003C8D58:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 30u));
    set32(c.r[12], c.r[5].w[0] << (c.r[12].w[0] & 31u));
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[12].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_003C8E30; } }
    c.budget -= 1;
L_003C8D78:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[4].d[0];  if (t) { goto L_003C8DB8; } }
    c.r[25].d[0] = ld8((c.r[16].w[0] + 31u));
    set32(c.r[12], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[12], c.r[12].w[0] + 124u);
    set32(c.r[24], c.r[9].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = c.r[25].d[0] | 1ull;
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[24].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_003C8E30; } }
L_003C8DB8:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[3].d[0];  if (t) { goto L_003C8E00; } }
    c.r[12].d[0] = ld8((c.r[16].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[12], c.r[8].w[0] + c.r[29].w[0]);  if (t) { goto L_003C8DF0; } }
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[20], c.r[12].w[0] + 124u);
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 9;
L_003C8DF0:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 31u));
    c.r[8].d[0] = c.r[8].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_003C8E30; } }
L_003C8E00:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.budget -= 3;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[12], c.r[8].w[0] + c.r[29].w[0]);  if (t) { goto L_003C8E38; } }
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[20], c.r[12].w[0] + 124u);
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 9;
L_003C8E30:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[19].d[0];  if (t) { goto L_003C8E50; } }
L_003C8E38:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[8].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8CD0u | kUnwind; return; } goto L_003C8CD0; } }
L_003C8E50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 124u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld16((c.r[1].w[0] + 20860u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20814u)));
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C8F68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 18040u)));
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[11], 0u + 51u);
    set32(c.r[12], 0u + 53u);
    set32(c.r[13], 0u + 61u);
    set32(c.r[14], 0u + 55u);
    c.budget -= 9;
L_003C8EA8:
    c.r[10].d[0] = ld8((c.r[9].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_003C8F50; } }
    c.r[10].d[0] = ld8((c.r[8].w[0] + 1u));
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[10].d[0] = c.r[10].d[0] & 127ull;
    c.r[15].d[0] = c.r[10].d[0] << 48;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    c.r[10].d[0] = c.r[15].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull; c.r[1].d[0] = c.r[15].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_003C8F50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C8F50; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[14].d[0];  if (t) { goto L_003C8F50; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[13].d[0];  if (t) { goto L_003C8F50; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[12].d[0];  if (t) { goto L_003C8F50; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[1].d[0] = c.r[15].sd[0] < 57ll ? 1ull : 0ull;  if (t) { goto L_003C8F30; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[10].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_003C8F30; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st8((c.r[10].w[0] + 2052u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 10;
L_003C8F30:
    c.r[10].d[0] = c.r[5].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    st8((c.r[10].w[0] + 2052u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
L_003C8F50:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[10].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8EA8u | kUnwind; return; } goto L_003C8EA8; } }
    c.budget -= 1;
L_003C8F68:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003C8F98; } }
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + 8064u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], 0u + 51u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st8((c.r[4].w[0] + 2052u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 10;
L_003C8F98:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C9010; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[9], c.r[9].w[0] + 11472u);
    set32(c.r[4], 0u + 65u);
    c.budget -= 4;
L_003C8FB8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 160u)));
    c.r[3].d[0] = c.r[6].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C8FD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_003C9000; } }
L_003C8FD0:
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[6], 0u + 63u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 2052u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_003C9010; } }
    c.budget -= 1;
L_003C9000:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8FB8u | kUnwind; return; } goto L_003C8FB8; } }
L_003C9010:
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C9040:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 29u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C91B0; } }
    st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 11473u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 11392u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 21;
L_003C90A0:
    set32(c.r[3], c.r[5].w[0] << (c.r[10].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C90C0; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_003C90C0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C90A0u | kUnwind; return; } goto L_003C90A0; } }
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C90F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[1].w[0] + 11392u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C90F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] & 8ull;  if (t) { goto L_003C9190; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C9128; } }
    c.r[3].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C9128; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C9190; } }
L_003C9128:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C9180; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 11392u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
L_003C9148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003C9168; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 11392u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003C9190; } }
L_003C9168:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9148u | kUnwind; return; } goto L_003C9148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9190; } }
L_003C9180:
    c.r[3].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C9190; } }
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003C9190:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 11392u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003C91B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C91C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91E4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003C91E4u) [[unlikely]] return; }
L_003C91E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C91F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C9268; } }
    c.budget -= 1;
L_003C91F8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[3], c.r[3].w[0] - 26800u);
    set32(c.r[2], c.r[2].w[0] - 28032u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9260u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003C9260u) [[unlikely]] return; }
L_003C9260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003C9268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22480u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C92B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9318; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003C9318; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + 2112u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92F4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C92F4u) [[unlikely]] return; }
L_003C92F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9300u); set32(c.r[4], c.r[4].w[0] + 22400u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C9300u) [[unlikely]] return; }
L_003C9300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9308u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C9308u) [[unlikely]] return; }
L_003C9308:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9314u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 48u, depth + 1u); else { c.pc = 0x003C9330u; return; } if (c.pc != 0x003C9314u) [[unlikely]] return; }
L_003C9314:
    c.budget -= 1;
L_003C9318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 70u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8658u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9368; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C9388; } }
    c.budget -= 1;
L_003C9368:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9380u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B2(c, 69u, depth + 1u); else { c.pc = 0x003C95F0u; return; } if (c.pc != 0x003C9380u) [[unlikely]] return; }
L_003C9380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C93F8; } }
L_003C9388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C93A8u) [[unlikely]] return; }
L_003C93A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93B0u); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C93B0u) [[unlikely]] return; }
L_003C93B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93BCu); set32(c.r[4], c.r[4].w[0] + 22400u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C93BCu) [[unlikely]] return; }
L_003C93BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93C4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C93C4u) [[unlikely]] return; }
L_003C93C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93CCu); c.r[4].d[0] = ld16((c.r[17].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003C93CCu) [[unlikely]] return; }
L_003C93CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93D4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003C93D4u) [[unlikely]] return; }
L_003C93D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93DCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003C93DCu) [[unlikely]] return; }
L_003C93DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C93F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C93F8; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003C93F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 304u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], 0u + 40u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9488u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 20u, depth + 1u); else { c.pc = 0x001848B0u; return; } if (c.pc != 0x003C9488u) [[unlikely]] return; }
L_003C9488:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003C9490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C94A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 89u, depth + 1u); else { c.pc = 0x003C97D0u; return; } if (c.pc != 0x003C94BCu) [[unlikely]] return; }
L_003C94BC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9568; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94F4u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003C94F4u) [[unlikely]] return; }
L_003C94F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 90u);  if (t) { goto L_003C9548; } }
    set32(c.r[2], 0u + 3u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9514u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003C9514u) [[unlikely]] return; }
L_003C9514:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003C9520u) [[unlikely]] return; }
L_003C9520:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9530u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x003C9530u) [[unlikely]] return; }
L_003C9530:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C953Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003C953Cu) [[unlikely]] return; }
L_003C953C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9568; } }
    c.budget -= 1;
L_003C9548:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9564u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003C9564u) [[unlikely]] return; }
L_003C9564:
    c.budget -= 1;
L_003C9568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9580:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C95B8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003C95B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C95C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C95E8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003C95E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C95F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 70u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8658u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C9628; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C9720; } }
L_003C9628:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C9670; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9658; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C9668; } }
    c.budget -= 1;
L_003C9658:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C9668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9720; } }
L_003C9670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9720; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003C96D0; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C969Cu); st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168580u; return; } if (c.pc != 0x003C969Cu) [[unlikely]] return; }
L_003C969C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 22416u);
    c.budget -= 3;
L_003C96A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x003C96B4u) [[unlikely]] return; }
L_003C96B4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C96A8u | kUnwind; return; } goto L_003C96A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9720; } }
    c.budget -= 1;
L_003C96D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96D8u); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C96D8u) [[unlikely]] return; }
L_003C96D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96E4u); set32(c.r[4], c.r[4].w[0] + 22400u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C96E4u) [[unlikely]] return; }
L_003C96E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96ECu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C96ECu) [[unlikely]] return; }
L_003C96EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96F4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003C96F4u) [[unlikely]] return; }
L_003C96F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96FCu); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003C96FCu) [[unlikely]] return; }
L_003C96FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9704u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003C9704u) [[unlikely]] return; }
L_003C9704:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C9720; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C9720; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003C9720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9740:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003C9750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9770u); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C9770u) [[unlikely]] return; }
L_003C9770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C977Cu); set32(c.r[4], c.r[4].w[0] + 22400u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C977Cu) [[unlikely]] return; }
L_003C977C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9784u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C9784u) [[unlikely]] return; }
L_003C9784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C978Cu); c.r[4].d[0] = ld16((c.r[17].w[0] + 84u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003C978Cu) [[unlikely]] return; }
L_003C978C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9794u); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003C9794u) [[unlikely]] return; }
L_003C9794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C979Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003C979Cu) [[unlikely]] return; }
L_003C979C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97A4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C97A4u) [[unlikely]] return; }
L_003C97A4:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x003C97B0u) [[unlikely]] return; }
L_003C97B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C97D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] + 1296u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97F0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x003C97F0u) [[unlikely]] return; }
L_003C97F0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9800u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002E(c, 137u, depth + 1u); else { c.pc = 0x001B9C80u; return; } if (c.pc != 0x003C9800u) [[unlikely]] return; }
L_003C9800:
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 273u);  if (t) { goto L_003C9830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003C9850; } }
    c.budget -= 1;
L_003C9830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u - 273u);  if (t) { goto L_003C9850; } }
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_003C9850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 182u);  if (t) { goto L_003C9878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003C9898; } }
L_003C9878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3360000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u - 182u);  if (t) { goto L_003C9898; } }
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_003C9898:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45E30000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 7280u);  if (t) { goto L_003C98E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003C9900; } }
L_003C98E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC5E30000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u - 7280u);  if (t) { goto L_003C9900; } }
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003C9900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x458E0000u);
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 4550u);  if (t) { goto L_003C9930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003C9950; } }
    c.budget -= 1;
L_003C9930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC58E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u - 4550u);  if (t) { goto L_003C9950; } }
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_003C9950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9960:
    set32(c.r[4], c.r[4].w[0] + 2132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 22512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C9990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C9A40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C99F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C99D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9AB0; } }
    c.budget -= 1;
L_003C99D0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C99E0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 307u, depth + 1u); else { c.pc = 0x003FB600u; return; } if (c.pc != 0x003C99E0u) [[unlikely]] return; }
L_003C99E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003C99F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C99F8u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003C99F8u) [[unlikely]] return; }
L_003C99F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9AB0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8120u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A24u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003C9A24u) [[unlikely]] return; }
L_003C9A24:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A34u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003C9A34u) [[unlikely]] return; }
L_003C9A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9AB0; } }
    c.budget -= 1;
L_003C9A40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C9A88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003C9AB0; } }
    c.budget -= 1;
L_003C9A88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003C9AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9AB8u);  if (depth < kMaxDepth) unit_00B2(c, 179u, depth + 1u); else { c.pc = 0x003CA3C0u; return; } if (c.pc != 0x003C9AB8u) [[unlikely]] return; }
L_003C9AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9AC0u);  if (depth < kMaxDepth) unit_00B2(c, 183u, depth + 1u); else { c.pc = 0x003CA3F0u; return; } if (c.pc != 0x003C9AC0u) [[unlikely]] return; }
L_003C9AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9AE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B0Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 350u, depth + 1u); else { c.pc = 0x0040B6C0u; return; } if (c.pc != 0x003C9B0Cu) [[unlikely]] return; }
L_003C9B0C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9D28; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C9D00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9CE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9CC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C9B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9D80; } }
L_003C9B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B58u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C9B58u) [[unlikely]] return; }
L_003C9B58:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B70u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003C9B70u) [[unlikely]] return; }
L_003C9B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9BA8; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B8Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C9B8Cu) [[unlikely]] return; }
L_003C9B8C:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003C9B98u) [[unlikely]] return; }
L_003C9B98:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C9D80; } }
L_003C9BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BB0u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003C9BB0u) [[unlikely]] return; }
L_003C9BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BC0u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003C9BC0u) [[unlikely]] return; }
L_003C9BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[2], c.r[2].w[0] + 8064u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20864u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BE8u); c.r[19].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003C9BE8u) [[unlikely]] return; }
L_003C9BE8:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003C9C28; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C10u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C9C10u) [[unlikely]] return; }
L_003C9C10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003C9C1Cu) [[unlikely]] return; }
L_003C9C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9D80; } }
    c.budget -= 1;
L_003C9C28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C34u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C9C34u) [[unlikely]] return; }
L_003C9C34:
    c.budget -= 1;
L_003C9C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C40u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003C9C40u) [[unlikely]] return; }
L_003C9C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9C70; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C5Cu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C9C5Cu) [[unlikely]] return; }
L_003C9C5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003C9C68u) [[unlikely]] return; }
L_003C9C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9D80; } }
L_003C9C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C78u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 311u, depth + 1u); else { c.pc = 0x003FB660u; return; } if (c.pc != 0x003C9C78u) [[unlikely]] return; }
L_003C9C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9CB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C94u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003C9C94u) [[unlikely]] return; }
L_003C9C94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003C9CA0u) [[unlikely]] return; }
L_003C9CA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CACu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C9CACu) [[unlikely]] return; }
L_003C9CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9D80; } }
    c.budget -= 1;
L_003C9CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003C9CC0u) [[unlikely]] return; }
L_003C9CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9D80; } }
L_003C9CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003C9CD0u) [[unlikely]] return; }
L_003C9CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C9D80; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C9D80; } }
L_003C9CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C9D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C9D80; } }
L_003C9D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003C9D08u) [[unlikely]] return; }
L_003C9D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C9D80; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C9D80; } }
L_003C9D28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 4u);  if (t) { goto L_003C9D58; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_003C9D80; } }
    c.budget -= 1;
L_003C9D58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003C9D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D88u);  if (depth < kMaxDepth) unit_00B2(c, 179u, depth + 1u); else { c.pc = 0x003CA3C0u; return; } if (c.pc != 0x003C9D88u) [[unlikely]] return; }
L_003C9D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D90u);  if (depth < kMaxDepth) unit_00B2(c, 183u, depth + 1u); else { c.pc = 0x003CA3F0u; return; } if (c.pc != 0x003C9D90u) [[unlikely]] return; }
L_003C9D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C9DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003C9E10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9E30; } }
L_003C9DE0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DF0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C9DF0u) [[unlikely]] return; }
L_003C9DF0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x003C9E00u) [[unlikely]] return; }
L_003C9E00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C9E30; } }
    c.budget -= 1;
L_003C9E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E18u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C9E18u) [[unlikely]] return; }
L_003C9E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9E30; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C9E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E38u);  if (depth < kMaxDepth) unit_00B2(c, 179u, depth + 1u); else { c.pc = 0x003CA3C0u; return; } if (c.pc != 0x003C9E38u) [[unlikely]] return; }
L_003C9E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E40u);  if (depth < kMaxDepth) unit_00B2(c, 183u, depth + 1u); else { c.pc = 0x003CA3F0u; return; } if (c.pc != 0x003C9E40u) [[unlikely]] return; }
L_003C9E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22536u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9E88u) [[unlikely]] return; }
L_003C9E88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C9EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CA058; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C9FC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C9F90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C9F48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C9F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA080; } }
L_003C9F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F20u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x003C9F20u) [[unlikely]] return; }
L_003C9F20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003CA090; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003CA090; } }
L_003C9F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F50u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C9F50u) [[unlikely]] return; }
L_003C9F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA090; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F68u); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003C9F68u) [[unlikely]] return; }
L_003C9F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F70u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003C9F70u) [[unlikely]] return; }
L_003C9F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F78u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003C9F78u) [[unlikely]] return; }
L_003C9F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F80u);  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x003C9F80u) [[unlikely]] return; }
L_003C9F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F88u);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9E10u; return; } if (c.pc != 0x003C9F88u) [[unlikely]] return; }
L_003C9F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA090; } }
L_003C9F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F98u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C9F98u) [[unlikely]] return; }
L_003C9F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA090; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FB8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00BE(c, 135u, depth + 1u); else { c.pc = 0x003F9FF0u; return; } if (c.pc != 0x003C9FB8u) [[unlikely]] return; }
L_003C9FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA090; } }
L_003C9FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FC8u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003C9FC8u) [[unlikely]] return; }
L_003C9FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA090; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FFCu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x003C9FFCu) [[unlikely]] return; }
L_003C9FFC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA010u); set32(c.r[18], c.r[18].w[0] + 8120u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003CA010u) [[unlikely]] return; }
L_003CA010:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA02Cu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003CA02Cu) [[unlikely]] return; }
L_003CA02C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA038u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003CA038u) [[unlikely]] return; }
L_003CA038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA044u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8069u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x003CA044u) [[unlikely]] return; }
L_003CA044:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CA090; } }
    c.budget -= 1;
L_003CA058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA060u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003CA060u) [[unlikely]] return; }
L_003CA060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA078; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003CA078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003CA090; } }
L_003CA080:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003CA090:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003CA0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0A0u);  if (depth < kMaxDepth) unit_00B2(c, 179u, depth + 1u); else { c.pc = 0x003CA3C0u; return; } if (c.pc != 0x003CA0A0u) [[unlikely]] return; }
L_003CA0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0A8u);  if (depth < kMaxDepth) unit_00B2(c, 183u, depth + 1u); else { c.pc = 0x003CA3F0u; return; } if (c.pc != 0x003CA0A8u) [[unlikely]] return; }
L_003CA0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CA0C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0D4u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003CA0D4u) [[unlikely]] return; }
L_003CA0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0DCu);  if (depth < kMaxDepth) unit_00B2(c, 179u, depth + 1u); else { c.pc = 0x003CA3C0u; return; } if (c.pc != 0x003CA0DCu) [[unlikely]] return; }
L_003CA0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0E4u);  if (depth < kMaxDepth) unit_00B2(c, 183u, depth + 1u); else { c.pc = 0x003CA3F0u; return; } if (c.pc != 0x003CA0E4u) [[unlikely]] return; }
L_003CA0E4:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003CA0F0u) [[unlikely]] return; }
L_003CA0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA100:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CA120:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003CA150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA164u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003CA164u) [[unlikely]] return; }
L_003CA164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA174u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003CA174u) [[unlikely]] return; }
L_003CA174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA190; } }
    c.budget -= 1;
L_003CA180:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CA1B0; } }
L_003CA190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA198u);  if (depth < kMaxDepth) unit_0066(c, 96u, depth + 1u); else { c.pc = 0x00299160u; return; } if (c.pc != 0x003CA198u) [[unlikely]] return; }
L_003CA198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA1B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003CA1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA1C0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238040u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 5u, depth); }
L_003CA1F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CA210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA240u); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x003CA240u) [[unlikely]] return; }
L_003CA240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA248u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x003CA248u) [[unlikely]] return; }
L_003CA248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 27u, depth + 1u); else { c.pc = 0x002F46D0u; return; } if (c.pc != 0x003CA274u) [[unlikely]] return; }
L_003CA274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA288; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003CA288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA2A0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238040u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 5u, depth); }
L_003CA2C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22616u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CA2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22632u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 40u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    st32((c.r[3].w[0]), c.f[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA334u); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x003CA334u) [[unlikely]] return; }
L_003CA334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA33Cu);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x003CA33Cu) [[unlikely]] return; }
L_003CA33C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA34Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 37u)));  if (depth < kMaxDepth) unit_00C5(c, 131u, depth + 1u); else { c.pc = 0x00414FC0u; return; } if (c.pc != 0x003CA34Cu) [[unlikely]] return; }
L_003CA34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 133u, depth + 1u); else { c.pc = 0x004151C0u; return; } if (c.pc != 0x003CA374u) [[unlikely]] return; }
L_003CA374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA388; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003CA388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA3A0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238040u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 5u, depth); }
L_003CA3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3D0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003CA3D0u) [[unlikely]] return; }
L_003CA3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3D8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003CA3D8u) [[unlikely]] return; }
L_003CA3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3E0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003CA3E0u) [[unlikely]] return; }
L_003CA3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA404u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003CA404u) [[unlikely]] return; }
L_003CA404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA410u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003CA410u) [[unlikely]] return; }
L_003CA410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 2132u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 22656u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA450u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CA450u) [[unlikely]] return; }
L_003CA450:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA45Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB8E0u; return; } if (c.pc != 0x003CA45Cu) [[unlikely]] return; }
L_003CA45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA464u);  if (depth < kMaxDepth) unit_00B2(c, 326u, depth + 1u); else { c.pc = 0x003CB910u; return; } if (c.pc != 0x003CA464u) [[unlikely]] return; }
L_003CA464:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CA528; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CA4D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA598; } }
    c.budget -= 1;
L_003CA4C0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4D0u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00BE(c, 307u, depth + 1u); else { c.pc = 0x003FB600u; return; } if (c.pc != 0x003CA4D0u) [[unlikely]] return; }
L_003CA4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4D8u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00BE(c, 316u, depth + 1u); else { c.pc = 0x003FB900u; return; } if (c.pc != 0x003CA4D8u) [[unlikely]] return; }
L_003CA4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4E0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003CA4E0u) [[unlikely]] return; }
L_003CA4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA598; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8120u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA50Cu); st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003CA50Cu) [[unlikely]] return; }
L_003CA50C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA51Cu); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003CA51Cu) [[unlikely]] return; }
L_003CA51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA598; } }
    c.budget -= 1;
L_003CA528:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CA570; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003CA598; } }
    c.budget -= 1;
L_003CA570:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003CA598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA5DCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 350u, depth + 1u); else { c.pc = 0x0040B6C0u; return; } if (c.pc != 0x003CA5DCu) [[unlikely]] return; }
L_003CA5DC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CA828; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003CA800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CA7C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CA798; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA880; } }
L_003CA628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA630u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CA630u) [[unlikely]] return; }
L_003CA630:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA648u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003CA648u) [[unlikely]] return; }
L_003CA648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA680; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA664u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CA664u) [[unlikely]] return; }
L_003CA664:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003CA670u) [[unlikely]] return; }
L_003CA670:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CA880; } }
L_003CA680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA688u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003CA688u) [[unlikely]] return; }
L_003CA688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA698u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003CA698u) [[unlikely]] return; }
L_003CA698:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    set32(c.r[2], c.r[2].w[0] + 8064u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20860u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA6C0u); c.r[19].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003CA6C0u) [[unlikely]] return; }
L_003CA6C0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003CA700; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA6E8u); st8((c.r[18].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CA6E8u) [[unlikely]] return; }
L_003CA6E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA6F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003CA6F4u) [[unlikely]] return; }
L_003CA6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA880; } }
    c.budget -= 1;
L_003CA700:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA70Cu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CA70Cu) [[unlikely]] return; }
L_003CA70C:
    c.budget -= 1;
L_003CA710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA718u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003CA718u) [[unlikely]] return; }
L_003CA718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA748; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA734u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CA734u) [[unlikely]] return; }
L_003CA734:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA740u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003CA740u) [[unlikely]] return; }
L_003CA740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA880; } }
L_003CA748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA750u); set32(c.r[4], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_00BE(c, 311u, depth + 1u); else { c.pc = 0x003FB660u; return; } if (c.pc != 0x003CA750u) [[unlikely]] return; }
L_003CA750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA788; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA764u); set32(c.r[5], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003CA764u) [[unlikely]] return; }
L_003CA764:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA770u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003CA770u) [[unlikely]] return; }
L_003CA770:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA77Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CA77Cu) [[unlikely]] return; }
L_003CA77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA880; } }
    c.budget -= 1;
L_003CA788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003CA790u) [[unlikely]] return; }
L_003CA790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA880; } }
L_003CA798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003CA7A0u) [[unlikely]] return; }
L_003CA7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA880; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7C0u); st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003CA7C0u) [[unlikely]] return; }
L_003CA7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA880; } }
L_003CA7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003CA7D0u) [[unlikely]] return; }
L_003CA7D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA880; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CA880; } }
L_003CA7E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CA880; } }
L_003CA800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003CA808u) [[unlikely]] return; }
L_003CA808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA880; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CA880; } }
L_003CA828:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_003CA858; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_003CA880; } }
    c.budget -= 1;
L_003CA858:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003CA880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CA8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22672u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA8C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CA8C8u) [[unlikely]] return; }
L_003CA8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA8F4u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003CA8F4u) [[unlikely]] return; }
L_003CA8F4:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003CA900u) [[unlikely]] return; }
L_003CA900:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CA9F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CA9B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAAA0; } }
    c.budget -= 1;
L_003CA950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA958u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003CA958u) [[unlikely]] return; }
L_003CA958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CAAD8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA974u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BE(c, 320u, depth + 1u); else { c.pc = 0x003FB9C0u; return; } if (c.pc != 0x003CA974u) [[unlikely]] return; }
L_003CA974:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 300u, depth + 1u); else { c.pc = 0x003CB180u; return; } if (c.pc != 0x003CA980u) [[unlikely]] return; }
L_003CA980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA988u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003CA988u) [[unlikely]] return; }
L_003CA988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA990u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003CA990u) [[unlikely]] return; }
L_003CA990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA998u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003CA998u) [[unlikely]] return; }
L_003CA998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9A0u);  if (depth < kMaxDepth) unit_00BE(c, 175u, depth + 1u); else { c.pc = 0x003FA550u; return; } if (c.pc != 0x003CA9A0u) [[unlikely]] return; }
L_003CA9A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003CAAD8; } }
L_003CA9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9B8u);  if (depth < kMaxDepth) unit_00BE(c, 185u, depth + 1u); else { c.pc = 0x003FA650u; return; } if (c.pc != 0x003CA9B8u) [[unlikely]] return; }
L_003CA9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAAD8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 11824u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9E4u); set32(c.r[5], c.r[5].w[0] + 11792u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021F070u; return; } if (c.pc != 0x003CA9E4u) [[unlikely]] return; }
L_003CA9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAAD8; } }
    c.budget -= 1;
L_003CA9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9F8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003CA9F8u) [[unlikely]] return; }
L_003CA9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CAAD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA24u); set32(c.r[4], c.r[4].w[0] + 11824u);  if (depth < kMaxDepth) unit_0047(c, 234u, depth + 1u); else { c.pc = 0x0021F300u; return; } if (c.pc != 0x003CAA24u) [[unlikely]] return; }
L_003CAA24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA3Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x003CAA3Cu) [[unlikely]] return; }
L_003CAA3C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 31u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA50u); set32(c.r[17], c.r[17].w[0] + 8120u);  if (depth < kMaxDepth) unit_00C4(c, 245u, depth + 1u); else { c.pc = 0x00412DB0u; return; } if (c.pc != 0x003CAA50u) [[unlikely]] return; }
L_003CAA50:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 20u, depth + 1u); else { c.pc = 0x004142A0u; return; } if (c.pc != 0x003CAA68u) [[unlikely]] return; }
L_003CAA68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA88u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_00C5(c, 22u, depth + 1u); else { c.pc = 0x00414330u; return; } if (c.pc != 0x003CAA88u) [[unlikely]] return; }
L_003CAA88:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA94u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003CAA94u) [[unlikely]] return; }
L_003CAA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAAD8; } }
    c.budget -= 1;
L_003CAAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAAA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003CAAA8u) [[unlikely]] return; }
L_003CAAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAAD8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 8117u);
    set32(c.r[2], 0u + 58u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAAD8u); c.r[4].d[0] = ld8((c.r[4].w[0]));  if (depth < kMaxDepth) unit_004E(c, 44u, depth + 1u); else { c.pc = 0x00238490u; return; } if (c.pc != 0x003CAAD8u) [[unlikely]] return; }
L_003CAAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CAAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 33u, depth + 1u); else { c.pc = 0x0023C870u; return; } if (c.pc != 0x003CAB08u) [[unlikely]] return; }
L_003CAB08:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAF20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CAB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
L_003CAB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB30u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CAB30u) [[unlikely]] return; }
L_003CAB30:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB48u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003CAB48u) [[unlikely]] return; }
L_003CAB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAB80; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB64u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CAB64u) [[unlikely]] return; }
L_003CAB64:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003CAB70u) [[unlikely]] return; }
L_003CAB70:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CAF38; } }
L_003CAB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB88u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003CAB88u) [[unlikely]] return; }
L_003CAB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CABC0; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABA0u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB8D0u; return; } if (c.pc != 0x003CABA0u) [[unlikely]] return; }
L_003CABA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 54u, depth + 1u); else { c.pc = 0x002387E0u; return; } if (c.pc != 0x003CABA8u) [[unlikely]] return; }
L_003CABA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABB4u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CABB4u) [[unlikely]] return; }
L_003CABB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
    c.budget -= 1;
L_003CABC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABC8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CABC8u) [[unlikely]] return; }
L_003CABC8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003CABE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABE0u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00C5(c, 21u, depth + 1u); else { c.pc = 0x00414320u; return; } if (c.pc != 0x003CABE0u) [[unlikely]] return; }
L_003CABE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
L_003CABE8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABF4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BE(c, 242u, depth + 1u); else { c.pc = 0x003FB060u; return; } if (c.pc != 0x003CABF4u) [[unlikely]] return; }
L_003CABF4:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 31u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC08u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 243u, depth + 1u); else { c.pc = 0x003FB0D0u; return; } if (c.pc != 0x003CAC08u) [[unlikely]] return; }
L_003CAC08:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CAC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC20u);  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB8D0u; return; } if (c.pc != 0x003CAC20u) [[unlikely]] return; }
L_003CAC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 54u, depth + 1u); else { c.pc = 0x002387E0u; return; } if (c.pc != 0x003CAC28u) [[unlikely]] return; }
L_003CAC28:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2052u)));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC54u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CAC54u) [[unlikely]] return; }
L_003CAC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
    c.budget -= 1;
L_003CAC60:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003CAC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC74u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x003CAC74u) [[unlikely]] return; }
L_003CAC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CAC80; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_003CAC80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003CACD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC94u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x003CAC94u) [[unlikely]] return; }
L_003CAC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CACD8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACA8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));  if (depth < kMaxDepth) unit_00B2(c, 317u, depth + 1u); else { c.pc = 0x003CB7F0u; return; } if (c.pc != 0x003CACA8u) [[unlikely]] return; }
L_003CACA8:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACCCu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00C5(c, 20u, depth + 1u); else { c.pc = 0x004142A0u; return; } if (c.pc != 0x003CACCCu) [[unlikely]] return; }
L_003CACCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
    c.budget -= 1;
L_003CACD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003CAE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACECu);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CACECu) [[unlikely]] return; }
L_003CACEC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD04u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003CAD04u) [[unlikely]] return; }
L_003CAD04:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CAD50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003CAD50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] + 26688u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_003CAE20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CADC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADA0u);  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB8D0u; return; } if (c.pc != 0x003CADA0u) [[unlikely]] return; }
L_003CADA0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x003CADB8u) [[unlikely]] return; }
L_003CADB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAE20; } }
L_003CADC0:
    c.r[2].d[0] = c.r[3].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CAE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADD4u);  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB8D0u; return; } if (c.pc != 0x003CADD4u) [[unlikely]] return; }
L_003CADD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22555u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18416u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x003CADFCu) [[unlikely]] return; }
L_003CADFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAE20; } }
    c.budget -= 1;
L_003CAE08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[3].w[0] - 47u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x003CAE20u) [[unlikely]] return; }
L_003CAE20:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[17], c.r[17].w[0] + 8120u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE3Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 20u, depth + 1u); else { c.pc = 0x004142A0u; return; } if (c.pc != 0x003CAE3Cu) [[unlikely]] return; }
L_003CAE3C:
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE4Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 23u, depth + 1u); else { c.pc = 0x00414340u; return; } if (c.pc != 0x003CAE4Cu) [[unlikely]] return; }
L_003CAE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
    c.budget -= 1;
L_003CAE58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CAF38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], 0u + 3u);  if (t) { goto L_003CAF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE7Cu);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CAE7Cu) [[unlikely]] return; }
L_003CAE7C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CAEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE94u);  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB8D0u; return; } if (c.pc != 0x003CAE94u) [[unlikely]] return; }
L_003CAE94:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEA0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));  if (depth < kMaxDepth) unit_00B2(c, 317u, depth + 1u); else { c.pc = 0x003CB7F0u; return; } if (c.pc != 0x003CAEA0u) [[unlikely]] return; }
L_003CAEA0:
    set32(c.r[7], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[17], c.r[17].w[0] + 8120u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEC4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 20u, depth + 1u); else { c.pc = 0x004142A0u; return; } if (c.pc != 0x003CAEC4u) [[unlikely]] return; }
L_003CAEC4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAED8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 23u, depth + 1u); else { c.pc = 0x00414340u; return; } if (c.pc != 0x003CAED8u) [[unlikely]] return; }
L_003CAED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF38; } }
L_003CAEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 308u, depth + 1u); else { c.pc = 0x003CB4F0u; return; } if (c.pc != 0x003CAEE8u) [[unlikely]] return; }
L_003CAEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAF38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CAF08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAF38; } }
L_003CAF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB8D0u; return; } if (c.pc != 0x003CAF10u) [[unlikely]] return; }
L_003CAF10:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_003CAF38; } }
    c.budget -= 1;
L_003CAF20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CAF38; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003CAF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CAF50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB0C0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003CB040; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003CB010; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003CAFB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CAFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB0E0; } }
    c.budget -= 1;
L_003CAFA0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFB0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003CAFB0u) [[unlikely]] return; }
L_003CAFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB0E0; } }
L_003CAFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFC0u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003CAFC0u) [[unlikely]] return; }
L_003CAFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB0E0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFD8u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003CAFD8u) [[unlikely]] return; }
L_003CAFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFE0u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003CAFE0u) [[unlikely]] return; }
L_003CAFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFE8u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003CAFE8u) [[unlikely]] return; }
L_003CAFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFF0u);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9E10u; return; } if (c.pc != 0x003CAFF0u) [[unlikely]] return; }
L_003CAFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], 0u + 117u);
    set32(c.r[3], c.r[3].w[0] + 8117u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB008u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 44u, depth + 1u); else { c.pc = 0x00238490u; return; } if (c.pc != 0x003CB008u) [[unlikely]] return; }
L_003CB008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB0E0; } }
L_003CB010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB018u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003CB018u) [[unlikely]] return; }
L_003CB018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CB0E0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB038u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00BE(c, 135u, depth + 1u); else { c.pc = 0x003F9FF0u; return; } if (c.pc != 0x003CB038u) [[unlikely]] return; }
L_003CB038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB0E0; } }
L_003CB040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB048u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003CB048u) [[unlikely]] return; }
L_003CB048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB0E0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB07Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x003CB07Cu) [[unlikely]] return; }
L_003CB07C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB090u); set32(c.r[17], c.r[17].w[0] + 8120u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003CB090u) [[unlikely]] return; }
L_003CB090:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB0ACu); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003CB0ACu) [[unlikely]] return; }
L_003CB0AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB0B8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003CB0B8u) [[unlikely]] return; }
L_003CB0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB0E0; } }
L_003CB0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB0C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003CB0C8u) [[unlikely]] return; }
L_003CB0C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CB0E0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003CB0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CB100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003CB148; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB168; } }
L_003CB130:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB140u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003CB140u) [[unlikely]] return; }
L_003CB140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB168; } }
L_003CB148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB150u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003CB150u) [[unlikely]] return; }
L_003CB150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB168; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003CB168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[1].w[0] + 18040u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 20u), 0u);
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 35;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CB238; } }
    c.budget -= 1;
L_003CB218:
    c.r[3].d[0] = c.r[3].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB230; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CB238; } }
L_003CB230:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_003CB238:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] + 26688u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CB280; } }
    c.budget -= 1;
L_003CB260:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB260u | kUnwind; return; } goto L_003CB260; } }
    c.budget -= 1;
L_003CB280:
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);  if (t) { goto L_003CB498; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[17].d[0] = ld16((c.r[1].w[0] + 20860u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20814u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2ACu); set32(c.r[6], 0u + 47u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003CB2ACu) [[unlikely]] return; }
L_003CB2AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] - 32496u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
L_003CB2D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003CB310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_003CB300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003CB300:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB2D0u | kUnwind; return; } goto L_003CB2D0; } }
L_003CB310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB318u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003CB318u) [[unlikely]] return; }
L_003CB318:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CB3B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 18040u)));
    set32(c.r[2], c.r[2].w[0] + 8064u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[9], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] + 15712u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
L_003CB348:
    c.r[2].d[0] = ld8((c.r[9].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CB398; } }
    c.r[2].d[0] = ld8((c.r[8].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CB398; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003CB398:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB348u | kUnwind; return; } goto L_003CB348; } }
L_003CB3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB3B8u);  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003CB3B8u) [[unlikely]] return; }
L_003CB3B8:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003CB450; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[13], ld32((c.r[1].w[0] + 18040u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[12], c.r[12].w[0] + 15712u);
    set32(c.r[11], c.r[11].w[0] + 11825u);
    set32(c.r[10], c.r[10].w[0] + 11793u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
L_003CB3F0:
    c.r[3].d[0] = ld8((c.r[13].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[1].d[0] = c.r[7].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);  if (t) { goto L_003CB438; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB438; } }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
L_003CB438:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB3F0u | kUnwind; return; } goto L_003CB3F0; } }
    c.budget -= 1;
L_003CB450:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[6].w[0] + 15712u);
    set32(c.r[4], c.r[4].w[0] + 11824u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] - 1u);
    st8((c.r[1].w[0] + 11824u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[1].w[0] + 11792u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CB4B8; } }
L_003CB498:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[1].w[0] + 11824u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 11825u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003CB4B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 11824u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CB4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB7C8; } }
L_003CB520:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB53Cu); c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CB53Cu) [[unlikely]] return; }
L_003CB53C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB5A8; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CB570; } }
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CB658; } }
L_003CB570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_003CB598; } }
    set32(c.r[2], c.r[3].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CB658; } }
    c.budget -= 1;
L_003CB598:
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_003CB658; } }
    c.budget -= 1;
L_003CB5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB5B0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CB5B0u) [[unlikely]] return; }
L_003CB5B0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB658; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] - 4u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_003CB610; } }
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_003CB608; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CB658; } }
    c.budget -= 1;
L_003CB608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_003CB658; } }
L_003CB610:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003CB640; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CB658; } }
    c.budget -= 1;
L_003CB640:
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003CB658:
    c.r[19].d[0] = c.r[16].d[0] << 56;
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB668u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003CB668u) [[unlikely]] return; }
L_003CB668:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB67Cu); set32(c.r[6], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x003CB67Cu) [[unlikely]] return; }
L_003CB67C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003CB700; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CB6D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 17u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CB6C8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CB700; } }
    c.budget -= 1;
L_003CB6C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CB700; } }
L_003CB6D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003CB6F0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CB700; } }
L_003CB6F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003CB700:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB7C8; } }
L_003CB718:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 11824u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CB750; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB778; } }
L_003CB750:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB76Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 20u, depth + 1u); else { c.pc = 0x004142A0u; return; } if (c.pc != 0x003CB76Cu) [[unlikely]] return; }
L_003CB76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB798; } }
    c.budget -= 1;
L_003CB778:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB794u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C5(c, 20u, depth + 1u); else { c.pc = 0x004142A0u; return; } if (c.pc != 0x003CB794u) [[unlikely]] return; }
L_003CB794:
    c.budget -= 1;
L_003CB798:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 17u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7B8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_00C5(c, 22u, depth + 1u); else { c.pc = 0x00414330u; return; } if (c.pc != 0x003CB7B8u) [[unlikely]] return; }
L_003CB7B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7C4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CB7C4u) [[unlikely]] return; }
L_003CB7C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CB7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CB7F0:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[8].w[0] << 1);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 28608u);
    set32(c.r[5], c.r[5].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 22;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);  if (t) { goto L_003CB858; } }
    set32(c.r[2], c.r[2].w[0] + 22304u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
L_003CB858:
    c.r[17].d[0] = c.r[4].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 196u, depth + 1u); else { c.pc = 0x0023AFB0u; return; } if (c.pc != 0x003CB868u) [[unlikely]] return; }
L_003CB868:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB874u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x003CB874u) [[unlikely]] return; }
L_003CB874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB890; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CB8B8; } }
L_003CB890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8A8u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x003CB8A8u) [[unlikely]] return; }
L_003CB8A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 13u);
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003CB8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CB8D0:
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 4;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002387E0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 54u, depth); }
L_003CB8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8F0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003CB8F0u) [[unlikely]] return; }
L_003CB8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8F8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003CB8F8u) [[unlikely]] return; }
L_003CB8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB900u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003CB900u) [[unlikely]] return; }
L_003CB900:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB924u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003CB924u) [[unlikely]] return; }
L_003CB924:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB930u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003CB930u) [[unlikely]] return; }
L_003CB930:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB954u); set32(c.r[16], c.r[4].w[0] + 2132u);  if (depth < kMaxDepth) unit_00B2(c, 360u, depth + 1u); else { c.pc = 0x003CBD70u; return; } if (c.pc != 0x003CB954u) [[unlikely]] return; }
L_003CB954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB95Cu);  if (depth < kMaxDepth) unit_00B2(c, 364u, depth + 1u); else { c.pc = 0x003CBDA0u; return; } if (c.pc != 0x003CB95Cu) [[unlikely]] return; }
L_003CB95C:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CB97Cu) [[unlikely]] return; }
L_003CB97C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBA38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CB9E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBAA8; } }
    c.budget -= 1;
L_003CB9D0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9E0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 307u, depth + 1u); else { c.pc = 0x003FB600u; return; } if (c.pc != 0x003CB9E0u) [[unlikely]] return; }
L_003CB9E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003CB9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9F0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003CB9F0u) [[unlikely]] return; }
L_003CB9F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBAA8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8120u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA1Cu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003CBA1Cu) [[unlikely]] return; }
L_003CBA1C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA2Cu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003CBA2Cu) [[unlikely]] return; }
L_003CBA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBAA8; } }
    c.budget -= 1;
L_003CBA38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CBA80; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003CBAA8; } }
    c.budget -= 1;
L_003CBA80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003CBAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBAC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAECu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 350u, depth + 1u); else { c.pc = 0x0040B6C0u; return; } if (c.pc != 0x003CBAECu) [[unlikely]] return; }
L_003CBAEC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CBCB0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CBC88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CBC68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CBB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBD10; } }
    c.budget -= 1;
L_003CBB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB30u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003CBB30u) [[unlikely]] return; }
L_003CBB30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB40u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003CBB40u) [[unlikely]] return; }
L_003CBB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8064u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20862u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB68u); c.r[19].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003CBB68u) [[unlikely]] return; }
L_003CBB68:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003CBBC8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB88u); st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CBB88u) [[unlikely]] return; }
L_003CBB88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB94u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003CBB94u) [[unlikely]] return; }
L_003CBB94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18044u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 8069u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBC0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x003CBBC0u) [[unlikely]] return; }
L_003CBBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBD10; } }
L_003CBBC8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBD4u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CBBD4u) [[unlikely]] return; }
L_003CBBD4:
    c.budget -= 1;
L_003CBBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBE0u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003CBBE0u) [[unlikely]] return; }
L_003CBBE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBC10; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBFCu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CBBFCu) [[unlikely]] return; }
L_003CBBFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003CBC08u) [[unlikely]] return; }
L_003CBC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBD10; } }
L_003CBC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC18u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 311u, depth + 1u); else { c.pc = 0x003FB660u; return; } if (c.pc != 0x003CBC18u) [[unlikely]] return; }
L_003CBC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBC58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC34u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003CBC34u) [[unlikely]] return; }
L_003CBC34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003CBC40u) [[unlikely]] return; }
L_003CBC40:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC4Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003CBC4Cu) [[unlikely]] return; }
L_003CBC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBD10; } }
    c.budget -= 1;
L_003CBC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003CBC60u) [[unlikely]] return; }
L_003CBC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBD10; } }
L_003CBC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003CBC70u) [[unlikely]] return; }
L_003CBC70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CBD10; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CBD10; } }
L_003CBC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003CBC90u) [[unlikely]] return; }
L_003CBC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CBD10; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CBD10; } }
L_003CBCB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003CBCE8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_003CBD10; } }
    c.budget -= 1;
L_003CBCE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003CBD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CBD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD48u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003CBD48u) [[unlikely]] return; }
L_003CBD48:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003CBD54u) [[unlikely]] return; }
L_003CBD54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CBD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD80u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003CBD80u) [[unlikely]] return; }
L_003CBD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD88u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003CBD88u) [[unlikely]] return; }
L_003CBD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD90u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003CBD90u) [[unlikely]] return; }
L_003CBD90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CBDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDB4u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003CBDB4u) [[unlikely]] return; }
L_003CBDB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDC0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003CBDC0u) [[unlikely]] return; }
L_003CBDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CBDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDF4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003CBDF4u) [[unlikely]] return; }
L_003CBDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CBE50; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 22u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 16784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE50u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003CBE50u) [[unlikely]] return; }
L_003CBE50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBE70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 23088u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CBEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[9], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBED00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull | 40960ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull | 58368ull;
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x45610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 52u), c.r[8].w[0]);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 23;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBF30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CBF30; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8658u));
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CBF30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CBF68; } }
    c.budget -= 1;
L_003CBF30:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CBF60; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CBF60; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8658u));
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CBF60; } }
    st32((c.r[5].w[0] + 336u), 0u);
    c.budget -= 1;
L_003CBF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBFA0; } }
L_003CBF68:
    st32((c.r[16].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF88u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003CBF88u) [[unlikely]] return; }
L_003CBF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF90u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003CBF90u) [[unlikely]] return; }
L_003CBF90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 375u, depth + 1u); else { c.pc = 0x003CBFC0u; return; } if (c.pc != 0x003CBF9Cu) [[unlikely]] return; }
L_003CBF9C:
    c.budget -= 1;
L_003CBFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 2u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B3(c, 2u, depth); } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 8658u));
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B3(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_00B3(c, 1u, depth);
}

}
