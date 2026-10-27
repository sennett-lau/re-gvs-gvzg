#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 2, 3, 4, 5, 6, 7, 0, 8, 0, 9, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17,
    0, 0, 0, 18, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0,
    141, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0,
    0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219,
    0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0,
    0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0004;
    case 3u: goto L_002C0008;
    case 4u: goto L_002C000C;
    case 5u: goto L_002C0010;
    case 6u: goto L_002C0014;
    case 7u: goto L_002C0018;
    case 8u: goto L_002C0020;
    case 9u: goto L_002C0028;
    case 10u: goto L_002C002C;
    case 11u: goto L_002C003C;
    case 12u: goto L_002C0044;
    case 13u: goto L_002C004C;
    case 14u: goto L_002C0054;
    case 15u: goto L_002C0058;
    case 16u: goto L_002C0070;
    case 17u: goto L_002C007C;
    case 18u: goto L_002C008C;
    case 19u: goto L_002C0090;
    case 20u: goto L_002C0098;
    case 21u: goto L_002C00A8;
    case 22u: goto L_002C00B8;
    case 23u: goto L_002C00D0;
    case 24u: goto L_002C00FC;
    case 25u: goto L_002C0100;
    case 26u: goto L_002C0108;
    case 27u: goto L_002C0120;
    case 28u: goto L_002C0140;
    case 29u: goto L_002C01AC;
    case 30u: goto L_002C01B4;
    case 31u: goto L_002C01BC;
    case 32u: goto L_002C01DC;
    case 33u: goto L_002C01F0;
    case 34u: goto L_002C0274;
    case 35u: goto L_002C0294;
    case 36u: goto L_002C02D4;
    case 37u: goto L_002C02F4;
    case 38u: goto L_002C0300;
    case 39u: goto L_002C030C;
    case 40u: goto L_002C0314;
    case 41u: goto L_002C0320;
    case 42u: goto L_002C035C;
    case 43u: goto L_002C03AC;
    case 44u: goto L_002C03C0;
    case 45u: goto L_002C0414;
    case 46u: goto L_002C0420;
    case 47u: goto L_002C0430;
    case 48u: goto L_002C0460;
    case 49u: goto L_002C0490;
    case 50u: goto L_002C04A8;
    case 51u: goto L_002C04F0;
    case 52u: goto L_002C051C;
    case 53u: goto L_002C0524;
    case 54u: goto L_002C052C;
    case 55u: goto L_002C0534;
    case 56u: goto L_002C053C;
    case 57u: goto L_002C0544;
    case 58u: goto L_002C0550;
    case 59u: goto L_002C0560;
    case 60u: goto L_002C0578;
    case 61u: goto L_002C05BC;
    case 62u: goto L_002C05C4;
    case 63u: goto L_002C0674;
    case 64u: goto L_002C06D8;
    case 65u: goto L_002C06F4;
    case 66u: goto L_002C06FC;
    case 67u: goto L_002C0710;
    case 68u: goto L_002C0720;
    case 69u: goto L_002C0780;
    case 70u: goto L_002C07B0;
    case 71u: goto L_002C07E0;
    case 72u: goto L_002C0894;
    case 73u: goto L_002C09CC;
    case 74u: goto L_002C09EC;
    case 75u: goto L_002C0A04;
    case 76u: goto L_002C0A34;
    case 77u: goto L_002C0A40;
    case 78u: goto L_002C0A74;
    case 79u: goto L_002C0A80;
    case 80u: goto L_002C0A8C;
    case 81u: goto L_002C0AA0;
    case 82u: goto L_002C0AB4;
    case 83u: goto L_002C0B00;
    case 84u: goto L_002C0B10;
    case 85u: goto L_002C0B50;
    case 86u: goto L_002C0B74;
    case 87u: goto L_002C0BB0;
    case 88u: goto L_002C0BDC;
    case 89u: goto L_002C0BF0;
    case 90u: goto L_002C0C28;
    case 91u: goto L_002C0C44;
    case 92u: goto L_002C0CF0;
    case 93u: goto L_002C0D04;
    case 94u: goto L_002C0D58;
    case 95u: goto L_002C0D64;
    case 96u: goto L_002C0D70;
    case 97u: goto L_002C0D88;
    case 98u: goto L_002C0DA0;
    case 99u: goto L_002C0DBC;
    case 100u: goto L_002C0DD0;
    case 101u: goto L_002C0DDC;
    case 102u: goto L_002C0DE4;
    case 103u: goto L_002C0DEC;
    case 104u: goto L_002C0DF8;
    case 105u: goto L_002C0E00;
    case 106u: goto L_002C0E14;
    case 107u: goto L_002C0E20;
    case 108u: goto L_002C0E8C;
    case 109u: goto L_002C0E9C;
    case 110u: goto L_002C0EA4;
    case 111u: goto L_002C0F10;
    case 112u: goto L_002C0F78;
    case 113u: goto L_002C0FF0;
    case 114u: goto L_002C1020;
    case 115u: goto L_002C10C4;
    case 116u: goto L_002C1100;
    case 117u: goto L_002C1160;
    case 118u: goto L_002C120C;
    case 119u: goto L_002C1240;
    case 120u: goto L_002C1274;
    case 121u: goto L_002C1284;
    case 122u: goto L_002C1290;
    case 123u: goto L_002C129C;
    case 124u: goto L_002C12B0;
    case 125u: goto L_002C12C4;
    case 126u: goto L_002C12FC;
    case 127u: goto L_002C1308;
    case 128u: goto L_002C1320;
    case 129u: goto L_002C1350;
    case 130u: goto L_002C1380;
    case 131u: goto L_002C13B0;
    case 132u: goto L_002C1410;
    case 133u: goto L_002C14B4;
    case 134u: goto L_002C14E8;
    case 135u: goto L_002C14F8;
    case 136u: goto L_002C1544;
    case 137u: goto L_002C1550;
    case 138u: goto L_002C155C;
    case 139u: goto L_002C1568;
    case 140u: goto L_002C1574;
    case 141u: goto L_002C1580;
    case 142u: goto L_002C1584;
    case 143u: goto L_002C1598;
    case 144u: goto L_002C15C8;
    case 145u: goto L_002C15D0;
    case 146u: goto L_002C1618;
    case 147u: goto L_002C1634;
    case 148u: goto L_002C1640;
    case 149u: goto L_002C1650;
    case 150u: goto L_002C1660;
    case 151u: goto L_002C166C;
    case 152u: goto L_002C1674;
    case 153u: goto L_002C1684;
    case 154u: goto L_002C1694;
    case 155u: goto L_002C16A0;
    case 156u: goto L_002C16C0;
    case 157u: goto L_002C16D0;
    case 158u: goto L_002C1710;
    case 159u: goto L_002C1740;
    case 160u: goto L_002C17F0;
    case 161u: goto L_002C1880;
    case 162u: goto L_002C18C8;
    case 163u: goto L_002C18E0;
    case 164u: goto L_002C1914;
    case 165u: goto L_002C1980;
    case 166u: goto L_002C198C;
    case 167u: goto L_002C1998;
    case 168u: goto L_002C19B0;
    case 169u: goto L_002C1A00;
    case 170u: goto L_002C1A50;
    case 171u: goto L_002C1ACC;
    case 172u: goto L_002C1AD8;
    case 173u: goto L_002C1AE4;
    case 174u: goto L_002C1AF0;
    case 175u: goto L_002C1B20;
    case 176u: goto L_002C1B40;
    case 177u: goto L_002C1B7C;
    case 178u: goto L_002C1BB0;
    case 179u: goto L_002C1BBC;
    case 180u: goto L_002C1BE0;
    case 181u: goto L_002C1BF0;
    case 182u: goto L_002C1C00;
    case 183u: goto L_002C1C40;
    case 184u: goto L_002C1C68;
    case 185u: goto L_002C1C70;
    case 186u: goto L_002C1C78;
    case 187u: goto L_002C1C88;
    case 188u: goto L_002C1CD0;
    case 189u: goto L_002C1D60;
    case 190u: goto L_002C1D68;
    case 191u: goto L_002C2000;
    case 192u: goto L_002C20E4;
    case 193u: goto L_002C211C;
    case 194u: goto L_002C2124;
    case 195u: goto L_002C2180;
    case 196u: goto L_002C2210;
    case 197u: goto L_002C2278;
    case 198u: goto L_002C2294;
    case 199u: goto L_002C23B0;
    case 200u: goto L_002C2458;
    case 201u: goto L_002C2484;
    case 202u: goto L_002C24E4;
    case 203u: goto L_002C2520;
    case 204u: goto L_002C254C;
    case 205u: goto L_002C2598;
    case 206u: goto L_002C25B0;
    case 207u: goto L_002C25D4;
    case 208u: goto L_002C2620;
    case 209u: goto L_002C27A0;
    case 210u: goto L_002C27B8;
    case 211u: goto L_002C27FC;
    case 212u: goto L_002C2848;
    case 213u: goto L_002C2850;
    case 214u: goto L_002C2858;
    case 215u: goto L_002C2860;
    case 216u: goto L_002C2868;
    case 217u: goto L_002C28A0;
    case 218u: goto L_002C28F4;
    case 219u: goto L_002C28FC;
    case 220u: goto L_002C2904;
    case 221u: goto L_002C290C;
    case 222u: goto L_002C2914;
    case 223u: goto L_002C291C;
    case 224u: goto L_002C2924;
    case 225u: goto L_002C292C;
    case 226u: goto L_002C2934;
    case 227u: goto L_002C2950;
    case 228u: goto L_002C2960;
    case 229u: goto L_002C29A0;
    case 230u: goto L_002C29E8;
    case 231u: goto L_002C2A84;
    case 232u: goto L_002C2AD8;
    case 233u: goto L_002C2AF0;
    case 234u: goto L_002C2B00;
    case 235u: goto L_002C2D30;
    case 236u: goto L_002C2DF0;
    case 237u: goto L_002C2E24;
    case 238u: goto L_002C2E30;
    case 239u: goto L_002C2E40;
    case 240u: goto L_002C2E50;
    case 241u: goto L_002C2E80;
    case 242u: goto L_002C2E94;
    case 243u: goto L_002C2EB0;
    case 244u: goto L_002C2EE0;
    case 245u: goto L_002C2EE8;
    case 246u: goto L_002C2F00;
    case 247u: goto L_002C2F10;
    case 248u: goto L_002C2F50;
    case 249u: goto L_002C2F60;
    case 250u: goto L_002C2FA8;
    case 251u: goto L_002C3050;
    case 252u: goto L_002C3060;
    case 253u: goto L_002C3070;
    case 254u: goto L_002C3090;
    case 255u: goto L_002C30A0;
    case 256u: goto L_002C30B0;
    case 257u: goto L_002C30C0;
    case 258u: goto L_002C30D0;
    case 259u: goto L_002C30E0;
    case 260u: goto L_002C30F0;
    case 261u: goto L_002C3110;
    case 262u: goto L_002C3150;
    case 263u: goto L_002C31B0;
    case 264u: goto L_002C3240;
    case 265u: goto L_002C33C4;
    case 266u: goto L_002C33D0;
    case 267u: goto L_002C33E8;
    case 268u: goto L_002C33F4;
    case 269u: goto L_002C3408;
    case 270u: goto L_002C3418;
    case 271u: goto L_002C34C0;
    case 272u: goto L_002C3500;
    case 273u: goto L_002C3540;
    case 274u: goto L_002C3580;
    case 275u: goto L_002C35C0;
    case 276u: goto L_002C35F4;
    case 277u: goto L_002C3674;
    case 278u: goto L_002C36A0;
    case 279u: goto L_002C3700;
    case 280u: goto L_002C372C;
    case 281u: goto L_002C3750;
    case 282u: goto L_002C3780;
    case 283u: goto L_002C37A0;
    case 284u: goto L_002C3840;
    case 285u: goto L_002C38A4;
    case 286u: goto L_002C38D0;
    case 287u: goto L_002C3900;
    case 288u: goto L_002C3968;
    case 289u: goto L_002C3978;
    case 290u: goto L_002C3988;
    case 291u: goto L_002C39F0;
    case 292u: goto L_002C3A90;
    case 293u: goto L_002C3AB8;
    case 294u: goto L_002C3B38;
    case 295u: goto L_002C3B8C;
    case 296u: goto L_002C3CA4;
    case 297u: goto L_002C3E4C;
    case 298u: goto L_002C3ED0;
    case 299u: goto L_002C3EE0;
    case 300u: goto L_002C3EF8;
    case 301u: goto L_002C3F2C;
    case 302u: goto L_002C3F58;
    case 303u: goto L_002C3FE0;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C0018; } }
    goto L_002C0008;
