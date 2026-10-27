#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A9[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A4000;
    case 2u: goto L_003A4004;
    case 3u: goto L_003A4008;
    case 4u: goto L_003A4028;
    case 5u: goto L_003A4038;
    case 6u: goto L_003A4054;
    case 7u: goto L_003A4060;
    case 8u: goto L_003A4070;
    case 9u: goto L_003A4078;
    case 10u: goto L_003A4094;
    case 11u: goto L_003A40A4;
    case 12u: goto L_003A40AC;
    case 13u: goto L_003A40B8;
    case 14u: goto L_003A40D4;
    case 15u: goto L_003A40E8;
    case 16u: goto L_003A40FC;
    case 17u: goto L_003A4104;
    case 18u: goto L_003A4120;
    case 19u: goto L_003A4128;
    case 20u: goto L_003A4178;
    case 21u: goto L_003A41AC;
    case 22u: goto L_003A41B4;
    case 23u: goto L_003A41D8;
    case 24u: goto L_003A4200;
    case 25u: goto L_003A4220;
    case 26u: goto L_003A42A0;
    case 27u: goto L_003A42C4;
    case 28u: goto L_003A4320;
    case 29u: goto L_003A4340;
    case 30u: goto L_003A43A0;
    case 31u: goto L_003A43D0;
    case 32u: goto L_003A4430;
    case 33u: goto L_003A44B0;
    case 34u: goto L_003A44DC;
    case 35u: goto L_003A4528;
    case 36u: goto L_003A45A0;
    case 37u: goto L_003A45C0;
    case 38u: goto L_003A4610;
    case 39u: goto L_003A4638;
    case 40u: goto L_003A4664;
    case 41u: goto L_003A4680;
    case 42u: goto L_003A469C;
    case 43u: goto L_003A46AC;
    case 44u: goto L_003A46B4;
    case 45u: goto L_003A46C4;
    case 46u: goto L_003A46E0;
    case 47u: goto L_003A46F0;
    case 48u: goto L_003A4714;
    case 49u: goto L_003A471C;
    case 50u: goto L_003A473C;
    case 51u: goto L_003A4748;
    case 52u: goto L_003A4760;
    case 53u: goto L_003A4780;
    case 54u: goto L_003A47F0;
    case 55u: goto L_003A4814;
    case 56u: goto L_003A4850;
    case 57u: goto L_003A4870;
    case 58u: goto L_003A48D0;
    case 59u: goto L_003A4900;
    case 60u: goto L_003A497C;
    case 61u: goto L_003A49F0;
    case 62u: goto L_003A4A1C;
    case 63u: goto L_003A4A74;
    case 64u: goto L_003A4AE0;
    case 65u: goto L_003A4B00;
    case 66u: goto L_003A4B60;
    case 67u: goto L_003A4B88;
    case 68u: goto L_003A4B98;
    case 69u: goto L_003A4BD0;
    case 70u: goto L_003A4BF0;
    case 71u: goto L_003A4C50;
    case 72u: goto L_003A4C74;
    case 73u: goto L_003A4CA0;
    case 74u: goto L_003A4CC0;
    case 75u: goto L_003A4D20;
    case 76u: goto L_003A4D4C;
    case 77u: goto L_003A4D90;
    case 78u: goto L_003A4DB0;
    case 79u: goto L_003A4DDC;
    case 80u: goto L_003A4E00;
    case 81u: goto L_003A4E40;
    case 82u: goto L_003A4E60;
    case 83u: goto L_003A4ED0;
    case 84u: goto L_003A4EF4;
    case 85u: goto L_003A4F30;
    case 86u: goto L_003A4F50;
    case 87u: goto L_003A4FA0;
    case 88u: goto L_003A4FC8;
    case 89u: goto L_003A4FF8;
    case 90u: goto L_003A5010;
    case 91u: goto L_003A5038;
    case 92u: goto L_003A5048;
    case 93u: goto L_003A5058;
    case 94u: goto L_003A5060;
    case 95u: goto L_003A5074;
    case 96u: goto L_003A5090;
    case 97u: goto L_003A50A4;
    case 98u: goto L_003A50C8;
    case 99u: goto L_003A50D0;
    case 100u: goto L_003A50F8;
    case 101u: goto L_003A5118;
    case 102u: goto L_003A5140;
    case 103u: goto L_003A5160;
    case 104u: goto L_003A51B0;
    case 105u: goto L_003A51D4;
    case 106u: goto L_003A5320;
    case 107u: goto L_003A5340;
    case 108u: goto L_003A53B0;
    case 109u: goto L_003A53D4;
    case 110u: goto L_003A5410;
    case 111u: goto L_003A5430;
    case 112u: goto L_003A5490;
    case 113u: goto L_003A5510;
    case 114u: goto L_003A5550;
    case 115u: goto L_003A55A0;
    case 116u: goto L_003A55C0;
    case 117u: goto L_003A5640;
    case 118u: goto L_003A5690;
    case 119u: goto L_003A56D0;
    case 120u: goto L_003A5720;
    case 121u: goto L_003A5740;
    case 122u: goto L_003A57E0;
    case 123u: goto L_003A5840;
    case 124u: goto L_003A5880;
    case 125u: goto L_003A58E0;
    case 126u: goto L_003A5900;
    case 127u: goto L_003A5960;
    case 128u: goto L_003A5A2C;
    case 129u: goto L_003A5A50;
    case 130u: goto L_003A5A74;
    case 131u: goto L_003A5AA0;
    case 132u: goto L_003A5AC0;
    case 133u: goto L_003A5AF0;
    case 134u: goto L_003A5B14;
    case 135u: goto L_003A5B50;
    case 136u: goto L_003A5B70;
    case 137u: goto L_003A5BA0;
    case 138u: goto L_003A5BC0;
    case 139u: goto L_003A5BD8;
    case 140u: goto L_003A5C20;
    case 141u: goto L_003A5C48;
    case 142u: goto L_003A5C90;
    case 143u: goto L_003A5CB0;
    case 144u: goto L_003A5D20;
    case 145u: goto L_003A5DE4;
    case 146u: goto L_003A5E00;
    case 147u: goto L_003A5E0C;
    case 148u: goto L_003A5E34;
    case 149u: goto L_003A5E4C;
    case 150u: goto L_003A5E70;
    case 151u: goto L_003A5ECC;
    case 152u: goto L_003A5EF0;
    case 153u: goto L_003A5F08;
    case 154u: goto L_003A5F98;
    case 155u: goto L_003A5FAC;
    case 156u: goto L_003A5FB4;
    case 157u: goto L_003A5FE0;
    case 158u: goto L_003A60B0;
    case 159u: goto L_003A6180;
    case 160u: goto L_003A6190;
    case 161u: goto L_003A61D0;
    case 162u: goto L_003A61E0;
    case 163u: goto L_003A61F0;
    case 164u: goto L_003A628C;
    case 165u: goto L_003A62A0;
    case 166u: goto L_003A62A8;
    case 167u: goto L_003A62B0;
    case 168u: goto L_003A62B8;
    case 169u: goto L_003A62C0;
    case 170u: goto L_003A62C8;
    case 171u: goto L_003A62D8;
    case 172u: goto L_003A62E4;
    case 173u: goto L_003A62EC;
    case 174u: goto L_003A62F8;
    case 175u: goto L_003A6300;
    case 176u: goto L_003A6328;
    case 177u: goto L_003A6330;
    case 178u: goto L_003A638C;
    case 179u: goto L_003A63E0;
    case 180u: goto L_003A6440;
    case 181u: goto L_003A644C;
    case 182u: goto L_003A64EC;
    case 183u: goto L_003A6544;
    case 184u: goto L_003A658C;
    case 185u: goto L_003A65D0;
    case 186u: goto L_003A65F0;
    case 187u: goto L_003A6668;
    case 188u: goto L_003A669C;
    case 189u: goto L_003A66B0;
    case 190u: goto L_003A66BC;
    case 191u: goto L_003A66E0;
    case 192u: goto L_003A6714;
    case 193u: goto L_003A6728;
    case 194u: goto L_003A6730;
    case 195u: goto L_003A6738;
    case 196u: goto L_003A6740;
    case 197u: goto L_003A6748;
    case 198u: goto L_003A6750;
    case 199u: goto L_003A6760;
    case 200u: goto L_003A676C;
    case 201u: goto L_003A6774;
    case 202u: goto L_003A6780;
    case 203u: goto L_003A6790;
    case 204u: goto L_003A67A8;
    case 205u: goto L_003A67B8;
    case 206u: goto L_003A67C0;
    case 207u: goto L_003A67C8;
    case 208u: goto L_003A67E0;
    case 209u: goto L_003A6808;
    case 210u: goto L_003A6818;
    case 211u: goto L_003A6828;
    case 212u: goto L_003A6840;
    case 213u: goto L_003A6860;
    case 214u: goto L_003A68A0;
    case 215u: goto L_003A68B0;
    case 216u: goto L_003A68BC;
    case 217u: goto L_003A68D4;
    case 218u: goto L_003A68EC;
    case 219u: goto L_003A6900;
    case 220u: goto L_003A6918;
    case 221u: goto L_003A692C;
    case 222u: goto L_003A6940;
    case 223u: goto L_003A6954;
    case 224u: goto L_003A6980;
    case 225u: goto L_003A6A18;
    case 226u: goto L_003A6A30;
    case 227u: goto L_003A6A44;
    case 228u: goto L_003A6A4C;
    case 229u: goto L_003A6A70;
    case 230u: goto L_003A6A78;
    case 231u: goto L_003A6A80;
    case 232u: goto L_003A6A88;
    case 233u: goto L_003A6A90;
    case 234u: goto L_003A6A98;
    case 235u: goto L_003A6AA4;
    case 236u: goto L_003A6AAC;
    case 237u: goto L_003A6AC0;
    case 238u: goto L_003A6B08;
    case 239u: goto L_003A6B1C;
    case 240u: goto L_003A6B24;
    case 241u: goto L_003A6B2C;
    case 242u: goto L_003A6B38;
    case 243u: goto L_003A6B4C;
    case 244u: goto L_003A6B50;
    case 245u: goto L_003A6B78;
    case 246u: goto L_003A6B94;
    case 247u: goto L_003A6B9C;
    case 248u: goto L_003A6BA8;
    case 249u: goto L_003A6BC4;
    case 250u: goto L_003A6BE8;
    case 251u: goto L_003A6C20;
    case 252u: goto L_003A6C6C;
    case 253u: goto L_003A6CA0;
    case 254u: goto L_003A6CF0;
    case 255u: goto L_003A6D48;
    case 256u: goto L_003A6D50;
    case 257u: goto L_003A6D58;
    case 258u: goto L_003A6D98;
    case 259u: goto L_003A6DA0;
    case 260u: goto L_003A6DD0;
    case 261u: goto L_003A6DE4;
    case 262u: goto L_003A6E18;
    case 263u: goto L_003A6E40;
    case 264u: goto L_003A6E48;
    case 265u: goto L_003A6E78;
    case 266u: goto L_003A6EB8;
    case 267u: goto L_003A6EEC;
    case 268u: goto L_003A6F00;
    case 269u: goto L_003A6F10;
    case 270u: goto L_003A6F18;
    case 271u: goto L_003A6F44;
    case 272u: goto L_003A6F50;
    case 273u: goto L_003A6F58;
    case 274u: goto L_003A6F90;
    case 275u: goto L_003A6F98;
    case 276u: goto L_003A6FE0;
    case 277u: goto L_003A7020;
    case 278u: goto L_003A7038;
    case 279u: goto L_003A70B8;
    case 280u: goto L_003A70D0;
    case 281u: goto L_003A70F0;
    case 282u: goto L_003A7130;
    case 283u: goto L_003A7170;
    case 284u: goto L_003A717C;
    case 285u: goto L_003A7190;
    case 286u: goto L_003A71D0;
    case 287u: goto L_003A71DC;
    case 288u: goto L_003A71F8;
    case 289u: goto L_003A7210;
    case 290u: goto L_003A72C4;
    case 291u: goto L_003A72E0;
    case 292u: goto L_003A72F4;
    case 293u: goto L_003A7328;
    case 294u: goto L_003A735C;
    case 295u: goto L_003A7368;
    case 296u: goto L_003A7398;
    case 297u: goto L_003A73D8;
    case 298u: goto L_003A740C;
    case 299u: goto L_003A7420;
    case 300u: goto L_003A7430;
    case 301u: goto L_003A7448;
    case 302u: goto L_003A7464;
    case 303u: goto L_003A7470;
    case 304u: goto L_003A7478;
    case 305u: goto L_003A74B8;
    case 306u: goto L_003A74C0;
    case 307u: goto L_003A7508;
    case 308u: goto L_003A7540;
    case 309u: goto L_003A7560;
    case 310u: goto L_003A7588;
    case 311u: goto L_003A75A4;
    case 312u: goto L_003A75C8;
    case 313u: goto L_003A7630;
    case 314u: goto L_003A7644;
    case 315u: goto L_003A7690;
    case 316u: goto L_003A76C4;
    case 317u: goto L_003A7708;
    case 318u: goto L_003A7750;
    case 319u: goto L_003A7764;
    case 320u: goto L_003A779C;
    case 321u: goto L_003A77A4;
    case 322u: goto L_003A77B8;
    case 323u: goto L_003A77D4;
    case 324u: goto L_003A77E8;
    case 325u: goto L_003A7800;
    case 326u: goto L_003A7814;
    case 327u: goto L_003A7838;
    case 328u: goto L_003A785C;
    case 329u: goto L_003A7870;
    case 330u: goto L_003A7888;
    case 331u: goto L_003A78B0;
    case 332u: goto L_003A78C4;
    case 333u: goto L_003A7928;
    case 334u: goto L_003A79B0;
    case 335u: goto L_003A79E8;
    case 336u: goto L_003A7A28;
    case 337u: goto L_003A7A70;
    case 338u: goto L_003A7A84;
    case 339u: goto L_003A7A90;
    case 340u: goto L_003A7A9C;
    case 341u: goto L_003A7AA8;
    case 342u: goto L_003A7AC0;
    case 343u: goto L_003A7AE8;
    case 344u: goto L_003A7B60;
    case 345u: goto L_003A7B80;
    case 346u: goto L_003A7BD0;
    case 347u: goto L_003A7BF8;
    case 348u: goto L_003A7C00;
    case 349u: goto L_003A7C20;
    case 350u: goto L_003A7C30;
    case 351u: goto L_003A7C3C;
    case 352u: goto L_003A7C58;
    case 353u: goto L_003A7C74;
    case 354u: goto L_003A7C8C;
    case 355u: goto L_003A7CB0;
    case 356u: goto L_003A7CCC;
    case 357u: goto L_003A7D10;
    case 358u: goto L_003A7D30;
    case 359u: goto L_003A7D40;
    case 360u: goto L_003A7D58;
    case 361u: goto L_003A7D74;
    case 362u: goto L_003A7DA0;
    case 363u: goto L_003A7DB0;
    case 364u: goto L_003A7DD0;
    case 365u: goto L_003A7E30;
    case 366u: goto L_003A7E80;
    case 367u: goto L_003A7EA0;
    case 368u: goto L_003A7F20;
    default: bad_entry(c, 0x003A4000u); return;
    }
