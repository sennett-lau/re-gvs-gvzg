#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0027[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126,
    0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0,
    293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 314, 0, 0, 315, 0, 0, 316, 0, 0,
};

void unit_0027(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0019C000;
    case 2u: goto L_0019C008;
    case 3u: goto L_0019C010;
    case 4u: goto L_0019C018;
    case 5u: goto L_0019C020;
    case 6u: goto L_0019C028;
    case 7u: goto L_0019C030;
    case 8u: goto L_0019C038;
    case 9u: goto L_0019C050;
    case 10u: goto L_0019C074;
    case 11u: goto L_0019C0F4;
    case 12u: goto L_0019C108;
    case 13u: goto L_0019C110;
    case 14u: goto L_0019C118;
    case 15u: goto L_0019C120;
    case 16u: goto L_0019C12C;
    case 17u: goto L_0019C134;
    case 18u: goto L_0019C1B0;
    case 19u: goto L_0019C1C4;
    case 20u: goto L_0019C1E8;
    case 21u: goto L_0019C1F8;
    case 22u: goto L_0019C220;
    case 23u: goto L_0019C238;
    case 24u: goto L_0019C240;
    case 25u: goto L_0019C270;
    case 26u: goto L_0019C330;
    case 27u: goto L_0019C598;
    case 28u: goto L_0019C5A4;
    case 29u: goto L_0019C624;
    case 30u: goto L_0019C66C;
    case 31u: goto L_0019C678;
    case 32u: goto L_0019C6C4;
    case 33u: goto L_0019C710;
    case 34u: goto L_0019C77C;
    case 35u: goto L_0019C788;
    case 36u: goto L_0019C79C;
    case 37u: goto L_0019C7A8;
    case 38u: goto L_0019C7F8;
    case 39u: goto L_0019C83C;
    case 40u: goto L_0019C858;
    case 41u: goto L_0019C880;
    case 42u: goto L_0019C8A0;
    case 43u: goto L_0019C8B4;
    case 44u: goto L_0019C8BC;
    case 45u: goto L_0019C8D0;
    case 46u: goto L_0019C904;
    case 47u: goto L_0019C910;
    case 48u: goto L_0019C928;
    case 49u: goto L_0019C940;
    case 50u: goto L_0019C960;
    case 51u: goto L_0019C988;
    case 52u: goto L_0019C9A0;
    case 53u: goto L_0019C9D4;
    case 54u: goto L_0019C9E8;
    case 55u: goto L_0019C9FC;
    case 56u: goto L_0019CA00;
    case 57u: goto L_0019CA3C;
    case 58u: goto L_0019CA4C;
    case 59u: goto L_0019CA70;
    case 60u: goto L_0019CB00;
    case 61u: goto L_0019CB40;
    case 62u: goto L_0019CC18;
    case 63u: goto L_0019CC30;
    case 64u: goto L_0019CC3C;
    case 65u: goto L_0019CC70;
    case 66u: goto L_0019CD9C;
    case 67u: goto L_0019CDB0;
    case 68u: goto L_0019CDDC;
    case 69u: goto L_0019CDE4;
    case 70u: goto L_0019CE00;
    case 71u: goto L_0019CE2C;
    case 72u: goto L_0019CE54;
    case 73u: goto L_0019CE60;
    case 74u: goto L_0019CEB0;
    case 75u: goto L_0019CEF0;
    case 76u: goto L_0019CF50;
    case 77u: goto L_0019CF5C;
    case 78u: goto L_0019CF64;
    case 79u: goto L_0019CF8C;
    case 80u: goto L_0019CFA0;
    case 81u: goto L_0019CFCC;
    case 82u: goto L_0019CFD4;
    case 83u: goto L_0019CFF8;
    case 84u: goto L_0019D00C;
    case 85u: goto L_0019D01C;
    case 86u: goto L_0019D03C;
    case 87u: goto L_0019D070;
    case 88u: goto L_0019D084;
    case 89u: goto L_0019D0A0;
    case 90u: goto L_0019D0A8;
    case 91u: goto L_0019D0CC;
    case 92u: goto L_0019D10C;
    case 93u: goto L_0019D134;
    case 94u: goto L_0019D144;
    case 95u: goto L_0019D154;
    case 96u: goto L_0019D170;
    case 97u: goto L_0019D1C0;
    case 98u: goto L_0019D1D0;
    case 99u: goto L_0019D1F4;
    case 100u: goto L_0019D238;
    case 101u: goto L_0019D254;
    case 102u: goto L_0019D25C;
    case 103u: goto L_0019D304;
    case 104u: goto L_0019D35C;
    case 105u: goto L_0019D3B4;
    case 106u: goto L_0019D3F4;
    case 107u: goto L_0019D430;
    case 108u: goto L_0019D460;
    case 109u: goto L_0019D46C;
    case 110u: goto L_0019D478;
    case 111u: goto L_0019D4B0;
    case 112u: goto L_0019D4C0;
    case 113u: goto L_0019D4DC;
    case 114u: goto L_0019D4FC;
    case 115u: goto L_0019D508;
    case 116u: goto L_0019D51C;
    case 117u: goto L_0019D544;
    case 118u: goto L_0019D554;
    case 119u: goto L_0019D55C;
    case 120u: goto L_0019D594;
    case 121u: goto L_0019D5A8;
    case 122u: goto L_0019D5CC;
    case 123u: goto L_0019D628;
    case 124u: goto L_0019D664;
    case 125u: goto L_0019D674;
    case 126u: goto L_0019D67C;
    case 127u: goto L_0019D690;
    case 128u: goto L_0019D698;
    case 129u: goto L_0019D6C4;
    case 130u: goto L_0019D6D4;
    case 131u: goto L_0019D6DC;
    case 132u: goto L_0019D6F0;
    case 133u: goto L_0019D6F8;
    case 134u: goto L_0019D730;
    case 135u: goto L_0019D760;
    case 136u: goto L_0019D78C;
    case 137u: goto L_0019D79C;
    case 138u: goto L_0019D7D0;
    case 139u: goto L_0019D838;
    case 140u: goto L_0019D870;
    case 141u: goto L_0019D8A8;
    case 142u: goto L_0019D8B8;
    case 143u: goto L_0019D8D0;
    case 144u: goto L_0019D930;
    case 145u: goto L_0019D9C0;
    case 146u: goto L_0019D9DC;
    case 147u: goto L_0019DA08;
    case 148u: goto L_0019DA48;
    case 149u: goto L_0019DAD0;
    case 150u: goto L_0019DB28;
    case 151u: goto L_0019DB60;
    case 152u: goto L_0019DB88;
    case 153u: goto L_0019DBB0;
    case 154u: goto L_0019DC40;
    case 155u: goto L_0019DC6C;
    case 156u: goto L_0019DCD0;
    case 157u: goto L_0019DD00;
    case 158u: goto L_0019DD30;
    case 159u: goto L_0019DD70;
    case 160u: goto L_0019DD88;
    case 161u: goto L_0019DDB8;
    case 162u: goto L_0019DDCC;
    case 163u: goto L_0019DDE8;
    case 164u: goto L_0019DE08;
    case 165u: goto L_0019DE10;
    case 166u: goto L_0019DE88;
    case 167u: goto L_0019DEA0;
    case 168u: goto L_0019DEA8;
    case 169u: goto L_0019DEF0;
    case 170u: goto L_0019DF30;
    case 171u: goto L_0019DF48;
    case 172u: goto L_0019DF58;
    case 173u: goto L_0019DFB0;
    case 174u: goto L_0019DFD0;
    case 175u: goto L_0019E02C;
    case 176u: goto L_0019E060;
    case 177u: goto L_0019E07C;
    case 178u: goto L_0019E0E8;
    case 179u: goto L_0019E108;
    case 180u: goto L_0019E120;
    case 181u: goto L_0019E178;
    case 182u: goto L_0019E200;
    case 183u: goto L_0019E240;
    case 184u: goto L_0019E258;
    case 185u: goto L_0019E288;
    case 186u: goto L_0019E29C;
    case 187u: goto L_0019E2B8;
    case 188u: goto L_0019E2D8;
    case 189u: goto L_0019E2E0;
    case 190u: goto L_0019E358;
    case 191u: goto L_0019E370;
    case 192u: goto L_0019E378;
    case 193u: goto L_0019E3C0;
    case 194u: goto L_0019E408;
    case 195u: goto L_0019E420;
    case 196u: goto L_0019E430;
    case 197u: goto L_0019E488;
    case 198u: goto L_0019E4A8;
    case 199u: goto L_0019E504;
    case 200u: goto L_0019E538;
    case 201u: goto L_0019E554;
    case 202u: goto L_0019E5C0;
    case 203u: goto L_0019E5E0;
    case 204u: goto L_0019E5F8;
    case 205u: goto L_0019E650;
    case 206u: goto L_0019E6E0;
    case 207u: goto L_0019E6F0;
    case 208u: goto L_0019E700;
    case 209u: goto L_0019E72C;
    case 210u: goto L_0019E750;
    case 211u: goto L_0019EAC0;
    case 212u: goto L_0019EAF0;
    case 213u: goto L_0019EB10;
    case 214u: goto L_0019EB24;
    case 215u: goto L_0019EB2C;
    case 216u: goto L_0019EB60;
    case 217u: goto L_0019EBB8;
    case 218u: goto L_0019EBF0;
    case 219u: goto L_0019EC28;
    case 220u: goto L_0019EC38;
    case 221u: goto L_0019EC50;
    case 222u: goto L_0019EC90;
    case 223u: goto L_0019ED20;
    case 224u: goto L_0019ED3C;
    case 225u: goto L_0019ED68;
    case 226u: goto L_0019EDA8;
    case 227u: goto L_0019EE70;
    case 228u: goto L_0019EEB8;
    case 229u: goto L_0019EEE0;
    case 230u: goto L_0019EF48;
    case 231u: goto L_0019EFA0;
    case 232u: goto L_0019EFC0;
    case 233u: goto L_0019F000;
    case 234u: goto L_0019F018;
    case 235u: goto L_0019F048;
    case 236u: goto L_0019F05C;
    case 237u: goto L_0019F078;
    case 238u: goto L_0019F098;
    case 239u: goto L_0019F0A0;
    case 240u: goto L_0019F118;
    case 241u: goto L_0019F148;
    case 242u: goto L_0019F188;
    case 243u: goto L_0019F1E0;
    case 244u: goto L_0019F200;
    case 245u: goto L_0019F25C;
    case 246u: goto L_0019F290;
    case 247u: goto L_0019F2AC;
    case 248u: goto L_0019F30C;
    case 249u: goto L_0019F328;
    case 250u: goto L_0019F380;
    case 251u: goto L_0019F410;
    case 252u: goto L_0019F450;
    case 253u: goto L_0019F468;
    case 254u: goto L_0019F498;
    case 255u: goto L_0019F4AC;
    case 256u: goto L_0019F4C8;
    case 257u: goto L_0019F4E8;
    case 258u: goto L_0019F4F0;
    case 259u: goto L_0019F568;
    case 260u: goto L_0019F598;
    case 261u: goto L_0019F5D8;
    case 262u: goto L_0019F630;
    case 263u: goto L_0019F650;
    case 264u: goto L_0019F6AC;
    case 265u: goto L_0019F6E0;
    case 266u: goto L_0019F6FC;
    case 267u: goto L_0019F75C;
    case 268u: goto L_0019F778;
    case 269u: goto L_0019F7D0;
    case 270u: goto L_0019F860;
    case 271u: goto L_0019F868;
    case 272u: goto L_0019F894;
    case 273u: goto L_0019F8CC;
    case 274u: goto L_0019F960;
    case 275u: goto L_0019F9CC;
    case 276u: goto L_0019F9DC;
    case 277u: goto L_0019FA10;
    case 278u: goto L_0019FA40;
    case 279u: goto L_0019FA50;
    case 280u: goto L_0019FA60;
    case 281u: goto L_0019FA70;
    case 282u: goto L_0019FAF4;
    case 283u: goto L_0019FB54;
    case 284u: goto L_0019FC44;
    case 285u: goto L_0019FC54;
    case 286u: goto L_0019FC64;
    case 287u: goto L_0019FC94;
    case 288u: goto L_0019FCD8;
    case 289u: goto L_0019FD0C;
    case 290u: goto L_0019FD48;
    case 291u: goto L_0019FD60;
    case 292u: goto L_0019FD68;
    case 293u: goto L_0019FD80;
    case 294u: goto L_0019FD88;
    case 295u: goto L_0019FDA0;
    case 296u: goto L_0019FDA8;
    case 297u: goto L_0019FDB8;
    case 298u: goto L_0019FDE4;
    case 299u: goto L_0019FE20;
    case 300u: goto L_0019FE38;
    case 301u: goto L_0019FE40;
    case 302u: goto L_0019FE58;
    case 303u: goto L_0019FE60;
    case 304u: goto L_0019FE78;
    case 305u: goto L_0019FE80;
    case 306u: goto L_0019FEB0;
    case 307u: goto L_0019FF50;
    case 308u: goto L_0019FF84;
    case 309u: goto L_0019FF88;
    case 310u: goto L_0019FFA8;
    case 311u: goto L_0019FFBC;
    case 312u: goto L_0019FFD0;
    case 313u: goto L_0019FFD8;
    case 314u: goto L_0019FFDC;
    case 315u: goto L_0019FFE8;
    case 316u: goto L_0019FFF4;
    default: bad_entry(c, 0x0019C000u); return;
    }