L_002C0004:
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C0008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0018; } }
    goto L_002C0010;
L_002C000C:
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C0010:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C0014:
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C0018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0020u);  if (depth < kMaxDepth) unit_0072(c, 25u, depth + 1u); else { c.pc = 0x002C8420u; return; } if (c.pc != 0x002C0020u) [[unlikely]] return; }
L_002C0020:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4700000u);
    c.budget -= 2;
L_002C0028:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.budget -= 1;
L_002C002C:
    st32((c.r[2].w[0] + 14172u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C003Cu); st32((c.r[2].w[0] + 14176u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0071(c, 165u, depth + 1u); else { c.pc = 0x002C6460u; return; } if (c.pc != 0x002C003Cu) [[unlikely]] return; }
L_002C003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0044u);  if (depth < kMaxDepth) unit_0071(c, 162u, depth + 1u); else { c.pc = 0x002C63B0u; return; } if (c.pc != 0x002C0044u) [[unlikely]] return; }
L_002C0044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C004Cu);  if (depth < kMaxDepth) unit_0071(c, 209u, depth + 1u); else { c.pc = 0x002C73C0u; return; } if (c.pc != 0x002C004Cu) [[unlikely]] return; }
L_002C004C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0054u);  if (depth < kMaxDepth) unit_0071(c, 222u, depth + 1u); else { c.pc = 0x002C79A0u; return; } if (c.pc != 0x002C0054u) [[unlikely]] return; }
L_002C0054:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 1;
L_002C0058:
    st8((c.r[3].w[0] + 462u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C00B8; } }
L_002C0070:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C007Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002C007Cu) [[unlikely]] return; }
L_002C007C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C008C:
    c.budget -= 1;
L_002C0090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0098u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C0098u) [[unlikely]] return; }
L_002C0098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C00B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_002C00A8:
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002C00B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C00D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23936u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C00FCu) [[unlikely]] return; }
L_002C00FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 1;
L_002C0100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0108u); set32(c.r[4], c.r[4].w[0] - 29520u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C0108u) [[unlikely]] return; }
L_002C0108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0120:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C0140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 24u);  if (t) { goto L_002C01D0; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 25200u);
    set32(c.r[6], c.r[6].w[0] - 24960u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01ACu); set32(c.r[4], c.r[3].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002C01ACu) [[unlikely]] return; }
L_002C01AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_002C01B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01BCu); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 56u, depth + 1u); else { c.pc = 0x003B0770u; return; } if (c.pc != 0x002C01BCu) [[unlikely]] return; }
L_002C01BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002C01D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01DCu); set32(c.r[4], c.r[4].w[0] - 19968u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C01DCu) [[unlikely]] return; }
L_002C01DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C01F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = ld16((c.r[1].w[0] + 9612u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 55u)));
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C0228; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002C0228:
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0248; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002C0248:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 55u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C0278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0274u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C0274u) [[unlikely]] return; }
L_002C0274:
    c.budget -= 1;
L_002C0278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C02B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0294u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C0294u) [[unlikely]] return; }
L_002C0294:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C02E8; } }
    c.budget -= 1;
L_002C02B0:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_002C02C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C02E8; } }
    c.budget -= 1;
L_002C02C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02D4u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C02D4u) [[unlikely]] return; }
L_002C02D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002C02E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02F4u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002C02F4u) [[unlikely]] return; }
L_002C02F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0300u); set32(c.r[4], c.r[4].w[0] - 20592u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C0300u) [[unlikely]] return; }
L_002C0300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C030Cu); set32(c.r[4], c.r[4].w[0] - 19968u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C030Cu) [[unlikely]] return; }
L_002C030C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0314:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x002C0318u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_002C0320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002C03B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0408; } }
    c.budget -= 1;
