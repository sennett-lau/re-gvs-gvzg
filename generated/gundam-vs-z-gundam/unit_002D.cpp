#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0,
    231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B4000;
    case 2u: goto L_001B40CC;
    case 3u: goto L_001B40D8;
    case 4u: goto L_001B40EC;
    case 5u: goto L_001B415C;
    case 6u: goto L_001B4168;
    case 7u: goto L_001B4170;
    case 8u: goto L_001B4180;
    case 9u: goto L_001B4194;
    case 10u: goto L_001B4264;
    case 11u: goto L_001B4270;
    case 12u: goto L_001B4284;
    case 13u: goto L_001B4298;
    case 14u: goto L_001B4300;
    case 15u: goto L_001B4310;
    case 16u: goto L_001B4340;
    case 17u: goto L_001B43C8;
    case 18u: goto L_001B4420;
    case 19u: goto L_001B4434;
    case 20u: goto L_001B4448;
    case 21u: goto L_001B4460;
    case 22u: goto L_001B446C;
    case 23u: goto L_001B4480;
    case 24u: goto L_001B4490;
    case 25u: goto L_001B44A0;
    case 26u: goto L_001B450C;
    case 27u: goto L_001B4518;
    case 28u: goto L_001B4580;
    case 29u: goto L_001B4604;
    case 30u: goto L_001B4610;
    case 31u: goto L_001B468C;
    case 32u: goto L_001B469C;
    case 33u: goto L_001B46B0;
    case 34u: goto L_001B46CC;
    case 35u: goto L_001B47B4;
    case 36u: goto L_001B47EC;
    case 37u: goto L_001B48C0;
    case 38u: goto L_001B48CC;
    case 39u: goto L_001B48D4;
    case 40u: goto L_001B4940;
    case 41u: goto L_001B495C;
    case 42u: goto L_001B4A04;
    case 43u: goto L_001B4A90;
    case 44u: goto L_001B4B40;
    case 45u: goto L_001B4B4C;
    case 46u: goto L_001B4B54;
    case 47u: goto L_001B4B70;
    case 48u: goto L_001B4BAC;
    case 49u: goto L_001B4BF4;
    case 50u: goto L_001B4C20;
    case 51u: goto L_001B4C30;
    case 52u: goto L_001B4CA0;
    case 53u: goto L_001B4D14;
    case 54u: goto L_001B4D20;
    case 55u: goto L_001B4D40;
    case 56u: goto L_001B4D5C;
    case 57u: goto L_001B4DC8;
    case 58u: goto L_001B4DD0;
    case 59u: goto L_001B4E20;
    case 60u: goto L_001B4E30;
    case 61u: goto L_001B4ED0;
    case 62u: goto L_001B4ED8;
    case 63u: goto L_001B4F20;
    case 64u: goto L_001B4F2C;
    case 65u: goto L_001B4F38;
    case 66u: goto L_001B4F50;
    case 67u: goto L_001B4F6C;
    case 68u: goto L_001B4F74;
    case 69u: goto L_001B4FB0;
    case 70u: goto L_001B5000;
    case 71u: goto L_001B5010;
    case 72u: goto L_001B512C;
    case 73u: goto L_001B5144;
    case 74u: goto L_001B5154;
    case 75u: goto L_001B5184;
    case 76u: goto L_001B518C;
    case 77u: goto L_001B51B0;
    case 78u: goto L_001B51D0;
    case 79u: goto L_001B51E0;
    case 80u: goto L_001B5220;
    case 81u: goto L_001B5238;
    case 82u: goto L_001B5248;
    case 83u: goto L_001B5254;
    case 84u: goto L_001B5284;
    case 85u: goto L_001B52BC;
    case 86u: goto L_001B52D0;
    case 87u: goto L_001B5310;
    case 88u: goto L_001B5354;
    case 89u: goto L_001B5388;
    case 90u: goto L_001B5394;
    case 91u: goto L_001B53FC;
    case 92u: goto L_001B54B0;
    case 93u: goto L_001B54BC;
    case 94u: goto L_001B54D8;
    case 95u: goto L_001B54F0;
    case 96u: goto L_001B5648;
    case 97u: goto L_001B5654;
    case 98u: goto L_001B5674;
    case 99u: goto L_001B5688;
    case 100u: goto L_001B56B8;
    case 101u: goto L_001B5788;
    case 102u: goto L_001B57C4;
    case 103u: goto L_001B57FC;
    case 104u: goto L_001B58D4;
    case 105u: goto L_001B5940;
    case 106u: goto L_001B595C;
    case 107u: goto L_001B59C0;
    case 108u: goto L_001B59E0;
    case 109u: goto L_001B5A30;
    case 110u: goto L_001B5A50;
    case 111u: goto L_001B5A90;
    case 112u: goto L_001B5A98;
    case 113u: goto L_001B5AB0;
    case 114u: goto L_001B5AF0;
    case 115u: goto L_001B5B0C;
    case 116u: goto L_001B5B48;
    case 117u: goto L_001B5B50;
    case 118u: goto L_001B5B60;
    case 119u: goto L_001B5B80;
    case 120u: goto L_001B5BBC;
    case 121u: goto L_001B5C30;
    case 122u: goto L_001B5C38;
    case 123u: goto L_001B5D78;
    case 124u: goto L_001B5DAC;
    case 125u: goto L_001B5DB4;
    case 126u: goto L_001B5DBC;
    case 127u: goto L_001B5DDC;
    case 128u: goto L_001B5DE4;
    case 129u: goto L_001B5E00;
    case 130u: goto L_001B5EB4;
    case 131u: goto L_001B5EBC;
    case 132u: goto L_001B5EC4;
    case 133u: goto L_001B5EDC;
    case 134u: goto L_001B5EE4;
    case 135u: goto L_001B5EF0;
    case 136u: goto L_001B5F10;
    case 137u: goto L_001B5F48;
    case 138u: goto L_001B5F50;
    case 139u: goto L_001B5F98;
    case 140u: goto L_001B6108;
    case 141u: goto L_001B6114;
    case 142u: goto L_001B611C;
    case 143u: goto L_001B6134;
    case 144u: goto L_001B613C;
    case 145u: goto L_001B6148;
    case 146u: goto L_001B6158;
    case 147u: goto L_001B6160;
    case 148u: goto L_001B6180;
    case 149u: goto L_001B61A0;
    case 150u: goto L_001B61B0;
    case 151u: goto L_001B61D8;
    case 152u: goto L_001B61F0;
    case 153u: goto L_001B6218;
    case 154u: goto L_001B6220;
    case 155u: goto L_001B6234;
    case 156u: goto L_001B6264;
    case 157u: goto L_001B6278;
    case 158u: goto L_001B62A0;
    case 159u: goto L_001B62C0;
    case 160u: goto L_001B62D4;
    case 161u: goto L_001B6318;
    case 162u: goto L_001B6320;
    case 163u: goto L_001B6348;
    case 164u: goto L_001B6360;
    case 165u: goto L_001B6388;
    case 166u: goto L_001B63B0;
    case 167u: goto L_001B63C4;
    case 168u: goto L_001B63D0;
    case 169u: goto L_001B63D8;
    case 170u: goto L_001B6400;
    case 171u: goto L_001B6420;
    case 172u: goto L_001B64A8;
    case 173u: goto L_001B64B4;
    case 174u: goto L_001B64DC;
    case 175u: goto L_001B64E8;
    case 176u: goto L_001B65D8;
    case 177u: goto L_001B6640;
    case 178u: goto L_001B6658;
    case 179u: goto L_001B6660;
    case 180u: goto L_001B6670;
    case 181u: goto L_001B6678;
    case 182u: goto L_001B6684;
    case 183u: goto L_001B6694;
    case 184u: goto L_001B66A4;
    case 185u: goto L_001B66B4;
    case 186u: goto L_001B67C8;
    case 187u: goto L_001B680C;
    case 188u: goto L_001B6814;
    case 189u: goto L_001B6820;
    case 190u: goto L_001B6840;
    case 191u: goto L_001B68AC;
    case 192u: goto L_001B6948;
    case 193u: goto L_001B6950;
    case 194u: goto L_001B6958;
    case 195u: goto L_001B6960;
    case 196u: goto L_001B6980;
    case 197u: goto L_001B6A58;
    case 198u: goto L_001B6A60;
    case 199u: goto L_001B6B44;
    case 200u: goto L_001B6BA0;
    case 201u: goto L_001B6BB0;
    case 202u: goto L_001B6BB8;
    case 203u: goto L_001B6BE0;
    case 204u: goto L_001B6BF4;
    case 205u: goto L_001B6BFC;
    case 206u: goto L_001B6C04;
    case 207u: goto L_001B6C24;
    case 208u: goto L_001B6C4C;
    case 209u: goto L_001B6C8C;
    case 210u: goto L_001B6CB0;
    case 211u: goto L_001B6CB8;
    case 212u: goto L_001B6CD0;
    case 213u: goto L_001B6CE4;
    case 214u: goto L_001B6D14;
    case 215u: goto L_001B6D4C;
    case 216u: goto L_001B6D70;
    case 217u: goto L_001B6E98;
    case 218u: goto L_001B6EC8;
    case 219u: goto L_001B6F9C;
    case 220u: goto L_001B6FE8;
    case 221u: goto L_001B7040;
    case 222u: goto L_001B711C;
    case 223u: goto L_001B7130;
    case 224u: goto L_001B7184;
    case 225u: goto L_001B719C;
    case 226u: goto L_001B7250;
    case 227u: goto L_001B726C;
    case 228u: goto L_001B7290;
    case 229u: goto L_001B72E8;
    case 230u: goto L_001B72F4;
    case 231u: goto L_001B7300;
    case 232u: goto L_001B7310;
    case 233u: goto L_001B732C;
    case 234u: goto L_001B73A0;
    case 235u: goto L_001B7414;
    case 236u: goto L_001B7430;
    case 237u: goto L_001B7460;
    case 238u: goto L_001B7480;
    case 239u: goto L_001B7524;
    case 240u: goto L_001B75FC;
    case 241u: goto L_001B767C;
    case 242u: goto L_001B76E8;
    case 243u: goto L_001B7710;
    case 244u: goto L_001B7748;
    case 245u: goto L_001B7770;
    case 246u: goto L_001B77C8;
    case 247u: goto L_001B77F4;
    case 248u: goto L_001B7820;
    case 249u: goto L_001B78B0;
    case 250u: goto L_001B78E4;
    case 251u: goto L_001B7904;
    case 252u: goto L_001B7A50;
    case 253u: goto L_001B7A90;
    case 254u: goto L_001B7AA0;
    case 255u: goto L_001B7AB0;
    case 256u: goto L_001B7AC0;
    case 257u: goto L_001B7AD0;
    case 258u: goto L_001B7B20;
    case 259u: goto L_001B7B2C;
    case 260u: goto L_001B7B38;
    case 261u: goto L_001B7B84;
    case 262u: goto L_001B7B90;
    case 263u: goto L_001B7B9C;
    case 264u: goto L_001B7BE8;
    case 265u: goto L_001B7BF0;
    case 266u: goto L_001B7C10;
    case 267u: goto L_001B7C40;
    case 268u: goto L_001B7C78;
    case 269u: goto L_001B7CB4;
    case 270u: goto L_001B7D3C;
    case 271u: goto L_001B7D68;
    case 272u: goto L_001B7DA0;
    case 273u: goto L_001B7DC0;
    case 274u: goto L_001B7F70;
    case 275u: goto L_001B7F78;
    default: bad_entry(c, 0x001B4000u); return;
    }