L_0019C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C008u);  if (depth < kMaxDepth) unit_0070(c, 249u, depth + 1u); else { c.pc = 0x002C2F60u; return; } if (c.pc != 0x0019C008u) [[unlikely]] return; }
L_0019C008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C010u);  if (depth < kMaxDepth) unit_00C6(c, 296u, depth + 1u); else { c.pc = 0x0041BE00u; return; } if (c.pc != 0x0019C010u) [[unlikely]] return; }
L_0019C010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C038; } }
L_0019C018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C020u);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001981F0u; return; } if (c.pc != 0x0019C020u) [[unlikely]] return; }
L_0019C020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C028u);  if (depth < kMaxDepth) unit_0025(c, 207u, depth + 1u); else { c.pc = 0x001976A0u; return; } if (c.pc != 0x0019C028u) [[unlikely]] return; }
L_0019C028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C038; } }
L_0019C030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C038u);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001981F0u; return; } if (c.pc != 0x0019C038u) [[unlikely]] return; }
L_0019C038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019C050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C074u); st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 38u, depth + 1u); else { c.pc = 0x003B0360u; return; } if (c.pc != 0x0019C074u) [[unlikely]] return; }
L_0019C074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019C0B0; } }
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
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1946u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0019C858; } }
    c.budget -= 1;
L_0019C0B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C858; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C0E8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0019C858; } }
    c.budget -= 1;
L_0019C0E8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C0F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 125u, depth + 1u); else { c.pc = 0x0019A770u; return; } if (c.pc != 0x0019C0F4u) [[unlikely]] return; }
L_0019C0F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C108u);  if (depth < kMaxDepth) unit_0025(c, 144u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0019C108u) [[unlikely]] return; }
L_0019C108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 195u, depth + 1u); else { c.pc = 0x0019B310u; return; } if (c.pc != 0x0019C110u) [[unlikely]] return; }
L_0019C110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x0019B410u; return; } if (c.pc != 0x0019C118u) [[unlikely]] return; }
L_0019C118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C120u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x0019C120u) [[unlikely]] return; }
L_0019C120:
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C12Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x0019C12Cu) [[unlikely]] return; }
L_0019C12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x0019C134u) [[unlikely]] return; }
L_0019C134:
    c.budget -= 1;