L_002C0350:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C035Cu); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002C035Cu) [[unlikely]] return; }
L_002C035C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0408; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 55u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0390; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C0408; } }
    c.budget -= 1;
L_002C0390:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03ACu); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002C03ACu) [[unlikely]] return; }
L_002C03AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0408; } }
    c.budget -= 1;
L_002C03B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03C0u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C03C0u) [[unlikely]] return; }
L_002C03C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0408; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 55u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C03F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C03F8; } }
    c.budget -= 1;
L_002C03F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C03F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002C0408:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0414u); set32(c.r[4], c.r[4].w[0] - 20592u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C0414u) [[unlikely]] return; }
L_002C0414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0420u); set32(c.r[4], c.r[4].w[0] - 19968u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C0420u) [[unlikely]] return; }
L_002C0420:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0430:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23920u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 78u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C0488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C04E0; } }
    c.budget -= 1;
L_002C0488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0490u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002C0490u) [[unlikely]] return; }
L_002C0490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C04A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C04E0; } }
L_002C04A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04A8u);  if (depth < kMaxDepth) unit_0071(c, 119u, depth + 1u); else { c.pc = 0x002C5960u; return; } if (c.pc != 0x002C04A8u) [[unlikely]] return; }
L_002C04A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002C04E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C04F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23904u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C051Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C051Cu) [[unlikely]] return; }
L_002C051C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0524u);  if (depth < kMaxDepth) unit_0070(c, 87u, depth + 1u); else { c.pc = 0x002C0BB0u; return; } if (c.pc != 0x002C0524u) [[unlikely]] return; }
L_002C0524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C052Cu);  if (depth < kMaxDepth) unit_0070(c, 107u, depth + 1u); else { c.pc = 0x002C0E20u; return; } if (c.pc != 0x002C052Cu) [[unlikely]] return; }
L_002C052C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0534u);  if (depth < kMaxDepth) unit_0070(c, 111u, depth + 1u); else { c.pc = 0x002C0F10u; return; } if (c.pc != 0x002C0534u) [[unlikely]] return; }
L_002C0534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C053Cu);  if (depth < kMaxDepth) unit_0071(c, 238u, depth + 1u); else { c.pc = 0x002C7E70u; return; } if (c.pc != 0x002C053Cu) [[unlikely]] return; }
L_002C053C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0544u);  if (depth < kMaxDepth) unit_0072(c, 58u, depth + 1u); else { c.pc = 0x002C8C00u; return; } if (c.pc != 0x002C0544u) [[unlikely]] return; }
L_002C0544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0550u); set32(c.r[4], c.r[4].w[0] - 18176u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C0550u) [[unlikely]] return; }
L_002C0550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_002C0578:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 61u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 70u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 63u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05BCu); st8((c.r[2].w[0] + 396u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0070(c, 98u, depth + 1u); else { c.pc = 0x002C0DA0u; return; } if (c.pc != 0x002C05BCu) [[unlikely]] return; }
L_002C05BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05C4u);  if (depth < kMaxDepth) unit_0072(c, 20u, depth + 1u); else { c.pc = 0x002C8260u; return; } if (c.pc != 0x002C05C4u) [[unlikely]] return; }
L_002C05C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[8], c.r[8].w[0] - 24320u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0668; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    st8((c.r[2].w[0] + 445u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0] + 40u)));
    st8((c.r[2].w[0] + 444u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 432u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[2].w[0] + 436u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[2].w[0] + 440u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 446u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 448u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 447u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C06E8; } }
L_002C0668:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0674u); st8((c.r[2].w[0] + 445u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 189u, depth + 1u); else { c.pc = 0x002C6EE0u; return; } if (c.pc != 0x002C0674u) [[unlikely]] return; }
L_002C0674:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 59u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 60u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C06B0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C06B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 12464u);
    set32(c.r[6], c.r[6].w[0] - 12224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06D8u); set32(c.r[4], c.r[3].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002C06D8u) [[unlikely]] return; }
L_002C06D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 444u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 432u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002C06E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06F4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002C06F4u) [[unlikely]] return; }
L_002C06F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06FCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C06FCu) [[unlikely]] return; }
L_002C06FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0720u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C0720u) [[unlikely]] return; }
L_002C0720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0768; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 445u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0748; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C0760; } }
L_002C0748:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_002C0760:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C0768:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0780:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23872u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C07B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 63u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C07E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[17].d[0] = ld16((c.r[1].w[0] + 9612u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    c.r[16].d[0] = c.r[17].d[0] & 8192ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[3].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0838; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 61u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 61u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002C0878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C0878; } }
L_002C0838:
    c.r[2].d[0] = c.r[17].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0878; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[4], c.r[2].w[0] + 61u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 61u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0878; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C0878:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 62u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 61u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C0898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0894u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C0894u) [[unlikely]] return; }
L_002C0894:
    c.budget -= 1;
L_002C0898:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 61u)));
    set32(c.r[4], c.r[2].w[0] + 60u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C08D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 59u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002C08D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 61u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 59u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0908; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 59u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002C0908:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 57u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[3].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0948; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 57u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 57u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 57u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002C09A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C09A8; } }
    c.budget -= 1;
L_002C0948:
    c.r[2].d[0] = c.r[17].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C09A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 57u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + 57u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 57u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0988; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C0988:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 57u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 57u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C09A8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C09A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0A10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 61u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 181u, depth + 1u); else { c.pc = 0x002C6A30u; return; } if (c.pc != 0x002C09CCu) [[unlikely]] return; }
L_002C09CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C09F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09ECu); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C09ECu) [[unlikely]] return; }
L_002C09EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0A78; } }
    c.budget -= 1;
L_002C09F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A04u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C0A04u) [[unlikely]] return; }
L_002C0A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0A78; } }
    c.budget -= 1;
L_002C0A10:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0A48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A34u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002C0A34u) [[unlikely]] return; }
L_002C0A34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A40u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C0A40u) [[unlikely]] return; }
L_002C0A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0A78; } }
L_002C0A48:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0A78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A74u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C0A74u) [[unlikely]] return; }
L_002C0A74:
    c.budget -= 1;
L_002C0A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A80u);  if (depth < kMaxDepth) unit_0071(c, 231u, depth + 1u); else { c.pc = 0x002C7C20u; return; } if (c.pc != 0x002C0A80u) [[unlikely]] return; }
L_002C0A80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A8Cu); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002C0A8Cu) [[unlikely]] return; }
L_002C0A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AB4u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002C0AB4u) [[unlikely]] return; }
L_002C0AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0AE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 444u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_002C0AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C0B10u) [[unlikely]] return; }
L_002C0B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0B40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_002C0B40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01370000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x013B0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = c.r[3].d[0] | 53248ull;
    c.r[6].d[0] = c.r[2].d[0] | 6144ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B74u); set32(c.r[4], c.r[4].w[0] + 268u);  if (depth < kMaxDepth) unit_007C(c, 93u, depth + 1u); else { c.pc = 0x002F0970u; return; } if (c.pc != 0x002C0B74u) [[unlikely]] return; }
L_002C0B74:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 83u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 389u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 445u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0BE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BDCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));  if (depth < kMaxDepth) unit_0070(c, 92u, depth + 1u); else { c.pc = 0x002C0CF0u; return; } if (c.pc != 0x002C0BDCu) [[unlikely]] return; }
L_002C0BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0BF0; } }
    c.budget -= 1;
L_002C0BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BF0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 446u)));  if (depth < kMaxDepth) unit_0070(c, 92u, depth + 1u); else { c.pc = 0x002C0CF0u; return; } if (c.pc != 0x002C0BF0u) [[unlikely]] return; }
L_002C0BF0:
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 389u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C0CD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C0C68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0CD8; } }
    c.budget -= 1;
L_002C0C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C28u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002C0C28u) [[unlikely]] return; }
L_002C0C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002C0CD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 18256u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C44u); set32(c.r[4], c.r[3].w[0] + 268u);  if (depth < kMaxDepth) unit_007C(c, 99u, depth + 1u); else { c.pc = 0x002F0A30u; return; } if (c.pc != 0x002C0C44u) [[unlikely]] return; }
L_002C0C44:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 389u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 389u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C0CD8; } }
    c.budget -= 1;
