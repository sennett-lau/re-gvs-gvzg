#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A4[4096] = {
    1, 2, 0, 0, 3, 0, 4, 5, 6, 0, 0, 7, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    25, 0, 0, 26, 0, 0, 27, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 97,
    0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0,
    114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121,
    0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0,
    191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0,
    0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 312,
    0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
};

void unit_00A4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00390000;
    case 2u: goto L_00390004;
    case 3u: goto L_00390010;
    case 4u: goto L_00390018;
    case 5u: goto L_0039001C;
    case 6u: goto L_00390020;
    case 7u: goto L_0039002C;
    case 8u: goto L_00390030;
    case 9u: goto L_00390038;
    case 10u: goto L_00390050;
    case 11u: goto L_00390058;
    case 12u: goto L_00390060;
    case 13u: goto L_00390078;
    case 14u: goto L_00390080;
    case 15u: goto L_00390088;
    case 16u: goto L_00390090;
    case 17u: goto L_003900A0;
    case 18u: goto L_003900AC;
    case 19u: goto L_003900C0;
    case 20u: goto L_003900E8;
    case 21u: goto L_003900F8;
    case 22u: goto L_003902D0;
    case 23u: goto L_003902E8;
    case 24u: goto L_003902F8;
    case 25u: goto L_00390300;
    case 26u: goto L_0039030C;
    case 27u: goto L_00390318;
    case 28u: goto L_0039031C;
    case 29u: goto L_00390330;
    case 30u: goto L_00390350;
    case 31u: goto L_00390380;
    case 32u: goto L_00390390;
    case 33u: goto L_003903A4;
    case 34u: goto L_003903AC;
    case 35u: goto L_003903B4;
    case 36u: goto L_003903D0;
    case 37u: goto L_00390514;
    case 38u: goto L_003905A0;
    case 39u: goto L_003905B8;
    case 40u: goto L_003905C0;
    case 41u: goto L_003905CC;
    case 42u: goto L_003905E0;
    case 43u: goto L_00390600;
    case 44u: goto L_00390630;
    case 45u: goto L_00390690;
    case 46u: goto L_003906A4;
    case 47u: goto L_003906E8;
    case 48u: goto L_003906F8;
    case 49u: goto L_00390710;
    case 50u: goto L_00390730;
    case 51u: goto L_00390760;
    case 52u: goto L_0039082C;
    case 53u: goto L_003908D0;
    case 54u: goto L_00390970;
    case 55u: goto L_003909D0;
    case 56u: goto L_003909E4;
    case 57u: goto L_003909F4;
    case 58u: goto L_003909FC;
    case 59u: goto L_00390A10;
    case 60u: goto L_00390A24;
    case 61u: goto L_00390A40;
    case 62u: goto L_00390A60;
    case 63u: goto L_00390A90;
    case 64u: goto L_00390AA8;
    case 65u: goto L_00390ABC;
    case 66u: goto L_00390AC4;
    case 67u: goto L_00390ACC;
    case 68u: goto L_00390AE0;
    case 69u: goto L_00390BB8;
    case 70u: goto L_00390BD4;
    case 71u: goto L_00390BEC;
    case 72u: goto L_00390C20;
    case 73u: goto L_00390C3C;
    case 74u: goto L_00390C70;
    case 75u: goto L_00390C90;
    case 76u: goto L_00390C98;
    case 77u: goto L_00390CB0;
    case 78u: goto L_00390CC8;
    case 79u: goto L_00390CE0;
    case 80u: goto L_00390D00;
    case 81u: goto L_00390D30;
    case 82u: goto L_00390D40;
    case 83u: goto L_00390D54;
    case 84u: goto L_00390D5C;
    case 85u: goto L_00390D64;
    case 86u: goto L_00390D80;
    case 87u: goto L_00390DE0;
    case 88u: goto L_00390E20;
    case 89u: goto L_00390E34;
    case 90u: goto L_00390E68;
    case 91u: goto L_00390EAC;
    case 92u: goto L_00390F08;
    case 93u: goto L_00390F40;
    case 94u: goto L_00390F58;
    case 95u: goto L_00390F60;
    case 96u: goto L_00390F70;
    case 97u: goto L_00390F7C;
    case 98u: goto L_00390F88;
    case 99u: goto L_00390FA0;
    case 100u: goto L_00390FC0;
    case 101u: goto L_00390FF0;
    case 102u: goto L_00391000;
    case 103u: goto L_00391014;
    case 104u: goto L_0039101C;
    case 105u: goto L_00391024;
    case 106u: goto L_00391040;
    case 107u: goto L_00391090;
    case 108u: goto L_003910D4;
    case 109u: goto L_00391100;
    case 110u: goto L_00391118;
    case 111u: goto L_00391150;
    case 112u: goto L_00391168;
    case 113u: goto L_00391170;
    case 114u: goto L_00391180;
    case 115u: goto L_0039118C;
    case 116u: goto L_003911A0;
    case 117u: goto L_003911C0;
    case 118u: goto L_003911F8;
    case 119u: goto L_00391260;
    case 120u: goto L_00391274;
    case 121u: goto L_0039127C;
    case 122u: goto L_00391284;
    case 123u: goto L_003912A0;
    case 124u: goto L_003913CC;
    case 125u: goto L_003913E4;
    case 126u: goto L_00391418;
    case 127u: goto L_00391434;
    case 128u: goto L_00391460;
    case 129u: goto L_00391480;
    case 130u: goto L_00391488;
    case 131u: goto L_003914A0;
    case 132u: goto L_003914B8;
    case 133u: goto L_003914D0;
    case 134u: goto L_003914F0;
    case 135u: goto L_00391520;
    case 136u: goto L_00391534;
    case 137u: goto L_00391550;
    case 138u: goto L_00391720;
    case 139u: goto L_00391734;
    case 140u: goto L_00391744;
    case 141u: goto L_00391758;
    case 142u: goto L_0039176C;
    case 143u: goto L_00391780;
    case 144u: goto L_003917A0;
    case 145u: goto L_003917D0;
    case 146u: goto L_003917E4;
    case 147u: goto L_00391800;
    case 148u: goto L_00391990;
    case 149u: goto L_003919A4;
    case 150u: goto L_003919B4;
    case 151u: goto L_003919C8;
    case 152u: goto L_003919DC;
    case 153u: goto L_003919F0;
    case 154u: goto L_00391A10;
    case 155u: goto L_00391A40;
    case 156u: goto L_00391A54;
    case 157u: goto L_00391A70;
    case 158u: goto L_00391B60;
    case 159u: goto L_00391B74;
    case 160u: goto L_00391B84;
    case 161u: goto L_00391B98;
    case 162u: goto L_00391BB0;
    case 163u: goto L_00391BC0;
    case 164u: goto L_00391BE0;
    case 165u: goto L_00391C10;
    case 166u: goto L_00391C24;
    case 167u: goto L_00391C40;
    case 168u: goto L_00391DD0;
    case 169u: goto L_00391DE4;
    case 170u: goto L_00391DF4;
    case 171u: goto L_00391E08;
    case 172u: goto L_00391E1C;
    case 173u: goto L_00391E30;
    case 174u: goto L_00391E50;
    case 175u: goto L_00391EE4;
    case 176u: goto L_00391F44;
    case 177u: goto L_00391F54;
    case 178u: goto L_00391F70;
    case 179u: goto L_00391FB0;
    case 180u: goto L_00391FD8;
    case 181u: goto L_00391FF0;
    case 182u: goto L_00392000;
    case 183u: goto L_00392078;
    case 184u: goto L_00392108;
    case 185u: goto L_00392160;
    case 186u: goto L_003921B0;
    case 187u: goto L_00392208;
    case 188u: goto L_003923B0;
    case 189u: goto L_003923F0;
    case 190u: goto L_003923F8;
    case 191u: goto L_00392400;
    case 192u: goto L_00392414;
    case 193u: goto L_00392430;
    case 194u: goto L_00392448;
    case 195u: goto L_00392450;
    case 196u: goto L_00392458;
    case 197u: goto L_0039246C;
    case 198u: goto L_0039247C;
    case 199u: goto L_003924A0;
    case 200u: goto L_003924C0;
    case 201u: goto L_00392520;
    case 202u: goto L_00392540;
    case 203u: goto L_0039257C;
    case 204u: goto L_003925B8;
    case 205u: goto L_003925C4;
    case 206u: goto L_0039264C;
    case 207u: goto L_00392660;
    case 208u: goto L_003926CC;
    case 209u: goto L_0039271C;
    case 210u: goto L_0039275C;
    case 211u: goto L_003928C8;
    case 212u: goto L_003928D4;
    case 213u: goto L_00392928;
    case 214u: goto L_00392A1C;
    case 215u: goto L_00392A94;
    case 216u: goto L_00392AA0;
    case 217u: goto L_00392AF4;
    case 218u: goto L_00392CB0;
    case 219u: goto L_00392CD8;
    case 220u: goto L_00392CE0;
    case 221u: goto L_00392CE8;
    case 222u: goto L_00392CF8;
    case 223u: goto L_00392D04;
    case 224u: goto L_00392D0C;
    case 225u: goto L_00392D28;
    case 226u: goto L_00392D38;
    case 227u: goto L_00392D44;
    case 228u: goto L_00392D4C;
    case 229u: goto L_00392D68;
    case 230u: goto L_00392D70;
    case 231u: goto L_00392D7C;
    case 232u: goto L_00392DA0;
    case 233u: goto L_00392DF8;
    case 234u: goto L_00392E60;
    case 235u: goto L_00392E98;
    case 236u: goto L_00392EC0;
    case 237u: goto L_00392EE0;
    case 238u: goto L_00392F1C;
    case 239u: goto L_00392F24;
    case 240u: goto L_003930BC;
    case 241u: goto L_003930D0;
    case 242u: goto L_003930F8;
    case 243u: goto L_00393120;
    case 244u: goto L_00393130;
    case 245u: goto L_00393140;
    case 246u: goto L_00393168;
    case 247u: goto L_00393218;
    case 248u: goto L_00393228;
    case 249u: goto L_00393260;
    case 250u: goto L_00393294;
    case 251u: goto L_003932C8;
    case 252u: goto L_003932DC;
    case 253u: goto L_003932F0;
    case 254u: goto L_00393300;
    case 255u: goto L_00393310;
    case 256u: goto L_00393320;
    case 257u: goto L_00393330;
    case 258u: goto L_00393340;
    case 259u: goto L_00393350;
    case 260u: goto L_00393360;
    case 261u: goto L_00393370;
    case 262u: goto L_00393380;
    case 263u: goto L_00393390;
    case 264u: goto L_003933A0;
    case 265u: goto L_003933B0;
    case 266u: goto L_003933C0;
    case 267u: goto L_003933D0;
    case 268u: goto L_003933E0;
    case 269u: goto L_003933F0;
    case 270u: goto L_00393400;
    case 271u: goto L_00393410;
    case 272u: goto L_00393420;
    case 273u: goto L_00393430;
    case 274u: goto L_00393440;
    case 275u: goto L_00393450;
    case 276u: goto L_00393460;
    case 277u: goto L_00393480;
    case 278u: goto L_003934CC;
    case 279u: goto L_00393530;
    case 280u: goto L_00393550;
    case 281u: goto L_003935A0;
    case 282u: goto L_003935C0;
    case 283u: goto L_0039364C;
    case 284u: goto L_0039367C;
    case 285u: goto L_00393698;
    case 286u: goto L_00393720;
    case 287u: goto L_00393760;
    case 288u: goto L_003937A0;
    case 289u: goto L_003937B0;
    case 290u: goto L_003937C0;
    case 291u: goto L_00393808;
    case 292u: goto L_0039386C;
    case 293u: goto L_003939A0;
    case 294u: goto L_003939E4;
    case 295u: goto L_00393A00;
    case 296u: goto L_00393A34;
    case 297u: goto L_00393A50;
    case 298u: goto L_00393A60;
    case 299u: goto L_00393A70;
    case 300u: goto L_00393A80;
    case 301u: goto L_00393A90;
    case 302u: goto L_00393AB0;
    case 303u: goto L_00393AC0;
    case 304u: goto L_00393B3C;
    case 305u: goto L_00393B5C;
    case 306u: goto L_00393B70;
    case 307u: goto L_00393BA4;
    case 308u: goto L_00393BC0;
    case 309u: goto L_00393BD0;
    case 310u: goto L_00393BE4;
    case 311u: goto L_00393BEC;
    case 312u: goto L_00393BFC;
    case 313u: goto L_00393C10;
    case 314u: goto L_00393C20;
    case 315u: goto L_00393C44;
    case 316u: goto L_00393C58;
    case 317u: goto L_00393C7C;
    case 318u: goto L_00393CA0;
    case 319u: goto L_00393CBC;
    case 320u: goto L_00393CD0;
    case 321u: goto L_00393CF0;
    case 322u: goto L_00393D00;
    case 323u: goto L_00393D14;
    case 324u: goto L_00393D30;
    case 325u: goto L_00393D50;
    case 326u: goto L_00393D60;
    case 327u: goto L_00393D74;
    case 328u: goto L_00393D90;
    case 329u: goto L_00393E28;
    case 330u: goto L_00393E80;
    case 331u: goto L_00393EC8;
    case 332u: goto L_00393F50;
    case 333u: goto L_00393F58;
    case 334u: goto L_00393F60;
    case 335u: goto L_00393F6C;
    case 336u: goto L_00393F80;
    case 337u: goto L_00393FA0;
    case 338u: goto L_00393FB4;
    case 339u: goto L_00393FD0;
    case 340u: goto L_00393FF0;
    default: bad_entry(c, 0x00390000u); return;
    }