L_0019C138:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0019C148; } }
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0019C148:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1924u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0019C158; } }
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0019C158:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1928u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0019C168; } }
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0019C168:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1816u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0019C178; } }
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0019C178:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019C1A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0019C1A8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0019C1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C1B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 138u, depth + 1u); else { c.pc = 0x0019AB90u; return; } if (c.pc != 0x0019C1B0u) [[unlikely]] return; }
L_0019C1B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1818u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C1C4u);  if (depth < kMaxDepth) unit_0026(c, 126u, depth + 1u); else { c.pc = 0x0019A820u; return; } if (c.pc != 0x0019C1C4u) [[unlikely]] return; }
L_0019C1C4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_0019C1E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019C200; } }
    c.budget -= 1;
L_0019C1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 173u, depth + 1u); else { c.pc = 0x001A68C0u; return; } if (c.pc != 0x0019C1E8u) [[unlikely]] return; }
L_0019C1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C1F8u);  if (depth < kMaxDepth) unit_0029(c, 54u, depth + 1u); else { c.pc = 0x001A4BD0u; return; } if (c.pc != 0x0019C1F8u) [[unlikely]] return; }
L_0019C1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C230; } }
L_0019C200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 12896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019C220u) [[unlikely]] return; }
L_0019C220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C230; } }
L_0019C228:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019C230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 116u, depth + 1u); else { c.pc = 0x0019A280u; return; } if (c.pc != 0x0019C238u) [[unlikely]] return; }
L_0019C238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C240u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x0019A490u; return; } if (c.pc != 0x0019C240u) [[unlikely]] return; }
L_0019C240:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C290; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1939u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019C290; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C270u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0019C270u) [[unlikely]] return; }
L_0019C270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0019C290; } }
    st8((c.r[16].w[0] + 1939u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019C290:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_0019C2A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C2B0; } }
L_0019C2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C858; } }
L_0019C2B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0019C858; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019C680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019C680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019C600; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019C300; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019C858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C858; } }
    c.budget -= 1;
L_0019C300:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1948u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0019C5B0; } }
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = 0u;
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1888u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C330u);  if (depth < kMaxDepth) unit_002A(c, 126u, depth + 1u); else { c.pc = 0x001AAC80u; return; } if (c.pc != 0x0019C330u) [[unlikely]] return; }
L_0019C330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[4] = ld32((c.r[16].w[0] + 1888u));
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[16].w[0] + 1892u));
    c.f[2] = ld32((c.r[16].w[0] + 1896u));
    c.f[0] = ld32((c.r[16].w[0] + 1900u));
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1904u), c.f[4]);
    st32((c.r[16].w[0] + 1908u), c.f[3]);
    st32((c.r[16].w[0] + 1912u), c.f[2]);
    st32((c.r[16].w[0] + 1916u), c.f[0]);
    c.f[4] = ld32((c.r[16].w[0] + 1888u));
    c.f[3] = ld32((c.r[16].w[0] + 1892u));
    c.f[2] = ld32((c.r[16].w[0] + 1896u));
    c.f[0] = ld32((c.r[16].w[0] + 1900u));
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);  if (t) { goto L_0019C398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0019C3B0; } }
    c.budget -= 1;
L_0019C398:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);  if (t) { goto L_0019C3B0; } }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0019C3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C3E0; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019C3F0; } }
L_0019C3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
L_0019C3F0:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[6] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[5], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C438; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019C448; } }
    c.budget -= 1;
L_0019C438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[6] = c.r[2].w[0];
    c.budget -= 4;
L_0019C448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.f[0] = fp::sub(c.f[5], c.f[3]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[6]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019C4A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0019C4E0; } }
    c.budget -= 1;
L_0019C4A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B20000u);  if (t) { goto L_0019C4E0; } }
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 8;
L_0019C4E0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C500; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019C510; } }
L_0019C500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
L_0019C510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x43FC0000u);  if (t) { goto L_0019C550; } }
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0019C588; } }
L_0019C550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B20000u);  if (t) { goto L_0019C588; } }
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_0019C588:
    set32(c.r[4], c.r[16].w[0] + 1888u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C598u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0019C598u) [[unlikely]] return; }
L_0019C598:
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x0019C5A4u) [[unlikely]] return; }
L_0019C5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C858; } }
    c.budget -= 1;
L_0019C5B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1956u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C5D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_0019C5D0; } }
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0019C5D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1956u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C858; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1958u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019C858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0019C858; } }
    c.budget -= 1;
L_0019C600:
    c.f[3] = ld32((c.r[16].w[0] + 1888u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1896u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C624u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0019C624u) [[unlikely]] return; }
L_0019C624:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_0019C644; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C648; } }
L_0019C644:
    c.f[1] = c.r[3].w[0];
    c.budget -= 1;
L_0019C648:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 3u);  if (t) { goto L_0019C858; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 1888u);
    st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C66Cu); set32(c.r[5], c.r[16].w[0] + 1904u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0019C66Cu) [[unlikely]] return; }
L_0019C66C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x0019C678u) [[unlikely]] return; }
L_0019C678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C858; } }
L_0019C680:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_0019C6A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019C6A0; } }
    set32(c.r[2], 0u + 4000u);
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019C6A0:
    c.f[3] = ld32((c.r[16].w[0] + 1888u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1896u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C6C4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0019C6C4u) [[unlikely]] return; }
L_0019C6C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = c.f[0];  if (t) { goto L_0019C6E0; } }
    set32(c.r[2], 0u + 300u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0019C6E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0019C700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0019C708; } }
L_0019C700:
    c.f[20] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 2;
L_0019C708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C710u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0019C710u) [[unlikely]] return; }
L_0019C710:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_0019C738; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019C800; } }
    c.budget -= 1;
L_0019C738:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C758; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C800; } }
    c.budget -= 1;
L_0019C758:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C77Cu); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0019C77Cu) [[unlikely]] return; }
L_0019C77C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C788u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x0019C788u) [[unlikely]] return; }
L_0019C788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C7A8; } }
L_0019C790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C79Cu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x0019C79Cu) [[unlikely]] return; }
L_0019C79C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C7A8u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x0019C7A8u) [[unlikely]] return; }
L_0019C7A8:
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
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C858; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C858; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C7F8u); st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x0019C7F8u) [[unlikely]] return; }
L_0019C7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C858; } }
L_0019C800:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019C858; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C858; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019C858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C83Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x0019C83Cu) [[unlikely]] return; }
L_0019C83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019C858; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C858u); st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x0019C858u) [[unlikely]] return; }
L_0019C858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019C880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 12832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_0027[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019C8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 253u, depth + 1u); else { c.pc = 0x0019BD00u; return; } if (c.pc != 0x0019C8B4u) [[unlikely]] return; }
L_0019C8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 247u, depth + 1u); else { c.pc = 0x0019BBE0u; return; } if (c.pc != 0x0019C8BCu) [[unlikely]] return; }
L_0019C8BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C8D0u);  if (depth < kMaxDepth) unit_0026(c, 130u, depth + 1u); else { c.pc = 0x0019AA40u; return; } if (c.pc != 0x0019C8D0u) [[unlikely]] return; }
L_0019C8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019C8E8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019C988; } }
    c.budget -= 1;
L_0019C8E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019C918; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C904u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 173u, depth + 1u); else { c.pc = 0x0019B090u; return; } if (c.pc != 0x0019C904u) [[unlikely]] return; }
L_0019C904:
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 144u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0019C910u) [[unlikely]] return; }
L_0019C910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C920; } }
L_0019C918:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019C920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 163u, depth + 1u); else { c.pc = 0x001A24E0u; return; } if (c.pc != 0x0019C928u) [[unlikely]] return; }
L_0019C928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019C948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C988; } }
L_0019C938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C940u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019C940u) [[unlikely]] return; }
L_0019C940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019C988; } }
L_0019C948:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 80u, depth + 1u); else { c.pc = 0x0019CFA0u; return; } if (c.pc != 0x0019C960u) [[unlikely]] return; }
L_0019C960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019C988; } }
L_0019C968:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019C988; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1939u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019C988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C988u);  if (depth < kMaxDepth) unit_0027(c, 80u, depth + 1u); else { c.pc = 0x0019CFA0u; return; } if (c.pc != 0x0019C988u) [[unlikely]] return; }
L_0019C988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019C9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019CA10; } }
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C9D4u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019C9D4u) [[unlikely]] return; }
L_0019C9D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C9E8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019C9E8u) [[unlikely]] return; }
L_0019C9E8:
    c.r[1].d[0] = c.r[2].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019CA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C9FCu);  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019CDB0u; return; } if (c.pc != 0x0019C9FCu) [[unlikely]] return; }