L_002C0C68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[3] = ld32((c.r[6].w[0] + 384u));
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 384u), c.f[2]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[2] = ld32((c.r[3].w[0] + 380u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 380u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[3].w[0] + 384u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 384u);  if (t) { goto L_002C0CD8; } }
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[3].w[0] + 380u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 389u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 389u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002C0CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 481u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
L_002C0D04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C0D88; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    st8((c.r[6].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[6], c.r[3].w[0] + 82u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0D88; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[2].w[0] + 384u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[2].w[0] + 380u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D58u); st8((c.r[2].w[0] + 389u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x002C0D58u) [[unlikely]] return; }
L_002C0D58:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D64u); set32(c.r[4], c.r[2].w[0] + 268u);  if (depth < kMaxDepth) unit_007C(c, 100u, depth + 1u); else { c.pc = 0x002F0A40u; return; } if (c.pc != 0x002C0D64u) [[unlikely]] return; }
L_002C0D64:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D70u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0072(c, 23u, depth + 1u); else { c.pc = 0x002C82E0u; return; } if (c.pc != 0x002C0D70u) [[unlikely]] return; }
L_002C0D70:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D88u); set32(c.r[4], c.r[2].w[0] + 268u);  if (depth < kMaxDepth) unit_007C(c, 96u, depth + 1u); else { c.pc = 0x002F09D0u; return; } if (c.pc != 0x002C0D88u) [[unlikely]] return; }
L_002C0D88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 481u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DBCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C5750u; return; } if (c.pc != 0x002C0DBCu) [[unlikely]] return; }
L_002C0DBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DD0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C0DD0u) [[unlikely]] return; }
L_002C0DD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DDCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13674u)));  if (depth < kMaxDepth) unit_0072(c, 41u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C0DDCu) [[unlikely]] return; }
L_002C0DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 102u, depth + 1u); else { c.pc = 0x002C56D0u; return; } if (c.pc != 0x002C0DE4u) [[unlikely]] return; }
L_002C0DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DECu);  if (depth < kMaxDepth) unit_0072(c, 16u, depth + 1u); else { c.pc = 0x002C81C0u; return; } if (c.pc != 0x002C0DECu) [[unlikely]] return; }
L_002C0DEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DF8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 476u)));  if (depth < kMaxDepth) unit_0072(c, 41u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C0DF8u) [[unlikely]] return; }
L_002C0DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5700u; return; } if (c.pc != 0x002C0E00u) [[unlikely]] return; }
L_002C0E00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E14u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002C0E14u) [[unlikely]] return; }
L_002C0E14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 388u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C0EB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C0E70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0F00; } }
    c.budget -= 1;
L_002C0E58:
    st32((c.r[6].w[0] + 392u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 388u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 388u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C0F00; } }
L_002C0E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 481u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0F00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23324u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E8Cu); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002C0E8Cu) [[unlikely]] return; }
L_002C0E8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23328u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E9Cu); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002C0E9Cu) [[unlikely]] return; }
L_002C0E9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 388u)));
    c.budget -= 2;
L_002C0EA4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 388u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C0F00; } }
L_002C0EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40CC0000u);
    c.f[2] = ld32((c.r[6].w[0] + 392u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 392u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[3].w[0] + 392u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 392u);  if (t) { goto L_002C0F00; } }
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 388u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C0F00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 396u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C0F90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C0F60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0FE0; } }
    c.budget -= 1;
L_002C0F48:
    st32((c.r[6].w[0] + 400u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 396u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C0FE0; } }
L_002C0F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 481u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002C0FE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23332u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F78u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002C0F78u) [[unlikely]] return; }
L_002C0F78:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 396u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C0FE0; } }
    c.budget -= 1;
L_002C0F90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40CC0000u);
    c.f[2] = ld32((c.r[6].w[0] + 400u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 400u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[3].w[0] + 400u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 400u);  if (t) { goto L_002C0FE0; } }
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 396u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C0FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0FF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23856u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C1020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14503u);
    set32(c.r[7], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 52u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 61u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    set32(c.r[5], c.r[6].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; st8((c.r[7].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C1068; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002C1068:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 71u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C10A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 69u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C10E8; } }
    c.budget -= 1;
L_002C10A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[4], c.r[4].w[0] + 244u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 5504u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10C4u); set32(c.r[6], c.r[6].w[0] - 5264u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002C10C4u) [[unlikely]] return; }
L_002C10C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 63u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[3].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002C10E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1100:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 40u);  if (t) { goto L_002C1150; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002C1150:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 14192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FEB0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 414u, depth); }
L_002C1160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = ld16((c.r[1].w[0] + 9612u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 63u)));
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C11B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 63u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 63u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 63u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002C11B0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C11B0:
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C11F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 63u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 71u)));
    set32(c.r[4], c.r[2].w[0] + 63u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 63u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C11F0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C11F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 63u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C1210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C120Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C120Cu) [[unlikely]] return; }
L_002C120C:
    c.budget -= 1;
L_002C1210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1248; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1240u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1240u) [[unlikely]] return; }
L_002C1240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1278; } }
L_002C1248:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1278; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1274u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1274u) [[unlikely]] return; }
L_002C1274:
    c.budget -= 1;
L_002C1278:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1284u); set32(c.r[4], c.r[2].w[0] + 244u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002C1284u) [[unlikely]] return; }
L_002C1284:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1290u); set32(c.r[4], c.r[4].w[0] - 14800u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1290u) [[unlikely]] return; }
L_002C1290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C129Cu); set32(c.r[4], c.r[4].w[0] - 14192u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C129Cu) [[unlikely]] return; }
L_002C129C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C12B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C12C4u); set32(c.r[4], c.r[2].w[0] + 244u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002C12C4u) [[unlikely]] return; }
L_002C12C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C12F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 63u)));
    st8((c.r[3].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_002C12F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C12FCu); set32(c.r[4], c.r[4].w[0] - 14800u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C12FCu) [[unlikely]] return; }
L_002C12FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1308u); set32(c.r[4], c.r[4].w[0] - 14192u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1308u) [[unlikely]] return; }
L_002C1308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1320:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23840u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C1350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], c.r[5].w[0] - 7904u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 7664u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1380u); set32(c.r[4], c.r[3].w[0] + 228u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002C1380u) [[unlikely]] return; }
L_002C1380:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 65u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C13B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 36u);  if (t) { goto L_002C1400; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002C1400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 14880u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FEB0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 414u, depth); }
L_002C1410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = ld16((c.r[1].w[0] + 9612u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 65u)));
    c.r[2].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C1460; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 65u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 65u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 65u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C1460; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C1460:
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1498; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 65u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[2].w[0] + 65u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 65u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C1498; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C1498:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 66u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 65u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C14B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14B4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C14B4u) [[unlikely]] return; }
L_002C14B4:
    c.budget -= 1;
L_002C14B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C14F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14E8u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C14E8u) [[unlikely]] return; }
L_002C14E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1548; } }
L_002C14F0:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1548; } }
    goto L_002C14FC;
L_002C14F8:
    c.budget -= 1;
L_002C14FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 445u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1520; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C1530; } }
    c.budget -= 1;
L_002C1520:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C1530:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1544u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1544u) [[unlikely]] return; }
L_002C1544:
    c.budget -= 1;