L_00390000:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00390004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 3;
L_00390010:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00390018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039001C:
    c.budget -= 1;
L_00390020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_0039002C:
    set32(c.r[5], c.r[5].w[0] - 28880u);
    c.budget -= 1;
L_00390030:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00390038:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390050u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00390050u) [[unlikely]] return; }
L_00390050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 720u);
    c.budget -= 2;
L_00390058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390060u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00390060u) [[unlikely]] return; }
L_00390060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45070000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4810000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 6;
L_00390078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390080u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00390080u) [[unlikely]] return; }
L_00390080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390088u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00390088u) [[unlikely]] return; }
L_00390088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 17u, depth + 1u); else { c.pc = 0x003900A0u; return; } if (c.pc != 0x00390090u) [[unlikely]] return; }
L_00390090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003900A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00390208; } }
    goto L_003900B0;
L_003900AC:
    set32(c.r[3], c.r[4].w[0] + 304u);
    c.budget -= 1;
L_003900B0:
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[9].d[0];  if (t) { goto L_00390130; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003900D0; } }
    goto L_003900C4;
L_003900C0:
    c.budget -= 1;
L_003900C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003902B0; } }
    c.budget -= 1;
L_003900D0:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    set32(c.r[5], 0u + 490u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003900E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.f[3] = c.r[5].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
L_003900F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  if (t) { goto L_003902B0; } }
    c.budget -= 1;
