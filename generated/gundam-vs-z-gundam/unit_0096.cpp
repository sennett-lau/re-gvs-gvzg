#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0096[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 286, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0,
};

void unit_0096(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00358000;
    case 2u: goto L_0035800C;
    case 3u: goto L_0035801C;
    case 4u: goto L_0035805C;
    case 5u: goto L_00358068;
    case 6u: goto L_00358084;
    case 7u: goto L_00358094;
    case 8u: goto L_0035809C;
    case 9u: goto L_003580A4;
    case 10u: goto L_003580C4;
    case 11u: goto L_003580CC;
    case 12u: goto L_00358118;
    case 13u: goto L_00358138;
    case 14u: goto L_00358164;
    case 15u: goto L_00358190;
    case 16u: goto L_003581B0;
    case 17u: goto L_003581D0;
    case 18u: goto L_00358220;
    case 19u: goto L_00358244;
    case 20u: goto L_00358290;
    case 21u: goto L_003582B0;
    case 22u: goto L_003582E0;
    case 23u: goto L_00358304;
    case 24u: goto L_00358360;
    case 25u: goto L_00358380;
    case 26u: goto L_00358430;
    case 27u: goto L_00358454;
    case 28u: goto L_003584D4;
    case 29u: goto L_003584F0;
    case 30u: goto L_00358518;
    case 31u: goto L_00358570;
    case 32u: goto L_00358590;
    case 33u: goto L_00358610;
    case 34u: goto L_00358638;
    case 35u: goto L_00358650;
    case 36u: goto L_00358658;
    case 37u: goto L_00358698;
    case 38u: goto L_003586D0;
    case 39u: goto L_003586F0;
    case 40u: goto L_00358710;
    case 41u: goto L_00358734;
    case 42u: goto L_0035875C;
    case 43u: goto L_00358770;
    case 44u: goto L_00358790;
    case 45u: goto L_00358798;
    case 46u: goto L_003587B8;
    case 47u: goto L_003587D8;
    case 48u: goto L_003587F8;
    case 49u: goto L_00358824;
    case 50u: goto L_00358850;
    case 51u: goto L_00358870;
    case 52u: goto L_0035888C;
    case 53u: goto L_003588B8;
    case 54u: goto L_003588F0;
    case 55u: goto L_00358910;
    case 56u: goto L_00358970;
    case 57u: goto L_00358994;
    case 58u: goto L_003589C0;
    case 59u: goto L_003589E0;
    case 60u: goto L_00358A40;
    case 61u: goto L_00358A6C;
    case 62u: goto L_00358AE0;
    case 63u: goto L_00358B00;
    case 64u: goto L_00358B20;
    case 65u: goto L_00358B60;
    case 66u: goto L_00358B84;
    case 67u: goto L_00358BA8;
    case 68u: goto L_00358BC0;
    case 69u: goto L_00358BE4;
    case 70u: goto L_00358BEC;
    case 71u: goto L_00358BF8;
    case 72u: goto L_00358C18;
    case 73u: goto L_00358C20;
    case 74u: goto L_00358C3C;
    case 75u: goto L_00358C5C;
    case 76u: goto L_00358C84;
    case 77u: goto L_00358CB4;
    case 78u: goto L_00358CD4;
    case 79u: goto L_00358CFC;
    case 80u: goto L_00358D2C;
    case 81u: goto L_00358D60;
    case 82u: goto L_00358D80;
    case 83u: goto L_00358DF0;
    case 84u: goto L_00358E14;
    case 85u: goto L_00358E70;
    case 86u: goto L_00358E90;
    case 87u: goto L_00358EB0;
    case 88u: goto L_00358ED4;
    case 89u: goto L_00358EEC;
    case 90u: goto L_00358F00;
    case 91u: goto L_00358F2C;
    case 92u: goto L_00358F50;
    case 93u: goto L_00358FC0;
    case 94u: goto L_00358FE0;
    case 95u: goto L_003590B0;
    case 96u: goto L_0035911C;
    case 97u: goto L_00359124;
    case 98u: goto L_00359158;
    case 99u: goto L_00359170;
    case 100u: goto L_0035919C;
    case 101u: goto L_003591E8;
    case 102u: goto L_00359200;
    case 103u: goto L_00359220;
    case 104u: goto L_003592A0;
    case 105u: goto L_003592D8;
    case 106u: goto L_00359340;
    case 107u: goto L_00359348;
    case 108u: goto L_00359360;
    case 109u: goto L_00359398;
    case 110u: goto L_003593B8;
    case 111u: goto L_003593C4;
    case 112u: goto L_00359414;
    case 113u: goto L_00359430;
    case 114u: goto L_00359448;
    case 115u: goto L_00359450;
    case 116u: goto L_00359474;
    case 117u: goto L_00359498;
    case 118u: goto L_003594B0;
    case 119u: goto L_003594D0;
    case 120u: goto L_003594F8;
    case 121u: goto L_00359510;
    case 122u: goto L_00359518;
    case 123u: goto L_00359524;
    case 124u: goto L_00359544;
    case 125u: goto L_00359554;
    case 126u: goto L_0035955C;
    case 127u: goto L_00359568;
    case 128u: goto L_00359578;
    case 129u: goto L_00359588;
    case 130u: goto L_003595A0;
    case 131u: goto L_003595AC;
    case 132u: goto L_003595C8;
    case 133u: goto L_003595D4;
    case 134u: goto L_003595DC;
    case 135u: goto L_003595E4;
    case 136u: goto L_00359600;
    case 137u: goto L_00359620;
    case 138u: goto L_00359660;
    case 139u: goto L_00359694;
    case 140u: goto L_00359750;
    case 141u: goto L_00359770;
    case 142u: goto L_003597D0;
    case 143u: goto L_00359814;
    case 144u: goto L_00359830;
    case 145u: goto L_00359860;
    case 146u: goto L_00359868;
    case 147u: goto L_0035987C;
    case 148u: goto L_00359898;
    case 149u: goto L_003598D0;
    case 150u: goto L_00359960;
    case 151u: goto L_00359980;
    case 152u: goto L_003599F0;
    case 153u: goto L_00359A14;
    case 154u: goto L_00359B30;
    case 155u: goto L_00359B50;
    case 156u: goto L_00359BE0;
    case 157u: goto L_00359C40;
    case 158u: goto L_00359C50;
    case 159u: goto L_00359CCC;
    case 160u: goto L_00359CE0;
    case 161u: goto L_00359CF0;
    case 162u: goto L_00359D10;
    case 163u: goto L_00359D80;
    case 164u: goto L_00359D98;
    case 165u: goto L_00359DA8;
    case 166u: goto L_00359DE8;
    case 167u: goto L_00359E00;
    case 168u: goto L_00359E18;
    case 169u: goto L_00359E28;
    case 170u: goto L_00359E48;
    case 171u: goto L_00359E90;
    case 172u: goto L_00359EB0;
    case 173u: goto L_00359F00;
    case 174u: goto L_00359F24;
    case 175u: goto L_00359F50;
    case 176u: goto L_00359F70;
    case 177u: goto L_00359FE0;
    case 178u: goto L_0035A004;
    case 179u: goto L_0035A070;
    case 180u: goto L_0035A090;
    case 181u: goto L_0035A0B4;
    case 182u: goto L_0035A120;
    case 183u: goto L_0035A140;
    case 184u: goto L_0035A1A0;
    case 185u: goto L_0035A1C4;
    case 186u: goto L_0035A260;
    case 187u: goto L_0035A2B0;
    case 188u: goto L_0035A2D0;
    case 189u: goto L_0035A340;
    case 190u: goto L_0035A364;
    case 191u: goto L_0035A4A0;
    case 192u: goto L_0035A4C0;
    case 193u: goto L_0035A510;
    case 194u: goto L_0035A534;
    case 195u: goto L_0035A690;
    case 196u: goto L_0035A6B0;
    case 197u: goto L_0035A6E0;
    case 198u: goto L_0035A704;
    case 199u: goto L_0035A730;
    case 200u: goto L_0035A750;
    case 201u: goto L_0035A800;
    case 202u: goto L_0035A82C;
    case 203u: goto L_0035A8A8;
    case 204u: goto L_0035A8C0;
    case 205u: goto L_0035A8E0;
    case 206u: goto L_0035A950;
    case 207u: goto L_0035A974;
    case 208u: goto L_0035A9A0;
    case 209u: goto L_0035A9C0;
    case 210u: goto L_0035AA30;
    case 211u: goto L_0035AC88;
    case 212u: goto L_0035AC98;
    case 213u: goto L_0035ACA0;
    case 214u: goto L_0035ACCC;
    case 215u: goto L_0035ACE0;
    case 216u: goto L_0035AD0C;
    case 217u: goto L_0035AD30;
    case 218u: goto L_0035ADB0;
    case 219u: goto L_0035ADD0;
    case 220u: goto L_0035AE5C;
    case 221u: goto L_0035AE68;
    case 222u: goto L_0035AE7C;
    case 223u: goto L_0035AE94;
    case 224u: goto L_0035AEF8;
    case 225u: goto L_0035AF04;
    case 226u: goto L_0035AF18;
    case 227u: goto L_0035AF2C;
    case 228u: goto L_0035AF40;
    case 229u: goto L_0035AF98;
    case 230u: goto L_0035AFD0;
    case 231u: goto L_0035B004;
    case 232u: goto L_0035B010;
    case 233u: goto L_0035B024;
    case 234u: goto L_0035B02C;
    case 235u: goto L_0035B07C;
    case 236u: goto L_0035B090;
    case 237u: goto L_0035B0BC;
    case 238u: goto L_0035B108;
    case 239u: goto L_0035B120;
    case 240u: goto L_0035B140;
    case 241u: goto L_0035B1E0;
    case 242u: goto L_0035B290;
    case 243u: goto L_0035B2B4;
    case 244u: goto L_0035B2CC;
    case 245u: goto L_0035B2D4;
    case 246u: goto L_0035B2E8;
    case 247u: goto L_0035B308;
    case 248u: goto L_0035B320;
    case 249u: goto L_0035B334;
    case 250u: goto L_0035B348;
    case 251u: goto L_0035B35C;
    case 252u: goto L_0035B370;
    case 253u: goto L_0035B3B8;
    case 254u: goto L_0035B3C0;
    case 255u: goto L_0035B3D4;
    case 256u: goto L_0035B3F8;
    case 257u: goto L_0035B410;
    case 258u: goto L_0035B444;
    case 259u: goto L_0035B460;
    case 260u: goto L_0035B4C8;
    case 261u: goto L_0035B4E0;
    case 262u: goto L_0035B518;
    case 263u: goto L_0035B530;
    case 264u: goto L_0035B540;
    case 265u: goto L_0035B548;
    case 266u: goto L_0035B560;
    case 267u: goto L_0035B568;
    case 268u: goto L_0035B578;
    case 269u: goto L_0035B598;
    case 270u: goto L_0035B5E8;
    case 271u: goto L_0035B608;
    case 272u: goto L_0035B618;
    case 273u: goto L_0035B64C;
    case 274u: goto L_0035B68C;
    case 275u: goto L_0035B6A0;
    case 276u: goto L_0035B6A8;
    case 277u: goto L_0035B6D0;
    case 278u: goto L_0035B6D8;
    case 279u: goto L_0035B6F0;
    case 280u: goto L_0035B710;
    case 281u: goto L_0035B720;
    case 282u: goto L_0035B738;
    case 283u: goto L_0035B74C;
    case 284u: goto L_0035B760;
    case 285u: goto L_0035B774;
    case 286u: goto L_0035B778;
    case 287u: goto L_0035B78C;
    case 288u: goto L_0035B7A0;
    case 289u: goto L_0035B7B4;
    case 290u: goto L_0035B7D8;
    case 291u: goto L_0035B7E8;
    case 292u: goto L_0035B7F8;
    case 293u: goto L_0035B800;
    case 294u: goto L_0035B810;
    case 295u: goto L_0035B838;
    case 296u: goto L_0035B8A0;
    case 297u: goto L_0035B8D0;
    case 298u: goto L_0035B940;
    case 299u: goto L_0035B968;
    case 300u: goto L_0035B9E0;
    case 301u: goto L_0035BA00;
    case 302u: goto L_0035BA40;
    case 303u: goto L_0035BA78;
    case 304u: goto L_0035BA90;
    case 305u: goto L_0035BAA0;
    case 306u: goto L_0035BAC0;
    case 307u: goto L_0035BB10;
    case 308u: goto L_0035BB60;
    case 309u: goto L_0035BB80;
    case 310u: goto L_0035BBC0;
    case 311u: goto L_0035BBDC;
    case 312u: goto L_0035BC1C;
    case 313u: goto L_0035BC50;
    case 314u: goto L_0035BC70;
    case 315u: goto L_0035BD00;
    case 316u: goto L_0035BD90;
    case 317u: goto L_0035BDB0;
    case 318u: goto L_0035BE00;
    case 319u: goto L_0035BE90;
    case 320u: goto L_0035BEB0;
    case 321u: goto L_0035BF00;
    case 322u: goto L_0035BF90;
    case 323u: goto L_0035BFB0;
    case 324u: goto L_0035BFD0;
    case 325u: goto L_0035BFF0;
    case 326u: goto L_0035BFF8;
    default: bad_entry(c, 0x00358000u); return;
    }