L_0019C9FC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.budget -= 1;
L_0019CA00:
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019CA58; } }
    c.budget -= 1;
L_0019CA10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CA38; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0019CA38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 1;
L_0019CA3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019CA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CA4Cu);  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019CDB0u; return; } if (c.pc != 0x0019CA4Cu) [[unlikely]] return; }
L_0019CA4C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0019CA58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019CA70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019CAE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019CAB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019CA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CAF8; } }
L_0019CA98:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019CAF8; } }
L_0019CAB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0019CAD8; } }
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019CAF8; } }
    c.budget -= 1;
L_0019CAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019CAF8; } }
L_0019CAE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CAF8; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019CAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019CB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019CBF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019CB90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019CB58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019CB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CC18; } }
    c.budget -= 1;
L_0019CB40:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019CC18; } }
L_0019CB58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CB88; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], 0u + 90u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[5].d[0] = c.r[5].d[0] | 640ull;
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019CC18; } }
L_0019CB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019CC18; } }
L_0019CB90:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 560u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CBD0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CBD0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 515u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0019CBD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0019CBD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CBF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019CBF8; } }
    c.budget -= 1;
L_0019CBF0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019CBF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019CC18; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC18u); st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 144u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0019CC18u) [[unlikely]] return; }
L_0019CC18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019CC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_0019CC3C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019CD58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019CD38; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019CC68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CDA0; } }
L_0019CC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CC70u);  if (depth < kMaxDepth) unit_0026(c, 251u, depth + 1u); else { c.pc = 0x0019BCB0u; return; } if (c.pc != 0x0019CC70u) [[unlikely]] return; }
L_0019CC70:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019CD18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0019CCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019CC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CDA0; } }
    c.budget -= 1;
L_0019CC98:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019CDA0; } }
    c.budget -= 1;
L_0019CCA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CD18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0019CCCC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0019CCE4; } }
L_0019CCCC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0019CCE4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019CD18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019CDA0; } }
    c.budget -= 1;
L_0019CD18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019CDA0; } }
    c.budget -= 1;
L_0019CD38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0019CD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019CDA0; } }
L_0019CD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019CDA0; } }
L_0019CD58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CDA0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0019CD88; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019CDA0; } }
    c.budget -= 1;
L_0019CD88:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CD9Cu); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 144u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0019CD9Cu) [[unlikely]] return; }
L_0019CD9C:
    c.budget -= 1;
L_0019CDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019CDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 300u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CDDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x0019CDDCu) [[unlikely]] return; }
L_0019CDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CDE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x0019CDE4u) [[unlikely]] return; }
L_0019CDE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019CE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CE2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019CE2Cu) [[unlikely]] return; }
L_0019CE2C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0019CF90; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019CE60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019CE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CE54u);  if (depth < kMaxDepth) unit_0027(c, 80u, depth + 1u); else { c.pc = 0x0019CFA0u; return; } if (c.pc != 0x0019CE54u) [[unlikely]] return; }
L_0019CE54:
    c.budget -= 1;
L_0019CE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CE60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 292u, depth + 1u); else { c.pc = 0x001A3E60u; return; } if (c.pc != 0x0019CE60u) [[unlikely]] return; }
L_0019CE60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CE78; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0019CE78:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019CEB8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019CEA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019CEF0; } }
    c.budget -= 1;
L_0019CEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CEB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019CEB0u) [[unlikely]] return; }
L_0019CEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CEF0; } }
L_0019CEB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019CED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019CEF0; } }
    c.budget -= 1;
L_0019CED8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019CEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CEF0u);  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019CEF0u) [[unlikely]] return; }
L_0019CEF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019CF90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CF90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1950u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CF70; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_0019CF40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019CF40; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019CF78; } }
    c.budget -= 1;
L_0019CF40:
    set32(c.r[2], 0u + 60u);
    st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CF50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 140u, depth + 1u); else { c.pc = 0x0019AC00u; return; } if (c.pc != 0x0019CF50u) [[unlikely]] return; }
L_0019CF50:
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CF5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 35u, depth + 1u); else { c.pc = 0x001A0590u; return; } if (c.pc != 0x0019CF5Cu) [[unlikely]] return; }
L_0019CF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CF64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019CF64u) [[unlikely]] return; }
L_0019CF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019CF90; } }
    c.budget -= 1;
L_0019CF70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019CF78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019CF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CF8Cu);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x0019CF8Cu) [[unlikely]] return; }
L_0019CF8C:
    c.budget -= 1;
L_0019CF90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019CFA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1820u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019D0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CFCCu);  if (depth < kMaxDepth) unit_0026(c, 195u, depth + 1u); else { c.pc = 0x0019B310u; return; } if (c.pc != 0x0019CFCCu) [[unlikely]] return; }
L_0019CFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CFD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 129u, depth + 1u); else { c.pc = 0x00196800u; return; } if (c.pc != 0x0019CFD4u) [[unlikely]] return; }
L_0019CFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 26624u);
    c.f[1] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019CFF8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x0019CFF8u) [[unlikely]] return; }
L_0019CFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019D0B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D00Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A2310u; return; } if (c.pc != 0x0019D00Cu) [[unlikely]] return; }
L_0019D00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D01Cu); st32((c.r[16].w[0] + 1920u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 141u, depth + 1u); else { c.pc = 0x001A21B0u; return; } if (c.pc != 0x0019D01Cu) [[unlikely]] return; }
L_0019D01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D0B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D03Cu);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x0019F860u; return; } if (c.pc != 0x0019D03Cu) [[unlikely]] return; }
L_0019D03C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4168ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019D068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019D068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019D070; } }
    c.budget -= 1;
L_0019D068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019D070u) [[unlikely]] return; }
L_0019D070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
L_0019D078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D084u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0019D084u) [[unlikely]] return; }
L_0019D084:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D0A0u);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x0019F860u; return; } if (c.pc != 0x0019D0A0u) [[unlikely]] return; }
L_0019D0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D0A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019D0A8u) [[unlikely]] return; }
L_0019D0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
L_0019D0B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019D0B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1924u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D0CCu);  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x0019B410u; return; } if (c.pc != 0x0019D0CCu) [[unlikely]] return; }
L_0019D0CC:
    set32(c.r[17], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0019D708; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (t) { goto L_0019D0F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_0019D0FC; } }
L_0019D0F4:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0019D0FC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0019D118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D10Cu);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x0019D10Cu) [[unlikely]] return; }
L_0019D10C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019D128; } }
L_0019D118:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019D708; } }
L_0019D128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D134u); st32((c.r[16].w[0] + 1920u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 141u, depth + 1u); else { c.pc = 0x001A21B0u; return; } if (c.pc != 0x0019D134u) [[unlikely]] return; }
L_0019D134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0019D708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A2310u; return; } if (c.pc != 0x0019D144u) [[unlikely]] return; }
L_0019D144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0019D154u) [[unlikely]] return; }
L_0019D154:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D170u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0019D170u) [[unlikely]] return; }
L_0019D170:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 18u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[5].d[0];  if (t) { goto L_0019D218; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019D1E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0019D1C8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0019D1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D210; } }
L_0019D1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D1C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 220u, depth + 1u); else { c.pc = 0x0019B610u; return; } if (c.pc != 0x0019D1C0u) [[unlikely]] return; }
L_0019D1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019D270; } }
L_0019D1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 130u, depth + 1u); else { c.pc = 0x0019AA40u; return; } if (c.pc != 0x0019D1D0u) [[unlikely]] return; }
L_0019D1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0019D1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D270; } }
L_0019D1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019D270; } }
L_0019D1E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D1F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 266u, depth + 1u); else { c.pc = 0x003C6350u; return; } if (c.pc != 0x0019D1F4u) [[unlikely]] return; }
L_0019D1F4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019D208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D270; } }
L_0019D208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0019D270; } }
L_0019D210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D270; } }
L_0019D218:
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_0019D240; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019D240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 220u, depth + 1u); else { c.pc = 0x0019B610u; return; } if (c.pc != 0x0019D238u) [[unlikely]] return; }
L_0019D238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019D270; } }
L_0019D240:
    c.r[3].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D254u);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x0019F860u; return; } if (c.pc != 0x0019D254u) [[unlikely]] return; }