L_002C1548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1550u);  if (depth < kMaxDepth) unit_0071(c, 231u, depth + 1u); else { c.pc = 0x002C7C20u; return; } if (c.pc != 0x002C1550u) [[unlikely]] return; }
L_002C1550:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C155Cu); set32(c.r[4], c.r[2].w[0] + 228u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002C155Cu) [[unlikely]] return; }
L_002C155C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1568u); set32(c.r[4], c.r[4].w[0] - 15776u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1568u) [[unlikely]] return; }
L_002C1568:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1574u); set32(c.r[4], c.r[4].w[0] - 14880u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1574u) [[unlikely]] return; }
L_002C1574:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_002C1584:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1598u); set32(c.r[4], c.r[2].w[0] + 228u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002C1598u) [[unlikely]] return; }
L_002C1598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1628; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 65u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 326u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15C8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13674u)));  if (depth < kMaxDepth) unit_0071(c, 198u, depth + 1u); else { c.pc = 0x002C70A0u; return; } if (c.pc != 0x002C15C8u) [[unlikely]] return; }
L_002C15C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002C15D0u) [[unlikely]] return; }
L_002C15D0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 3u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18416u);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3680u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1618u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002C1618u) [[unlikely]] return; }
L_002C1618:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C1628:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1634u); set32(c.r[4], c.r[4].w[0] - 15776u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1634u) [[unlikely]] return; }
L_002C1634:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1640u); set32(c.r[4], c.r[4].w[0] - 14880u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1640u) [[unlikely]] return; }
L_002C1640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C1650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1660u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002C1660u) [[unlikely]] return; }
L_002C1660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C16B0; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 1;
L_002C166C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1674u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002C1674u) [[unlikely]] return; }
L_002C1674:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1684u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002C1684u) [[unlikely]] return; }
L_002C1684:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1694u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002C1694u) [[unlikely]] return; }
L_002C1694:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16A0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002C16A0u) [[unlikely]] return; }
L_002C16A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C16B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C16C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C16D0u) [[unlikely]] return; }
L_002C16D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C16F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002C16F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1710:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23808u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C1740:
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] - 20288u);
    set32(c.r[3], c.r[3].w[0] - 18432u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[6].w[0] + 408u), 0u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[6].w[0] + 412u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], ld32((c.r[28].w[0] - 30300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 61u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 88u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    st8((c.r[9].w[0] + 424u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 30300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 424u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[8].w[0] + 416u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st32((c.r[5].w[0] + 420u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 424u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[6].w[0] + 428u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 444u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C17F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 408u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 408u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[2].w[0] + 408u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 408u);  if (t) { goto L_002C1868; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 424u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C1868; } }
    st8((c.r[3].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002C1868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 11296u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FEB0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 414u, depth); }
L_002C1880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1948; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 416u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C18D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18C8u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C18C8u) [[unlikely]] return; }
L_002C18C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1930; } }
L_002C18D0:
    st8((c.r[5].w[0] + 412u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18E0u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C18E0u) [[unlikely]] return; }
L_002C18E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1914u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));  if (depth < kMaxDepth) unit_0071(c, 196u, depth + 1u); else { c.pc = 0x002C7030u; return; } if (c.pc != 0x002C1914u) [[unlikely]] return; }
L_002C1914:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 416u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
L_002C1930:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C1980; } }
    c.budget -= 1;
L_002C1948:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { goto L_002C1960; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1980; } }
    c.budget -= 1;
L_002C1960:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1980u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1980u) [[unlikely]] return; }
L_002C1980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C198Cu); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C198Cu) [[unlikely]] return; }
L_002C198C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1998u); set32(c.r[4], c.r[4].w[0] - 11296u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1998u) [[unlikely]] return; }
L_002C1998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C19B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_002C19E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C19E0; } }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1A00; } }
L_002C19E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A00u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1A00u) [[unlikely]] return; }
L_002C1A00:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 412u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1AC0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 416u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 420u)));
    mmi::multu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 420u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + 420u);
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 16;
L_002C1A50:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C1A60; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_002C1A60:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 18428u);
    set32(c.r[3], c.r[3].w[0] - 18432u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 424u)));
    c.f[0] = ld32((c.r[5].w[0] + 428u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 428u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[0] = ld32((c.r[2].w[0] + 428u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 428u);  if (t) { goto L_002C1AC0; } }
    st32((c.r[3].w[0]), c.f[3]);
    c.budget -= 1;
L_002C1AC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1ACCu); set32(c.r[4], c.r[4].w[0] - 11216u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1ACCu) [[unlikely]] return; }
L_002C1ACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AD8u); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1AD8u) [[unlikely]] return; }
L_002C1AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AE4u); set32(c.r[4], c.r[4].w[0] - 11296u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002C1AE4u) [[unlikely]] return; }
L_002C1AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1AF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23792u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C1B20:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C1B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1B88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B7Cu); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1B7Cu) [[unlikely]] return; }
L_002C1B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1BE0; } }
    c.budget -= 1;
L_002C1B88:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1BC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BB0u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002C1BB0u) [[unlikely]] return; }
L_002C1BB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BBCu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1BBCu) [[unlikely]] return; }
L_002C1BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1BE0; } }
    c.budget -= 1;
L_002C1BC8:
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1BE0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BE0u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002C1BE0u) [[unlikely]] return; }
L_002C1BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002C1C00u) [[unlikely]] return; }
L_002C1C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1C30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_002C1C30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C1C40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x002C1C68u) [[unlikely]] return; }
L_002C1C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C70u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002C1C70u) [[unlikely]] return; }
L_002C1C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C78u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002C1C78u) [[unlikely]] return; }
L_002C1C78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C88u); st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_005B(c, 79u, depth + 1u); else { c.pc = 0x0026CB60u; return; } if (c.pc != 0x002C1C88u) [[unlikely]] return; }
L_002C1C88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    st8((c.r[2].w[0] + 89u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 504u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CD0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002C1CD0u) [[unlikely]] return; }
L_002C1CD0:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C1D40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C1D20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1D60; } }
    c.budget -= 1;
L_002C1D00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C1D60; } }
    c.budget -= 1;
L_002C1D20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C1D60; } }
    c.budget -= 1;
L_002C1D40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002C1D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D68u);  if (depth < kMaxDepth) unit_0071(c, 44u, depth + 1u); else { c.pc = 0x002C4AD0u; return; } if (c.pc != 0x002C1D68u) [[unlikely]] return; }
L_002C1D68:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1D90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C1DA8; } }
L_002C1D90:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C1DA8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1DD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C1DE8; } }
    c.budget -= 1;
L_002C1DD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C1DE8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1E08; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1E18; } }
L_002C1E08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C1E28; } }
L_002C1E18:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C1E28:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 52u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 39u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 275u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 37u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 55u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[1].w[0] - 7360u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7392u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 7432u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st16((c.r[1].w[0] - 7448u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[1].w[0] - 7356u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7388u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 7431u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st16((c.r[1].w[0] - 7446u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[1].w[0] - 7352u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7384u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 7430u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st16((c.r[1].w[0] - 7444u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 118;
L_002C2000:
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[1].w[0] - 7348u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 7429u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st16((c.r[1].w[0] - 7442u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[1].w[0] - 7344u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7376u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 7428u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st16((c.r[1].w[0] - 7440u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[1].w[0] - 7340u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7372u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 7427u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st16((c.r[1].w[0] - 7438u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 27856u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 61u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));
    st8((c.r[1].w[0] - 19198u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 19198u));
    c.budget -= 47;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[17], c.r[17].w[0] - 27856u);  if (t) { goto L_002C20D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 54u);  if (t) { goto L_002C20D8; } }
    st8((c.r[17].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002C20D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20E4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0072(c, 23u, depth + 1u); else { c.pc = 0x002C82E0u; return; } if (c.pc != 0x002C20E4u) [[unlikely]] return; }
L_002C20E4:
    st8((c.r[17].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    st8((c.r[17].w[0] + 8661u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 515u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 159u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 69u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C211Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002C211Cu) [[unlikely]] return; }
L_002C211C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 2;
L_002C2124:
    set32(c.r[3], c.r[3].w[0] - 21920u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    st8((c.r[17].w[0] + 8684u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8684u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8686u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2180u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13674u)));  if (depth < kMaxDepth) unit_0071(c, 198u, depth + 1u); else { c.pc = 0x002C70A0u; return; } if (c.pc != 0x002C2180u) [[unlikely]] return; }
L_002C2180:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 122u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 776u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 776u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    st8((c.r[17].w[0] + 886u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8685u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8663u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    st8((c.r[17].w[0] + 8683u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2260; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    st8((c.r[17].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2210u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002C2210u) [[unlikely]] return; }
L_002C2210:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 21920u);
    st8((c.r[17].w[0] + 8684u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8684u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 20;
L_002C2260:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2278u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C2278u) [[unlikely]] return; }
L_002C2278:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
L_002C2294:
    st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 130u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 118u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 124u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 134u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 126u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 47u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 53u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 49;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C2498; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 19152u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));
    st8((c.r[17].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    st8((c.r[17].w[0] + 8661u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 70u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002C23B0u) [[unlikely]] return; }
L_002C23B0:
    set32(c.r[7], ld32((c.r[28].w[0] - 30300u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], c.r[6].w[0] - 21920u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 8u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 68u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    st8((c.r[17].w[0] + 8684u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8684u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8686u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 776u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 8685u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 8663u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 8662u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 221u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 47u)));
    c.budget -= 39;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002C2470; } }
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2458u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C2458u) [[unlikely]] return; }
L_002C2458:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002C2470; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C2498; } }
L_002C2470:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    st8((c.r[18].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2484u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C2484u) [[unlikely]] return; }
L_002C2484:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002C2498:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2560; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    set32(c.r[18], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 47u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0] + 44u)));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002C2500; } }
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24E4u); c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C24E4u) [[unlikely]] return; }
L_002C24E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002C2500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C2560; } }
    c.budget -= 1;