L_00358000:
    set32(c.r[6], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035800Cu); set32(c.r[17], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035800Cu) [[unlikely]] return; }
L_0035800C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035801Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035801Cu) [[unlikely]] return; }
L_0035801C:
    set32(c.r[3], 0u + 346u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 5452u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00358088; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 5454u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035805Cu); set32(c.r[5], c.r[5].w[0] + 6744u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035805Cu) [[unlikely]] return; }
L_0035805C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358068u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00358068u) [[unlikely]] return; }
L_00358068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358084u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358084u) [[unlikely]] return; }
L_00358084:
    c.budget -= 1;
L_00358088:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358094u); st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x0038B880u; return; } if (c.pc != 0x00358094u) [[unlikely]] return; }
L_00358094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035809Cu);  if (depth < kMaxDepth) unit_0095(c, 174u, depth + 1u); else { c.pc = 0x00355DD0u; return; } if (c.pc != 0x0035809Cu) [[unlikely]] return; }
L_0035809C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037ADE0u; return; } if (c.pc != 0x003580A4u) [[unlikely]] return; }
L_003580A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8284u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358190; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580C4u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003580C4u) [[unlikely]] return; }
L_003580C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003580CCu) [[unlikely]] return; }
L_003580CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8284u)));
    c.r[1].d[0] = c.r[7].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);  if (t) { goto L_00358140; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[6], 0u + 60u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] >> 31);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 6800u);
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[7].d[0] = c.hi.d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358118u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00358118u) [[unlikely]] return; }
L_00358118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A10000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358138u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358138u) [[unlikely]] return; }
L_00358138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358190; } }
L_00358140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E50000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A10000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358164u); set32(c.r[4], c.r[4].w[0] + 6832u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358164u) [[unlikely]] return; }
L_00358164:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8284u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00358190; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8286u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00358190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358190u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00358190u) [[unlikely]] return; }
L_00358190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003581B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003581D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_00358210; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00358218; } }
    c.budget -= 1;