L_001B4000:
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B40D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4168; } }
L_001B4028:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_001B4078; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001B4078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B409C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B40B8; } }
L_001B409C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001B40B8:
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 111u, depth + 1u); else { c.pc = 0x001EA7C0u; return; } if (c.pc != 0x001B40CCu) [[unlikely]] return; }
L_001B40CC:
    c.budget -= 1;
L_001B40D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 112u, depth + 1u); else { c.pc = 0x001EA7F0u; return; } if (c.pc != 0x001B40D8u) [[unlikely]] return; }
L_001B40D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001B40ECu) [[unlikely]] return; }
L_001B40EC:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[0]);  if (t) { goto L_001B4168; } }
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9504u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1048u));
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[0] = ld32((c.r[16].w[0] + 1052u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[12]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B415Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B415Cu) [[unlikely]] return; }
L_001B415C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4168u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B4168u) [[unlikely]] return; }
L_001B4168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4170u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B4170u) [[unlikely]] return; }
L_001B4170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4194u) [[unlikely]] return; }
L_001B4194:
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B4258; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B41F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B41C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4258; } }
L_001B41C8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1052u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_001B41F8:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4218; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_001B4218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B4258; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_001B4258:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B4264u) [[unlikely]] return; }
L_001B4264:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4270u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B4270u) [[unlikely]] return; }
L_001B4270:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4284u); st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B4284u) [[unlikely]] return; }
L_001B4284:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001B4298u) [[unlikely]] return; }
L_001B4298:
    c.f[2] = ld32((c.r[16].w[0] + 1048u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B42D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B42F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_001B42F8; } }
    c.budget -= 1;