L_003A4000:
    c.budget -= 1;
L_003A4004:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003A4008:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3FF8u | kUnwind; return; } [[clang::musttail]] return unit_00A8(c, 435u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4028u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A4028u) [[unlikely]] return; }
L_003A4028:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4038u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A4038u) [[unlikely]] return; }
L_003A4038:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 3425u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4054u); set32(c.r[5], c.r[5].w[0] + 31168u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A4054u) [[unlikely]] return; }
L_003A4054:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4060u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A4060u) [[unlikely]] return; }
L_003A4060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4070u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A4070u) [[unlikely]] return; }
L_003A4070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4078u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A4078u) [[unlikely]] return; }
L_003A4078:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4094u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A4094u) [[unlikely]] return; }
L_003A4094:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40A4u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A40A4u) [[unlikely]] return; }
L_003A40A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A40ACu) [[unlikely]] return; }
L_003A40AC:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 96u);
    c.budget -= 3;
L_003A40B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A4178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40D4u); set32(c.r[4], c.r[4].w[0] + 3436u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003A40D4u) [[unlikely]] return; }
L_003A40D4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40E8u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A40E8u) [[unlikely]] return; }
L_003A40E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40FCu); set32(c.r[4], c.r[2].w[0] + 3428u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A40FCu) [[unlikely]] return; }
L_003A40FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4104u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A4104u) [[unlikely]] return; }
L_003A4104:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4120u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A4120u) [[unlikely]] return; }
L_003A4120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4128u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A4128u) [[unlikely]] return; }
L_003A4128:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));  if (t) { goto L_003A4138; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003A4138:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], 0u + 456u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] + 3436u);
    c.f[14] = 0u;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4178u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A4178u) [[unlikely]] return; }