L_00358210:
    set32(c.r[3], 0u + 2u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00358220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00358250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358244u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358244u) [[unlikely]] return; }
L_00358244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358280; } }
    c.budget -= 1;
L_00358250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358278; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358278; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8279u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358280; } }
L_00358278:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003582B0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 33u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003582E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00358310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358304u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358304u) [[unlikely]] return; }
L_00358304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358350; } }
    c.budget -= 1;
L_00358310:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_00358328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00358348; } }
L_00358328:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8279u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 34u);  if (t) { goto L_00358340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00358348; } }
    c.budget -= 1;
L_00358340:
    set32(c.r[3], 0u + 35u);
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358348:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358380:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3360000u);
    set32(c.r[5], c.r[5].w[0] + 16096u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003583C4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003583E0; } }
L_003583C4:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_003583E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC30E0000u);
    c.f[1] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 11u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00358430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_00358460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358454u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358454u) [[unlikely]] return; }
L_00358454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003584D8; } }
    c.budget -= 1;
L_00358460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 21952u);
    set32(c.r[3], c.r[3].w[0] + 21956u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003584C8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003584C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584D4u); st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003584D4u) [[unlikely]] return; }
L_003584D4:
    c.budget -= 1;
L_003584D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003584F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_00358528; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358518u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00358518u) [[unlikely]] return; }
L_00358518:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00358558; } }
    c.budget -= 1;
L_00358528:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00358558; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00358558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358590:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 15856u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    set32(c.r[6], 0u + 196u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 30u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00358610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00358640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358638u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358638u) [[unlikely]] return; }
L_00358638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003586D8; } }
L_00358640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358650u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00358650u) [[unlikely]] return; }
L_00358650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358658u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00358658u) [[unlikely]] return; }
L_00358658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[7].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], 0u + 346u);
    set32(c.r[3], c.r[3].w[0] - 5440u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358698u); set32(c.r[5], c.r[5].w[0] + 6680u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00358698u) [[unlikely]] return; }
L_00358698:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43840000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[14] = 0u;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003586D0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003586D0u) [[unlikely]] return; }
L_003586D0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003586D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003586F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00358740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358734u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358734u) [[unlikely]] return; }
L_00358734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358760; } }
    c.budget -= 1;
L_00358740:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00358760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035875Cu); st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0096(c, 43u, depth + 1u); else { c.pc = 0x00358770u; return; } if (c.pc != 0x0035875Cu) [[unlikely]] return; }
L_0035875C:
    c.budget -= 1;
L_00358760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358790u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00358790u) [[unlikely]] return; }
L_00358790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358798u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00358798u) [[unlikely]] return; }
L_00358798:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587B8u); set32(c.r[4], c.r[4].w[0] + 6760u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003587B8u) [[unlikely]] return; }
L_003587B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587D8u); set32(c.r[4], c.r[4].w[0] + 21858u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003587D8u) [[unlikely]] return; }
L_003587D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587F8u); set32(c.r[4], c.r[4].w[0] + 6776u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003587F8u) [[unlikely]] return; }
L_003587F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21922u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43C00000u);  if (t) { goto L_00358830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358824u); set32(c.r[4], c.r[4].w[0] + 6856u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358824u) [[unlikely]] return; }
L_00358824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358850; } }
    c.budget -= 1;
L_00358830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358850u); set32(c.r[4], c.r[4].w[0] + 6864u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358850u) [[unlikely]] return; }
L_00358850:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003588D8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], 0u + 144u);
    set32(c.r[17], c.r[17].w[0] + 21840u);
    c.budget -= 3;
L_00358870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[16].w[0];
    set32(c.r[4], c.r[17].w[0] + 86u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035888Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035888Cu) [[unlikely]] return; }