L_00390130:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_003902B0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.f[1] = c.r[5].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[7], 0u + 760u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44E10000u);
    c.f[0] = c.r[5].w[0];
    c.f[2] = c.r[6].w[0];
    set32(c.r[5], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 46;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[0]);  if (t) { goto L_003902B0; } }
    c.budget -= 1;
L_00390208:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_00390238; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003902B0; } }
    c.budget -= 1;
L_00390238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = ld32((c.r[4].w[0] + 64u));
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.f[4] = fp::add(c.f[2], c.f[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 48u), c.f[4]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::add(c.f[2], c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 30;
L_003902B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003902C8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003902C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003902D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902E8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003902E8u) [[unlikely]] return; }
L_003902E8:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902F8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003902F8u) [[unlikely]] return; }
L_003902F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390300u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00390300u) [[unlikely]] return; }
L_00390300:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039030Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0039030Cu) [[unlikely]] return; }
L_0039030C:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390318u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00390318u) [[unlikely]] return; }
L_00390318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0039031C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00390350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390380u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00390380u) [[unlikely]] return; }
L_00390380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390390u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00390390u) [[unlikely]] return; }
L_00390390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903A4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003903A4u) [[unlikely]] return; }
L_003903A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903ACu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003903ACu) [[unlikely]] return; }
L_003903AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 36u, depth + 1u); else { c.pc = 0x003903D0u; return; } if (c.pc != 0x003903B4u) [[unlikely]] return; }
L_003903B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003903D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_003904F0; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[9].d[0];  if (t) { goto L_00390460; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00390400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390578; } }
    c.budget -= 1;
L_00390400:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], 0u + 490u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.f[3] = c.r[5].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  if (t) { goto L_00390578; } }
    c.budget -= 1;
L_00390460:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_00390578; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[5].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    set32(c.r[7], 0u + 760u);
    c.f[0] = c.r[6].w[0];
    set32(c.r[5], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_00390578; } }
    c.budget -= 1;
L_003904F0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_00390520; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00390514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00390578; } }
    c.budget -= 1;
L_00390520:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.f[4] = fp::add(c.f[2], c.f[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 22;
L_00390578:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00390590; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00390590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003905A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905B8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003905B8u) [[unlikely]] return; }
L_003905B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905C0u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003905C0u) [[unlikely]] return; }
L_003905C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905CCu); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003905CCu) [[unlikely]] return; }
L_003905CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003905E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00390600:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[3], c.r[3].w[0] + 1680u);
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { st32((c.r[4].w[0] + 104u), 0u);  goto L_00390630; }
L_00390630:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00390660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390680; } }
    c.budget -= 1;
L_00390660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00390680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00390690:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003906A4u) [[unlikely]] return; }
L_003906A4:
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.f[13] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.f[14] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906E8u); c.f[12] = fp::mul(c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x003906E8u) [[unlikely]] return; }
L_003906E8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003906F8u) [[unlikely]] return; }
L_003906F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00390710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11568u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00390730:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[5], c.r[5].w[0] + 2512u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { st32((c.r[4].w[0] + 104u), c.r[2].w[0]);  goto L_00390760; }
L_00390760:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00390918; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00390828; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00390790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390978; } }
    c.budget -= 1;
L_00390790:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    set32(c.r[5], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.f[2] = c.r[5].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 38;
L_00390828:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 1;
L_0039082C:
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] > 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_003908E0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.f[1] = c.r[5].w[0];
    set32(c.r[7], 0u + 10u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[5], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 108u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 35;
L_003908D0:
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00390978; } }
    c.budget -= 1;
L_003908E0:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_00390978; } }
    c.budget -= 1;
L_00390918:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_00390948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003909C0; } }
    c.budget -= 1;
L_00390948:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 10;
L_00390970:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_00390978:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_003909C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003909D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003909E4u) [[unlikely]] return; }
L_003909E4:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909F4u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003909F4u) [[unlikely]] return; }
L_003909F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909FCu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003909FCu) [[unlikely]] return; }
L_003909FC:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A10u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00390A10u) [[unlikely]] return; }
L_00390A10:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[4], c.r[4].w[0] + 11456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A24u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00390A24u) [[unlikely]] return; }
L_00390A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00390A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A90u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00390A90u) [[unlikely]] return; }
L_00390A90:
    set32(c.r[3], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 3184u);
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AA8u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00390AA8u) [[unlikely]] return; }
L_00390AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390ABCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00390ABCu) [[unlikely]] return; }
L_00390ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AC4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00390AC4u) [[unlikely]] return; }
L_00390AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 68u, depth + 1u); else { c.pc = 0x00390AE0u; return; } if (c.pc != 0x00390ACCu) [[unlikely]] return; }
L_00390ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00390B78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00390B38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00390B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390C40; } }
L_00390B20:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 250u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00390B38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00390C40; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 11584u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00390C40; } }
L_00390B78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00390C30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00390BB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C50; } }
    c.budget -= 1;
L_00390BB8:
    set32(c.r[2], 0u + 50u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BD4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00390BD4u) [[unlikely]] return; }
L_00390BD4:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[5].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00390BECu) [[unlikely]] return; }
L_00390BEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C20u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00390C20u) [[unlikely]] return; }
L_00390C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C40; } }
L_00390C30:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C3Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00390C3Cu) [[unlikely]] return; }
L_00390C3C:
    c.budget -= 1;
L_00390C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00390C50; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00390C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00390C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C90u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00390C90u) [[unlikely]] return; }
L_00390C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390C98u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00390C98u) [[unlikely]] return; }
L_00390C98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CB0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00390CB0u) [[unlikely]] return; }
L_00390CB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CC8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00390CC8u) [[unlikely]] return; }
L_00390CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00390CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00390D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D30u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00390D30u) [[unlikely]] return; }
L_00390D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 3904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D40u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00390D40u) [[unlikely]] return; }
L_00390D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D54u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00390D54u) [[unlikely]] return; }
L_00390D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D5Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00390D5Cu) [[unlikely]] return; }
L_00390D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 86u, depth + 1u); else { c.pc = 0x00390D80u; return; } if (c.pc != 0x00390D64u) [[unlikely]] return; }
L_00390D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00390E70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00390DE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00390DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390EB0; } }
    c.budget -= 1;
L_00390DC0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u + 250u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390DE0u); set32(c.r[5], c.r[5].w[0] + 11936u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00390DE0u) [[unlikely]] return; }
L_00390DE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00390EB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u + 480u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 11952u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E20u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00390E20u) [[unlikely]] return; }
L_00390E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 11968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E34u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00390E34u) [[unlikely]] return; }
L_00390E34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E68u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00390E68u) [[unlikely]] return; }
L_00390E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390EB0; } }
L_00390E70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00390EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390F28; } }
    c.budget -= 1;
L_00390EA0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390EACu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00390EACu) [[unlikely]] return; }
L_00390EAC:
    c.budget -= 1;
L_00390EB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00390ED8; } }
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00390ED8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F08u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00390F08u) [[unlikely]] return; }
L_00390F08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], 0u + 1u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00390F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F58u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00390F58u) [[unlikely]] return; }
L_00390F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F60u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00390F60u) [[unlikely]] return; }
L_00390F60:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F70u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x00390F70u) [[unlikely]] return; }
L_00390F70:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F7Cu); set32(c.r[4], ld32((c.r[2].w[0] + 44u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00390F7Cu) [[unlikely]] return; }
L_00390F7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F88u); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00390F88u) [[unlikely]] return; }
L_00390F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390FA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00390FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FF0u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00390FF0u) [[unlikely]] return; }
L_00390FF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 4432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391000u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00391000u) [[unlikely]] return; }
L_00391000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391014u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00391014u) [[unlikely]] return; }
L_00391014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039101Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0039101Cu) [[unlikely]] return; }
L_0039101C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 106u, depth + 1u); else { c.pc = 0x00391040u; return; } if (c.pc != 0x00391024u) [[unlikely]] return; }
L_00391024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00391090; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00391070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003910C0; } }
L_00391070:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u + 250u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391090u); set32(c.r[5], c.r[5].w[0] + 12000u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00391090u) [[unlikely]] return; }
L_00391090:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003910C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391138; } }
    c.budget -= 1;