L_0019D254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019D25Cu) [[unlikely]] return; }
L_0019D25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
    c.budget -= 1;
L_0019D268:
    set32(c.r[19], 0u - 1u);
    c.budget -= 2;
L_0019D270:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 37u);  if (t) { goto L_0019D610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019D5B0; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 23u);  if (t) { goto L_0019D588; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019D490; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0019D418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019D3D8; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_0019D3D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019D398; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0019D398; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019D348; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D630; } }
L_0019D2E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019D630; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D304u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0019D304u) [[unlikely]] return; }
L_0019D304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019D328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D328:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] & 2ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019D340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D630; } }
L_0019D340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D630; } }
L_0019D348:
    set32(c.r[5], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D35Cu);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0019D35Cu) [[unlikely]] return; }
L_0019D35C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019D380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D380:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D398:
    set32(c.r[5], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D3B4u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0019D3B4u) [[unlikely]] return; }
L_0019D3B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D3D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D3F4u);  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0019D3F4u) [[unlikely]] return; }
L_0019D3F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D418:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_0019D630; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D430u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0019D430u) [[unlikely]] return; }
L_0019D430:
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D460u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0019D460u) [[unlikely]] return; }
L_0019D460:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D46Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019D46Cu) [[unlikely]] return; }
L_0019D46C:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D478u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019D478u) [[unlikely]] return; }
L_0019D478:
    c.r[1].d[0] = c.r[2].sd[0] < 10241ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D490:
    set32(c.r[18], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] & 2ull;  if (t) { goto L_0019D570; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0019D570; } }
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D4B0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0019D4B0u) [[unlikely]] return; }
L_0019D4B0:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D4C0u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019D4C0u) [[unlikely]] return; }
L_0019D4C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D4DCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019D4DCu) [[unlikely]] return; }
L_0019D4DC:
    c.r[1].d[0] = c.r[2].sd[0] < 15872ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019D570; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D4FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0019D4FCu) [[unlikely]] return; }
L_0019D4FC:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D508u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019D508u) [[unlikely]] return; }
L_0019D508:
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D51Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019D51Cu) [[unlikely]] return; }
L_0019D51C:
    c.r[1].d[0] = c.r[2].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019D570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 1920u), c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D544u); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0019D544u) [[unlikely]] return; }
L_0019D544:
    set32(c.r[4], c.r[16].w[0] + 1856u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D554u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0019D554u) [[unlikely]] return; }
L_0019D554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D55Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x0019D55Cu) [[unlikely]] return; }
L_0019D55C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D570:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 267u, depth + 1u); else { c.pc = 0x003C6380u; return; } if (c.pc != 0x0019D594u) [[unlikely]] return; }
L_0019D594:
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5A8u);  if (depth < kMaxDepth) unit_0026(c, 220u, depth + 1u); else { c.pc = 0x0019B610u; return; } if (c.pc != 0x0019D5A8u) [[unlikely]] return; }
L_0019D5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019D630; } }
L_0019D5B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019D630; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0019D5CCu) [[unlikely]] return; }
L_0019D5CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019D5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 1;
L_0019D5F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] & 2ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0019D608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D630; } }
L_0019D608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_0019D630; } }
L_0019D610:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[3].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D628u);  if (depth < kMaxDepth) unit_0026(c, 220u, depth + 1u); else { c.pc = 0x0019B610u; return; } if (c.pc != 0x0019D628u) [[unlikely]] return; }
L_0019D628:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019D630:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[5].d[0];  if (t) { goto L_0019D6A0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0019D650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
    c.budget -= 1;
L_0019D650:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D664u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 222u, depth + 1u); else { c.pc = 0x0019B6A0u; return; } if (c.pc != 0x0019D664u) [[unlikely]] return; }
L_0019D664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D674u);  if (depth < kMaxDepth) unit_0027(c, 206u, depth + 1u); else { c.pc = 0x0019E6E0u; return; } if (c.pc != 0x0019D674u) [[unlikely]] return; }
L_0019D674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D67Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x0019D67Cu) [[unlikely]] return; }
L_0019D67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
    c.budget -= 1;
L_0019D688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 17u, depth + 1u); else { c.pc = 0x001A0140u; return; } if (c.pc != 0x0019D690u) [[unlikely]] return; }
L_0019D690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019D698u) [[unlikely]] return; }
L_0019D698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
L_0019D6A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019D6E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6C4u);  if (depth < kMaxDepth) unit_0026(c, 222u, depth + 1u); else { c.pc = 0x0019B6A0u; return; } if (c.pc != 0x0019D6C4u) [[unlikely]] return; }
L_0019D6C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6D4u);  if (depth < kMaxDepth) unit_0027(c, 207u, depth + 1u); else { c.pc = 0x0019E6F0u; return; } if (c.pc != 0x0019D6D4u) [[unlikely]] return; }
L_0019D6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x0019D6DCu) [[unlikely]] return; }
L_0019D6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
    c.budget -= 1;
L_0019D6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 29u, depth + 1u); else { c.pc = 0x001A03B0u; return; } if (c.pc != 0x0019D6F0u) [[unlikely]] return; }
L_0019D6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019D6F8u) [[unlikely]] return; }
L_0019D6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D708; } }
L_0019D700:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019D708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0019D730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019D758; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019D918; } }
L_0019D758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D760u);  if (depth < kMaxDepth) unit_0028(c, 163u, depth + 1u); else { c.pc = 0x001A24E0u; return; } if (c.pc != 0x0019D760u) [[unlikely]] return; }
L_0019D760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019D920; } }
L_0019D770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_0019D918; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D78Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019D78Cu) [[unlikely]] return; }
L_0019D78C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D79Cu);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x0019D79Cu) [[unlikely]] return; }
L_0019D79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019D918; } }
    c.budget -= 1;
L_0019D7A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0019D918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[16].w[0] + 1836u), c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 1836u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D7D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019D7D0u) [[unlikely]] return; }
L_0019D7D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D7E8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019D918; } }
L_0019D7E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D850; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019D850; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019D850; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 5696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019D838u) [[unlikely]] return; }
L_0019D838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019D850; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019D918; } }
L_0019D850:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 6016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019D870u) [[unlikely]] return; }
L_0019D870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019D888; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019D918; } }
L_0019D888:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 7296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019D8A8u) [[unlikely]] return; }
L_0019D8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019D918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8B8u);  if (depth < kMaxDepth) unit_0026(c, 212u, depth + 1u); else { c.pc = 0x0019B520u; return; } if (c.pc != 0x0019D8B8u) [[unlikely]] return; }
L_0019D8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019D918; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8D0u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019D8D0u) [[unlikely]] return; }
L_0019D8D0:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1840u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D918; } }
    c.f[0] = ld32((c.r[16].w[0] + 1840u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1840u), c.f[0]);
    c.budget -= 7;
L_0019D918:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019D920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019D930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019DC18; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019DAF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019D9B8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019D988; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019D988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019DCA8; } }
    c.budget -= 1;
L_0019D988:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DCA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019DCA8; } }
    c.budget -= 1;
L_0019D9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D9C0u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0019D9C0u) [[unlikely]] return; }
L_0019D9C0:
    c.f[2] = ld32((c.r[17].w[0] + 1836u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D9DCu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0019D9DCu) [[unlikely]] return; }