L_0035888C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 154u));
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C00000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588B8u); set32(c.r[4], c.r[2].w[0] + 189u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003588B8u) [[unlikely]] return; }
L_003588B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    set32(c.r[17], c.r[17].w[0] + 5288u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358870u | kUnwind; return; } goto L_00358870; } }
    c.budget -= 1;
L_003588D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003588F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358910:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[3], c.r[28].w[0] - 27768u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_00358958; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00358960; } }
L_00358958:
    set32(c.r[3], 0u + 11u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00358970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003589A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358994u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358994u) [[unlikely]] return; }
L_00358994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003589A8; } }
    c.budget -= 1;
L_003589A0:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003589A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003589C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22032u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003589E0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[8], c.r[8].w[0] + 16096u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00358A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_00358A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A6Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358A6Cu) [[unlikely]] return; }
L_00358A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358AE8; } }
    c.budget -= 1;
L_00358A78:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 22048u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2598u));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00358AD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00358AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358AE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00358AE0u) [[unlikely]] return; }
L_00358AE0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358B20:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 19u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00358B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00358B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B84u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358B84u) [[unlikely]] return; }
L_00358B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358BA8; } }
    c.budget -= 1;
L_00358B90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00358BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BA8u); st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BC0u; return; } if (c.pc != 0x00358BA8u) [[unlikely]] return; }
L_00358BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358BC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00358BE4u) [[unlikely]] return; }
L_00358BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00358BECu) [[unlikely]] return; }
L_00358BEC:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 112u);
    c.budget -= 3;
L_00358BF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1720u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358C40; } }
    set32(c.r[4], c.r[4].w[0] + 1720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C18u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00358C18u) [[unlikely]] return; }
L_00358C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C20u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00358C20u) [[unlikely]] return; }
L_00358C20:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C3Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358C3Cu) [[unlikely]] return; }
L_00358C3C:
    c.budget -= 1;
L_00358C40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1728u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C5Cu); set32(c.r[4], c.r[4].w[0] + 1728u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00358C5Cu) [[unlikely]] return; }
L_00358C5C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00358C7C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00358C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C84u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00358C84u) [[unlikely]] return; }
L_00358C84:
    set32(c.r[3], 0u + 280u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1728u);
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CB4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358CB4u) [[unlikely]] return; }
L_00358CB4:
    c.budget -= 1;
L_00358CB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1745u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00358D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CD4u); set32(c.r[4], c.r[4].w[0] + 1745u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00358CD4u) [[unlikely]] return; }
L_00358CD4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00358CF4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00358CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00358CFCu) [[unlikely]] return; }
L_00358CFC:
    set32(c.r[3], 0u + 488u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1745u);
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D2Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00358D2Cu) [[unlikely]] return; }
L_00358D2C:
    c.budget -= 1;
L_00358D30:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 232u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358BF8u | kUnwind; return; } goto L_00358BF8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00358D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358D80:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[9], c.r[9].w[0] + 15856u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[7], 0u + 60u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 38u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00358DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00358E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E14u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358E14u) [[unlikely]] return; }
L_00358E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358E58; } }
    c.budget -= 1;
L_00358E20:
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], 0u + 346u);
    set32(c.r[3], c.r[3].w[0] - 5435u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8277u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00358E58; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00358E58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00358EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00358EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358ED4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00358ED4u) [[unlikely]] return; }
L_00358ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358EF0; } }
    c.budget -= 1;
L_00358EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EECu); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0095(c, 139u, depth + 1u); else { c.pc = 0x00355940u; return; } if (c.pc != 0x00358EECu) [[unlikely]] return; }
L_00358EEC:
    c.budget -= 1;
L_00358EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22104u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00358F2Cu) [[unlikely]] return; }
L_00358F2C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358F50:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[9].d[0] = c.r[3].d[0] | 26214ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CC40000u);
    set32(c.r[10], 0u + 15u);
    c.r[8].d[0] = c.r[3].d[0] | 39846ull;
    set32(c.r[6], c.r[6].w[0] + 15648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D260000u);
    set32(c.r[5], 0u + 11u);
    c.r[7].d[0] = c.r[3].d[0] | 37399ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00358FC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00358FE0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 76u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00359000; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00359018; } }
L_00359000:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 40u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003590A8; } }
    c.budget -= 1;
L_00359018:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00359058; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_003590A8; } }
    c.budget -= 1;
L_00359058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_003590A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 7;
L_003590A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003590B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 76u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3424u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003590E8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00359100; } }
    c.budget -= 1;
L_003590E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00359158; } }
L_00359100:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[17], 0u + 172u);
    set32(c.r[3], 0u + 192u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035911Cu); if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0035911Cu) [[unlikely]] return; }
L_0035911C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359124u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00359124u) [[unlikely]] return; }
L_00359124:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[2].w[0] + 22136u);
    c.f[12] = c.r[4].w[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[14] = c.r[5].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359158u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00359158u) [[unlikely]] return; }
L_00359158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003591A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035919Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035919Cu) [[unlikely]] return; }
L_0035919C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003591E8; } }
    c.budget -= 1;
L_003591A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_003591E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003591E8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003591E8u) [[unlikely]] return; }
L_003591E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359220:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[10], c.r[4].w[0] + 304u);  if (t) { goto L_00359290; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 16288u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[10].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[10].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
L_00359290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003592A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 76u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3424u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_003592D0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003592E0; } }
L_003592D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003592D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003592D8u) [[unlikely]] return; }
L_003592D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359350; } }
L_003592E0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3419u));
    set32(c.r[2], c.r[28].w[0] - 27764u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2600u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00359338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00359338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359340u);  if (depth < kMaxDepth) unit_0096(c, 113u, depth + 1u); else { c.pc = 0x00359430u; return; } if (c.pc != 0x00359340u) [[unlikely]] return; }
L_00359340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00359348u) [[unlikely]] return; }
L_00359348:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 76u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3424u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[16].w[0] + 304u);  if (t) { goto L_00359390; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003593A0; } }
L_00359390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359398u) [[unlikely]] return; }
L_00359398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359420; } }
L_003593A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003593D0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593B8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003593B8u) [[unlikely]] return; }
L_003593B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593C4u); st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0096(c, 113u, depth + 1u); else { c.pc = 0x00359430u; return; } if (c.pc != 0x003593C4u) [[unlikely]] return; }
L_003593C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359420; } }
    c.budget -= 1;
L_003593D0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2600u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00359408; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00359420; } }
    c.budget -= 1;