L_002C2500:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002C2538; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 23784u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 54u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2520u); c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C2520u) [[unlikely]] return; }
L_002C2520:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002C2538; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 89u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C2560; } }
L_002C2538:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[18].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C254Cu); c.r[4].d[0] = ld8((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C254Cu) [[unlikely]] return; }
L_002C254C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002C2560:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 24320u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 14;
L_002C2598:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 6u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[21].w[0] + 6u);  if (t) { goto L_002C2650; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C25B0:
    set32(c.r[22], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[17], c.r[22].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 47u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002C25F8; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25D4u); c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C25D4u) [[unlikely]] return; }
L_002C25D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C25F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C25F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 6u);  if (t) { goto L_002C2640; } }
    c.budget -= 1;
L_002C25F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 47u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C2640; } }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2620u); c.r[4].d[0] = ld8((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4ED0u; return; } if (c.pc != 0x002C2620u) [[unlikely]] return; }
L_002C2620:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[18], 0u + 6u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002C2640:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C25B0u | kUnwind; return; } goto L_002C25B0; } }
L_002C2650:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2598u | kUnwind; return; } goto L_002C2598; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 7u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[28].w[0] - 23888u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[3].w[0] + 69u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 70u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 71u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 125u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 4u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 126u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 5u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 127u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 118u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 119u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 120u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 80;
L_002C27A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27B8u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002C27B8u) [[unlikely]] return; }
L_002C27B8:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_002C2800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C27D8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 2;
L_002C27D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27FCu); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002C27FCu) [[unlikely]] return; }
L_002C27FC:
    c.budget -= 1;
L_002C2800:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C27A0u | kUnwind; return; } goto L_002C27A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 32u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C2828; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_002C2828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2848u); set32(c.r[4], c.r[4].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002C2848u) [[unlikely]] return; }
L_002C2848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2850u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 306u, depth + 1u); else { c.pc = 0x00212700u; return; } if (c.pc != 0x002C2850u) [[unlikely]] return; }
L_002C2850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2858u);  if (depth < kMaxDepth) unit_0044(c, 363u, depth + 1u); else { c.pc = 0x002132A0u; return; } if (c.pc != 0x002C2858u) [[unlikely]] return; }
L_002C2858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2860u);  if (depth < kMaxDepth) unit_0044(c, 381u, depth + 1u); else { c.pc = 0x002135E0u; return; } if (c.pc != 0x002C2860u) [[unlikely]] return; }
L_002C2860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2868u);  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002242A0u; return; } if (c.pc != 0x002C2868u) [[unlikely]] return; }
L_002C2868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C28A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[4].w[0] + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002C29E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2998; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2948; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C28E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2AD8; } }
    c.budget -= 1;
L_002C28E8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28F4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x002C28F4u) [[unlikely]] return; }
L_002C28F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28FCu);  if (depth < kMaxDepth) unit_0047(c, 85u, depth + 1u); else { c.pc = 0x0021CDD0u; return; } if (c.pc != 0x002C28FCu) [[unlikely]] return; }
L_002C28FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2904u);  if (depth < kMaxDepth) unit_0047(c, 286u, depth + 1u); else { c.pc = 0x0021FF00u; return; } if (c.pc != 0x002C2904u) [[unlikely]] return; }
L_002C2904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C290Cu);  if (depth < kMaxDepth) unit_0047(c, 133u, depth + 1u); else { c.pc = 0x0021DED0u; return; } if (c.pc != 0x002C290Cu) [[unlikely]] return; }
L_002C290C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2914u);  if (depth < kMaxDepth) unit_0047(c, 243u, depth + 1u); else { c.pc = 0x0021F4F0u; return; } if (c.pc != 0x002C2914u) [[unlikely]] return; }
L_002C2914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C291Cu);  if (depth < kMaxDepth) unit_0047(c, 257u, depth + 1u); else { c.pc = 0x0021F7E0u; return; } if (c.pc != 0x002C291Cu) [[unlikely]] return; }
L_002C291C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2924u);  if (depth < kMaxDepth) unit_0047(c, 195u, depth + 1u); else { c.pc = 0x0021EC60u; return; } if (c.pc != 0x002C2924u) [[unlikely]] return; }
L_002C2924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C292Cu);  if (depth < kMaxDepth) unit_0048(c, 37u, depth + 1u); else { c.pc = 0x002206E0u; return; } if (c.pc != 0x002C292Cu) [[unlikely]] return; }
L_002C292C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2934u);  if (depth < kMaxDepth) unit_004F(c, 61u, depth + 1u); else { c.pc = 0x0023D0F0u; return; } if (c.pc != 0x002C2934u) [[unlikely]] return; }
L_002C2934:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C2AD8; } }
    c.budget -= 1;
L_002C2948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2950u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002C2950u) [[unlikely]] return; }
L_002C2950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2960u);  if (depth < kMaxDepth) unit_006E(c, 11u, depth + 1u); else { c.pc = 0x002B82F0u; return; } if (c.pc != 0x002C2960u) [[unlikely]] return; }
L_002C2960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2980; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C2AD8; } }
    c.budget -= 1;
L_002C2980:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C2AD8; } }
    c.budget -= 1;
L_002C2998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29A0u);  if (depth < kMaxDepth) unit_0046(c, 214u, depth + 1u); else { c.pc = 0x0021B730u; return; } if (c.pc != 0x002C29A0u) [[unlikely]] return; }
L_002C29A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2AD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C2AD8; } }
    c.budget -= 1;
L_002C29E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29E8u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002C29E8u) [[unlikely]] return; }
L_002C29E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2A30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C2AD8; } }
L_002C2A30:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2A90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A84u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002C2A84u) [[unlikely]] return; }
L_002C2A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2AD8; } }
    c.budget -= 1;
L_002C2A90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2AD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AD8u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002C2AD8u) [[unlikely]] return; }
L_002C2AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B00u);  if (depth < kMaxDepth) unit_006C(c, 323u, depth + 1u); else { c.pc = 0x002B2640u; return; } if (c.pc != 0x002C2B00u) [[unlikely]] return; }
L_002C2B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2DE0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14182u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2B50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C2DE0; } }
L_002C2B50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    set32(c.r[4], 0u + 4u);
    c.r[1].d[0] = 0ull | 50001ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 62u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[3].w[0] + 62u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 62u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 50000ull;  if (t) { goto L_002C2BC8; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C2BC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2D50; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 1325u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1325u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2C48; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13674u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14184u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 14184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002C2C48:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 64u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[3].w[0] + 64u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 64u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 50000ull;  if (t) { goto L_002C2C78; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C2C78:
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1326u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1326u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2CB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 504u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C2CB8:
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_002C2D28; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 14446u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2D28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14181u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 14181u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C2DE0; } }
    c.budget -= 1;
L_002C2D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D30u);  if (depth < kMaxDepth) unit_0072(c, 29u, depth + 1u); else { c.pc = 0x002C8490u; return; } if (c.pc != 0x002C2D30u) [[unlikely]] return; }
L_002C2D30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C2DE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C2DE0; } }
    c.budget -= 1;
L_002C2D50:
    set32(c.r[8], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 1325u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1325u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2DB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 73u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002C2DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C2DB0; } }
    c.budget -= 1;