L_001B42D0:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { goto L_001B42F8; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_001B42F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B4300u) [[unlikely]] return; }
L_001B4300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B43D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4340u); st32((c.r[16].w[0] + 1260u), 0u);  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x001B4340u) [[unlikely]] return; }
L_001B4340:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4360; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_001B4360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[6], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[8], 0u - 65u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[7], 0u + 2u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] - 9503u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B43C8u) [[unlikely]] return; }
L_001B43C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B43E8; } }
L_001B43D0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 793u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B43E8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B43E8:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B4418; } }
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 6;
L_001B4418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4420u) [[unlikely]] return; }
L_001B4420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001B4460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4434u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001B4434u) [[unlikely]] return; }
L_001B4434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4460; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B4448u) [[unlikely]] return; }
L_001B4448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4460; } }
    c.f[12] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 81u, depth + 1u); else { c.pc = 0x001E5080u; return; } if (c.pc != 0x001B4460u) [[unlikely]] return; }
L_001B4460:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B446Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B446Cu) [[unlikely]] return; }
L_001B446C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B4488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4480u);  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B4480u) [[unlikely]] return; }
L_001B4480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4490; } }
L_001B4488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B4490u) [[unlikely]] return; }
L_001B4490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B44A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B4520; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B44D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B46A0; } }
    c.budget -= 1;
L_001B44D0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 261u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B450Cu); st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0039(c, 136u, depth + 1u); else { c.pc = 0x001E5C20u; return; } if (c.pc != 0x001B450Cu) [[unlikely]] return; }
L_001B450C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4518u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 334u, depth + 1u); else { c.pc = 0x001EF960u; return; } if (c.pc != 0x001B4518u) [[unlikely]] return; }
L_001B4518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B46A0; } }
L_001B4520:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B46A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001B4568; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001B4568:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4580u); st16((c.r[16].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001B4580u) [[unlikely]] return; }
L_001B4580:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 878u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4604u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B4604u) [[unlikely]] return; }
L_001B4604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4610u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B4610u) [[unlikely]] return; }
L_001B4610:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_001B4630; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4680; } }
    c.budget -= 1;
L_001B4630:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_001B4650; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4680; } }
    c.budget -= 1;
L_001B4650:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_001B4670; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4680; } }
    c.budget -= 1;
L_001B4670:
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001B4680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B468Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001B468Cu) [[unlikely]] return; }
L_001B468C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B469Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B469Cu) [[unlikely]] return; }
L_001B469C:
    c.budget -= 1;
L_001B46A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B46B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46CCu); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B46CCu) [[unlikely]] return; }
L_001B46CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B47A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B4760; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B46F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B47B8; } }
    c.budget -= 1;
L_001B46F8:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B47B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B47B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B47B8; } }
    c.budget -= 1;
L_001B4760:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_001B4798; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B47B8; } }
    c.budget -= 1;
L_001B4798:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B47A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47B4u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B47B4u) [[unlikely]] return; }
L_001B47B4:
    c.budget -= 1;
L_001B47B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B48B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B47E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 878u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B48B8; } }
L_001B47E0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47ECu); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001B47ECu) [[unlikely]] return; }
L_001B47EC:
    c.f[1] = ld32((c.r[16].w[0] + 1224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4830; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4820; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B48B8; } }
    c.budget -= 1;
L_001B4820:
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] - 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B48B8; } }
L_001B4830:
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4880; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4868; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B48B8; } }
    c.budget -= 1;
L_001B4868:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B48B8; } }
    c.budget -= 1;
L_001B4880:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B48A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1234u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B48B8; } }
    c.budget -= 1;
L_001B48A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1234u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 4;
L_001B48B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B48C0u) [[unlikely]] return; }
L_001B48C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B48CCu) [[unlikely]] return; }
L_001B48CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B48D4u) [[unlikely]] return; }
L_001B48D4:
    set32(c.r[6], ld32((c.r[16].w[0] + 1268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 1264u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B495Cu); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B495Cu) [[unlikely]] return; }
L_001B495C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_001B4B10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B4AE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B4A88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001B4A10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B4998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4B40; } }
    c.budget -= 1;
L_001B4998:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B4A04u) [[unlikely]] return; }
L_001B4A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4B40; } }
    c.budget -= 1;
L_001B4A10:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4A38; } }
    set32(c.r[2], 0u + 8192u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4A88; } }
L_001B4A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4A58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4A88; } }
    c.budget -= 1;
L_001B4A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001B4A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4A88; } }
    c.budget -= 1;
L_001B4A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001B4A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4A90u) [[unlikely]] return; }
L_001B4A90:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B4B40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4B40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_001B4AE0:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_001B4B40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B4B10:
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[2], 0u - 129u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B40u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_002E(c, 83u, depth + 1u); else { c.pc = 0x001B9280u; return; } if (c.pc != 0x001B4B40u) [[unlikely]] return; }
L_001B4B40:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B4B4Cu) [[unlikely]] return; }
L_001B4B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B4B54u) [[unlikely]] return; }
L_001B4B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4B70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001B4BACu) [[unlikely]] return; }
L_001B4BAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001B4BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4BE8; } }
L_001B4BC0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_001B4BE8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B4BF4u) [[unlikely]] return; }
L_001B4BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4CC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1636u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001B4C14; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001B4C14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B4C20u) [[unlikely]] return; }
L_001B4C20:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C30u); st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B4C30u) [[unlikely]] return; }
L_001B4C30:
    c.f[3] = ld32((c.r[16].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4C90; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001B4C90:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001B4CA0u) [[unlikely]] return; }
L_001B4CA0:
    c.f[1] = ld32((c.r[16].w[0] + 1080u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[1]);  if (t) { goto L_001B4D18; } }
    c.budget -= 1;
L_001B4CC0:
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4D08; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_001B4D08:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001B4D14u) [[unlikely]] return; }
L_001B4D14:
    c.budget -= 1;
L_001B4D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 41u, depth + 1u); else { c.pc = 0x001B8970u; return; } if (c.pc != 0x001B4D20u) [[unlikely]] return; }
L_001B4D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B4D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D5Cu); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B4D5Cu) [[unlikely]] return; }
L_001B4D5C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B4EC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B4E28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B4DC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4F40; } }
L_001B4D90:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[7], 0u + 10u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DC8u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B4DC8u) [[unlikely]] return; }
L_001B4DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4DD0u) [[unlikely]] return; }
L_001B4DD0:
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B4F40; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 799u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B4E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E20u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B4E20u) [[unlikely]] return; }
L_001B4E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 799u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4F40; } }
L_001B4E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4E30u) [[unlikely]] return; }
L_001B4E30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u - 389u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 768u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1248u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1248u)));
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 20;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001B4EA0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 7456u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001B4F40; } }
L_001B4EA0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 7456u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001B4F40; } }
    c.budget -= 1;