L_00359408:
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359414u); st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00359414u) [[unlikely]] return; }
L_00359414:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00359420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359448u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00359448u) [[unlikely]] return; }
L_00359448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359450u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00359450u) [[unlikely]] return; }
L_00359450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359474u); set32(c.r[4], c.r[4].w[0] + 6944u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00359474u) [[unlikely]] return; }
L_00359474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43890000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359498u); set32(c.r[4], c.r[4].w[0] + 6952u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00359498u) [[unlikely]] return; }
L_00359498:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003594B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003594D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00359500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003594F8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003594F8u) [[unlikely]] return; }
L_003594F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003595E8; } }
L_00359500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359510u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00359510u) [[unlikely]] return; }
L_00359510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359518u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00359518u) [[unlikely]] return; }
L_00359518:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359524u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00359524u) [[unlikely]] return; }
L_00359524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359544u); set32(c.r[4], c.r[4].w[0] + 6960u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00359544u) [[unlikely]] return; }
L_00359544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359554u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00359554u) [[unlikely]] return; }
L_00359554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035955Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035955Cu) [[unlikely]] return; }
L_0035955C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359568u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00359568u) [[unlikely]] return; }
L_00359568:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359578u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00359578u) [[unlikely]] return; }
L_00359578:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359588u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00359588u) [[unlikely]] return; }
L_00359588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] - 5454u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595A0u); set32(c.r[5], c.r[5].w[0] + 6976u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003595A0u) [[unlikely]] return; }
L_003595A0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595ACu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003595ACu) [[unlikely]] return; }
L_003595AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003595C8u) [[unlikely]] return; }
L_003595C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595D4u); st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x0038B880u; return; } if (c.pc != 0x003595D4u) [[unlikely]] return; }
L_003595D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595DCu);  if (depth < kMaxDepth) unit_0095(c, 174u, depth + 1u); else { c.pc = 0x00355DD0u; return; } if (c.pc != 0x003595DCu) [[unlikely]] return; }
L_003595DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037ADE0u; return; } if (c.pc != 0x003595E4u) [[unlikely]] return; }
L_003595E4:
    c.budget -= 1;
L_003595E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00359600:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359620:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15776u);
    set32(c.r[6], 0u + 240u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 6984u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 15543u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_003596A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359694u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359694u) [[unlikely]] return; }
L_00359694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359740; } }
    c.budget -= 1;
L_003596A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 8144u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], 0u + 66u);  if (t) { goto L_003596C0; } }
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00359738; } }
    c.budget -= 1;
L_003596C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[5], 0u + 240u);  if (t) { goto L_00359738; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 10312u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00359718; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < 43ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 40u);  if (t) { goto L_00359738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00359738; } }
    c.budget -= 1;
L_00359718:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 40u);  if (t) { goto L_00359738; } }
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00359738:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359770:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[9], c.r[9].w[0] + 15856u);
    set32(c.r[8], 0u + 43u);
    set32(c.r[7], 0u + 11u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 3426u));
    st8((c.r[4].w[0] + 311u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_003597D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6992u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_00359820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359814u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359814u) [[unlikely]] return; }
L_00359814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359940; } }
    c.budget -= 1;
L_00359820:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00359830:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3427u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359840; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00359840:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359830u | kUnwind; return; } goto L_00359830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359860u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00359860u) [[unlikely]] return; }
L_00359860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359868u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00359868u) [[unlikely]] return; }
L_00359868:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035987Cu); set32(c.r[5], c.r[5].w[0] + 7000u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035987Cu) [[unlikely]] return; }
L_0035987C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359898u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00359898u) [[unlikely]] return; }
L_00359898:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3426u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003598D0; } }
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 210u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 5u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003598D0u); st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003598D0u) [[unlikely]] return; }
L_003598D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00359938; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00359920; } }
    set32(c.r[3], 0u + 30u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00359920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00359940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00359940; } }
    c.budget -= 1;
L_00359938:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00359960:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22208u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359980:
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
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003599C8; } }
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003599E0; } }
L_003599C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43850000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 6;
L_003599E0:
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003599F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00359A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A14u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359A14u) [[unlikely]] return; }
L_00359A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359B20; } }
    c.budget -= 1;
L_00359A20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_00359B20; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { goto L_00359B20; } }
    set32(c.r[5], 0u + 116u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00359AB8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_00359A80; } }
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_00359A80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00359AB0; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_00359B18; } }
L_00359AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_00359B18; } }
L_00359AB8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43890000u);  if (t) { goto L_00359AD8; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_00359AD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43850000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00359B10; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_00359B18; } }
    c.budget -= 1;
L_00359B10:
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_00359B18:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359B20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359B50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + 15776u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], c.r[5].w[0] + 7008u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_00359BC0; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00359BC8; } }
    c.budget -= 1;
L_00359BC0:
    set32(c.r[3], 0u + 13u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359BC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359BE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00359C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359C30; } }
    c.budget -= 1;
L_00359C00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2590u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00359C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00359C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359C30; } }
    c.budget -= 1;
L_00359C28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00359C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00359C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C50u); set32(c.r[7], c.r[4].w[0] + 304u);  if (depth < kMaxDepth) unit_0096(c, 156u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00359C50u) [[unlikely]] return; }
L_00359C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359C68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00359C68:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 286u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00359CB8; } }
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 7008u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_00359CB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 286u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359CCCu);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BC0u; return; } if (c.pc != 0x00359CCCu) [[unlikely]] return; }
L_00359CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359CE0; } }
    c.budget -= 1;
L_00359CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359CE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 383u, depth + 1u); else { c.pc = 0x00357A70u; return; } if (c.pc != 0x00359CE0u) [[unlikely]] return; }
L_00359CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359CF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359D10:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[8], c.r[8].w[0] + 16096u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00359D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D98u); set32(c.r[5], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0096(c, 156u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00359D98u) [[unlikely]] return; }
L_00359D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DA8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359DA8u) [[unlikely]] return; }
L_00359DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359DF0; } }
L_00359DB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00359DE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 24u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00359DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00359DE8u) [[unlikely]] return; }
L_00359DE8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E18u); set32(c.r[5], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0096(c, 156u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00359E18u) [[unlikely]] return; }
L_00359E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E28u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359E28u) [[unlikely]] return; }
L_00359E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359E78; } }
L_00359E30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00359E58; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E48u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00359E48u) [[unlikely]] return; }
L_00359E48:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00359E78; } }
    c.budget -= 1;