L_003A4178:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 154u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A40B8u | kUnwind; return; } goto L_003A40B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3425u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A41D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41ACu);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A41ACu) [[unlikely]] return; }
L_003A41AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A41B4u) [[unlikely]] return; }
L_003A41B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2796u)));
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41D8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A41D8u) [[unlikely]] return; }
L_003A41D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003A4200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4220:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    set32(c.r[9], c.r[9].w[0] + 15856u);
    c.r[8].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[7], 0u + 15u);
    set32(c.r[6], 0u + 43u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC37E0000u);
    set32(c.r[3], 0u + 116u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[0]);  c.pc = t; return; }
L_003A42A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A42D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A42C4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A42C4u) [[unlikely]] return; }
L_003A42C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4308; } }
    c.budget -= 1;
L_003A42D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4308; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], 0u + 154u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3427u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A4308; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4340:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 16096u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A43A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003A43D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43D0u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A43D0u) [[unlikely]] return; }
L_003A43D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4490; } }
L_003A43D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A4490; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[5], c.r[5].w[0] + 23120u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_003A4438; } }
    set32(c.r[3], 0u + 54u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 16096u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4430u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A4430u) [[unlikely]] return; }
L_003A4430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4450; } }
L_003A4438:
    set32(c.r[3], 0u + 21u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 15984u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_003A4450:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A4488; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_003A4488:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A44B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003A44E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44DCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A44DCu) [[unlikely]] return; }
L_003A44DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4588; } }
    c.budget -= 1;
L_003A44E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4588; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A4550; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4528u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A4528u) [[unlikely]] return; }
L_003A4528:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4588; } }
    c.budget -= 1;
L_003A4538:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A4588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4588; } }
L_003A4550:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4578; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A4580; } }
L_003A4578:
    set32(c.r[3], 0u + 77u);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4580:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A45A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A45C0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 56u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A4610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4638u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4638u) [[unlikely]] return; }
L_003A4638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4670; } }
L_003A4640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003A4670; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4664u);  if (depth < kMaxDepth) unit_00A9(c, 41u, depth + 1u); else { c.pc = 0x003A4680u; return; } if (c.pc != 0x003A4664u) [[unlikely]] return; }
L_003A4664:
    c.budget -= 1;
L_003A4668:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A469Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A469Cu) [[unlikely]] return; }
L_003A469C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46ACu);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A46ACu) [[unlikely]] return; }
L_003A46AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46B4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A46B4u) [[unlikely]] return; }
L_003A46B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46C4u); set32(c.r[4], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A46C4u) [[unlikely]] return; }
L_003A46C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46E0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A46E0u) [[unlikely]] return; }
L_003A46E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[16], 0u + 452u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46F0u); set32(c.r[4], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003A46F0u) [[unlikely]] return; }
L_003A46F0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4714u); set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A4714u) [[unlikely]] return; }
L_003A4714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A471Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A471Cu) [[unlikely]] return; }
L_003A471C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = 0u;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A473Cu); set32(c.r[4], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A473Cu) [[unlikely]] return; }
L_003A473C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4748u); set32(c.r[4], c.r[2].w[0] + 4685u);  if (depth < kMaxDepth) unit_00A8(c, 368u, depth + 1u); else { c.pc = 0x003A2F90u; return; } if (c.pc != 0x003A4748u) [[unlikely]] return; }
L_003A4748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A4760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4780:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A47D0; } }
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], 0u + 58u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A47E0; } }
L_003A47D0:
    set32(c.r[3], 0u + 16u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 25u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A47E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A47F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003A4820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4814u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4814u) [[unlikely]] return; }
L_003A4814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4838; } }
    c.budget -= 1;
L_003A4820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A4838; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4870:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[8], c.r[8].w[0] + 15984u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A48D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003A4908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4900u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4900u) [[unlikely]] return; }
L_003A4900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A49D0; } }
L_003A4908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A49D0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 15546u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 23216u);
    set32(c.r[6], c.r[6].w[0] + 23200u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 20;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003A4988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 16096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A497Cu); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A497Cu) [[unlikely]] return; }
L_003A497C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4998; } }
    c.budget -= 1;
L_003A4988:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 15984u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 4;
L_003A4998:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A49C8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003A49C8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A49D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A49F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003A4A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A1Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4A1Cu) [[unlikely]] return; }
L_003A4A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4AD0; } }
    c.budget -= 1;
L_003A4A28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A4A48; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A4AD0; } }
    c.budget -= 1;
L_003A4A48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 1u);  if (t) { goto L_003A4A98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15546u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A4A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A4A74u) [[unlikely]] return; }
L_003A4A74:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4AD0; } }
L_003A4A80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A4AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4AD0; } }
L_003A4A98:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A4AC0; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A4AC8; } }
L_003A4AC0:
    set32(c.r[3], 0u + 77u);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4AC8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4AE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4B00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A4B48; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4B50; } }
L_003A4B48:
    set32(c.r[3], 0u + 12u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4B50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 61u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A4B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B88u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4B88u) [[unlikely]] return; }
L_003A4B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4BB8; } }
L_003A4B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B98u);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x003A4B98u) [[unlikely]] return; }
L_003A4B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4BB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A4BB8; } }
L_003A4BB0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4BD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4BF0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 15856u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43130000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41E40000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 296u)));
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 649u));
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A4C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 8u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A4C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C74u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4C74u) [[unlikely]] return; }
L_003A4C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4C88; } }
    c.budget -= 1;
L_003A4C80:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4C88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4CC0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[8], c.r[8].w[0] + 16096u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 27u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A4D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_003A4D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D4Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4D4Cu) [[unlikely]] return; }
L_003A4D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4D98; } }
    c.budget -= 1;