L_003910C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
L_003910D4:
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003910E8; } }
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003910E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 6;
L_00391100:
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391118u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00391118u) [[unlikely]] return; }
L_00391118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], 0u + 1u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00391138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391168u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00391168u) [[unlikely]] return; }
L_00391168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391170u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00391170u) [[unlikely]] return; }
L_00391170:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391180u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x00391180u) [[unlikely]] return; }
L_00391180:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039118Cu); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0039118Cu) [[unlikely]] return; }
L_0039118C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003911A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003911C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911F8u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003911F8u) [[unlikely]] return; }
L_003911F8:
    set32(c.r[3], 0u + 15u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 5216u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_00391238; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 12016u);
    set32(c.r[2], 0u + 70u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00391258; } }
    c.budget -= 1;
L_00391238:
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12240u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 80u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00391258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391260u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00391260u) [[unlikely]] return; }
L_00391260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391274u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00391274u) [[unlikely]] return; }
L_00391274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039127Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0039127Cu) [[unlikely]] return; }
L_0039127C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391284u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 123u, depth + 1u); else { c.pc = 0x003912A0u; return; } if (c.pc != 0x00391284u) [[unlikely]] return; }
L_00391284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003912A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00391338; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003912F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003912E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391438; } }
L_003912E0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 250u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003912F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391438; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], 0u + 480u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391438; } }
    c.budget -= 1;
L_00391338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391368; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391448; } }
    c.budget -= 1;
L_00391368:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391428; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003913B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391448; } }
    c.budget -= 1;
L_003913B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913CCu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003913CCu) [[unlikely]] return; }
L_003913CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[5].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913E4u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003913E4u) [[unlikely]] return; }
L_003913E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391418u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00391418u) [[unlikely]] return; }
L_00391418:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391438; } }
L_00391428:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391434u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00391434u) [[unlikely]] return; }
L_00391434:
    c.budget -= 1;
L_00391438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00391448; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00391448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391480u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00391480u) [[unlikely]] return; }
L_00391480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391488u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00391488u) [[unlikely]] return; }
L_00391488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003914A0u) [[unlikely]] return; }
L_003914A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914B8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003914B8u) [[unlikely]] return; }
L_003914B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003914D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003914F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391520u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00391520u) [[unlikely]] return; }
L_00391520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391534u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 137u, depth + 1u); else { c.pc = 0x00391550u; return; } if (c.pc != 0x00391534u) [[unlikely]] return; }
L_00391534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391550:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00391680; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00391570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391708; } }
L_00391570:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 610u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3B40000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39320ull;
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 108u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 68;
L_00391680:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003916B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391708; } }
    c.budget -= 1;
L_003916B0:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 22;
L_00391708:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00391720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00391734u) [[unlikely]] return; }
L_00391734:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391744u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00391744u) [[unlikely]] return; }
L_00391744:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391758u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00391758u) [[unlikely]] return; }
L_00391758:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[4], c.r[4].w[0] + 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039176Cu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x0039176Cu) [[unlikely]] return; }
L_0039176C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391780:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003917A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917D0u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003917D0u) [[unlikely]] return; }
L_003917D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917E4u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 147u, depth + 1u); else { c.pc = 0x00391800u; return; } if (c.pc != 0x003917E4u) [[unlikely]] return; }
L_003917E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391800:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00391928; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00391880; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00391828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391978; } }
L_00391828:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[3], 0u + 80u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42960000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 22;
L_00391880:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391910; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 70u);
    c.f[2] = c.r[5].w[0];
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_00391978; } }
L_00391910:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_00391978; } }
    c.budget -= 1;
L_00391928:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391958; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391980; } }
    c.budget -= 1;
L_00391958:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 8;
L_00391978:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00391980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00391990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003919A4u) [[unlikely]] return; }
L_003919A4:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919B4u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003919B4u) [[unlikely]] return; }
L_003919B4:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919C8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003919C8u) [[unlikely]] return; }
L_003919C8:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[4], c.r[4].w[0] + 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919DCu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x003919DCu) [[unlikely]] return; }
L_003919DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003919F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00391A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391A40u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00391A40u) [[unlikely]] return; }
L_00391A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391A54u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 157u, depth + 1u); else { c.pc = 0x00391A70u; return; } if (c.pc != 0x00391A54u) [[unlikely]] return; }
L_00391A54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391A70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00391B00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00391A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391B50; } }
L_00391A90:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 150u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43250000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 28;
L_00391B00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391B58; } }
    c.budget -= 1;
L_00391B30:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 8;
L_00391B50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00391B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00391B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00391B74u) [[unlikely]] return; }
L_00391B74:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B84u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00391B84u) [[unlikely]] return; }
L_00391B84:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B98u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00391B98u) [[unlikely]] return; }
L_00391B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 8576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391BB0u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00391BB0u) [[unlikely]] return; }
L_00391BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391BC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00391BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C10u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00391C10u) [[unlikely]] return; }
L_00391C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C24u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 167u, depth + 1u); else { c.pc = 0x00391C40u; return; } if (c.pc != 0x00391C24u) [[unlikely]] return; }
L_00391C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391C40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00391D70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00391CB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00391C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391DC0; } }
L_00391C68:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    set32(c.r[3], 0u + 5u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 20;
L_00391CB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391D48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[6], 0u + 15u);
    c.f[2] = c.f[1] ^ fp::kSign;
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_00391DC0; } }
    c.budget -= 1;
L_00391D48:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_00391DC0; } }
    c.budget -= 1;
L_00391D70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391DA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391DC8; } }
    c.budget -= 1;
L_00391DA0:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_00391DC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00391DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00391DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391DE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00391DE4u) [[unlikely]] return; }
L_00391DE4:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391DF4u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00391DF4u) [[unlikely]] return; }
L_00391DF4:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391E08u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00391E08u) [[unlikely]] return; }
L_00391E08:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[4], c.r[4].w[0] + 11696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391E1Cu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00391E1Cu) [[unlikely]] return; }
L_00391E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391E30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 12784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00391E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 12760u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 255u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00391EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391F58; } }
L_00391EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 9136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12736u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12512u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EE4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00391EE4u) [[unlikely]] return; }
L_00391EE4:
    set32(c.r[2], 0u + 250u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 12760u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[28].w[0] - 27628u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    c.r[8].d[0] = c.r[5].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 240ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00391F44u) [[unlikely]] return; }
L_00391F44:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F54u); st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A4(c, 178u, depth + 1u); else { c.pc = 0x00391F70u; return; } if (c.pc != 0x00391F54u) [[unlikely]] return; }
L_00391F54:
    c.budget -= 1;
L_00391F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00391FB0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00391FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FB0u);  if (depth < kMaxDepth) unit_00A4(c, 199u, depth + 1u); else { c.pc = 0x003924A0u; return; } if (c.pc != 0x00391FB0u) [[unlikely]] return; }
L_00391FB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00392208; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 22224u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00391FD8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 50u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 6;
L_00391FF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00392208; } }
L_00392000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_00392208; } }
    c.budget -= 1;