L_001B4EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4ED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4ED0u) [[unlikely]] return; }
L_001B4ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001B4ED8u) [[unlikely]] return; }
L_001B4ED8:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4F40; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B4F40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F20u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B4F20u) [[unlikely]] return; }
L_001B4F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F2Cu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001B4F2Cu) [[unlikely]] return; }
L_001B4F2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F38u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B4F38u) [[unlikely]] return; }
L_001B4F38:
    st32((c.r[16].w[0] + 980u), 0u);
    st32((c.r[16].w[0] + 976u), 0u);
    c.budget -= 2;
L_001B4F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F6Cu); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001B4F6Cu) [[unlikely]] return; }
L_001B4F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B4F74u) [[unlikely]] return; }
L_001B4F74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001B4FB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5000; } }
    c.budget -= 1;
L_001B4F98:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FB0u); st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B4FB0u) [[unlikely]] return; }
L_001B4FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5000; } }
L_001B4FB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B5000; } }
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 33u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5000u); st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001B5000u) [[unlikely]] return; }
L_001B5000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5160; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001B5044; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001B5044:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9472u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 1092u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    c.r[1].d[0] = c.r[2].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 38;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < -24575ll ? 1ull : 0ull;  if (t) { goto L_001B50E8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B5118; } }
    c.budget -= 1;
L_001B50E8:
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001B5120; } }
    c.budget -= 1;
L_001B5118:
    st16((c.r[16].w[0] + 856u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001B5120:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B512Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 111u, depth + 1u); else { c.pc = 0x001EA7C0u; return; } if (c.pc != 0x001B512Cu) [[unlikely]] return; }
L_001B512C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5144u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B5144u) [[unlikely]] return; }
L_001B5144:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5154u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B5154u) [[unlikely]] return; }
L_001B5154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B51D0; } }
    c.budget -= 1;
L_001B5160:
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5184u); st32((c.r[16].w[0] + 732u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 112u, depth + 1u); else { c.pc = 0x001EA7F0u; return; } if (c.pc != 0x001B5184u) [[unlikely]] return; }
L_001B5184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B518Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B518Cu) [[unlikely]] return; }
L_001B518C:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B51D0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B51B0u) [[unlikely]] return; }
L_001B51B0:
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B51D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51D0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B51D0u) [[unlikely]] return; }
L_001B51D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B51E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5240; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5220u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B5220u) [[unlikely]] return; }
L_001B5220:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5238u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B5238u) [[unlikely]] return; }
L_001B5238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5248; } }
L_001B5240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5248u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B5248u) [[unlikely]] return; }
L_001B5248:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B5254u) [[unlikely]] return; }
L_001B5254:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5278; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 6;
L_001B5278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001B5284u) [[unlikely]] return; }
L_001B5284:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B52A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B52B0; } }
    c.budget -= 1;
L_001B52A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 2;
L_001B52B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B52BCu) [[unlikely]] return; }
L_001B52BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B52D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u - 261u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 708u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 1264u), 0u);
    st32((c.r[4].w[0] + 1260u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_002E(c, 83u, depth); }
L_001B5310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B53A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B5340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B54D8; } }
L_001B5340:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5354u); st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B5354u) [[unlikely]] return; }
L_001B5354:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[5], 0u - 261u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5388u); st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 136u, depth + 1u); else { c.pc = 0x001E5C20u; return; } if (c.pc != 0x001B5388u) [[unlikely]] return; }
L_001B5388:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5394u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 334u, depth + 1u); else { c.pc = 0x001EF960u; return; } if (c.pc != 0x001B5394u) [[unlikely]] return; }
L_001B5394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B54D8; } }
    c.budget -= 1;
L_001B53A0:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B54D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001B53E8; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001B53E8:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B53FCu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001B53FCu) [[unlikely]] return; }
L_001B53FC:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 736u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 740u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    st16((c.r[16].w[0] + 856u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 878u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B54B0u) [[unlikely]] return; }
L_001B54B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54BCu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B54BCu) [[unlikely]] return; }
L_001B54BC:
    set32(c.r[2], 0u + 4096u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54D8u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001B54D8u) [[unlikely]] return; }
L_001B54D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B54F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5658; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B55F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B55B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B5578; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B5540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5688; } }
L_001B5540:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_001B5688; } }
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 9;
L_001B5578:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5688; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 11;
L_001B55B8:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5688; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 11;
L_001B55F8:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5688; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B5630; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B5630:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 73u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B5658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5648u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B5648u) [[unlikely]] return; }
L_001B5648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5654u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001B5654u) [[unlikely]] return; }
L_001B5654:
    c.budget -= 1;
L_001B5658:
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5674u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x001B5674u) [[unlikely]] return; }
L_001B5674:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B5688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5688u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B5688u) [[unlikely]] return; }
L_001B5688:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B56D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B56B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5780; } }
L_001B56B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B56B8u) [[unlikely]] return; }
L_001B56B8:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5788; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B56D8:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 736u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 740u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B5788; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B5788; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B5738:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 740u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 740u), c.f[1]);  if (t) { goto L_001B5770; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B5788; } }
    c.budget -= 1;
L_001B5770:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B5780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5788u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B5788u) [[unlikely]] return; }
L_001B5788:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B57B0; } }
    st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B57B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B57C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57C4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001B57C4u) [[unlikely]] return; }
L_001B57C4:
    c.budget -= 1;
L_001B57C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B58C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B57F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 878u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B58C8; } }
L_001B57F0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57FCu); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001B57FCu) [[unlikely]] return; }
L_001B57FC:
    c.f[1] = ld32((c.r[16].w[0] + 1224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B5840; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5830; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B58C8; } }
    c.budget -= 1;
L_001B5830:
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] - 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B58C8; } }
L_001B5840:
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B5890; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5878; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B58C8; } }
    c.budget -= 1;
L_001B5878:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B58C8; } }
    c.budget -= 1;
L_001B5890:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B58B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1234u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001B58C8; } }
    c.budget -= 1;
L_001B58B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1234u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 4;
L_001B58C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B58D4u) [[unlikely]] return; }
L_001B58D4:
    set32(c.r[6], ld32((c.r[16].w[0] + 1268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 1264u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B595Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001B595Cu) [[unlikely]] return; }
L_001B595C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B59D8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B59A0; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_001B59A8; } }
L_001B59A0:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001B59A8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B59C0u) [[unlikely]] return; }
L_001B59C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.f[0]);  if (t) { goto L_001B5A30; } }
L_001B59D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B59E0u) [[unlikely]] return; }
L_001B59E0:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001B5A30; } }
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], 0u - 129u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A30u); st32((c.r[16].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B5A30u) [[unlikely]] return; }
L_001B5A30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B5A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5A90; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B5A90u) [[unlikely]] return; }
L_001B5A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 60u, depth + 1u); else { c.pc = 0x001B0650u; return; } if (c.pc != 0x001B5A98u) [[unlikely]] return; }
L_001B5A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5B48; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B5AF0u) [[unlikely]] return; }
L_001B5AF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B5B10; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001B5B0Cu) [[unlikely]] return; }
L_001B5B0C:
    c.budget -= 1;