L_003A4D58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A4D88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003A4D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A4D90u) [[unlikely]] return; }
L_003A4D90:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A4D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003A4DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DDCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4DDCu) [[unlikely]] return; }
L_003A4DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4E30; } }
    c.budget -= 1;
L_003A4DE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A4E10; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E00u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A4E00u) [[unlikely]] return; }
L_003A4E00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4E30; } }
    c.budget -= 1;
L_003A4E10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A4E30; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003A4E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4E60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A4EB0; } }
    set32(c.r[4], 0u + 67u);
    set32(c.r[3], 0u + 13u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A4EC0; } }
L_003A4EB0:
    set32(c.r[3], 0u + 23u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A4EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A4ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A4F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4EF4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4EF4u) [[unlikely]] return; }
L_003A4EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4F18; } }
    c.budget -= 1;
L_003A4F00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A4F18; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A4F18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A4F50:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 59u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A4FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4FC8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A4FC8u) [[unlikely]] return; }
L_003A4FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5000; } }
L_003A4FD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A5000; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4FF8u);  if (depth < kMaxDepth) unit_00A9(c, 90u, depth + 1u); else { c.pc = 0x003A5010u; return; } if (c.pc != 0x003A4FF8u) [[unlikely]] return; }
L_003A4FF8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5010:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 96u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_003A5038:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5048u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A5048u) [[unlikely]] return; }
L_003A5048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5058u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A5058u) [[unlikely]] return; }
L_003A5058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5060u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A5060u) [[unlikely]] return; }
L_003A5060:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5074u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A5074u) [[unlikely]] return; }
L_003A5074:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5090u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A5090u) [[unlikely]] return; }
L_003A5090:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[19], 0u + 452u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50A4u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003A50A4u) [[unlikely]] return; }
L_003A50A4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50C8u); set32(c.r[19], c.r[19].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A50C8u) [[unlikely]] return; }
L_003A50C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50D0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A50D0u) [[unlikely]] return; }
L_003A50D0:
    c.f[1] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[0] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4822u);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50F8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A50F8u) [[unlikely]] return; }
L_003A50F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 24u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5038u | kUnwind; return; } goto L_003A5038; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5118u); set32(c.r[4], c.r[2].w[0] + 4839u);  if (depth < kMaxDepth) unit_00A8(c, 368u, depth + 1u); else { c.pc = 0x003A2F90u; return; } if (c.pc != 0x003A5118u) [[unlikely]] return; }
L_003A5118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A5140:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5160:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A51B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A51E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51D4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A51D4u) [[unlikely]] return; }
L_003A51D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5310; } }
    c.budget -= 1;
L_003A51E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15556u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003A5310; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A5270; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15555u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A5210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5218; } }
L_003A5210:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_003A5218:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2601u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);  if (t) { goto L_003A5230; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_003A5230:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003A5268; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_003A5300; } }
    c.budget -= 1;
L_003A5268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_003A5300; } }
L_003A5270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15555u));
    c.r[1].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 11u);  if (t) { goto L_003A5298; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A52A0; } }
    c.budget -= 1;
L_003A5298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A52A8; } }
L_003A52A0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_003A52A8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2601u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_003A52C0; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_003A52C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003A52F8; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_003A5300; } }
    c.budget -= 1;
L_003A52F8:
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_003A5300:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A5310; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5340:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A5390; } }
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], 0u + 53u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A53A8; } }
L_003A5390:
    set32(c.r[3], 0u + 16u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 69u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3090000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
L_003A53A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A53B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A53E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A53D4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A53D4u) [[unlikely]] return; }
L_003A53D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A53F8; } }
    c.budget -= 1;
L_003A53E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A53F8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A53F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5410:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5430:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    set32(c.r[9], c.r[9].w[0] + 15648u);
    c.r[8].d[0] = c.r[3].d[0] | 26214ull;
    set32(c.r[7], 0u + 20u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8F0000u);
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = c.r[3].d[0] | 23594ull;
    set32(c.r[3], 0u + 70u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[8].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A5490:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A5500; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A54E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_003A54F8; } }
    c.budget -= 1;
L_003A54E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 6;
L_003A54F8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5510:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_003A5538; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003A5538:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A5550:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5588; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_003A5590; } }
L_003A5588:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5590:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A55A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23376u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A55C0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8F0000u);
    set32(c.r[7], c.r[7].w[0] + 15648u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 20u);
    c.r[3].d[0] = c.r[3].d[0] | 23594ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + 304u);  if (t) { goto L_003A5628; } }
    set32(c.r[4], 0u + 15u);
    set32(c.r[3], 0u + 71u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A5638; } }
L_003A5628:
    set32(c.r[3], 0u + 13u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 72u);
    st8((c.r[9].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A5638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5640:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A5680; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5670; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A5680; } }
    c.budget -= 1;
L_003A5670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A5680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5690:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_003A56B8; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003A56B8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A56D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5708; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_003A5710; } }
L_003A5708:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5720:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5740:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[7].d[0] = c.r[5].d[0] | 26214ull;
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D160000u);
    set32(c.r[10], c.r[10].w[0] + 15648u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xC2A00000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[5].d[0] = c.r[5].d[0] | 12234ull;
    set32(c.r[3], 0u + 15u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 68u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[12], c.r[4].w[0] + 304u);  if (t) { goto L_003A57C0; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A57C8; } }
L_003A57C0:
    set32(c.r[3], 0u + 13u);
    st8((c.r[12].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A57C8:
    st8((c.r[12].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[12].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[12].w[0] + 9u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A57E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5818; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_003A5830; } }
L_003A5818:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 6;
L_003A5830:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A5840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5868; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003A5868:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A5880:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 1u);  if (t) { goto L_003A58C0; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 2u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A58D0; } }
    c.budget -= 1;
L_003A58C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A58D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A58E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5900:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 16288u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC2600000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 54u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A5960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003A5988; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A5A38; } }
L_003A5988:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2601u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A59B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003A59B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A59D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A5A38; } }
L_003A59D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15547u));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003A59F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003A5A0C; } }
L_003A59F4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003A5A0C:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2600000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A2Cu); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A5A2Cu) [[unlikely]] return; }
L_003A5A2C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003A5A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A5A80; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A74u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A5A74u) [[unlikely]] return; }
L_003A5A74:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A5A88; } }
L_003A5A80:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5AA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5AC0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], 0u + 75u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A5AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A5B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B14u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A5B14u) [[unlikely]] return; }
L_003A5B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5B38; } }
    c.budget -= 1;
L_003A5B20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A5B38; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5B38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5B50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5B70:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[3], 0u + 76u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A5BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BC0u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A5BC0u) [[unlikely]] return; }
L_003A5BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5C10; } }
L_003A5BC8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
L_003A5BD8:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 4813u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003A5BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_003A5C00; } }
    c.budget -= 1;
L_003A5BF0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5BD8u | kUnwind; return; } goto L_003A5BD8; } }
L_003A5C00:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A5C10; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5C10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C48u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003A5C48u) [[unlikely]] return; }
L_003A5C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A5C90; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 19u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[5].w[0] + 24u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], c.r[3].w[0] + 23728u);
    st32((c.r[5].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25072u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C90u); st32((c.r[5].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003A5C90u) [[unlikely]] return; }
L_003A5C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5CB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A5CE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A5CE8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_003A5CE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A5D00; } }
    c.budget -= 1;