L_002C2DA8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_002C2DB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 66u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[3].w[0] + 66u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 66u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 50000ull;  if (t) { goto L_002C2DE0; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C2DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2E28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E24u); set32(c.r[4], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_00C5(c, 131u, depth + 1u); else { c.pc = 0x00414FC0u; return; } if (c.pc != 0x002C2E24u) [[unlikely]] return; }
L_002C2E24:
    c.budget -= 1;
L_002C2E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E30u);  if (depth < kMaxDepth) unit_00C5(c, 133u, depth + 1u); else { c.pc = 0x004151C0u; return; } if (c.pc != 0x002C2E30u) [[unlikely]] return; }
L_002C2E30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E50u);  if (depth < kMaxDepth) unit_0070(c, 236u, depth + 1u); else { c.pc = 0x002C2DF0u; return; } if (c.pc != 0x002C2E50u) [[unlikely]] return; }
L_002C2E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2E98; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 10u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E80u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 142u, depth + 1u); else { c.pc = 0x002C5D70u; return; } if (c.pc != 0x002C2E80u) [[unlikely]] return; }
L_002C2E80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E94u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00AC(c, 14u, depth + 1u); else { c.pc = 0x003B00E0u; return; } if (c.pc != 0x002C2E94u) [[unlikely]] return; }
L_002C2E94:
    c.budget -= 1;
L_002C2E98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2EE0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EE0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 482u)));  if (depth < kMaxDepth) unit_00C5(c, 132u, depth + 1u); else { c.pc = 0x004150C0u; return; } if (c.pc != 0x002C2EE0u) [[unlikely]] return; }
L_002C2EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EE8u);  if (depth < kMaxDepth) unit_00C5(c, 133u, depth + 1u); else { c.pc = 0x004151C0u; return; } if (c.pc != 0x002C2EE8u) [[unlikely]] return; }
L_002C2EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F10u);  if (depth < kMaxDepth) unit_0070(c, 243u, depth + 1u); else { c.pc = 0x002C2EB0u; return; } if (c.pc != 0x002C2F10u) [[unlikely]] return; }
L_002C2F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2F40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_002C2F40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C3128; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 7360u);
    set32(c.r[17], c.r[17].w[0] - 7392u);
    set32(c.r[16], c.r[16].w[0] - 7424u);
    c.budget -= 8;
L_002C2FA8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_002C3110; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3108; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_002C30F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C30E8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_002C30D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C30C8; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_002C30B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C30A8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C3098; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3088; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C3078; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3068; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3058; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
    c.budget -= 1;
L_002C3048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3050u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 287u, depth + 1u); else { c.pc = 0x002C3900u; return; } if (c.pc != 0x002C3050u) [[unlikely]] return; }
L_002C3050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C3058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3060u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 13u, depth + 1u); else { c.pc = 0x002C4200u; return; } if (c.pc != 0x002C3060u) [[unlikely]] return; }
L_002C3060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C3068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3070u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 286u, depth + 1u); else { c.pc = 0x002C38D0u; return; } if (c.pc != 0x002C3070u) [[unlikely]] return; }
L_002C3070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C3078:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3110; } }
    c.budget -= 1;
L_002C3088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3090u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 283u, depth + 1u); else { c.pc = 0x002C37A0u; return; } if (c.pc != 0x002C3090u) [[unlikely]] return; }
L_002C3090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C3098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 284u, depth + 1u); else { c.pc = 0x002C3840u; return; } if (c.pc != 0x002C30A0u) [[unlikely]] return; }
L_002C30A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C30A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 279u, depth + 1u); else { c.pc = 0x002C3700u; return; } if (c.pc != 0x002C30B0u) [[unlikely]] return; }
L_002C30B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 281u, depth + 1u); else { c.pc = 0x002C3750u; return; } if (c.pc != 0x002C30C0u) [[unlikely]] return; }
L_002C30C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C30C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 264u, depth + 1u); else { c.pc = 0x002C3240u; return; } if (c.pc != 0x002C30D0u) [[unlikely]] return; }
L_002C30D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C30D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 263u, depth + 1u); else { c.pc = 0x002C31B0u; return; } if (c.pc != 0x002C30E0u) [[unlikely]] return; }
L_002C30E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C30E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 278u, depth + 1u); else { c.pc = 0x002C36A0u; return; } if (c.pc != 0x002C30F0u) [[unlikely]] return; }
L_002C30F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3110; } }
L_002C30F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3110; } }
    c.budget -= 1;
L_002C3108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3110u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 262u, depth + 1u); else { c.pc = 0x002C3150u; return; } if (c.pc != 0x002C3110u) [[unlikely]] return; }
L_002C3110:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2FA8u | kUnwind; return; } goto L_002C2FA8; } }
L_002C3128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[3], c.r[9].w[0] + 4u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st16((c.r[4].w[0] + 226u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    st8((c.r[4].w[0] + 224u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 225u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_002C31B0:
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7360u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 2u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C3220; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 125u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 126u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 127u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C3230; } }
L_002C3220:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002C3230:
    set32(c.r[3], c.r[7].w[0] + 4u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_002C3240:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] - 24320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[20], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 31;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));  if (t) { goto L_002C32C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C32E0; } }
    c.budget -= 1;
L_002C32C8:
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C32E0; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 273u);
    c.budget -= 3;
L_002C32E0:
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C32F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C3310; } }
    c.budget -= 1;
L_002C32F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C3310; } }
    set32(c.r[5], 0u + 38u);
    set32(c.r[6], c.r[6].w[0] + 75u);
    c.budget -= 3;
L_002C3310:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C3328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C3340; } }
    c.budget -= 1;
L_002C3328:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C3340; } }
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 261u);
    c.budget -= 3;
L_002C3340:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C3358; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C3370; } }
    c.budget -= 1;
L_002C3358:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C3370; } }
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], c.r[6].w[0] + 136u);
    c.budget -= 3;
L_002C3370:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C3388; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C33A0; } }
    c.budget -= 1;
L_002C3388:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C33A0; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 154u);
    c.budget -= 3;
L_002C33A0:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C33B8; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 154u);
    c.budget -= 3;
L_002C33B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33C4u); set32(c.r[4], c.r[4].w[0] - 18224u);  if (depth < kMaxDepth) unit_004E(c, 50u, depth + 1u); else { c.pc = 0x002386A0u; return; } if (c.pc != 0x002C33C4u) [[unlikely]] return; }
L_002C33C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 56u, depth + 1u); else { c.pc = 0x00238820u; return; } if (c.pc != 0x002C33D0u) [[unlikely]] return; }
L_002C33D0:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[1].d[0] = c.r[4].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C3610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33E8u);  if (depth < kMaxDepth) unit_0071(c, 201u, depth + 1u); else { c.pc = 0x002C7130u; return; } if (c.pc != 0x002C33E8u) [[unlikely]] return; }
L_002C33E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C33F4u) [[unlikely]] return; }
L_002C33F4:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C3678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3408u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C3408u) [[unlikely]] return; }
L_002C3408:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C3678; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3418:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_002C3588; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3588; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_002C3548; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3548; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002C3508; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3508; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_002C34C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C34C8; } }
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002C3488; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35C8; } }
L_002C3488:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 38u);  if (t) { goto L_002C34A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C35F8; } }
L_002C34A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34C0u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C34C0u) [[unlikely]] return; }
L_002C34C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35F8; } }
L_002C34C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_002C34E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C35F8; } }
L_002C34E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3500u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C3500u) [[unlikely]] return; }
L_002C3500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35F8; } }
L_002C3508:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_002C3528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C35F8; } }
L_002C3528:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3540u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C3540u) [[unlikely]] return; }
L_002C3540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35F8; } }
L_002C3548:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_002C3568; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C35F8; } }
L_002C3568:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3580u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C3580u) [[unlikely]] return; }
L_002C3580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35F8; } }
L_002C3588:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_002C35A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C35F8; } }
L_002C35A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35C0u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C35C0u) [[unlikely]] return; }
L_002C35C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C35F8; } }
L_002C35C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C35F8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35F4u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C35F4u) [[unlikely]] return; }
L_002C35F4:
    c.budget -= 1;