L_00392078:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003920E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00392208; } }
L_003920E0:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00392208; } }
    c.budget -= 1;
L_00392108:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00392138; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 165u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00392208; } }
L_00392138:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00392208; } }
    c.budget -= 1;
L_00392160:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00392208; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], 0u + 50u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00392208; } }
L_003921B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003921D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_00392208; } }
    c.budget -= 1;
L_003921D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 12;
L_00392208:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00392338; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003922E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00392280; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392388; } }
    c.budget -= 1;
L_00392240:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 16;
L_00392280:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_003922B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 270u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00392388; } }
    c.budget -= 1;
L_003922B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_00392388; } }
L_003922E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00392388; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], 0u + 50u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_00392388; } }
L_00392338:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00392358; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00392390; } }
L_00392358:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 12;
L_00392388:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00392390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003923B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00392480; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003923F0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003923F0u) [[unlikely]] return; }
L_003923F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003923F8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003923F8u) [[unlikely]] return; }
L_003923F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392400u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00392400u) [[unlikely]] return; }
L_00392400:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392414u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00392414u) [[unlikely]] return; }
L_00392414:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392430u); c.f[12] = ld32((c.r[16].w[0] + 20u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x00392430u) [[unlikely]] return; }
L_00392430:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 28864u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392448u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00392448u) [[unlikely]] return; }
L_00392448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392450u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00392450u) [[unlikely]] return; }
L_00392450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392458u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00392458u) [[unlikely]] return; }
L_00392458:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039246Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0039246Cu) [[unlikely]] return; }
L_0039246C:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039247Cu); c.f[12] = ld32((c.r[16].w[0] + 44u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0039247Cu) [[unlikely]] return; }
L_0039247C:
    c.budget -= 1;
L_00392480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003924A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003924C0u) [[unlikely]] return; }
L_003924C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392508; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] - 12800u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 16;
L_00392508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 13072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00392540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28864u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039257Cu); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0039257Cu) [[unlikely]] return; }
L_0039257C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 11440u);
    set32(c.r[3], c.r[3].w[0] + 12800u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[2], c.r[2].w[0] + 13056u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003925B8u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003925B8u) [[unlikely]] return; }
L_003925B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003925C4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003925C4u) [[unlikely]] return; }
L_003925C4:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039264Cu); st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 49u, depth + 1u); else { c.pc = 0x0038CF50u; return; } if (c.pc != 0x0039264Cu) [[unlikely]] return; }
L_0039264C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00392BE0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00392A68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003928B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003926A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392C48; } }
L_003926A8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 58u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 29u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003926CCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003926CCu) [[unlikely]] return; }
L_003926CC:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 4u);  if (t) { goto L_00392750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039271Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0039271Cu) [[unlikely]] return; }
L_0039271C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 13;
L_00392750:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039275Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0039275Cu) [[unlikely]] return; }
L_0039275C:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[3].w[0];
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[9], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    set32(c.r[6], 0u + 10u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 3641u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = fp::sub(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[10].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = c.r[3].w[0];
    c.f[6] = c.r[8].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[4] = fp::sub(c.f[3], c.f[4]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[3]);
    c.f[4] = ld32((c.r[17].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[4] = fp::sub(c.f[3], c.f[4]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[3]);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[17].w[0] + 112u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[8].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.f[4] = fp::sub(c.f[5], c.f[3]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 32u), c.f[3]);
    c.f[3] = ld32((c.r[17].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.f[4] = fp::sub(c.f[5], c.f[3]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[3]);
    c.f[3] = ld32((c.r[17].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.f[4] = fp::sub(c.f[5], c.f[3]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 40u), c.f[3]);
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 85;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00392C48; } }
L_003928B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928C8u); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003928C8u) [[unlikely]] return; }
L_003928C8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928D4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003928D4u) [[unlikely]] return; }
L_003928D4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40460000u);
    c.r[3].d[0] = c.r[2].d[0] | 40678ull;
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392928u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00392928u) [[unlikely]] return; }
L_00392928:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] > 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_003929D8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.f[3] = c.r[3].w[0];
    set32(c.r[5], 0u + 29u);
    set32(c.r[4], 0u + 20u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00392C48; } }
L_003929D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392A20; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00392A10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_00392A20; } }
L_00392A10:
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A1Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00392A1Cu) [[unlikely]] return; }
L_00392A1C:
    c.budget -= 1;
L_00392A20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392C48; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00392A50; } }
    c.r[3].d[0] = 0ull | 50973ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00392C48; } }
L_00392A50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00392C48; } }
    c.budget -= 1;
L_00392A68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392B98; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_00392B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A94u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00392A94u) [[unlikely]] return; }
L_00392A94:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AA0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00392AA0u) [[unlikely]] return; }
L_00392AA0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40460000u);
    c.r[3].d[0] = c.r[2].d[0] | 40678ull;
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AF4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00392AF4u) [[unlikely]] return; }
L_00392AF4:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[0]);  if (t) { goto L_00392B98; } }
    c.budget -= 1;
L_00392B20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.f[0]);  if (t) { goto L_00392C48; } }
    c.budget -= 1;
L_00392B98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392C48; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00392BC8; } }
    set32(c.r[3], 0u + 3641u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00392C48; } }
L_00392BC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00392C48; } }
    c.budget -= 1;
L_00392BE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_00392C38; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 116u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B70000u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00392C48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00392C90; } }
L_00392C38:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_00392C48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[3] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], 0u + 1u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_00392C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00392CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00392D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CD8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00392CD8u) [[unlikely]] return; }
L_00392CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CE0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00392CE0u) [[unlikely]] return; }
L_00392CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CE8u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00392CE8u) [[unlikely]] return; }
L_00392CE8:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CF8u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00392CF8u) [[unlikely]] return; }
L_00392CF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D04u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00392D04u) [[unlikely]] return; }
L_00392D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00392D0Cu) [[unlikely]] return; }
L_00392D0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D28u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00392D28u) [[unlikely]] return; }
L_00392D28:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D38u); set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00392D38u) [[unlikely]] return; }
L_00392D38:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D44u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00392D44u) [[unlikely]] return; }
L_00392D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D4Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00392D4Cu) [[unlikely]] return; }
L_00392D4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D68u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00392D68u) [[unlikely]] return; }
L_00392D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D70u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00392D70u) [[unlikely]] return; }
L_00392D70:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D7Cu); set32(c.r[4], ld32((c.r[2].w[0] + 40u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00392D7Cu) [[unlikely]] return; }
L_00392D7C:
    c.budget -= 1;
L_00392D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[3].w[0] + 55u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00392E50; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1628u));
    st8((c.r[3].w[0] + 1629u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1631u));
    st8((c.r[3].w[0] + 1632u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 1631u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 1628u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392DF8u); st8((c.r[2].w[0] + 1630u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A1(c, 85u, depth + 1u); else { c.pc = 0x00385790u; return; } if (c.pc != 0x00392DF8u) [[unlikely]] return; }
L_00392DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392E50; } }
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 1631u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 1628u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1628u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392E38; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1629u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00392E38; } }
    st8((c.r[5].w[0] + 1630u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00392E38:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1632u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1631u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0] + 1633u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00392E50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1636u));
    st8((c.r[5].w[0] + 1637u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1628u));
    st8((c.r[5].w[0] + 1636u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[3].w[0] + 1635u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1635u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00392EC8; } }