L_003A5CE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A5D00; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003A5D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 14624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A5D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 19464u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[16].w[0] + 64u);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DE4u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003A5DE4u) [[unlikely]] return; }
L_003A5DE4:
    st32((c.r[17].w[0] + 368u), 0u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E00u); set32(c.r[7], c.r[16].w[0] + 34u);  if (depth < kMaxDepth) unit_0020(c, 181u, depth + 1u); else { c.pc = 0x00182C90u; return; } if (c.pc != 0x003A5E00u) [[unlikely]] return; }
L_003A5E00:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 191u, depth + 1u); else { c.pc = 0x003A66E0u; return; } if (c.pc != 0x003A5E0Cu) [[unlikely]] return; }
L_003A5E0C:
    st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A5E40; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E34u); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003A5E34u) [[unlikely]] return; }
L_003A5E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5E50; } }
    c.budget -= 1;
L_003A5E40:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x003A5E4Cu) [[unlikely]] return; }
L_003A5E4C:
    c.budget -= 1;
L_003A5E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A5ED0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 5u);  if (t) { goto L_003A5ED0; } }
    set32(c.r[6], c.r[16].w[0] + 64u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5ECCu); set32(c.r[7], c.r[16].w[0] + 34u);  if (depth < kMaxDepth) unit_0020(c, 181u, depth + 1u); else { c.pc = 0x00182C90u; return; } if (c.pc != 0x003A5ECCu) [[unlikely]] return; }
L_003A5ECC:
    c.budget -= 1;
L_003A5ED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 14640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5EF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5EF0u) [[unlikely]] return; }
L_003A5EF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F08u);  if (depth < kMaxDepth) unit_00A9(c, 224u, depth + 1u); else { c.pc = 0x003A6980u; return; } if (c.pc != 0x003A5F08u) [[unlikely]] return; }
L_003A5F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A5F18; } }
    st32((c.r[17].w[0] + 504u), 0u);
    c.budget -= 2;
L_003A5F18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[5].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_003A5F38; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A5F38; } }
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 1;
L_003A5F38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] ^ 16ull;  if (t) { goto L_003A5F50; } }
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A5F60; } }
    c.budget -= 1;
L_003A5F50:
    c.r[3].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A5F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A5FB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A5FA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F98u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 291u, depth + 1u); else { c.pc = 0x002ABC10u; return; } if (c.pc != 0x003A5F98u) [[unlikely]] return; }
L_003A5F98:
    st16((c.r[17].w[0] + 556u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003A5FA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5FACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 191u, depth + 1u); else { c.pc = 0x003A66E0u; return; } if (c.pc != 0x003A5FACu) [[unlikely]] return; }
L_003A5FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5FB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 186u, depth + 1u); else { c.pc = 0x003A65F0u; return; } if (c.pc != 0x003A5FB4u) [[unlikely]] return; }
L_003A5FB4:
    c.budget -= 1;
L_003A5FB8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A5FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5FE0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A6018; } }
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A6018; } }
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.budget -= 1;
L_003A6018:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A6068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A6048; } }
    c.f[1] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 136u), c.f[0]);  if (t) { goto L_003A6080; } }
L_003A6048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 136u), c.f[0]);  if (t) { goto L_003A6080; } }
    c.budget -= 1;
L_003A6068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.budget -= 6;
L_003A6080:
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A60A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A60A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A60B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A60F0; } }
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A60F0; } }
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.budget -= 1;
L_003A60F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A6140; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A6120; } }
    c.f[1] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 128u), c.f[0]);  if (t) { goto L_003A6158; } }
L_003A6120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 128u), c.f[0]);  if (t) { goto L_003A6158; } }
    c.budget -= 1;
L_003A6140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.budget -= 6;
L_003A6158:
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003A6180; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6180u); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003A6180u) [[unlikely]] return; }
L_003A6180:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6190:
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 112u), c.f[1]);  if (t) { goto L_003A61C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A61C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A61D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA1E0u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 143u, depth); }
L_003A61E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003A61F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A6230; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A65D0; } }
    c.budget -= 1;
L_003A6230:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + 29024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_003A6270; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A65D0; } }
L_003A6270:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 6);  if (t) { goto L_003A6298; } }
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A628Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003A628Cu) [[unlikely]] return; }
L_003A628C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A62A0; } }
    c.budget -= 1;
L_003A6298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62A0u); set32(c.r[4], c.r[7].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003A62A0u) [[unlikely]] return; }
L_003A62A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62A8u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003A62A8u) [[unlikely]] return; }
L_003A62A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62B0u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003A62B0u) [[unlikely]] return; }
L_003A62B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62B8u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003A62B8u) [[unlikely]] return; }
L_003A62B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62C0u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003A62C0u) [[unlikely]] return; }
L_003A62C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003A62C8u) [[unlikely]] return; }
L_003A62C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003A62D8u) [[unlikely]] return; }
L_003A62D8:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62E4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003A62E4u) [[unlikely]] return; }
L_003A62E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003A62ECu) [[unlikely]] return; }
L_003A62EC:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62F8u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003A62F8u) [[unlikely]] return; }
L_003A62F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6300u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003A6300u) [[unlikely]] return; }
L_003A6300:
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    fpu_div(c, 13u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6328u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003A6328u) [[unlikely]] return; }
L_003A6328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6330u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003A6330u) [[unlikely]] return; }
L_003A6330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[5], c.r[5].w[0] + 14608u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 515u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[29].w[0] + 188u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[1].w[0] + 20300u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A638Cu); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x003A638Cu) [[unlikely]] return; }
L_003A638C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A6598; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6598; } }
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63E0u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x003A63E0u) [[unlikely]] return; }
L_003A63E0:
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], 0u + 1u);  if (t) { goto L_003A63FC; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A63FC:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_003A6418; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6418:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6430; } }
    c.r[18].d[0] = c.r[18].d[0] ^ 1ull;
    c.r[17].d[0] = c.r[17].d[0] ^ 1ull;
    c.budget -= 2;
L_003A6430:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_003A6550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6440u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003A6440u) [[unlikely]] return; }
L_003A6440:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A644Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003A644Cu) [[unlikely]] return; }
L_003A644C:
    c.f[2] = fp::add(c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A6490; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] << 1);  if (t) { goto L_003A64AC; } }
L_003A6490:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 7;
L_003A64AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A64D0; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);  if (t) { goto L_003A64E0; } }
    c.budget -= 1;
L_003A64D0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.budget -= 4;
L_003A64E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64ECu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 146u, depth + 1u); else { c.pc = 0x0029E6C0u; return; } if (c.pc != 0x003A64ECu) [[unlikely]] return; }
L_003A64EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 50u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20300u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[16].w[0] << 6);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_003A6528; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);  if (t) { goto L_003A6538; } }
L_003A6528:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.budget -= 4;
L_003A6538:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6544u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 146u, depth + 1u); else { c.pc = 0x0029E6C0u; return; } if (c.pc != 0x003A6544u) [[unlikely]] return; }
L_003A6544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A65D0; } }
    c.budget -= 1;
L_003A6550:
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A6570; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);  if (t) { goto L_003A6580; } }
L_003A6570:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.budget -= 4;
L_003A6580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A658Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 146u, depth + 1u); else { c.pc = 0x0029E6C0u; return; } if (c.pc != 0x003A658Cu) [[unlikely]] return; }
L_003A658C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A65D0; } }
    c.budget -= 1;
L_003A6598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 50u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65D0u); st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x003A65D0u) [[unlikely]] return; }
L_003A65D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003A65F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 620u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A66C0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A66C0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A66C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A66C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A66C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A66C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A66C0; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6668u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003A6668u) [[unlikely]] return; }
L_003A6668:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 1u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_003A66A8; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A669Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003A669Cu) [[unlikely]] return; }
L_003A669C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A66B0; } }
    c.budget -= 1;