L_0019D9DC:
    c.f[2] = ld32((c.r[17].w[0] + 1836u));
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA08u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019DA08u) [[unlikely]] return; }
L_0019DA08:
    st32((c.r[18].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0019DA30; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0019DA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA48u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0019DA48u) [[unlikely]] return; }
L_0019DA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DA58; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0019DA58:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DA70; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0019DA70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019DA88; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DCA8; } }
L_0019DA88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DAA8; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DCA8; } }
    c.budget -= 1;
L_0019DAA8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019DAC8; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019DAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DAD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DAD0u) [[unlikely]] return; }
L_0019DAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019DCB0; } }
L_0019DAE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019DCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019DCA8; } }
L_0019DAF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DB18; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DCA8; } }
    c.budget -= 1;
L_0019DB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB28u);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019DB28u) [[unlikely]] return; }
L_0019DB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DB40; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DCA8; } }
L_0019DB40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019DB58; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DCA8; } }
L_0019DB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DB60u) [[unlikely]] return; }
L_0019DB60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019DCB0; } }
L_0019DB70:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB88u); st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019DB88u) [[unlikely]] return; }
L_0019DB88:
    c.f[2] = ld32((c.r[17].w[0] + 1840u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019DCA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DBB0u); st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019DBB0u) [[unlikely]] return; }
L_0019DBB0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st8((c.r[17].w[0] + 1814u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DCA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1814u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1814u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019DCA8; } }
    c.budget -= 1;
L_0019DC18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DC38; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DCA8; } }
    c.budget -= 1;
L_0019DC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC40u);  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DC40u) [[unlikely]] return; }
L_0019DC40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019DCB0; } }
L_0019DC50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DCA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC6Cu); st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019DC6Cu) [[unlikely]] return; }
L_0019DC6C:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 1840u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019DCA8; } }
L_0019DCA0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 1814u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019DCA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019DCB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019DCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DCF8; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019DD10; } }
    c.budget -= 1;
L_0019DCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD00u);  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DD00u) [[unlikely]] return; }
L_0019DD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019DD18; } }
L_0019DD10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019DD18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019DD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E1E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_0027[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019DD70:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
L_0019DD88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0019DDB0; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
    c.budget -= 1;
L_0019DDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019E1E0; } }
L_0019DDB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDCCu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019DDCCu) [[unlikely]] return; }
L_0019DDCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DDF0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDE8u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019DDE8u) [[unlikely]] return; }
L_0019DDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E1E8; } }
L_0019DDF0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE08u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019DE08u) [[unlikely]] return; }
L_0019DE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE10u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019DE10u) [[unlikely]] return; }
L_0019DE10:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3424u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 18u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0019DE48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_0019DE48:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019DE68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019DE98; } }
L_0019DE68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019DE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019DE98; } }
L_0019DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DE88u) [[unlikely]] return; }
L_0019DE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E1E8; } }
L_0019DE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E1E8; } }
L_0019DEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DEA8u);  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DEA8u) [[unlikely]] return; }
L_0019DEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E1E8; } }
L_0019DEB8:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019DEE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0019DEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E1E8; } }
L_0019DEF0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019DF18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DF28; } }
    c.budget -= 1;
L_0019DF18:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019DF40; } }
    c.budget -= 1;
L_0019DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF30u);  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DF30u) [[unlikely]] return; }
L_0019DF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E1E8; } }
L_0019DF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E1E8; } }
L_0019DF48:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF58u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019DF58u) [[unlikely]] return; }
L_0019DF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E1E8; } }
L_0019DF68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019DF88; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019DF98; } }
L_0019DF88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019DFA8; } }
L_0019DF98:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019DFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E1E8; } }
L_0019DFB0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_0019E068; } }
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFD0u); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 229u, depth + 1u); else { c.pc = 0x001A3210u; return; } if (c.pc != 0x0019DFD0u) [[unlikely]] return; }
L_0019DFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DFF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
L_0019DFF8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E038; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_0019E038; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E02Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019E02Cu) [[unlikely]] return; }
L_0019E02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E048; } }
    c.budget -= 1;
L_0019E038:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
    c.budget -= 1;
L_0019E048:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019E1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E060u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x0019E060u) [[unlikely]] return; }
L_0019E060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E1E0; } }
L_0019E068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E07Cu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019E07Cu) [[unlikely]] return; }
L_0019E07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E098; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
    c.budget -= 1;
L_0019E098:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E0D0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019E0D0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E0E0; } }
L_0019E0D0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019E1E0; } }
L_0019E0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019E0E8u) [[unlikely]] return; }
L_0019E0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E1E8; } }
L_0019E0F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019E108u) [[unlikely]] return; }
L_0019E108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E1E0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019E1E0; } }
L_0019E120:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019E138; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019E138:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E168; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
L_0019E168:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E1E0; } }
    c.budget -= 1;
L_0019E178:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019E190; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019E190:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E1C0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019E1E0; } }
L_0019E1C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0019E1E0; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019E1E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019E1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E6B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_0027[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019E240:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
L_0019E258:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0019E280; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
    c.budget -= 1;
L_0019E280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019E6B8; } }
L_0019E288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E29Cu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019E29Cu) [[unlikely]] return; }
L_0019E29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E2C0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2B8u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019E2B8u) [[unlikely]] return; }
L_0019E2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E6C0; } }
L_0019E2C0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2D8u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019E2D8u) [[unlikely]] return; }
L_0019E2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E2E0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019E2E0u) [[unlikely]] return; }
L_0019E2E0:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3424u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 18u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0019E318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_0019E318:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019E338; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E368; } }
L_0019E338:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019E350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E368; } }
L_0019E350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019E358u) [[unlikely]] return; }
L_0019E358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E6C0; } }
L_0019E368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E6C0; } }
L_0019E370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E378u);  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019E378u) [[unlikely]] return; }
L_0019E378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E6C0; } }
L_0019E388:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019E3B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0019E3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E6C0; } }
L_0019E3C0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019E3F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E400; } }
L_0019E3F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E418; } }
    c.budget -= 1;
L_0019E400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E408u);  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019E408u) [[unlikely]] return; }
L_0019E408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E6C0; } }
L_0019E418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E6C0; } }
L_0019E420:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E430u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019E430u) [[unlikely]] return; }
L_0019E430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E6C0; } }
L_0019E440:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E460; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019E470; } }
L_0019E460:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E480; } }
L_0019E470:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019E480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019E6C0; } }
L_0019E488:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_0019E540; } }
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4A8u); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 229u, depth + 1u); else { c.pc = 0x001A3210u; return; } if (c.pc != 0x0019E4A8u) [[unlikely]] return; }
L_0019E4A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E4D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
L_0019E4D0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E510; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_0019E510; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019E504u) [[unlikely]] return; }
L_0019E504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E520; } }
    c.budget -= 1;
L_0019E510:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
    c.budget -= 1;
L_0019E520:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019E6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E538u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x0019E538u) [[unlikely]] return; }
L_0019E538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E6B8; } }
L_0019E540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E554u); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019E554u) [[unlikely]] return; }
L_0019E554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E570; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
    c.budget -= 1;
L_0019E570:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E5A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019E5A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 11ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E5B8; } }
L_0019E5A8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019E6B8; } }
L_0019E5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 194u, depth + 1u); else { c.pc = 0x001A2BB0u; return; } if (c.pc != 0x0019E5C0u) [[unlikely]] return; }
L_0019E5C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019E6C0; } }
L_0019E5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019E5E0u) [[unlikely]] return; }
L_0019E5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E6B8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019E6B8; } }
L_0019E5F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019E610; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019E610:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E640; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
L_0019E640:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019E6B8; } }
    c.budget -= 1;