L_00392E98:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1636u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00392ED0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1637u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00392ED0; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EC0u); st8((c.r[6].w[0] + 1635u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A4(c, 237u, depth + 1u); else { c.pc = 0x00392EE0u; return; } if (c.pc != 0x00392EC0u) [[unlikely]] return; }
L_00392EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392ED0; } }
L_00392EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392E98u | kUnwind; return; } goto L_00392E98; } }
L_00392ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392EE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00392F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F1Cu);  if (depth < kMaxDepth) unit_008E(c, 162u, depth + 1u); else { c.pc = 0x00339BE0u; return; } if (c.pc != 0x00392F1Cu) [[unlikely]] return; }
L_00392F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F24u);  if (depth < kMaxDepth) unit_00A4(c, 302u, depth + 1u); else { c.pc = 0x00393AB0u; return; } if (c.pc != 0x00392F24u) [[unlikely]] return; }
L_00392F24:
    c.budget -= 1;
L_00392F28:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1636u));
    c.r[5].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_00392F78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 73ll ? 1ull : 0ull;  if (t) { goto L_00392F50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00392F78; } }
    c.budget -= 1;
L_00392F50:
    c.r[5].d[0] = c.r[4].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 135ll ? 1ull : 0ull;  if (t) { goto L_00392F68; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00392F78; } }
    c.budget -= 1;
L_00392F68:
    c.r[5].d[0] = c.r[4].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00392F80; } }
    c.budget -= 1;
L_00392F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00392F80:
    set32(c.r[5], 0u + 139u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 138u);  if (t) { goto L_00393448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393438; } }
    set32(c.r[5], 0u + 136u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 82u);  if (t) { goto L_00393428; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393418; } }
    set32(c.r[5], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 80u);  if (t) { goto L_00393408; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003933F8; } }
    set32(c.r[5], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 77u);  if (t) { goto L_003933E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003933D8; } }
    set32(c.r[5], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 74u);  if (t) { goto L_003933C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003933B8; } }
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 63u);  if (t) { goto L_003933A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393398; } }
    set32(c.r[5], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 60u);  if (t) { goto L_00393388; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393378; } }
    set32(c.r[5], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 58u);  if (t) { goto L_00393368; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393358; } }
    set32(c.r[5], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 53u);  if (t) { goto L_00393348; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393338; } }
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 47u);  if (t) { goto L_00393328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00393318; } }
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 42u);  if (t) { goto L_00393308; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003932F8; } }
    set32(c.r[5], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 40u);  if (t) { goto L_003932E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003930A8; } }
    set32(c.r[5], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 75u);  if (t) { goto L_003930A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003930A0; } }
    set32(c.r[5], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 62u);  if (t) { goto L_003930A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003930A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393458; } }
L_003930A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003930A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003930C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930BCu);  if (depth < kMaxDepth) unit_00A5(c, 209u, depth + 1u); else { c.pc = 0x003957E0u; return; } if (c.pc != 0x003930BCu) [[unlikely]] return; }
L_003930BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003932A8; } }
    c.budget -= 1;
L_003930C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930D0u);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x003947A0u; return; } if (c.pc != 0x003930D0u) [[unlikely]] return; }
L_003930D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00393138; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00393100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930F8u);  if (depth < kMaxDepth) unit_008E(c, 122u, depth + 1u); else { c.pc = 0x00339950u; return; } if (c.pc != 0x003930F8u) [[unlikely]] return; }
L_003930F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003932A8; } }
L_00393100:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 31u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00393128; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[5].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393120u); set32(c.r[5], c.r[5].w[0] + 42u);  if (depth < kMaxDepth) unit_008D(c, 320u, depth + 1u); else { c.pc = 0x003373D0u; return; } if (c.pc != 0x00393120u) [[unlikely]] return; }
L_00393120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003932A8; } }
L_00393128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393130u);  if (depth < kMaxDepth) unit_008E(c, 44u, depth + 1u); else { c.pc = 0x00338520u; return; } if (c.pc != 0x00393130u) [[unlikely]] return; }
L_00393130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003932A8; } }
L_00393138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393140u); c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 65u, depth + 1u); else { c.pc = 0x00338800u; return; } if (c.pc != 0x00393140u) [[unlikely]] return; }
L_00393140:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 29u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003932A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[5].w[0] + 72u);  if (t) { goto L_00393288; } }
    c.budget -= 1;
L_00393168:
    set32(c.r[7], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00393198; } }
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393198; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00393198:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_003931C0; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003931B0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_003931B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003931C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003931C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00393270; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[2].d[0] = c.r[3].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 122ll ? 1ull : 0ull;  if (t) { goto L_003931E8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003931E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00393200; } }
L_003931E8:
    c.r[2].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 155ll ? 1ull : 0ull;  if (t) { goto L_00393200; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393200; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00393200:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00393268; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393218u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00393218u) [[unlikely]] return; }
L_00393218:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393228u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00393228u) [[unlikely]] return; }
L_00393228:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393288; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00393288; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 72u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393260u); set32(c.r[5], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00393260u) [[unlikely]] return; }
L_00393260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393278; } }
L_00393268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_00393278; } }
L_00393270:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00393278:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393168u | kUnwind; return; } goto L_00393168; } }
L_00393288:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393294u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00393294u) [[unlikely]] return; }
L_00393294:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_003932A8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00393460; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 50u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003932D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932C8u); set32(c.r[5], 0u + 195u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003932C8u) [[unlikely]] return; }
L_003932C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003932D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932DCu); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003932DCu) [[unlikely]] return; }
L_003932DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
    c.budget -= 1;