L_001B5B10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B5B48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5B48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B5B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B48u);  if (depth < kMaxDepth) unit_0072(c, 39u, depth + 1u); else { c.pc = 0x002C88A0u; return; } if (c.pc != 0x001B5B48u) [[unlikely]] return; }
L_001B5B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 347u, depth + 1u); else { c.pc = 0x001AF260u; return; } if (c.pc != 0x001B5B50u) [[unlikely]] return; }
L_001B5B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 8960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B5B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 769u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5BBCu); st8((c.r[4].w[0] + 771u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E9450u; return; } if (c.pc != 0x001B5BBCu) [[unlikely]] return; }
L_001B5BBC:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] + 18228u);
    set32(c.r[2], c.r[2].w[0] + 12224u);
    set32(c.r[3], c.r[3].w[0] + 16928u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 8520u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8524u), 0u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8680u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5C30u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001B5C30u) [[unlikely]] return; }
L_001B5C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x001B5C38u) [[unlikely]] return; }
L_001B5C38:
    st32((c.r[16].w[0] + 8664u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 3728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8668u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B5C80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B5C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B5C88; } }
    c.budget -= 1;
L_001B5C80:
    st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B5C88:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 109u)));
    st8((c.r[16].w[0] + 8681u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 110u)));
    st8((c.r[16].w[0] + 8682u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001B5CB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B5D00; } }
L_001B5CB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 25440u);
    set32(c.r[2], c.r[2].w[0] - 25436u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1208u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1212u), c.f[0]);  if (t) { goto L_001B5D40; } }
    c.budget -= 1;
L_001B5D00:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 25760u);
    set32(c.r[2], c.r[2].w[0] - 25756u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1208u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1212u), c.f[0]);
    c.budget -= 16;
L_001B5D40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D78u); st8((c.r[16].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x001B5D78u) [[unlikely]] return; }
L_001B5D78:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = 0ull | 62464ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DACu); st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x001B5DACu) [[unlikely]] return; }
L_001B5DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x001B5DB4u) [[unlikely]] return; }
L_001B5DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 270u, depth + 1u); else { c.pc = 0x001F3570u; return; } if (c.pc != 0x001B5DBCu) [[unlikely]] return; }
L_001B5DBC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B5DDCu) [[unlikely]] return; }
L_001B5DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 129u, depth + 1u); else { c.pc = 0x001B5E00u; return; } if (c.pc != 0x001B5DE4u) [[unlikely]] return; }
L_001B5DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8944u);
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B5EB4u) [[unlikely]] return; }
L_001B5EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x001B5EBCu) [[unlikely]] return; }
L_001B5EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x001B5EC4u) [[unlikely]] return; }
L_001B5EC4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B5EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EDCu);  if (depth < kMaxDepth) unit_002E(c, 98u, depth + 1u); else { c.pc = 0x001B9500u; return; } if (c.pc != 0x001B5EDCu) [[unlikely]] return; }
L_001B5EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 353u, depth + 1u); else { c.pc = 0x001BB880u; return; } if (c.pc != 0x001B5EE4u) [[unlikely]] return; }
L_001B5EE4:
    c.budget -= 1;
L_001B5EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x001B5EF0u) [[unlikely]] return; }
L_001B5EF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B5F00; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B5F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B5F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
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
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F48u); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 223u, depth + 1u); else { c.pc = 0x001B7130u; return; } if (c.pc != 0x001B5F48u) [[unlikely]] return; }
L_001B5F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 226u, depth + 1u); else { c.pc = 0x001B7250u; return; } if (c.pc != 0x001B5F50u) [[unlikely]] return; }
L_001B5F50:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 17376u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[3], 0u + 14u);
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 556u), static_cast<std::uint16_t>(0u));
    c.budget -= 18;
L_001B5F98:
    st16((c.r[5].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 526u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st16((c.r[5].w[0] + 528u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[5].w[0] + 530u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 532u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 534u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 538u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5F98u | kUnwind; return; } goto L_001B5F98; } }
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 558u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 255u);
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 559u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 564u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
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
    st8((c.r[16].w[0] + 8567u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8566u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1488u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1626u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1627u), static_cast<std::uint8_t>(0u));
    c.budget -= 80;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6108u); st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B6108u) [[unlikely]] return; }
L_001B6108:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001B6114u) [[unlikely]] return; }
L_001B6114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B611Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 124u, depth + 1u); else { c.pc = 0x001B1C90u; return; } if (c.pc != 0x001B611Cu) [[unlikely]] return; }
L_001B611C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6134u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B6134u) [[unlikely]] return; }
L_001B6134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B613Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 127u, depth + 1u); else { c.pc = 0x001B1D30u; return; } if (c.pc != 0x001B613Cu) [[unlikely]] return; }
L_001B613C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6148u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 303u, depth + 1u); else { c.pc = 0x00167D70u; return; } if (c.pc != 0x001B6148u) [[unlikely]] return; }
L_001B6148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6158u); st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001B6158u) [[unlikely]] return; }
L_001B6158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6160u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B6160u) [[unlikely]] return; }
L_001B6160:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6178; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6180; } }
L_001B6178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6180u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 16u, depth + 1u); else { c.pc = 0x00194740u; return; } if (c.pc != 0x001B6180u) [[unlikely]] return; }
L_001B6180:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B61A0u) [[unlikely]] return; }
L_001B61A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B61B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B61E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61D8u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B61D8u) [[unlikely]] return; }
L_001B61D8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B61E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 236u, depth + 1u); else { c.pc = 0x001B7430u; return; } if (c.pc != 0x001B61F0u) [[unlikely]] return; }
L_001B61F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6210; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6218; } }
    c.budget -= 1;
L_001B6210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6218u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x001B6218u) [[unlikely]] return; }
L_001B6218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 203u, depth + 1u); else { c.pc = 0x001B6BE0u; return; } if (c.pc != 0x001B6220u) [[unlikely]] return; }
L_001B6220:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6234u); st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001B6234u) [[unlikely]] return; }
L_001B6234:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6278; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6278; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6264u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B6264u) [[unlikely]] return; }
L_001B6264:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 1872u);  if (t) { goto L_001B6278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6278u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001B6278u) [[unlikely]] return; }
L_001B6278:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001B62A8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62A0u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B62A0u) [[unlikely]] return; }
L_001B62A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B62A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B62C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x001B62D4u) [[unlikely]] return; }
L_001B62D4:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6318u); st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001B6318u) [[unlikely]] return; }
L_001B6318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001B6320u) [[unlikely]] return; }
L_001B6320:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001B6350; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6348u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B6348u) [[unlikely]] return; }
L_001B6348:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B6350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B6390; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6388u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B6388u) [[unlikely]] return; }
L_001B6388:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B6390:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B63A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B63B0; } }
L_001B63A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 206u, depth + 1u); else { c.pc = 0x001A6CF0u; return; } if (c.pc != 0x001B63B0u) [[unlikely]] return; }
L_001B63B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B63C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63C4u);  if (depth < kMaxDepth) unit_002D(c, 267u, depth + 1u); else { c.pc = 0x001B7C40u; return; } if (c.pc != 0x001B63C4u) [[unlikely]] return; }
L_001B63C4:
    c.budget -= 1;