L_0019E650:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019E668; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019E668:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019E698; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019E6B8; } }
L_0019E698:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0019E6B8; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019E6B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019E6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E6E0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1807u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0019E6F0:
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1807u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0019E700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12768u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E72Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E72Cu) [[unlikely]] return; }
L_0019E72C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019E748; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019E750u) [[unlikely]] return; }
L_0019E750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1819u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EAA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0019E8F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0019E8D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0019E898; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019E858; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019E7E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019E7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E7A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0019E7D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0019EAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E7D0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E7E0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019E800; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0019E800:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 5376u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019E840; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
L_0019E840:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E858:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_0019E878; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E878:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E898:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019E8B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019E8C8; } }
    c.budget -= 1;
L_0019E8B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
L_0019E8C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E8D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019EAA8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E8F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019EA80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019EA40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019E9E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019E958; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019E930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EAA8; } }
L_0019E930:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_0019EAA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019EAA8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E958:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019E978; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019E988; } }
L_0019E978:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0019E988:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8660u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 5136u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019E9C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
L_0019E9C8:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019E9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_0019EA00; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019EA00:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019EA20; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019EA30; } }
L_0019EA20:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0019EA30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
L_0019EA40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EA60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019EA70; } }
    c.budget -= 1;
L_0019EA60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1807u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
L_0019EA70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019EA80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019EAA8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1807u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EAA8; } }
    c.budget -= 1;
L_0019EAA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019EAA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019EAE8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019EC70; } }
L_0019EAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EAF0u);  if (depth < kMaxDepth) unit_0028(c, 163u, depth + 1u); else { c.pc = 0x001A24E0u; return; } if (c.pc != 0x0019EAF0u) [[unlikely]] return; }
L_0019EAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019EC78; } }
L_0019EB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019EB10u) [[unlikely]] return; }
L_0019EB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EB38; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A3450u; return; } if (c.pc != 0x0019EB24u) [[unlikely]] return; }
L_0019EB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x0019EB2Cu) [[unlikely]] return; }
L_0019EB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EC70; } }
    c.budget -= 1;
L_0019EB38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0019EC70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[16].w[0] + 1836u), c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 1836u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019EB60u) [[unlikely]] return; }
L_0019EB60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EB78; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EC70; } }
L_0019EB78:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EBD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EBD0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 5696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019EBB8u) [[unlikely]] return; }
L_0019EBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EBD0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EC70; } }
L_0019EBD0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 6016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019EBF0u) [[unlikely]] return; }
L_0019EBF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EC08; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EC70; } }
L_0019EC08:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 7296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019EC28u) [[unlikely]] return; }
L_0019EC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019EC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC38u);  if (depth < kMaxDepth) unit_0026(c, 212u, depth + 1u); else { c.pc = 0x0019B520u; return; } if (c.pc != 0x0019EC38u) [[unlikely]] return; }
L_0019EC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019EC70; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC50u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019EC50u) [[unlikely]] return; }
L_0019EC50:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1840u), c.f[0]);
    c.budget -= 8;
L_0019EC70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019EC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EC90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019EF10; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019EE40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019ED18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019ECE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019ECE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019ECE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EF80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED20u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0019ED20u) [[unlikely]] return; }
L_0019ED20:
    c.f[2] = ld32((c.r[17].w[0] + 1836u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED3Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0019ED3Cu) [[unlikely]] return; }
L_0019ED3C:
    c.f[2] = ld32((c.r[17].w[0] + 1836u));
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED68u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019ED68u) [[unlikely]] return; }
L_0019ED68:
    st32((c.r[18].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0019ED90; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0019ED90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EDA8u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0019EDA8u) [[unlikely]] return; }
L_0019EDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EDB8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0019EDB8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EDD0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0019EDD0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019EDE8; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EF80; } }
L_0019EDE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE08; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019EE08:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019EE28; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019EE28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019EF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019EF80; } }
L_0019EE40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE60; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019EE60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE70u);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019EE70u) [[unlikely]] return; }
L_0019EE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE88; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EF80; } }
L_0019EE88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019EEA0; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EF80; } }
L_0019EEA0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEB8u); st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019EEB8u) [[unlikely]] return; }
L_0019EEB8:
    c.f[2] = ld32((c.r[17].w[0] + 1840u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019EF80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEE0u); st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019EEE0u) [[unlikely]] return; }
L_0019EEE0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1814u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019EF10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EF30; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019EF30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019EF78; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF48u); st8((c.r[17].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019EF48u) [[unlikely]] return; }
L_0019EF48:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 1840u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019EF80; } }
    c.budget -= 1;
L_0019EF78:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 1814u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019EF80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019EFA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EFB8; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019EFB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0019EFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019F3E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_0027[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019F000:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
L_0019F018:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0019F040; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
    c.budget -= 1;
L_0019F040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F3E8; } }
L_0019F048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F05Cu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019F05Cu) [[unlikely]] return; }
L_0019F05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F080; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F078u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019F078u) [[unlikely]] return; }
L_0019F078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F3F0; } }
L_0019F080:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F098u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019F098u) [[unlikely]] return; }
L_0019F098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F0A0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019F0A0u) [[unlikely]] return; }
L_0019F0A0:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3424u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 18u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0019F0D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_0019F0D8:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019F0F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F110; } }
L_0019F0F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019F110; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F3F0; } }
L_0019F118:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0019F140; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019F140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F3F0; } }
L_0019F148:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019F178; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F180; } }
L_0019F178:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F3F0; } }
L_0019F188:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F1B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019F1C8; } }
    c.budget -= 1;
L_0019F1B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F1D8; } }
L_0019F1C8:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019F1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F3F0; } }
L_0019F1E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_0019F298; } }
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F200u); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 229u, depth + 1u); else { c.pc = 0x001A3210u; return; } if (c.pc != 0x0019F200u) [[unlikely]] return; }
L_0019F200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F228; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
L_0019F228:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F268; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_0019F268; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019F25Cu) [[unlikely]] return; }
L_0019F25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F278; } }
    c.budget -= 1;
L_0019F268:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
    c.budget -= 1;
L_0019F278:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019F3E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F290u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x0019F290u) [[unlikely]] return; }
L_0019F290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F3E8; } }
L_0019F298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F2ACu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019F2ACu) [[unlikely]] return; }
L_0019F2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F2C8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
    c.budget -= 1;
L_0019F2C8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F318; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019F318; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_0019F318; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F30Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019F30Cu) [[unlikely]] return; }
L_0019F30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F3E8; } }
    c.budget -= 1;
L_0019F318:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F3E8; } }
L_0019F328:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019F340; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019F340:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F370; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
L_0019F370:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F3E8; } }
    c.budget -= 1;
L_0019F380:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019F398; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F398:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F3C8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019F3E8; } }
L_0019F3C8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0019F3E8; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019F3E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019F3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019F410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019F838; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0019C000u < 16384u) { entry = entries_0027[(t - 0x0019C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019F450:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
L_0019F468:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0019F490; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
    c.budget -= 1;
L_0019F490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F838; } }
L_0019F498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4ACu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019F4ACu) [[unlikely]] return; }
L_0019F4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F4D0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4C8u); st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x0019F4C8u) [[unlikely]] return; }
L_0019F4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019F840; } }
L_0019F4D0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4E8u); st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019F4E8u) [[unlikely]] return; }
L_0019F4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4F0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019F4F0u) [[unlikely]] return; }
L_0019F4F0:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3424u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 18u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0019F528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_0019F528:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019F548; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F560; } }
L_0019F548:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019F560; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F840; } }
L_0019F568:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0019F590; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019F590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F840; } }
L_0019F598:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019F5C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F5D0; } }
L_0019F5C8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F840; } }
L_0019F5D8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F608; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019F618; } }
    c.budget -= 1;
L_0019F608:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F628; } }
L_0019F618:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019F628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019F840; } }
L_0019F630:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_0019F6E8; } }
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F650u); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 229u, depth + 1u); else { c.pc = 0x001A3210u; return; } if (c.pc != 0x0019F650u) [[unlikely]] return; }
L_0019F650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F678; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
L_0019F678:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F6B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_0019F6B8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019F6ACu) [[unlikely]] return; }
L_0019F6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F6C8; } }
    c.budget -= 1;