L_003A66A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66B0u); set32(c.r[4], c.r[4].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003A66B0u) [[unlikely]] return; }
L_003A66B0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66BCu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003A66BCu) [[unlikely]] return; }
L_003A66BC:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003A66C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A66E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A6720; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6714u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003A6714u) [[unlikely]] return; }
L_003A6714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6728; } }
    c.budget -= 1;
L_003A6720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6728u); set32(c.r[4], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003A6728u) [[unlikely]] return; }
L_003A6728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6730u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003A6730u) [[unlikely]] return; }
L_003A6730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6738u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003A6738u) [[unlikely]] return; }
L_003A6738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6740u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003A6740u) [[unlikely]] return; }
L_003A6740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6748u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003A6748u) [[unlikely]] return; }
L_003A6748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6750u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003A6750u) [[unlikely]] return; }
L_003A6750:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6760u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003A6760u) [[unlikely]] return; }
L_003A6760:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A676Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003A676Cu) [[unlikely]] return; }
L_003A676C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6774u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003A6774u) [[unlikely]] return; }
L_003A6774:
    c.f[20] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6780u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00A9(c, 212u, depth + 1u); else { c.pc = 0x003A6840u; return; } if (c.pc != 0x003A6780u) [[unlikely]] return; }
L_003A6780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A67A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6790u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003A6790u) [[unlikely]] return; }
L_003A6790:
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_003A67A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003A67A8u) [[unlikely]] return; }
L_003A67A8:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67B8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003A67B8u) [[unlikely]] return; }
L_003A67B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67C0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003A67C0u) [[unlikely]] return; }
L_003A67C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67C8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003A67C8u) [[unlikely]] return; }
L_003A67C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A67E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[20] = c.f[12];
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6808u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003A6808u) [[unlikely]] return; }
L_003A6808:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6818u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003A6818u) [[unlikely]] return; }
L_003A6818:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6828u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003A6828u) [[unlikely]] return; }
L_003A6828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A6840:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6860u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003A6860u) [[unlikely]] return; }
L_003A6860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6960; } }
L_003A6880:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A68C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68A0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x003A68A0u) [[unlikely]] return; }
L_003A68A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A68C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68B0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003A68B0u) [[unlikely]] return; }
L_003A68B0:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 208u, depth + 1u); else { c.pc = 0x003A67E0u; return; } if (c.pc != 0x003A68BCu) [[unlikely]] return; }
L_003A68BC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_003A68C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68D4u); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 101u, depth + 1u); else { c.pc = 0x00145440u; return; } if (c.pc != 0x003A68D4u) [[unlikely]] return; }
L_003A68D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6908; } }
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68ECu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003A68ECu) [[unlikely]] return; }
L_003A68EC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[12] = c.f[20];  if (t) { goto L_003A6908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 208u, depth + 1u); else { c.pc = 0x003A67E0u; return; } if (c.pc != 0x003A6900u) [[unlikely]] return; }
L_003A6900:
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_003A6908:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6918u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 179u, depth + 1u); else { c.pc = 0x001460C0u; return; } if (c.pc != 0x003A6918u) [[unlikely]] return; }
L_003A6918:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A6958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A692Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003A692Cu) [[unlikely]] return; }
L_003A692C:
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6940u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003A6940u) [[unlikely]] return; }
L_003A6940:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A6958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6954u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A9(c, 208u, depth + 1u); else { c.pc = 0x003A67E0u; return; } if (c.pc != 0x003A6954u) [[unlikely]] return; }
L_003A6954:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_003A6958:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003A6960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A6980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A69A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6A20; } }
    c.budget -= 1;
L_003A69A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A69B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6A20; } }
    c.budget -= 1;
L_003A69B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A69D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6A20; } }
    c.budget -= 1;
L_003A69D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A69F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A69F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6A20; } }
L_003A69F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 368u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[4].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 368u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A18u);  if (depth < kMaxDepth) unit_003B(c, 346u, depth + 1u); else { c.pc = 0x001EFC40u; return; } if (c.pc != 0x003A6A18u) [[unlikely]] return; }
L_003A6A18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003A6A20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x003A6A44u) [[unlikely]] return; }
L_003A6A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A4Cu);  if (depth < kMaxDepth) unit_0089(c, 328u, depth + 1u); else { c.pc = 0x00327170u; return; } if (c.pc != 0x003A6A4Cu) [[unlikely]] return; }
L_003A6A4C:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 27040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6A70u) [[unlikely]] return; }
L_003A6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A78u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003A6A78u) [[unlikely]] return; }
L_003A6A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A80u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003A6A80u) [[unlikely]] return; }
L_003A6A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A88u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x003A6A88u) [[unlikely]] return; }
L_003A6A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A90u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x003A6A90u) [[unlikely]] return; }
L_003A6A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A98u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003A6A98u) [[unlikely]] return; }
L_003A6A98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AA4u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003A6AA4u) [[unlikely]] return; }
L_003A6AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AACu);  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x003A8A90u; return; } if (c.pc != 0x003A6AACu) [[unlikely]] return; }
L_003A6AAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6AC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A6DB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3584u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A6B08:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 22392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B1Cu); set32(c.r[5], c.r[28].w[0] - 22396u);  if (depth < kMaxDepth) unit_009D(c, 87u, depth + 1u); else { c.pc = 0x00374C60u; return; } if (c.pc != 0x003A6B1Cu) [[unlikely]] return; }
L_003A6B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B24u);  if (depth < kMaxDepth) unit_0099(c, 41u, depth + 1u); else { c.pc = 0x00364740u; return; } if (c.pc != 0x003A6B24u) [[unlikely]] return; }
L_003A6B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B2Cu);  if (depth < kMaxDepth) unit_00AA(c, 15u, depth + 1u); else { c.pc = 0x003A8150u; return; } if (c.pc != 0x003A6B2Cu) [[unlikely]] return; }
L_003A6B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6DB0; } }
    c.budget -= 1;
L_003A6B38:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B4Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003A6B4Cu) [[unlikely]] return; }
L_003A6B4C:
    c.budget -= 1;
L_003A6B50:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A6DB0; } }
    c.budget -= 1;
L_003A6B78:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2416u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B94u); set32(c.r[6], 0u + 2400u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A6B94u) [[unlikely]] return; }
L_003A6B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B9Cu);  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x003A6B9Cu) [[unlikely]] return; }
L_003A6B9C:
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003A6BA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 792u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 560u);  if (t) { goto L_003A6CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BC4u); set32(c.r[5], c.r[5].w[0] + 792u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003A6BC4u) [[unlikely]] return; }
L_003A6BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6CD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BE8u); set32(c.r[6], c.r[2].w[0] + 792u);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003A6BE8u) [[unlikely]] return; }
L_003A6BE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_003A6C40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C20u); set32(c.r[5], c.r[2].w[0] + 800u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A6C20u) [[unlikely]] return; }
L_003A6C20:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { goto L_003A6CD0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003A6CD0; } }
    c.budget -= 1;
L_003A6C40:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 2416u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + 792u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C6Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003A6C6Cu) [[unlikely]] return; }
L_003A6C6C:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] + 2416u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + 800u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CA0u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A6CA0u) [[unlikely]] return; }
L_003A6CA0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 2416u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_003A6CD0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6BA8u | kUnwind; return; } goto L_003A6BA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CF0u); set32(c.r[4], c.r[4].w[0] + 17040u);  if (depth < kMaxDepth) unit_008D(c, 106u, depth + 1u); else { c.pc = 0x00335330u; return; } if (c.pc != 0x003A6CF0u) [[unlikely]] return; }
L_003A6CF0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 22388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A6D10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22388u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A6D40; } }
    c.budget -= 1;