L_003932E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932F0u);  if (depth < kMaxDepth) unit_00A4(c, 303u, depth + 1u); else { c.pc = 0x00393AC0u; return; } if (c.pc != 0x003932F0u) [[unlikely]] return; }
L_003932F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003932F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393300u);  if (depth < kMaxDepth) unit_00A4(c, 314u, depth + 1u); else { c.pc = 0x00393C20u; return; } if (c.pc != 0x00393300u) [[unlikely]] return; }
L_00393300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393310u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 306u, depth + 1u); else { c.pc = 0x00393B70u; return; } if (c.pc != 0x00393310u) [[unlikely]] return; }
L_00393310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393320u);  if (depth < kMaxDepth) unit_00A4(c, 320u, depth + 1u); else { c.pc = 0x00393CD0u; return; } if (c.pc != 0x00393320u) [[unlikely]] return; }
L_00393320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393330u);  if (depth < kMaxDepth) unit_00A4(c, 324u, depth + 1u); else { c.pc = 0x00393D30u; return; } if (c.pc != 0x00393330u) [[unlikely]] return; }
L_00393330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393340u);  if (depth < kMaxDepth) unit_00A5(c, 160u, depth + 1u); else { c.pc = 0x00394FB0u; return; } if (c.pc != 0x00393340u) [[unlikely]] return; }
L_00393340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393350u);  if (depth < kMaxDepth) unit_00A4(c, 328u, depth + 1u); else { c.pc = 0x00393D90u; return; } if (c.pc != 0x00393350u) [[unlikely]] return; }
L_00393350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393360u);  if (depth < kMaxDepth) unit_00A4(c, 336u, depth + 1u); else { c.pc = 0x00393F80u; return; } if (c.pc != 0x00393360u) [[unlikely]] return; }
L_00393360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393370u);  if (depth < kMaxDepth) unit_00A4(c, 339u, depth + 1u); else { c.pc = 0x00393FD0u; return; } if (c.pc != 0x00393370u) [[unlikely]] return; }
L_00393370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393380u);  if (depth < kMaxDepth) unit_00A5(c, 4u, depth + 1u); else { c.pc = 0x00394020u; return; } if (c.pc != 0x00393380u) [[unlikely]] return; }
L_00393380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393390u);  if (depth < kMaxDepth) unit_00A5(c, 12u, depth + 1u); else { c.pc = 0x003940C0u; return; } if (c.pc != 0x00393390u) [[unlikely]] return; }
L_00393390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933A0u);  if (depth < kMaxDepth) unit_00A5(c, 20u, depth + 1u); else { c.pc = 0x00394160u; return; } if (c.pc != 0x003933A0u) [[unlikely]] return; }
L_003933A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003933A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933B0u);  if (depth < kMaxDepth) unit_00A5(c, 44u, depth + 1u); else { c.pc = 0x00394340u; return; } if (c.pc != 0x003933B0u) [[unlikely]] return; }
L_003933B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003933B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933C0u);  if (depth < kMaxDepth) unit_00A5(c, 58u, depth + 1u); else { c.pc = 0x00394460u; return; } if (c.pc != 0x003933C0u) [[unlikely]] return; }
L_003933C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003933C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933D0u);  if (depth < kMaxDepth) unit_00A5(c, 59u, depth + 1u); else { c.pc = 0x003944C0u; return; } if (c.pc != 0x003933D0u) [[unlikely]] return; }
L_003933D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003933D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933E0u);  if (depth < kMaxDepth) unit_00A5(c, 67u, depth + 1u); else { c.pc = 0x003945A0u; return; } if (c.pc != 0x003933E0u) [[unlikely]] return; }
L_003933E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003933E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933F0u);  if (depth < kMaxDepth) unit_00A5(c, 79u, depth + 1u); else { c.pc = 0x00394820u; return; } if (c.pc != 0x003933F0u) [[unlikely]] return; }
L_003933F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_003933F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393400u);  if (depth < kMaxDepth) unit_00A5(c, 99u, depth + 1u); else { c.pc = 0x00394A00u; return; } if (c.pc != 0x00393400u) [[unlikely]] return; }
L_00393400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393410u);  if (depth < kMaxDepth) unit_00A5(c, 120u, depth + 1u); else { c.pc = 0x00394C10u; return; } if (c.pc != 0x00393410u) [[unlikely]] return; }
L_00393410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393420u);  if (depth < kMaxDepth) unit_00A5(c, 115u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x00393420u) [[unlikely]] return; }
L_00393420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393430u);  if (depth < kMaxDepth) unit_00A5(c, 125u, depth + 1u); else { c.pc = 0x00394C80u; return; } if (c.pc != 0x00393430u) [[unlikely]] return; }
L_00393430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393440u);  if (depth < kMaxDepth) unit_00A5(c, 139u, depth + 1u); else { c.pc = 0x00394DA0u; return; } if (c.pc != 0x00393440u) [[unlikely]] return; }
L_00393440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393450u);  if (depth < kMaxDepth) unit_00A5(c, 151u, depth + 1u); else { c.pc = 0x00394EA0u; return; } if (c.pc != 0x00393450u) [[unlikely]] return; }
L_00393450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393460; } }
L_00393458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393460u); set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00393460u) [[unlikely]] return; }
L_00393460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00393480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 31u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003934B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003934B8; } }
L_003934B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A38; } }
L_003934B8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003934D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003934CCu);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x003934CCu) [[unlikely]] return; }
L_003934CC:
    c.budget -= 1;
L_003934D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 43u);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 1636u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    set32(c.r[2], 0u + 135u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003934F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003934F8:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 137u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00393510; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00393510:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00393528; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(50ll);
    c.budget -= 2;
L_00393528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393530u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393530u) [[unlikely]] return; }
L_00393530:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17008u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 30u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393550u); c.r[17].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x00397450u; return; } if (c.pc != 0x00393550u) [[unlikely]] return; }
L_00393550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393578; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_00393578; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003937C8; } }
    c.budget -= 1;
L_00393578:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_00393598; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003935B8; } }
    c.budget -= 1;
L_00393598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003935A0u);  if (depth < kMaxDepth) unit_00A4(c, 300u, depth + 1u); else { c.pc = 0x00393A80u; return; } if (c.pc != 0x003935A0u) [[unlikely]] return; }
L_003935A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { goto L_003935B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393600; } }
L_003935B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003937C8; } }
L_003935B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003935C0u);  if (depth < kMaxDepth) unit_00A4(c, 300u, depth + 1u); else { c.pc = 0x00393A80u; return; } if (c.pc != 0x003935C0u) [[unlikely]] return; }
L_003935C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393600; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003935F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00393600; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 53u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393600; } }
    c.budget -= 1;
L_003935F8:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.budget -= 2;
L_00393600:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16928u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00393658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039364Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 186u, depth + 1u); else { c.pc = 0x003954A0u; return; } if (c.pc != 0x0039364Cu) [[unlikely]] return; }
L_0039364C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393A38; } }
    c.budget -= 1;
L_00393658:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 51u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00393688; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039367Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0039367Cu) [[unlikely]] return; }
L_0039367C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393A38; } }
    c.budget -= 1;
L_00393688:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393698u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00393698u) [[unlikely]] return; }
L_00393698:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00393708; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003936C8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003936C8; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003936C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;  if (t) { goto L_003936F0; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003936E0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 1;
L_003936E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003936F0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003936F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00393708; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00393708:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[5].w[0] + 30280u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393720u); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00393720u) [[unlikely]] return; }
L_00393720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393748; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 44u);  if (t) { goto L_00393A38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003939E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A38; } }
L_00393748:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[7], 0u + 72u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 44u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393760u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x00393760u) [[unlikely]] return; }
L_00393760:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 44u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st16((c.r[5].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00393A18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_00393798; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003937B8; } }
L_00393798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 179u, depth + 1u); else { c.pc = 0x00395340u; return; } if (c.pc != 0x003937A0u) [[unlikely]] return; }
L_003937A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937B0u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x003937B0u) [[unlikely]] return; }
L_003937B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A18; } }
L_003937B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937C0u); c.r[4].d[0] = ld8((c.r[4].w[0] + 31u));  if (depth < kMaxDepth) unit_00A5(c, 179u, depth + 1u); else { c.pc = 0x00395340u; return; } if (c.pc != 0x003937C0u) [[unlikely]] return; }
L_003937C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A18; } }
L_003937C8:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27624u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393808u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 113u, depth + 1u); else { c.pc = 0x0011D9B0u; return; } if (c.pc != 0x00393808u) [[unlikely]] return; }
L_00393808:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[16].sd[0] < 93ll ? 1ull : 0ull;  if (t) { goto L_00393A38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 95ll ? 1ull : 0ull;  if (t) { goto L_00393828; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393A38; } }
L_00393828:
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 62u);  if (t) { goto L_00393A38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 94u);  if (t) { goto L_00393A38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    set32(c.r[3], 0u - 93u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 91u);  if (t) { goto L_00393A38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039386Cu);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x0039386Cu) [[unlikely]] return; }
L_0039386C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 96u);  if (t) { goto L_003938A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    c.r[3].d[0] = c.r[16].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 126ll ? 1ull : 0ull;  if (t) { goto L_00393890; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393A38; } }
L_00393890:
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    c.budget -= 1;
L_003938A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 51u));
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_003938D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_003938C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003938D0; } }
    c.budget -= 1;
L_003938C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A38; } }
L_003938D0:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_00393900; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_003938F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393900; } }
    c.budget -= 1;
L_003938F0:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00393A38; } }
    c.budget -= 1;
L_00393900:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_00393940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00393920; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393940; } }
    c.budget -= 1;
L_00393920:
    c.r[3].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_00393938; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393940; } }
    c.budget -= 1;
L_00393938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A38; } }
L_00393940:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_00393980; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00393960; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393980; } }
    c.budget -= 1;