L_0019F6B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
    c.budget -= 1;
L_0019F6C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019F838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6E0u);  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019AF90u; return; } if (c.pc != 0x0019F6E0u) [[unlikely]] return; }
L_0019F6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F838; } }
L_0019F6E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1836u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6FCu); c.f[12] = ld32((c.r[16].w[0] + 1836u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A3130u; return; } if (c.pc != 0x0019F6FCu) [[unlikely]] return; }
L_0019F6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F718; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
    c.budget -= 1;
L_0019F718:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F768; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0019F768; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_0019F768; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x0019F75Cu) [[unlikely]] return; }
L_0019F75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F838; } }
    c.budget -= 1;
L_0019F768:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F838; } }
L_0019F778:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019F790; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0019F790:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F7C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
L_0019F7C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019F838; } }
    c.budget -= 1;
L_0019F7D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019F7E8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019F7E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019F818; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019F838; } }
L_0019F818:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0019F838; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019F838:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0019F840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019F860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.budget -= 2;
L_0019F868:
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1920u)));
    c.f[20] = c.r[3].w[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 32u);  if (t) { goto L_0019F8D0; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F894u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0019F894u) [[unlikely]] return; }
L_0019F894:
    set32(c.r[3], c.r[29].w[0] + 52u);
    st32((c.r[3].w[0]), 0u);
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0019F8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F8CCu);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0019F8CCu) [[unlikely]] return; }
L_0019F8CC:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0019F8D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 37u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_0019F988; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019F978; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019F940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019F908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F9C0; } }
    c.budget -= 1;
L_0019F908:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_0019F9C0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019F9C0; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F9F8; } }
    c.budget -= 1;
L_0019F940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019F9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F960u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019F960u) [[unlikely]] return; }
L_0019F960:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0019F9C0; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F9F8; } }
L_0019F978:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F9F8; } }
L_0019F988:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x425C0000u);  if (t) { goto L_0019F9C0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019F9C0; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019F9F8; } }
    c.budget -= 1;
L_0019F9C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0026(c, 235u, depth + 1u); else { c.pc = 0x0019B930u; return; } if (c.pc != 0x0019F9CCu) [[unlikely]] return; }
L_0019F9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019F9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9DCu);  if (depth < kMaxDepth) unit_0028(c, 94u, depth + 1u); else { c.pc = 0x001A16E0u; return; } if (c.pc != 0x0019F9DCu) [[unlikely]] return; }
L_0019F9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F9F8; } }
    c.budget -= 1;
L_0019F9E8:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0019F9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019FA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 18u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_0019FA48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019FA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FA58; } }
L_0019FA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA40u);  if (depth < kMaxDepth) unit_0027(c, 306u, depth + 1u); else { c.pc = 0x0019FEB0u; return; } if (c.pc != 0x0019FA40u) [[unlikely]] return; }
L_0019FA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FA60; } }
L_0019FA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA50u);  if (depth < kMaxDepth) unit_0028(c, 9u, depth + 1u); else { c.pc = 0x001A0030u; return; } if (c.pc != 0x0019FA50u) [[unlikely]] return; }
L_0019FA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FA60; } }
L_0019FA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA60u);  if (depth < kMaxDepth) unit_0027(c, 281u, depth + 1u); else { c.pc = 0x0019FA70u; return; } if (c.pc != 0x0019FA60u) [[unlikely]] return; }
L_0019FA60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019FA70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019FDB0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019FB98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019FB40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019FAE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019FAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
    c.budget -= 1;
L_0019FAC8:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0019FAE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019FAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAF4u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0019FAF4u) [[unlikely]] return; }
L_0019FAF4:
    c.budget -= 1;
L_0019FAF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FB20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0019FE90; } }
    c.budget -= 1;
L_0019FB20:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019FE90; } }
L_0019FB40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FB54u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0019FB54u) [[unlikely]] return; }
L_0019FB54:
    c.budget -= 1;
L_0019FB58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FB78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FB88; } }
    c.budget -= 1;
L_0019FB78:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019FE90; } }
L_0019FB88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019FE90; } }
    c.budget -= 1;
L_0019FB98:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019FC20; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019FC20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0019FBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 580u)));  if (t) { goto L_0019FBD8; } }
L_0019FBD0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 2;
L_0019FBD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0019FC20; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019FC20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0019FC20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019FC20; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 558u));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0019FC20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FE90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0019FCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC44u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0019FC44u) [[unlikely]] return; }
L_0019FC44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC54u); set32(c.r[17], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0019FC54u) [[unlikely]] return; }
L_0019FC54:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC64u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019FC64u) [[unlikely]] return; }
L_0019FC64:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019FCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC94u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019FC94u) [[unlikely]] return; }
L_0019FC94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 8224u);
    c.r[6].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0019FCD0; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019FE90; } }
L_0019FCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCD8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019FCD8u) [[unlikely]] return; }
L_0019FCD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0019FD08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019FD00; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019FD10; } }
L_0019FD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0019FD10; } }
L_0019FD08:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0019FD0C:
    c.budget -= 1;
L_0019FD10:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019FD90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019FD70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019FD50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019FD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0019FD48u) [[unlikely]] return; }
L_0019FD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FD50:
    set32(c.r[2], 0u + 4096u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x0019FD60u) [[unlikely]] return; }
L_0019FD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019FD68u) [[unlikely]] return; }
L_0019FD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FD70:
    set32(c.r[2], 0u + 2048u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x0019FD80u) [[unlikely]] return; }
L_0019FD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019FD88u) [[unlikely]] return; }
L_0019FD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FD90:
    set32(c.r[2], 0u + 1024u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x0019FDA0u) [[unlikely]] return; }
L_0019FDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019FDA8u) [[unlikely]] return; }
L_0019FDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDB8u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0019FDB8u) [[unlikely]] return; }
L_0019FDB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FDD0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019FE90; } }
L_0019FDD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019FE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDE4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019FDE4u) [[unlikely]] return; }
L_0019FDE4:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019FE68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019FE48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019FE28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019FE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0019FE20u) [[unlikely]] return; }
L_0019FE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FE28:
    set32(c.r[2], 0u + 4096u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x0019FE38u) [[unlikely]] return; }
L_0019FE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019FE40u) [[unlikely]] return; }
L_0019FE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FE48:
    set32(c.r[2], 0u + 2048u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x0019FE58u) [[unlikely]] return; }
L_0019FE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019FE60u) [[unlikely]] return; }
L_0019FE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FE68:
    set32(c.r[2], 0u + 1024u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 39u, depth + 1u); else { c.pc = 0x001A0720u; return; } if (c.pc != 0x0019FE78u) [[unlikely]] return; }
L_0019FE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0019FE80u) [[unlikely]] return; }
L_0019FE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FE90; } }
L_0019FE88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019FE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019FEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019FF38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019FF08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019FEF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019FF68; } }
    c.budget -= 1;
L_0019FEF0:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019FF68; } }
    c.budget -= 1;
L_0019FF08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FF30; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019FF68; } }
    c.budget -= 1;
L_0019FF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019FF68; } }
L_0019FF38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019FF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF50u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0019FF50u) [[unlikely]] return; }
L_0019FF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0028(c, 7u, depth); } }
L_0019FF58:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019FF68:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019FF84u) [[unlikely]] return; }
L_0019FF84:
    c.r[1].d[0] = c.r[2].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019FF88:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019FFA0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019FFC0; } }
L_0019FFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019FFA8u) [[unlikely]] return; }
L_0019FFA8:
    c.r[2].d[0] = c.r[2].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019FFC0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_0019FFBC:
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0019FFC0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
L_0019FFD0:
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019FFDCu) [[unlikely]] return; }
    goto L_0019FFDC;
L_0019FFD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0019FFDC:
    c.r[1].d[0] = c.r[2].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019FFF8; } }
L_0019FFE8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0028(c, 7u, depth); } }
    goto L_0019FFF8;
L_0019FFF4:
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0019FFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001A0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0028(c, 1u, depth);
}

}