L_002C35F8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3418u | kUnwind; return; } goto L_002C3418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3678; } }
L_002C3610:
    c.r[1].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C3678; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 23823u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 51u);  if (t) { goto L_002C3678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3678; } }
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3678; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C3678; } }
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3674u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 198u, depth + 1u); else { c.pc = 0x002DA230u; return; } if (c.pc != 0x002C3674u) [[unlikely]] return; }
L_002C3674:
    c.budget -= 1;
L_002C3678:
    set32(c.r[3], c.r[20].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C36A0:
    set32(c.r[5], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 7424u);
    set32(c.r[4], c.r[4].w[0] - 7360u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_002C3700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C372Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F4D00u; return; } if (c.pc != 0x002C372Cu) [[unlikely]] return; }
L_002C372C:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3780u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002C3780u) [[unlikely]] return; }
L_002C3780:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C37A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 7432u);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 7360u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], ld32((c.r[6].w[0])));  if (t) { goto L_002C3800; } }
    c.r[5].d[0] = ld8((c.r[8].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 7448u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C3830; } }
    c.budget -= 1;
L_002C3800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 7448u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C3830; } }
    set32(c.r[3], c.r[8].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002C3830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[4].d[0] & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C38B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C38B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38A4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (depth < kMaxDepth) unit_0070(c, 291u, depth + 1u); else { c.pc = 0x002C39F0u; return; } if (c.pc != 0x002C38A4u) [[unlikely]] return; }
L_002C38A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + 4u);  if (t) { goto L_002C38B0; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002C38B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C38D0:
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 7392u);
    set32(c.r[4], c.r[4].w[0] - 7360u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_002C3900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 7360u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[18].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C39D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C39D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3968u); c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (depth < kMaxDepth) unit_0070(c, 291u, depth + 1u); else { c.pc = 0x002C39F0u; return; } if (c.pc != 0x002C3968u) [[unlikely]] return; }
L_002C3968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C39D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3978u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 8u, depth + 1u); else { c.pc = 0x002C40D0u; return; } if (c.pc != 0x002C3978u) [[unlikely]] return; }
L_002C3978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C39D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3988u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 292u, depth + 1u); else { c.pc = 0x002C3A90u; return; } if (c.pc != 0x002C3988u) [[unlikely]] return; }
L_002C3988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C39D8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C39B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 274u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C39D0; } }
L_002C39B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C39D0:
    set32(c.r[3], c.r[17].w[0] + 28u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C39D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C39F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 7432u);
    set32(c.r[7], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3A48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3A80; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 7448u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002C3A88; } }
    c.budget -= 1;
L_002C3A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 7448u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C3A80; } }
    c.budget -= 1;
L_002C3A70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C3A88; } }
L_002C3A80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C3A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C3A90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AB8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0071(c, 11u, depth + 1u); else { c.pc = 0x002C41B0u; return; } if (c.pc != 0x002C3AB8u) [[unlikely]] return; }
L_002C3AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C3AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0071(c, 7u, depth); } }
L_002C3AC8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[6], c.r[6].w[0] - 24320u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 4u));
    set32(c.r[2], 0u + 75u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] + 6u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002C3B70; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002C3B38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3B48; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002C3B48:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3B38u | kUnwind; return; } goto L_002C3B38; } }
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C3B70; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0071(c, 7u, depth); } }
L_002C3B70:
    st8((c.r[17].w[0] + 8658u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002C3B8Cu) [[unlikely]] return; }
L_002C3B8C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[17].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[17].w[0] + 8684u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[17].w[0] + 1934u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    st8((c.r[17].w[0] + 887u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 776u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[17].w[0] + 1938u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[17].w[0] + 1941u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    st8((c.r[17].w[0] + 1942u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    st8((c.r[17].w[0] + 1943u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1939u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1940u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1956u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 9u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C3D90; } }
    st8((c.r[17].w[0] + 1940u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1956u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[17].w[0] + 1956u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 1948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 9u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 12ull;  if (t) { goto L_002C3C70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 24656u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1888u), c.f[3]);
    st32((c.r[17].w[0] + 1892u), c.f[2]);
    st32((c.r[17].w[0] + 1896u), c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1900u), c.f[0]);  if (t) { goto L_002C3C98; } }
L_002C3C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 11248u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1888u), c.f[3]);
    st32((c.r[17].w[0] + 1892u), c.f[2]);
    st32((c.r[17].w[0] + 1896u), c.f[1]);
    st32((c.r[17].w[0] + 1900u), c.f[0]);
    c.budget -= 10;
L_002C3C98:
    set32(c.r[4], c.r[17].w[0] + 1904u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CA4u); set32(c.r[5], c.r[17].w[0] + 1888u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002C3CA4u) [[unlikely]] return; }
L_002C3CA4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8684u)));
    set32(c.r[4], c.r[4].w[0] - 21918u);
    set32(c.r[2], 0u + 48u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 1958u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] & 48ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_002C3D78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C3D58; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C3D38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C3D10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3D90; } }
    c.budget -= 1;
L_002C3D10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1958u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_002C3D2C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002C3D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1958u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C3D90; } }
    c.budget -= 1;
L_002C3D38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1958u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_002C3D4C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002C3D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1958u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C3D90; } }
    c.budget -= 1;
L_002C3D58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1958u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_002C3D6C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002C3D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1958u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C3D90; } }
    c.budget -= 1;
L_002C3D78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1958u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_002C3D8C; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_002C3D8C:
    st16((c.r[17].w[0] + 1958u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C3D90:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C3E78; } }
    st8((c.r[17].w[0] + 1940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1956u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[17].w[0] + 1956u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3E18; } }
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 24656u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1888u), c.f[3]);
    st32((c.r[17].w[0] + 1892u), c.f[2]);
    st32((c.r[17].w[0] + 1896u), c.f[1]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1900u), c.f[0]);  if (t) { goto L_002C3E40; } }
    c.budget -= 1;
L_002C3E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 11248u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1888u), c.f[3]);
    st32((c.r[17].w[0] + 1892u), c.f[2]);
    st32((c.r[17].w[0] + 1896u), c.f[1]);
    st32((c.r[17].w[0] + 1900u), c.f[0]);
    c.budget -= 10;
L_002C3E40:
    set32(c.r[4], c.r[17].w[0] + 1904u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E4Cu); set32(c.r[5], c.r[17].w[0] + 1888u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002C3E4Cu) [[unlikely]] return; }
L_002C3E4C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 24672u);
    c.r[3].d[0] = c.r[3].d[0] & 112ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 1948u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_002C3E78:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 14u));
    c.f[0] = 0u;
    st8((c.r[17].w[0] + 876u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3EF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C3EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3ED0u);  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x002C3ED0u) [[unlikely]] return; }
L_002C3ED0:
    c.f[20] = ld32((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EE0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x002C3EE0u) [[unlikely]] return; }
L_002C3EE0:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[1]);  if (t) { goto L_002C3EF8; } }
L_002C3EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 139u, depth + 1u); else { c.pc = 0x0025DAB0u; return; } if (c.pc != 0x002C3EF8u) [[unlikely]] return; }
L_002C3EF8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3F68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3F38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F2Cu); set32(c.r[5], c.r[3].w[0] + 656u);  if (depth < kMaxDepth) unit_005A(c, 156u, depth + 1u); else { c.pc = 0x002699E0u; return; } if (c.pc != 0x002C3F2Cu) [[unlikely]] return; }
L_002C3F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3F70; } }
    c.budget -= 1;
L_002C3F38:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F58u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002C3F58u) [[unlikely]] return; }
L_002C3F58:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C3F70; } }
    c.budget -= 1;
L_002C3F68:
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_002C3F70:
    st8((c.r[17].w[0] + 8661u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 776u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C3F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 886u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C3FA0; } }
L_002C3F90:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    st8((c.r[17].w[0] + 886u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C3FA0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 8663u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 8662u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8685u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8686u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 6u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C3FD0; } }
    st8((c.r[17].w[0] + 513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C3FD0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 776u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 886u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 38u, depth + 1u); else { c.pc = 0x002C8820u; return; } if (c.pc != 0x002C3FE0u) [[unlikely]] return; }
L_002C3FE0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C3FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0071(c, 4u, depth); } }
L_002C3FF8:
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0071(c, 3u, depth); } }
    [[clang::musttail]] return unit_0071(c, 2u, depth);
}

}