L_001B63C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x001B63D0u) [[unlikely]] return; }
L_001B63D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 203u, depth + 1u); else { c.pc = 0x001B6BE0u; return; } if (c.pc != 0x001B63D8u) [[unlikely]] return; }
L_001B63D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001B6408; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6400u); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001B6400u) [[unlikely]] return; }
L_001B6400:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B6408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6420:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 275u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B6588; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001B6460; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B6588; } }
L_001B6460:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[16].w[0] + 2032u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2036u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2040u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2000u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2004u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2008u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 260u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001B64A8u) [[unlikely]] return; }
L_001B64A8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64B4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001B64B4u) [[unlikely]] return; }
L_001B64B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64DCu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001B64DCu) [[unlikely]] return; }
L_001B64DC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001B64E8u) [[unlikely]] return; }
L_001B64E8:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B6588; } }
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 256u));
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    fpu_div(c, 4u, c.f[1], c.f[5]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; fpu_div(c, 2u, c.f[2], c.f[5]);  if (t) { goto L_001B6588; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3D990000u);  if (t) { goto L_001B6588; } }
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B6588; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B6588; } }
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001B6588:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B65A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 275u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6820; } }
L_001B65A8:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B67F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6700; } }
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65D8u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000C(c, 333u, depth + 1u); else { c.pc = 0x00133EE0u; return; } if (c.pc != 0x001B65D8u) [[unlikely]] return; }
L_001B65D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.f[1] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B6610; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 2;
L_001B6610:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6640u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B6640u) [[unlikely]] return; }
L_001B6640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 6;
L_001B6658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6660u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001B6660u) [[unlikely]] return; }
L_001B6660:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6670u); set32(c.r[4], c.r[2].w[0] - 4096u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001B6670u) [[unlikely]] return; }
L_001B6670:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001B6678:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6684u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001B6684u) [[unlikely]] return; }
L_001B6684:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6694u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001B6694u) [[unlikely]] return; }
L_001B6694:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66A4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001B66A4u) [[unlikely]] return; }
L_001B66A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_001B66C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66B4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001B66B4u) [[unlikely]] return; }
L_001B66B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6678u | kUnwind; return; } goto L_001B6678; } }
    c.budget -= 1;
L_001B66C8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] + 4096u);  if (t) { goto L_001B66E8; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6658u | kUnwind; return; } goto L_001B6658; } }
L_001B66E8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] << 48;  if (t) { goto L_001B6700; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_001B6700:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B67F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B67F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B67F8; } }
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
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001B6788; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B67F8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B67F8; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B67F8; } }
    c.budget -= 1;
L_001B6788:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[2], c.r[2].w[0] - 19195u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001B67E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001B67F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67C8u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001B67C8u) [[unlikely]] return; }
L_001B67C8:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B67F8; } }
L_001B67E8:
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B67F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B6818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B680Cu);  if (depth < kMaxDepth) unit_002D(c, 267u, depth + 1u); else { c.pc = 0x001B7C40u; return; } if (c.pc != 0x001B680Cu) [[unlikely]] return; }
L_001B680C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x001B6814u) [[unlikely]] return; }
L_001B6814:
    c.budget -= 1;
L_001B6818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 203u, depth + 1u); else { c.pc = 0x001B6BE0u; return; } if (c.pc != 0x001B6820u) [[unlikely]] return; }
L_001B6820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001B6840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B68B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001B68B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B68B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B68B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B68B8; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B68ACu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002D(c, 196u, depth + 1u); else { c.pc = 0x001B6980u; return; } if (c.pc != 0x001B68ACu) [[unlikely]] return; }
L_001B68AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6968; } }
    c.budget -= 1;
L_001B68B8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6948u); st32((c.r[16].w[0] + 8316u), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 164u, depth + 1u); else { c.pc = 0x001B6360u; return; } if (c.pc != 0x001B6948u) [[unlikely]] return; }
L_001B6948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6950u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x001B6950u) [[unlikely]] return; }
L_001B6950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x001B6958u) [[unlikely]] return; }
L_001B6958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x001B6960u) [[unlikely]] return; }
L_001B6960:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B6968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B69E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_001B69E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B69E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B69E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B69E8; } }
    c.budget -= 1;
L_001B69E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6BC8; } }
L_001B69E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6BA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6A78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6A78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6A38; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B6A50; } }
L_001B6A38:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001B6A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001B6A58u) [[unlikely]] return; }
L_001B6A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x001B6A60u) [[unlikely]] return; }
L_001B6A60:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B6BC8; } }
    c.budget -= 1;
L_001B6A78:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 41u)));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001B6AB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6AE0; } }
    c.budget -= 1;
L_001B6AB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B6AD0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B6AF8; } }
L_001B6AD0:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (t) { goto L_001B6AF8; } }
    c.budget -= 1;
L_001B6AE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B6AF8; } }
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001B6AF8:
    c.r[1].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B6BC8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);  if (t) { goto L_001B6BC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6B50; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001B6B38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B6B38; } }
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001B6B38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B44u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001B6B44u) [[unlikely]] return; }
L_001B6B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6BC8; } }
    c.budget -= 1;
L_001B6B50:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6BC8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001B6BC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6BC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6BC8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[5].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BA0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x001B6BA0u) [[unlikely]] return; }
L_001B6BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6BC8; } }
L_001B6BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001B6BB0u) [[unlikely]] return; }
L_001B6BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x001B6BB8u) [[unlikely]] return; }
L_001B6BB8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B6BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 148u, depth + 1u); else { c.pc = 0x001E5E00u; return; } if (c.pc != 0x001B6BF4u) [[unlikely]] return; }
L_001B6BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 212u, depth + 1u); else { c.pc = 0x001B6CD0u; return; } if (c.pc != 0x001B6BFCu) [[unlikely]] return; }
L_001B6BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 200u, depth + 1u); else { c.pc = 0x001AE010u; return; } if (c.pc != 0x001B6C04u) [[unlikely]] return; }
L_001B6C04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6C24u) [[unlikely]] return; }
L_001B6C24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6C50; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6C4Cu) [[unlikely]] return; }
L_001B6C4C:
    c.budget -= 1;