L_00359E58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00359E78; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00359E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359EB0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], c.r[5].w[0] + 7024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15544u));
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00359F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F24u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00359F24u) [[unlikely]] return; }
L_00359F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359F38; } }
    c.budget -= 1;
L_00359F30:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00359F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359F50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00359F70:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 15856u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC3070000u);
    set32(c.r[6], 0u + 102u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 30u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_0035A010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A004u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A004u) [[unlikely]] return; }
L_0035A004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A058; } }
    c.budget -= 1;
L_0035A010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_0035A058; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1826u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A058; } }
    set32(c.r[3], c.r[3].w[0] + 29u);
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
L_0035A058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_0035A0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0B4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A0B4u) [[unlikely]] return; }
L_0035A0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A108; } }
    c.budget -= 1;
L_0035A0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A108; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1826u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 29u);  if (t) { goto L_0035A108; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0035A108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A140:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15984u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035A1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[9], c.r[4].w[0] + 304u);  if (t) { goto L_0035A1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A1C4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A1C4u) [[unlikely]] return; }
L_0035A1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A250; } }
    c.budget -= 1;
L_0035A1D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15556u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A250; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 120u);
    set32(c.r[3], 0u + 1u);
    c.r[8].d[0] = ld8((c.r[7].w[0] + 2597u));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2598u));
    st8((c.r[9].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2600u));
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0035A248; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035A250; } }
L_0035A248:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035A250:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A260:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A290; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A2A8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035A2A8; } }
L_0035A290:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035A2A8; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035A2A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A2B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A2D0:
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
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_0035A318; } }
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0035A328; } }
L_0035A318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
L_0035A328:
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035A340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035A370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A364u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A364u) [[unlikely]] return; }
L_0035A364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A490; } }
    c.budget -= 1;
L_0035A370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15556u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A490; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 2440u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 2597u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035A490; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 2598u));
    set32(c.r[3], 0u + 116u);
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A438; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43220000u);  if (t) { goto L_0035A400; } }
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_0035A400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0035A430; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0035A488; } }
L_0035A430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0035A488; } }
L_0035A438:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2602u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43810000u);  if (t) { goto L_0035A450; } }
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_0035A450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0035A480; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0035A488; } }
L_0035A480:
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_0035A488:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035A490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A4C0:
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
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035A510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035A540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A534u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A534u) [[unlikely]] return; }
L_0035A534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A678; } }
    c.budget -= 1;
L_0035A540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15556u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0035A678; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A5D8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2598u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0035A578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A580; } }
    c.budget -= 1;
L_0035A578:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_0035A580:
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2601u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);  if (t) { goto L_0035A598; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_0035A598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0035A5D0; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_0035A668; } }
    c.budget -= 1;
L_0035A5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_0035A668; } }
L_0035A5D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2598u));
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + 11u);  if (t) { goto L_0035A600; } }
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A608; } }
    c.budget -= 1;
L_0035A600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0035A610; } }
L_0035A608:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_0035A610:
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2601u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_0035A628; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_0035A628:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0035A660; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_0035A668; } }
    c.budget -= 1;
L_0035A660:
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_0035A668:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035A678; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035A678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A690:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A6B0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[6], c.r[6].w[0] - 19680u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035A6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035A710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A704u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A704u) [[unlikely]] return; }
L_0035A704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A718; } }
    c.budget -= 1;
L_0035A710:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035A718:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A750:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3360000u);
    set32(c.r[5], c.r[5].w[0] + 16096u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_0035A794; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0035A7B0; } }
L_0035A794:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0035A7B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC30E0000u);
    c.f[1] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 11u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035A800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_0035A838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A82Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A82Cu) [[unlikely]] return; }
L_0035A82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A8B0; } }
    c.budget -= 1;
L_0035A838:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 22384u);
    set32(c.r[3], c.r[3].w[0] + 22388u);
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2597u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035A8A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0035A8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A8A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0035A8A8u) [[unlikely]] return; }
L_0035A8A8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035A8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035A8C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A8E0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    set32(c.r[9], c.r[9].w[0] - 19824u);
    set32(c.r[8], 0u + 30u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC3580000u);
    set32(c.r[6], 0u + 122u);
    c.r[5].d[0] = c.r[5].d[0] | 13107ull;
    set32(c.r[3], 0u + 10u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035A950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035A980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A974u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035A974u) [[unlikely]] return; }
L_0035A974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035A988; } }
    c.budget -= 1;
L_0035A980:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035A988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035A9A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035A9C0:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[9].d[0] = c.r[5].d[0] | 39322ull;
    c.r[8].d[0] = c.r[3].d[0] | 52429ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0xC3870000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40700000u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], 0u + 36u);
    set32(c.r[3], c.r[3].w[0] + 15648u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_0035AA30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2384u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AA70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AA70; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035AA78; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035AA78; } }
    c.budget -= 1;
L_0035AA70:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0035AA78:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035AB30; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035AB18; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0035AAD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035AAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AB60; } }
L_0035AAA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_0035AAC0; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0035AAC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0035AB60; } }
    c.budget -= 1;
L_0035AAD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0035AB60; } }
    c.budget -= 1;
L_0035AAE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34B0000u);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_0035AB60; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_0035AB60; } }
L_0035AB18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0035AB60; } }
    c.budget -= 1;
L_0035AB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_0035AB60; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 3;
L_0035AB60:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0035AB70; }
L_0035AB70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x9B580000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[3].d[0] | 46021ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 4760u)));
    c.r[6].d[0] = c.r[5].d[0] | 14137ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[5].d[0] = c.r[3].d[0] | 34953ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 17));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[6].w[0] << 4);
    c.r[3].d[0] = c.r[6].sd[0] < 100ll ? 1ull : 0ull;
    set32(c.r[9], c.r[8].w[0] - c.r[6].w[0]);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    set32(c.r[8], c.r[2].w[0] >> 31);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 11));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    set32(c.r[8], c.r[2].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 50;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);  if (t) { goto L_0035AC48; } }
    set32(c.r[7], 0u + 59u);
    set32(c.r[6], 0u + 99u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
L_0035AC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[5], c.r[5].w[0] + 7032u);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    set32(c.r[16], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC88u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035AC88u) [[unlikely]] return; }
L_0035AC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC98u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0035AC98u) [[unlikely]] return; }
L_0035AC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035ACA0u) [[unlikely]] return; }
L_0035ACA0:
    set32(c.r[2], c.r[17].w[0] - 36u);
    set32(c.r[3], c.r[16].w[0] - 25u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACCCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035ACCCu) [[unlikely]] return; }