L_003A6D10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A6D30; } }
    st8((c.r[28].w[0] - 22388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A6D40; } }
    c.budget -= 1;
L_003A6D30:
    set32(c.r[3], 0u + 50u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[19].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003A6D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D48u);  if (depth < kMaxDepth) unit_00A9(c, 337u, depth + 1u); else { c.pc = 0x003A7A70u; return; } if (c.pc != 0x003A6D48u) [[unlikely]] return; }
L_003A6D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6DB0; } }
L_003A6D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D58u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003A6D58u) [[unlikely]] return; }
L_003A6D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A6DB0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22388u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003A6D88; } }
    set32(c.r[3], 0u + 1800u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22380u), c.r[3].w[0]);  if (t) { goto L_003A6DB0; } }
L_003A6D88:
    set32(c.r[3], 0u + 5u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A6DB0; } }
L_003A6D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DA0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003A6DA0u) [[unlikely]] return; }
L_003A6DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003A6DB0; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003A6DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A6DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A6DE4u) [[unlikely]] return; }
L_003A6DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7008; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003A7008; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A6E18:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 116u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 15u);
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E40u); set32(c.r[5], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x003A6E40u) [[unlikely]] return; }
L_003A6E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7008; } }
L_003A6E48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7008; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A7008; } }
    c.budget -= 1;
L_003A6E78:
    set32(c.r[3], ld32((c.r[28].w[0] - 22380u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 22380u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22380u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A6EB0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003A7008; } }
L_003A6EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6EB8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A6EB8u) [[unlikely]] return; }
L_003A6EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6EF8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6EECu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A6EECu) [[unlikely]] return; }
L_003A6EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6F48; } }
    c.budget -= 1;
L_003A6EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F00u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A6F00u) [[unlikely]] return; }
L_003A6F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A6F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F10u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A6F10u) [[unlikely]] return; }
L_003A6F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F18u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A6F18u) [[unlikely]] return; }
L_003A6F18:
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], 0u + 5u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A6F48; } }
    c.budget -= 1;
L_003A6F30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F44u); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003A6F44u) [[unlikely]] return; }
L_003A6F44:
    c.budget -= 1;
L_003A6F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F50u);  if (depth < kMaxDepth) unit_00AA(c, 10u, depth + 1u); else { c.pc = 0x003A80C0u; return; } if (c.pc != 0x003A6F50u) [[unlikely]] return; }
L_003A6F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7008; } }
L_003A6F58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7008; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 116u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F90u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A6F90u) [[unlikely]] return; }
L_003A6F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7008; } }
L_003A6F98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7008; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A6FD0; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A7008; } }
L_003A6FD0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A7008; } }
L_003A6FE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 5u);  if (t) { goto L_003A7008; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A7008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7038u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A7038u) [[unlikely]] return; }
L_003A7038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A71F8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A7088; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A7060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A71F8; } }
L_003A7060:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1800u);
    st32((c.r[28].w[0] - 22380u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A71F8; } }
    c.budget -= 1;
L_003A7088:
    set32(c.r[3], ld32((c.r[28].w[0] - 22380u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 22380u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22380u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 4u);  if (t) { goto L_003A70B0; } }
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A71F8; } }
    c.budget -= 1;
L_003A70B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70B8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A70B8u) [[unlikely]] return; }
L_003A70B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A70D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70D0u); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A70D0u) [[unlikely]] return; }
L_003A70D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A71F0; } }
L_003A70D8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[17].w[0] + 9u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70F0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003A70F0u) [[unlikely]] return; }
L_003A70F0:
    c.r[16].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 2440u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 11u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A7128; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A71F0; } }
L_003A7128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7130u); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A7130u) [[unlikely]] return; }
L_003A7130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A7188; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003A7168; } }
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A7168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7170u); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_00A9(c, 289u, depth + 1u); else { c.pc = 0x003A7210u; return; } if (c.pc != 0x003A7170u) [[unlikely]] return; }
L_003A7170:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A717Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A717Cu) [[unlikely]] return; }
L_003A717C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A71F0; } }
    c.budget -= 1;
L_003A7188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7190u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A7190u) [[unlikely]] return; }
L_003A7190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A71E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A71C8; } }
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003A71C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71D0u); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_00A9(c, 289u, depth + 1u); else { c.pc = 0x003A7210u; return; } if (c.pc != 0x003A71D0u) [[unlikely]] return; }
L_003A71D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A71DCu) [[unlikely]] return; }
L_003A71DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A71F0; } }
    c.budget -= 1;
L_003A71E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003A71F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71F8u);  if (depth < kMaxDepth) unit_00AA(c, 10u, depth + 1u); else { c.pc = 0x003A80C0u; return; } if (c.pc != 0x003A71F8u) [[unlikely]] return; }
L_003A71F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15547u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003A7278; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A7240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A72D0; } }
    c.budget -= 1;
L_003A7240:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 2440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15555u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A72D0; } }
    c.budget -= 1;
L_003A7278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15555u));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_003A72B8; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[3].w[0] << 4);
    st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 2440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_003A72D0; } }
L_003A72B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A72C4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A72C4u) [[unlikely]] return; }
L_003A72C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15547u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A72D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A72E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A72F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A72F4u) [[unlikely]] return; }
L_003A72F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7530; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003A7530; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3648u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A7328:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1800u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[5].w[0] + 3419u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[28].w[0] - 22380u), c.r[3].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A735Cu); set32(c.r[5], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x003A735Cu) [[unlikely]] return; }
L_003A735C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7530; } }
    c.budget -= 1;
L_003A7368:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7530; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A7530; } }
    c.budget -= 1;
L_003A7398:
    set32(c.r[3], ld32((c.r[28].w[0] - 22380u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 22380u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22380u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A73D0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003A7530; } }
L_003A73D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73D8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A73D8u) [[unlikely]] return; }
L_003A73D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A7418; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A740Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A740Cu) [[unlikely]] return; }
L_003A740C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7468; } }
    c.budget -= 1;
L_003A7418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7420u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A7420u) [[unlikely]] return; }
L_003A7420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A7450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7430u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A7430u) [[unlikely]] return; }
L_003A7430:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 15u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7448u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A7448u) [[unlikely]] return; }
L_003A7448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7468; } }
L_003A7450:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7464u); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003A7464u) [[unlikely]] return; }
L_003A7464:
    c.budget -= 1;
L_003A7468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7470u);  if (depth < kMaxDepth) unit_00AA(c, 10u, depth + 1u); else { c.pc = 0x003A80C0u; return; } if (c.pc != 0x003A7470u) [[unlikely]] return; }
L_003A7470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7530; } }
L_003A7478:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7530; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74B8u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A74B8u) [[unlikely]] return; }
L_003A74B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7530; } }
L_003A74C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7530; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_003A74F8; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A7530; } }
L_003A74F8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A7530; } }
L_003A7508:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A7530; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A7530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7560u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A7560u) [[unlikely]] return; }
L_003A7560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7608; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A75E0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], c.r[16].w[0] + 2416u);
    c.budget -= 3;
L_003A7588:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A75C8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75A4u); set32(c.r[6], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00A8(c, 264u, depth + 1u); else { c.pc = 0x003A2160u; return; } if (c.pc != 0x003A75A4u) [[unlikely]] return; }
L_003A75A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003A75C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003A75C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75C8u); set32(c.r[4], c.r[4].w[0] + 17040u);  if (depth < kMaxDepth) unit_00A8(c, 271u, depth + 1u); else { c.pc = 0x003A24A0u; return; } if (c.pc != 0x003A75C8u) [[unlikely]] return; }
L_003A75C8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7588u | kUnwind; return; } goto L_003A7588; } }
    c.budget -= 1;