L_001B6C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 820u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B6C90; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6C8Cu) [[unlikely]] return; }
L_001B6C8C:
    c.budget -= 1;
L_001B6C90:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6CB0u) [[unlikely]] return; }
L_001B6CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 268u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x001B6CB8u) [[unlikely]] return; }
L_001B6CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 123u, depth + 1u); else { c.pc = 0x001E5840u; return; } if (c.pc != 0x001B6CE4u) [[unlikely]] return; }
L_001B6CE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6D58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6D18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B6D18; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6D14u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B6D14u) [[unlikely]] return; }
L_001B6D14:
    c.budget -= 1;
L_001B6D18:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6D70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B6D70; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6D4Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001B6D4Cu) [[unlikely]] return; }
L_001B6D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6D70; } }
    c.budget -= 1;
L_001B6D58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B6D70; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6D70u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001B6D70u) [[unlikely]] return; }
L_001B6D70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 240ull;  if (t) { goto L_001B6D90; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001B6D90:
    c.r[2].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_001B6DA0; } }
    set32(c.r[3], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_001B6DA0:
    st8((c.r[16].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6DB8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B6DB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6DD0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B6DD0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6E00; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6E00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B6E00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 791u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6E18; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B6E18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 522u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6E30; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 522u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B6E38; } }
L_001B6E30:
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001B6E38:
    c.f[1] = ld32((c.r[16].w[0] + 1072u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B6E60; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1072u), c.f[0]);
    c.budget -= 4;
L_001B6E60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6E90; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6E90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B6E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 260u, depth + 1u); else { c.pc = 0x003C6160u; return; } if (c.pc != 0x001B6E98u) [[unlikely]] return; }
L_001B6E98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7040; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B7040; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6EC8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003B(c, 184u, depth + 1u); else { c.pc = 0x001EDF30u; return; } if (c.pc != 0x001B6EC8u) [[unlikely]] return; }
L_001B6EC8:
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 811u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7040; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7040; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6F10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7040; } }
L_001B6F10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B6F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B6F38; } }
L_001B6F28:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_001B6F38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B6FA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B6FA0; } }
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B6F90; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_001B6F90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F9Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001B6F9Cu) [[unlikely]] return; }
L_001B6F9C:
    c.budget -= 1;
L_001B6FA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6FC8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_001B6FC8; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B6FC8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001B6FE8u) [[unlikely]] return; }
L_001B6FE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B7040; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B7040; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B7028; } }
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001B7028:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7040u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x001B7040u) [[unlikely]] return; }
L_001B7040:
    c.f[2] = ld32((c.r[16].w[0] + 1088u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7080; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1088u), c.f[0]);  if (t) { goto L_001B7078; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.f[1]);  if (t) { goto L_001B7080; } }
L_001B7078:
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B7080:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B70F8; } }
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B70C8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_001B70C8; } }
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001B70C8:
    c.f[2] = ld32((c.r[16].w[0] + 1220u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B70F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_001B70F8; } }
    st32((c.r[16].w[0] + 1220u), c.f[1]);
    c.budget -= 1;
L_001B70F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 963u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7110; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B7110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B711Cu); st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 52u, depth + 1u); else { c.pc = 0x003B0670u; return; } if (c.pc != 0x001B711Cu) [[unlikely]] return; }
L_001B711C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7130:
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
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7184u); st32((c.r[4].w[0] + 8536u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 145u, depth + 1u); else { c.pc = 0x001F14B0u; return; } if (c.pc != 0x001B7184u) [[unlikely]] return; }
L_001B7184:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B719Cu); st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 252u, depth + 1u); else { c.pc = 0x003C6020u; return; } if (c.pc != 0x001B719Cu) [[unlikely]] return; }
L_001B719C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8928u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001B71C0; } }
    st8((c.r[16].w[0] + 1585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1569u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B71D8; } }
    c.budget -= 1;
L_001B71C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001B71D8; } }
    st8((c.r[16].w[0] + 1585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1569u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001B71D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[6].w[0] - 3552u);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
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
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B726Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001B726Cu) [[unlikely]] return; }
L_001B726C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7290u);  if (depth < kMaxDepth) unit_0071(c, 20u, depth + 1u); else { c.pc = 0x002C4480u; return; } if (c.pc != 0x001B7290u) [[unlikely]] return; }
L_001B7290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7330; } }
L_001B7298:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7330; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B72D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B72D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B7330; } }
    c.budget -= 1;
L_001B72D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7308; } }
    st8((c.r[16].w[0] + 810u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B72E8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x001B72E8u) [[unlikely]] return; }
L_001B72E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B72F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 211u, depth + 1u); else { c.pc = 0x001CAB20u; return; } if (c.pc != 0x001B72F4u) [[unlikely]] return; }
L_001B72F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7300u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x001B7300u) [[unlikely]] return; }
L_001B7300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7330; } }
L_001B7308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7310u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x001B7310u) [[unlikely]] return; }
L_001B7310:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B732Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x001B732Cu) [[unlikely]] return; }
L_001B732C:
    c.budget -= 1;
L_001B7330:
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 871u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 868u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B73B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x438C0000u);  if (t) { goto L_001B7390; } }
    set32(c.r[3], 0u + 70u);
    c.f[0] = c.r[4].w[0];
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B73B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_001B73B0; } }
    c.budget -= 1;
L_001B7390:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73A0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B73A0u) [[unlikely]] return; }
L_001B73A0:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    c.budget -= 4;
L_001B73B0:
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1016u), 0u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B7418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B7408; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B73F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7418; } }
    c.budget -= 1;
L_001B73F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001B7418; } }
    c.budget -= 1;
L_001B7408:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7414u); set32(c.r[5], c.r[16].w[0] + 1200u);  if (depth < kMaxDepth) unit_003B(c, 184u, depth + 1u); else { c.pc = 0x001EDF30u; return; } if (c.pc != 0x001B7414u) [[unlikely]] return; }
L_001B7414:
    st32((c.r[16].w[0] + 1204u), 0u);
    c.budget -= 1;
L_001B7418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B7458; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001B7468; } }
L_001B7458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 2u, depth + 1u); else { c.pc = 0x001CC0B0u; return; } if (c.pc != 0x001B7460u) [[unlikely]] return; }
L_001B7460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7810; } }
L_001B7468:
    st32((c.r[16].w[0] + 700u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7480u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001B7480u) [[unlikely]] return; }