L_0035ACCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035ACE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22440u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AD0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035AD0Cu) [[unlikely]] return; }
L_0035AD0C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035AD30:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.r[9].d[0] = c.r[3].d[0] | 26214ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CBF0000u);
    set32(c.r[10], 0u + 30u);
    c.r[8].d[0] = c.r[3].d[0] | 9613ull;
    set32(c.r[6], c.r[6].w[0] + 15648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    set32(c.r[5], 0u + 11u);
    c.r[7].d[0] = c.r[3].d[0] | 55051ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 304u), c.r[3].w[0]);  c.pc = t; return; }
L_0035ADB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035ADD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 76u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3424u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035AE00; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035AE18; } }
L_0035AE00:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 40u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035AF30; } }
    c.budget -= 1;
L_0035AE18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0035AEA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    set32(c.r[4], 0u + 46u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE5Cu); st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035AE5Cu) [[unlikely]] return; }
L_0035AE5C:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035AE68u) [[unlikely]] return; }
L_0035AE68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035AE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE7Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035AE7Cu) [[unlikely]] return; }
L_0035AE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AF30; } }
    c.budget -= 1;
L_0035AE88:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE94u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035AE94u) [[unlikely]] return; }
L_0035AE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AF30; } }
    c.budget -= 1;
L_0035AEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 116u), c.f[1]);  if (t) { goto L_0035AF30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 46u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AEF8u); st32((c.r[16].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035AEF8u) [[unlikely]] return; }
L_0035AEF8:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035AF04u) [[unlikely]] return; }
L_0035AF04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035AF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF18u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035AF18u) [[unlikely]] return; }
L_0035AF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AF30; } }
L_0035AF20:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF2Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035AF2Cu) [[unlikely]] return; }
L_0035AF2C:
    c.budget -= 1;
L_0035AF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035AF40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 76u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3424u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035AF70; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035AF88; } }
L_0035AF70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035B080; } }
L_0035AF88:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AF98u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035AF98u) [[unlikely]] return; }
L_0035AF98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AFD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 649u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AFD0u); set32(c.r[5], c.r[5].w[0] + 7048u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035AFD0u) [[unlikely]] return; }
L_0035AFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B008; } }
L_0035AFD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 649u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B004u); set32(c.r[5], c.r[5].w[0] + 7056u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035B004u) [[unlikely]] return; }
L_0035B004:
    c.budget -= 1;
L_0035B008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B010u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0035B010u) [[unlikely]] return; }
L_0035B010:
    set32(c.r[16], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B024u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0035B024u) [[unlikely]] return; }
L_0035B024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B02Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035B02Cu) [[unlikely]] return; }
L_0035B02C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 33;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 33);  if (t) { goto L_0035B054; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0035B054:
    set32(c.r[2], 0u + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43840000u);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B07Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035B07Cu) [[unlikely]] return; }
L_0035B07C:
    c.budget -= 1;
L_0035B080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0035B0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B0BCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035B0BCu) [[unlikely]] return; }
L_0035B0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B108; } }
    c.budget -= 1;
L_0035B0C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_0035B108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B108u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0035B108u) [[unlikely]] return; }
L_0035B108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035B120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 22472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035B140:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FAC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], c.r[5].w[0] - 19600u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 296u)));
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035B1B8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 45u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 649u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035B1D0; } }
    c.budget -= 1;
L_0035B1B8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 128u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 9852u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0035B1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B1E0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 76u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035B200; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035B218; } }
L_0035B200:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035B288; } }
L_0035B218:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035B230; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035B288; } }
L_0035B230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035B258; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035B280; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035B280; } }
L_0035B258:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0035B270; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035B280; } }
L_0035B270:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035B288; } }
L_0035B280:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035B288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2B4u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_00A2(c, 383u, depth + 1u); else { c.pc = 0x0038B860u; return; } if (c.pc != 0x0035B2B4u) [[unlikely]] return; }
L_0035B2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B308; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2CCu); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0035B2CCu) [[unlikely]] return; }
L_0035B2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2D4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0035B2D4u) [[unlikely]] return; }
L_0035B2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2E8u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0035B2E8u) [[unlikely]] return; }
L_0035B2E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B308u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0035B308u) [[unlikely]] return; }
L_0035B308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B334u); set32(c.r[16], c.r[4].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0035B334u) [[unlikely]] return; }
L_0035B334:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B348u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0035B348u) [[unlikely]] return; }
L_0035B348:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B35Cu); set32(c.r[4], c.r[2].w[0] + 15600u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0035B35Cu) [[unlikely]] return; }
L_0035B35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[16], c.r[5].w[0] + 3u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3B8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0035B3B8u) [[unlikely]] return; }
L_0035B3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3C0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0035B3C0u) [[unlikely]] return; }
L_0035B3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3D4u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0035B3D4u) [[unlikely]] return; }
L_0035B3D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3F8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 36u, depth + 1u); else { c.pc = 0x002D89F0u; return; } if (c.pc != 0x0035B3F8u) [[unlikely]] return; }
L_0035B3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 255u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035B444u) [[unlikely]] return; }
L_0035B444:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035B4C8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2603u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9845u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4C8u); st8((c.r[2].w[0] + 2599u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0035B4C8u) [[unlikely]] return; }
L_0035B4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035B4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035B6F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7072u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035B518:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B530u); st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 280u, depth + 1u); else { c.pc = 0x0035B710u; return; } if (c.pc != 0x0035B530u) [[unlikely]] return; }
L_0035B530:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035B6F8; } }
    c.budget -= 1;
L_0035B540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B548u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0035B548u) [[unlikely]] return; }
L_0035B548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B6F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035B6F8; } }
L_0035B560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B568u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x0035B568u) [[unlikely]] return; }
L_0035B568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B578u);  if (depth < kMaxDepth) unit_0097(c, 34u, depth + 1u); else { c.pc = 0x0035C990u; return; } if (c.pc != 0x0035B578u) [[unlikely]] return; }
L_0035B578:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035B590; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035B590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B598u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0035B598u) [[unlikely]] return; }
L_0035B598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B5B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 43u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035B600; } }
    c.budget -= 1;