L_003A75E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_003A75F8; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A7608; } }
    c.budget -= 1;
L_003A75F8:
    set32(c.r[3], 0u + 5u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003A7608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A7630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A7644u) [[unlikely]] return; }
L_003A7644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7738; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A7710; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A76D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A7678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7738; } }
    c.budget -= 1;
L_003A7678:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], c.r[5].w[0] + 19440u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7690u); set32(c.r[6], 0u + 2400u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x003A7690u) [[unlikely]] return; }
L_003A7690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_003A76A8; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A7738; } }
    c.budget -= 1;
L_003A76A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 135u);
    set32(c.r[4], 0u + 122u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76C4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A76C4u) [[unlikely]] return; }
L_003A76C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7738; } }
    c.budget -= 1;
L_003A76D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7738; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7708u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A7708u) [[unlikely]] return; }
L_003A7708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7738; } }
L_003A7710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 6u);  if (t) { goto L_003A7738; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A7738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7764u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A7764u) [[unlikely]] return; }
L_003A7764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A77E8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A77B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A7790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A77E8; } }
    c.budget -= 1;
L_003A7790:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A779Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 111u, depth + 1u); else { c.pc = 0x00335410u; return; } if (c.pc != 0x003A779Cu) [[unlikely]] return; }
L_003A779C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77A4u);  if (depth < kMaxDepth) unit_008D(c, 54u, depth + 1u); else { c.pc = 0x00334D00u; return; } if (c.pc != 0x003A77A4u) [[unlikely]] return; }
L_003A77A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A77E8; } }
    c.budget -= 1;
L_003A77B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77B8u);  if (depth < kMaxDepth) unit_008D(c, 114u, depth + 1u); else { c.pc = 0x00335440u; return; } if (c.pc != 0x003A77B8u) [[unlikely]] return; }
L_003A77B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_003A77E8; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A77E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77D4u);  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x003A77D4u) [[unlikely]] return; }
L_003A77D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A77E8; } }
    c.budget -= 1;
L_003A77E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77E8u);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334D20u; return; } if (c.pc != 0x003A77E8u) [[unlikely]] return; }
L_003A77E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A7814u) [[unlikely]] return; }
L_003A7814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7898; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003A7890; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003A7868; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A7848; } }
    goto L_003A783C;
L_003A7838:
    c.budget -= 1;
L_003A783C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7898; } }
    c.budget -= 1;
L_003A7848:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A785Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003A785Cu) [[unlikely]] return; }
L_003A785C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7898; } }
    c.budget -= 1;
L_003A7868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7870u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003A7870u) [[unlikely]] return; }
L_003A7870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7898; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7888u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003A7888u) [[unlikely]] return; }
L_003A7888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7898; } }
L_003A7890:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A7898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A78B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003A78C4u) [[unlikely]] return; }
L_003A78C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A7A58; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A7A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A79F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A7968; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A7930; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A7908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7A58; } }
L_003A7908:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 26u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 15u);
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7928u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A7928u) [[unlikely]] return; }
L_003A7928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7A58; } }
L_003A7930:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7A58; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 600u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A7A58; } }
    c.budget -= 1;
L_003A7968:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A79A8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003A7A58; } }
    c.budget -= 1;
L_003A79A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79B0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A79B0u) [[unlikely]] return; }
L_003A79B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A7A58; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 480ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A7A58; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79E8u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A79E8u) [[unlikely]] return; }
L_003A79E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7A58; } }
L_003A79F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A7A58; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 26u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A28u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A7A28u) [[unlikely]] return; }
L_003A7A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7A58; } }
L_003A7A30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 5u);  if (t) { goto L_003A7A58; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A7A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A7A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 342u, depth + 1u); else { c.pc = 0x003A7AC0u; return; } if (c.pc != 0x003A7A84u) [[unlikely]] return; }
L_003A7A84:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 342u, depth + 1u); else { c.pc = 0x003A7AC0u; return; } if (c.pc != 0x003A7A90u) [[unlikely]] return; }
L_003A7A90:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 342u, depth + 1u); else { c.pc = 0x003A7AC0u; return; } if (c.pc != 0x003A7A9Cu) [[unlikely]] return; }
L_003A7A9C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 342u, depth + 1u); else { c.pc = 0x003A7AC0u; return; } if (c.pc != 0x003A7AA8u) [[unlikely]] return; }
L_003A7AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AE8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003A7AE8u) [[unlikely]] return; }
L_003A7AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A7B40; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 27080u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 296u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_003A7B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 27096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A7B80:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], c.r[6].w[0] - 32688u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] + 56u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A7BD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A7BF8u) [[unlikely]] return; }
L_003A7BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A7C00u) [[unlikely]] return; }
L_003A7C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A7CF0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], 0u + 84u);
    set32(c.r[17], c.r[17].w[0] + 2416u);
    c.budget -= 3;
L_003A7C20:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C30u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A7C30u) [[unlikely]] return; }
L_003A7C30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C3Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A7C3Cu) [[unlikely]] return; }
L_003A7C3C:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C58u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A7C58u) [[unlikely]] return; }
L_003A7C58:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C74u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A7C74u) [[unlikely]] return; }
L_003A7C74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_003A7CD0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C8Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A7C8Cu) [[unlikely]] return; }
L_003A7C8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 3200u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CB0u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A7CB0u) [[unlikely]] return; }
L_003A7CB0:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FC0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CCCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A7CCCu) [[unlikely]] return; }
L_003A7CCC:
    c.budget -= 1;
L_003A7CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7C20u | kUnwind; return; } goto L_003A7C20; } }
    c.budget -= 1;
L_003A7CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D10u); set32(c.r[4], c.r[4].w[0] + 3680u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A7D10u) [[unlikely]] return; }
L_003A7D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43940000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D30u); set32(c.r[4], c.r[4].w[0] + 3712u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A7D30u) [[unlikely]] return; }
L_003A7D30:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D40u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A7D40u) [[unlikely]] return; }
L_003A7D40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15555u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D58u); set32(c.r[5], c.r[5].w[0] + 3744u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A7D58u) [[unlikely]] return; }
L_003A7D58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D74u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A7D74u) [[unlikely]] return; }
L_003A7D74:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A7DA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003A7DB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 27112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A7DD0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    set32(c.r[8], c.r[8].w[0] + 15856u);
    c.r[6].d[0] = c.r[3].d[0] | 39322ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 22396u)));
    st32((c.r[4].w[0] + 304u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A7E30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[3], c.r[3].w[0] + 27128u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A7E70; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A7E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A7E80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 27136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A4000u < 16384u) { entry = entries_00A9[(t - 0x003A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A7EA0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A7EE8; } }
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003A7F00; } }
L_003A7EE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43810000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 6;
L_003A7F00:
    set32(c.r[3], 0u + 34u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 9u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22392u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003A7F20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { [[clang::musttail]] return unit_00AA(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[3], c.r[3].w[0] + 2440u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A7F60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00AA(c, 3u, depth); } }
L_003A7F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 27152u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A7FE0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43280000u);  if (t) { goto L_003A7FA8; } }
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_003A7FA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003A7FD8; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00AA(c, 2u, depth); } }
L_003A7FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00AA(c, 2u, depth); } }
L_003A7FE0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43850000u);  if (t) { [[clang::musttail]] return unit_00AA(c, 1u, depth); } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_00AA(c, 1u, depth);
}

}