L_001B7480:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001B77E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B77E0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_001B77E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_001B77E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_001B77E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001B77E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_001B76A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001B76A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B74E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B74E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001B7660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B7640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_001B75F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_001B75B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B7518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7524u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B7524u) [[unlikely]] return; }
L_001B7524:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { goto L_001B7560; } }
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7810; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B7560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7810; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 700u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 30u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[5].d[0] = c.r[5].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[5].d[0] = c.r[5].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B75B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B75F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B75F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B75FCu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B75FCu) [[unlikely]] return; }
L_001B75FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7810; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 796u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B7640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7810; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
L_001B7660:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7698; } }
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B767Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001B767Cu) [[unlikely]] return; }
L_001B767C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
L_001B7698:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B76A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B77A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B7740; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B7708; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B76E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B76E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B76E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 249u, depth + 1u); else { c.pc = 0x001B78B0u; return; } if (c.pc != 0x001B76E8u) [[unlikely]] return; }
L_001B76E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B7708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 249u, depth + 1u); else { c.pc = 0x001B78B0u; return; } if (c.pc != 0x001B7710u) [[unlikely]] return; }
L_001B7710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B7730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
L_001B7730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
L_001B7740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 249u, depth + 1u); else { c.pc = 0x001B78B0u; return; } if (c.pc != 0x001B7748u) [[unlikely]] return; }
L_001B7748:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | 8192ull;  if (t) { goto L_001B7768; } }
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 1;
L_001B7768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 248u, depth + 1u); else { c.pc = 0x001B7820u; return; } if (c.pc != 0x001B7770u) [[unlikely]] return; }
L_001B7770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7810; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
L_001B77A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B77D0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B77C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001B77C8u) [[unlikely]] return; }
L_001B77C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7810; } }
L_001B77D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B7810; } }
    c.budget -= 1;
L_001B77E0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B77F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001B77F4u) [[unlikely]] return; }
L_001B77F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001B7810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7820:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7848; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B7848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B78A8; } }
    c.budget -= 1;
L_001B7848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FE0000u);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B20000u);  if (t) { goto L_001B78A0; } }
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B78A0; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B78A0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B78A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B78A8; } }
L_001B78A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001B78A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B78B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B78E4u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B78E4u) [[unlikely]] return; }
L_001B78E4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001B7978; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7904u); set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 252u, depth + 1u); else { c.pc = 0x001B7A50u; return; } if (c.pc != 0x001B7904u) [[unlikely]] return; }
L_001B7904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7918; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_001B7918:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_001B7948; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7948; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B7A38; } }
    c.budget -= 1;
L_001B7948:
    c.r[1].d[0] = 0ull | 61440ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_001B7A38; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B7A38; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B7A38; } }
    c.budget -= 1;
L_001B7978:
    set32(c.r[3], ld32((c.r[17].w[0] + 1252u)));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_001B79A0; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B79B0; } }
    c.budget -= 1;
L_001B79A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B79D8; } }
L_001B79B0:
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_001B79D8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B79D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001B79D8:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_001B7A00; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7A00; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B7A28; } }
    c.budget -= 1;
L_001B7A00:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001B7A28; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7A28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_001B7A28:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001B7A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7A50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8896u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 64u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A90u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001B7A90u) [[unlikely]] return; }
L_001B7A90:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7AA0u); set32(c.r[5], c.r[19].w[0] + 2016u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001B7AA0u) [[unlikely]] return; }
L_001B7AA0:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7AB0u); set32(c.r[5], c.r[19].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001B7AB0u) [[unlikely]] return; }
L_001B7AB0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7AC0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001B7AC0u) [[unlikely]] return; }
L_001B7AC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7AD0u); set32(c.r[17], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B7AD0u) [[unlikely]] return; }
L_001B7AD0:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7AEC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7AEC:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7B0C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7B0C:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B20u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001B7B20u) [[unlikely]] return; }
L_001B7B20:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B2Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001B7B2Cu) [[unlikely]] return; }
L_001B7B2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B38u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B7B38u) [[unlikely]] return; }
L_001B7B38:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7B54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7B54:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7B70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7B70:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B84u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001B7B84u) [[unlikely]] return; }
L_001B7B84:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B90u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001B7B90u) [[unlikely]] return; }
L_001B7B90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B9Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B7B9Cu) [[unlikely]] return; }
L_001B7B9C:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7BB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7BB8:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7BD4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7BD4:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BE8u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001B7BE8u) [[unlikely]] return; }
L_001B7BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BF0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001B7BF0u) [[unlikely]] return; }
L_001B7BF0:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C10u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001B7C10u) [[unlikely]] return; }
L_001B7C10:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B7C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 65u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B7C70; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B7C80; } }
    c.budget -= 1;
L_001B7C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 130u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001B7C78u) [[unlikely]] return; }
L_001B7C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7C80:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B7C90; } }
    st8((c.r[17].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001B7C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001B7CA8; } }
    st32((c.r[17].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 2;
L_001B7CA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7CB4u); st32((c.r[17].w[0] + 700u), 0u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001B7CB4u) [[unlikely]] return; }
L_001B7CB4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 874u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { [[clang::musttail]] return unit_002E(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 10u);  if (t) { goto L_001B7FD8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001B7FA0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001B7F28; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B7EF8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001B7D48; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B7D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.budget -= 1;
L_001B7D00:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B7D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001B7D20; } }
L_001B7D18:
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B7D20:
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x001B7D3Cu) [[unlikely]] return; }
L_001B7D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.budget -= 1;
L_001B7D48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001B7D60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 3;
L_001B7D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 7u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x001B7D68u) [[unlikely]] return; }
L_001B7D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7D80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7D80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DA0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B7DA0u) [[unlikely]] return; }
L_001B7DA0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001B7E38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DC0u); set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 252u, depth + 1u); else { c.pc = 0x001B7A50u; return; } if (c.pc != 0x001B7DC0u) [[unlikely]] return; }
L_001B7DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7DD8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001B7DD8:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 61440ull;  if (t) { goto L_001B7DF8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7E08; } }
    c.budget -= 1;
L_001B7DF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7E08:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7E28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7E28:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7E38:
    set32(c.r[3], ld32((c.r[17].w[0] + 1252u)));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_001B7E60; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7E70; } }
    c.budget -= 1;
L_001B7E60:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B7E98; } }
L_001B7E70:
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_001B7E98; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7E98; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001B7E98:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_001B7EC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7EC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B7EE8; } }
    c.budget -= 1;
L_001B7EC0:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001B7EE8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7EE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_001B7EE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7EF8:
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_001B7F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7F18:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.budget -= 1;
L_001B7F28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_001B7F40; } }
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B7F40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7F90; } }
    st8((c.r[17].w[0] + 797u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 796u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[17].w[0] + 796u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 803u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7F70u); st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001B7F70u) [[unlikely]] return; }
L_001B7F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7F78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x001B7F78u) [[unlikely]] return; }
L_001B7F78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 798u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7F90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.budget -= 1;
L_001B7FA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
L_001B7FD8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_002E(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 1u, depth); } }
    set32(c.r[3], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_002E(c, 6u, depth); } }
    [[clang::musttail]] return unit_002E(c, 1u, depth);
}

}