L_00393960:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 42u);  if (t) { goto L_00393980; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393980; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00393A38; } }
L_00393980:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 37u);  if (t) { goto L_00393998; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    c.budget -= 1;
L_00393998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939A0u);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x003939A0u) [[unlikely]] return; }
L_003939A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 44u);  if (t) { goto L_003939D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00393A38; } }
    c.r[3].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_003939C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003939D0; } }
L_003939C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A38; } }
L_003939D0:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939E4u); st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003939E4u) [[unlikely]] return; }
L_003939E4:
    c.budget -= 1;
L_003939E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 42u));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 58u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A00u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x00393A00u) [[unlikely]] return; }
L_00393A00:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00393A18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00393A28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00393A28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A34u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393A34u) [[unlikely]] return; }
L_00393A34:
    c.budget -= 1;
L_00393A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00393A50:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1631u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 68ull;  c.pc = t; return; }
L_00393A60:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1631u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 34ull;  c.pc = t; return; }
L_00393A70:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1631u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 17ull;  c.pc = t; return; }
L_00393A80:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 1634u));  c.pc = t; return; }
L_00393A90:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1634u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1634u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00393AB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 1634u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00393AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 47u);  if (t) { goto L_00393B10; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393B50; } }
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 348u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00393B50; } }
    c.budget -= 1;
L_00393B10:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393B48; } }
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[6], 0u + 4u);
    st16((c.r[2].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B3Cu); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00393B3Cu) [[unlikely]] return; }
L_00393B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393B50; } }
    c.budget -= 1;
L_00393B48:
    set32(c.r[2], 0u - 1u);
    st8((c.r[3].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00393B50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B5Cu); set32(c.r[5], 0u + 193u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393B5Cu) [[unlikely]] return; }
L_00393B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393BD8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393BC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00393C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BA4u); set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00393BA4u) [[unlikely]] return; }
L_00393BA4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00393C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BC0u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393BC0u) [[unlikely]] return; }
L_00393BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393C10; } }
L_00393BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BD0u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x00393BD0u) [[unlikely]] return; }
L_00393BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393C10; } }
L_00393BD8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BE4u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393BE4u) [[unlikely]] return; }
L_00393BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BECu);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393BECu) [[unlikely]] return; }
L_00393BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BFCu);  if (depth < kMaxDepth) unit_00A5(c, 350u, depth + 1u); else { c.pc = 0x00396930u; return; } if (c.pc != 0x00393BFCu) [[unlikely]] return; }
L_00393BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393C10; } }
    c.budget -= 1;
L_00393C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C10u);  if (depth < kMaxDepth) unit_00A5(c, 356u, depth + 1u); else { c.pc = 0x00396AB0u; return; } if (c.pc != 0x00393C10u) [[unlikely]] return; }
L_00393C10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C44u);  if (depth < kMaxDepth) unit_00A4(c, 299u, depth + 1u); else { c.pc = 0x00393A70u; return; } if (c.pc != 0x00393C44u) [[unlikely]] return; }
L_00393C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393C60; } }
    c.budget -= 1;
L_00393C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C58u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 56u, depth + 1u); else { c.pc = 0x00338660u; return; } if (c.pc != 0x00393C58u) [[unlikely]] return; }
L_00393C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393CC0; } }
L_00393C60:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 348u);  if (t) { goto L_00393C90; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C7Cu); set32(c.r[16], c.r[3].w[0] + 44u);  if (depth < kMaxDepth) unit_00A5(c, 161u, depth + 1u); else { c.pc = 0x00394FC0u; return; } if (c.pc != 0x00393C7Cu) [[unlikely]] return; }
L_00393C7C:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00393CB0; } }
    c.budget -= 1;
L_00393C90:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 42u));
    set32(c.r[16], c.r[3].w[0] + 42u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CA0u); set32(c.r[4], c.r[3].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 161u, depth + 1u); else { c.pc = 0x00394FC0u; return; } if (c.pc != 0x00393CA0u) [[unlikely]] return; }
L_00393CA0:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00393CB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CBCu); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393CBCu) [[unlikely]] return; }
L_00393CBC:
    c.budget -= 1;
L_00393CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CF0u);  if (depth < kMaxDepth) unit_00A4(c, 300u, depth + 1u); else { c.pc = 0x00393A80u; return; } if (c.pc != 0x00393CF0u) [[unlikely]] return; }
L_00393CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D00u);  if (depth < kMaxDepth) unit_00A5(c, 401u, depth + 1u); else { c.pc = 0x00397330u; return; } if (c.pc != 0x00393D00u) [[unlikely]] return; }
L_00393D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393D18; } }
L_00393D08:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D14u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00393D14u) [[unlikely]] return; }
L_00393D14:
    c.budget -= 1;
L_00393D18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D50u);  if (depth < kMaxDepth) unit_00A4(c, 300u, depth + 1u); else { c.pc = 0x00393A80u; return; } if (c.pc != 0x00393D50u) [[unlikely]] return; }
L_00393D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D60u);  if (depth < kMaxDepth) unit_00A5(c, 405u, depth + 1u); else { c.pc = 0x003973C0u; return; } if (c.pc != 0x00393D60u) [[unlikely]] return; }
L_00393D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393D78; } }
L_00393D68:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D74u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00393D74u) [[unlikely]] return; }
L_00393D74:
    c.budget -= 1;
L_00393D78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 14u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 30u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_00393EC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00393EC0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_00393EC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00393EC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00393EC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_00393EC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00393E68; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_00393E68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00393E10; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00393E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393F40; } }
    c.budget -= 1;
L_00393E10:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 51u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393E28u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393E28u) [[unlikely]] return; }
L_00393E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393F70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 30u));
    set32(c.r[7], c.r[3].w[0] + 30u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F70; } }
    c.r[2].d[0] = c.r[6].d[0] | 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00393F48; } }
    c.budget -= 1;
L_00393E68:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 51u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393E80u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393E80u) [[unlikely]] return; }
L_00393E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393F70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 30u));
    set32(c.r[7], c.r[3].w[0] + 30u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] - 8u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F70; } }
    c.r[2].d[0] = c.r[6].d[0] ^ 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00393F48; } }
    c.budget -= 1;
L_00393EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393EC8u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00393EC8u) [[unlikely]] return; }
L_00393EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393F48; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393EF0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00393F48; } }
L_00393EF0:
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F08; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00393F48; } }
L_00393F08:
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F20; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00393F48; } }
L_00393F20:
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393F38; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00393F48; } }
L_00393F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393F70; } }
L_00393F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393F70; } }
L_00393F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F50u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00393F50u) [[unlikely]] return; }
L_00393F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F58u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00393F58u) [[unlikely]] return; }
L_00393F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F60u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00393F60u) [[unlikely]] return; }
L_00393F60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F6Cu); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393F6Cu) [[unlikely]] return; }
L_00393F6C:
    c.budget -= 1;
L_00393F70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00393FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FA0u);  if (depth < kMaxDepth) unit_008E(c, 70u, depth + 1u); else { c.pc = 0x003388A0u; return; } if (c.pc != 0x00393FA0u) [[unlikely]] return; }
L_00393FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393FB8; } }
L_00393FA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FB4u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00393FB4u) [[unlikely]] return; }
L_00393FB4:
    c.budget -= 1;
L_00393FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00393FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FF0u);  if (depth < kMaxDepth) unit_008E(c, 70u, depth + 1u); else { c.pc = 0x003388A0u; return; } if (c.pc != 0x00393FF0u) [[unlikely]] return; }
L_00393FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A5(c, 3u, depth); } }
L_00393FF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394004u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00A5(c, 2u, depth);
}

}