L_0035B5B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B600; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5E8u); st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035B5E8u) [[unlikely]] return; }
L_0035B5E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035B6F8; } }
    c.budget -= 1;
L_0035B600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B608u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0035B608u) [[unlikely]] return; }
L_0035B608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B618u);  if (depth < kMaxDepth) unit_0097(c, 49u, depth + 1u); else { c.pc = 0x0035CBA0u; return; } if (c.pc != 0x0035B618u) [[unlikely]] return; }
L_0035B618:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035B6F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035B680; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035B640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B6F8; } }
    c.budget -= 1;
L_0035B640:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B64Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035B64Cu) [[unlikely]] return; }
L_0035B64C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2603u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035B6F8; } }
    c.budget -= 1;
L_0035B680:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B68Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035B68Cu) [[unlikely]] return; }
L_0035B68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B6F8; } }
    c.budget -= 1;
L_0035B698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B6A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 18u, depth + 1u); else { c.pc = 0x0035C2B0u; return; } if (c.pc != 0x0035B6A0u) [[unlikely]] return; }
L_0035B6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035B6F8; } }
L_0035B6A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035B6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035B6F8; } }
    c.budget -= 1;
L_0035B6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B6D8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0035B6D8u) [[unlikely]] return; }
L_0035B6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B6F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035B6F8; } }
L_0035B6F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035B6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B720u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x0035B720u) [[unlikely]] return; }
L_0035B720:
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B738u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B738u) [[unlikely]] return; }
L_0035B738:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B74Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B74Cu) [[unlikely]] return; }
L_0035B74C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B760u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B760u) [[unlikely]] return; }
L_0035B760:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B774u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B774u) [[unlikely]] return; }
L_0035B774:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B778:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B78Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B78Cu) [[unlikely]] return; }
L_0035B78C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B778u | kUnwind; return; } goto L_0035B778; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B7A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B7B4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B7B4u) [[unlikely]] return; }
L_0035B7B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B7A0u | kUnwind; return; } goto L_0035B7A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B7D8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0096(c, 296u, depth + 1u); else { c.pc = 0x0035B8A0u; return; } if (c.pc != 0x0035B7D8u) [[unlikely]] return; }
L_0035B7D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B7E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0096(c, 294u, depth + 1u); else { c.pc = 0x0035B810u; return; } if (c.pc != 0x0035B7E8u) [[unlikely]] return; }
L_0035B7E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B7F8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0096(c, 294u, depth + 1u); else { c.pc = 0x0035B810u; return; } if (c.pc != 0x0035B7F8u) [[unlikely]] return; }
L_0035B7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B800u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x0035B800u) [[unlikely]] return; }
L_0035B800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B838u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0035B838u) [[unlikely]] return; }
L_0035B838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B888; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 23040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 304u), c.r[17].w[0]);
    c.budget -= 18;
L_0035B888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035B8A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B8D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0035B8D0u) [[unlikely]] return; }
L_0035B8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B920; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 23040u);
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
    st32((c.r[2].w[0] + 304u), c.r[18].w[0]);
    c.budget -= 18;
L_0035B920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035B940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B968u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0035B968u) [[unlikely]] return; }
L_0035B968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B9C0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] - 16752u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 304u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_0035B9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035B9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BA00:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], c.r[28].w[0] - 27760u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035BA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035BA60; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035BA60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0035BA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037ADE0u; return; } if (c.pc != 0x0035BA78u) [[unlikely]] return; }
L_0035BA78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035BA90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0035BAA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BAC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[7], c.r[4].w[0] + 304u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0035BAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035BB00; } }
L_0035BAF8:
    set32(c.r[3], 0u + 17u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035BB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[6], c.r[6].w[0] + 23104u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035BB50; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035BB50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BB60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BB80:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15648u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035BBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBDCu); set32(c.r[5], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0097(c, 16u, depth + 1u); else { c.pc = 0x0035C1F0u; return; } if (c.pc != 0x0035BBDCu) [[unlikely]] return; }
L_0035BBDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035BBF0; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035BBF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035BC28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035BC28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 298u, depth + 1u); else { c.pc = 0x0035B940u; return; } if (c.pc != 0x0035BC1Cu) [[unlikely]] return; }
L_0035BC1C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035BC40; } }
L_0035BC28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035BC40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0035BC40; } }
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0035BC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035BC50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BC70:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[8].w[0] - 16368u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[5], c.r[5].w[0] + 22816u);
    set32(c.r[3], c.r[3].w[0] + 22818u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[0]);  c.pc = t; return; }
L_0035BD00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    set32(c.r[3], 0u + 25u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0035BD60; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0035BD60; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035BD48; } }
    c.r[1].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035BD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0035BD68; } }
L_0035BD48:
    c.r[3].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035BD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0035BD68; } }
    c.budget -= 1;
L_0035BD60:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_0035BD68:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0035BD88; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035BD88; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035BD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BD90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BDB0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] - 16160u);
    set32(c.r[5], c.r[5].w[0] + 23168u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035BE00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0035BE58; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0035BE58; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035BE40; } }
    c.r[1].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035BE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0035BE60; } }
    c.budget -= 1;
L_0035BE40:
    c.r[3].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035BE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0035BE60; } }
    c.budget -= 1;
L_0035BE58:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_0035BE60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0035BE80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035BE80; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035BE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BE90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BEB0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    set32(c.r[8], c.r[8].w[0] - 16032u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    set32(c.r[7], 0u + 36u);
    set32(c.r[6], 0u + 180u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035BF00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0035BF30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035BF80; } }
    c.budget -= 1;
L_0035BF30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0035BF48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035BF50; } }
    c.budget -= 1;
L_0035BF48:
    set32(c.r[3], c.r[3].w[0] - 5u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035BF50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D300000u);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[5].d[0] = c.r[5].d[0] | 8389ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035BF80; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035BF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035BF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 23216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00358000u < 16384u) { entry = entries_0096[(t - 0x00358000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035BFB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035BFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0035BFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFF0u);  if (depth < kMaxDepth) unit_0097(c, 37u, depth + 1u); else { c.pc = 0x0035C9E0u; return; } if (c.pc != 0x0035BFF0u) [[unlikely]] return; }
L_0035BFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFF8u);  if (depth < kMaxDepth) unit_0097(c, 50u, depth + 1u); else { c.pc = 0x0035CC00u; return; } if (c.pc != 0x0035BFF8u) [[unlikely]] return; }
L_0035BFF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
