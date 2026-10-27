#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0011[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0011(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00144000;
    case 2u: goto L_00144020;
    case 3u: goto L_00144048;
    case 4u: goto L_00144070;
    case 5u: goto L_00144164;
    case 6u: goto L_00144170;
    case 7u: goto L_00144180;
    case 8u: goto L_00144190;
    case 9u: goto L_0014419C;
    case 10u: goto L_001441E0;
    case 11u: goto L_001441EC;
    case 12u: goto L_00144230;
    case 13u: goto L_0014423C;
    case 14u: goto L_00144280;
    case 15u: goto L_0014428C;
    case 16u: goto L_001442D4;
    case 17u: goto L_001442E0;
    case 18u: goto L_001442F0;
    case 19u: goto L_001442FC;
    case 20u: goto L_0014430C;
    case 21u: goto L_00144318;
    case 22u: goto L_00144328;
    case 23u: goto L_00144338;
    case 24u: goto L_00144344;
    case 25u: goto L_00144360;
    case 26u: goto L_0014437C;
    case 27u: goto L_00144390;
    case 28u: goto L_0014439C;
    case 29u: goto L_001443AC;
    case 30u: goto L_001443B8;
    case 31u: goto L_001443C8;
    case 32u: goto L_001443D8;
    case 33u: goto L_001443E4;
    case 34u: goto L_00144400;
    case 35u: goto L_0014441C;
    case 36u: goto L_00144428;
    case 37u: goto L_00144460;
    case 38u: goto L_001444C0;
    case 39u: goto L_00144558;
    case 40u: goto L_00144590;
    case 41u: goto L_001445A0;
    case 42u: goto L_001445AC;
    case 43u: goto L_001445D8;
    case 44u: goto L_001445E4;
    case 45u: goto L_00144620;
    case 46u: goto L_00144630;
    case 47u: goto L_0014463C;
    case 48u: goto L_00144668;
    case 49u: goto L_00144674;
    case 50u: goto L_001446AC;
    case 51u: goto L_001446BC;
    case 52u: goto L_001446D0;
    case 53u: goto L_001446E4;
    case 54u: goto L_00144704;
    case 55u: goto L_0014471C;
    case 56u: goto L_00144750;
    case 57u: goto L_0014480C;
    case 58u: goto L_0014483C;
    case 59u: goto L_001448C0;
    case 60u: goto L_00144914;
    case 61u: goto L_001449B0;
    case 62u: goto L_001449BC;
    case 63u: goto L_00144A20;
    case 64u: goto L_00144BE0;
    case 65u: goto L_00144C30;
    case 66u: goto L_00144C64;
    case 67u: goto L_00144C70;
    case 68u: goto L_00144CA4;
    case 69u: goto L_00144CB0;
    case 70u: goto L_00144CE4;
    case 71u: goto L_00144CF0;
    case 72u: goto L_00144D30;
    case 73u: goto L_00144D50;
    case 74u: goto L_00144D60;
    case 75u: goto L_00144DC0;
    case 76u: goto L_00144DD4;
    case 77u: goto L_00144E00;
    case 78u: goto L_00144E60;
    case 79u: goto L_00144E90;
    case 80u: goto L_00144F5C;
    case 81u: goto L_00144F6C;
    case 82u: goto L_00144F7C;
    case 83u: goto L_00144F8C;
    case 84u: goto L_001450C0;
    case 85u: goto L_001450F0;
    case 86u: goto L_00145100;
    case 87u: goto L_00145124;
    case 88u: goto L_00145130;
    case 89u: goto L_00145180;
    case 90u: goto L_0014518C;
    case 91u: goto L_001451A8;
    case 92u: goto L_001451B4;
    case 93u: goto L_001451D0;
    case 94u: goto L_001451DC;
    case 95u: goto L_001451F8;
    case 96u: goto L_00145210;
    case 97u: goto L_0014521C;
    case 98u: goto L_00145240;
    case 99u: goto L_00145340;
    case 100u: goto L_001453F0;
    case 101u: goto L_00145440;
    case 102u: goto L_001454B8;
    case 103u: goto L_001454F8;
    case 104u: goto L_00145550;
    case 105u: goto L_00145590;
    case 106u: goto L_001455E0;
    case 107u: goto L_0014563C;
    case 108u: goto L_001456B4;
    case 109u: goto L_001456C4;
    case 110u: goto L_00145718;
    case 111u: goto L_00145754;
    case 112u: goto L_00145790;
    case 113u: goto L_001457C0;
    case 114u: goto L_001457D0;
    case 115u: goto L_001457E4;
    case 116u: goto L_00145810;
    case 117u: goto L_00145844;
    case 118u: goto L_00145854;
    case 119u: goto L_00145868;
    case 120u: goto L_00145888;
    case 121u: goto L_00145898;
    case 122u: goto L_001458A4;
    case 123u: goto L_001458B0;
    case 124u: goto L_001458BC;
    case 125u: goto L_001458F4;
    case 126u: goto L_0014590C;
    case 127u: goto L_00145950;
    case 128u: goto L_0014599C;
    case 129u: goto L_001459AC;
    case 130u: goto L_001459B8;
    case 131u: goto L_001459E8;
    case 132u: goto L_001459F8;
    case 133u: goto L_00145A04;
    case 134u: goto L_00145A30;
    case 135u: goto L_00145A3C;
    case 136u: goto L_00145AA8;
    case 137u: goto L_00145AB4;
    case 138u: goto L_00145AE8;
    case 139u: goto L_00145B08;
    case 140u: goto L_00145B14;
    case 141u: goto L_00145B30;
    case 142u: goto L_00145B3C;
    case 143u: goto L_00145B70;
    case 144u: goto L_00145B90;
    case 145u: goto L_00145B9C;
    case 146u: goto L_00145BDC;
    case 147u: goto L_00145C30;
    case 148u: goto L_00145C78;
    case 149u: goto L_00145C88;
    case 150u: goto L_00145C9C;
    case 151u: goto L_00145CB0;
    case 152u: goto L_00145CC4;
    case 153u: goto L_00145CDC;
    case 154u: goto L_00145D0C;
    case 155u: goto L_00145D1C;
    case 156u: goto L_00145D28;
    case 157u: goto L_00145D60;
    case 158u: goto L_00145D88;
    case 159u: goto L_00145D98;
    case 160u: goto L_00145DA8;
    case 161u: goto L_00145DE0;
    case 162u: goto L_00145DF0;
    case 163u: goto L_00145E00;
    case 164u: goto L_00145E54;
    case 165u: goto L_00145E90;
    case 166u: goto L_00145EC0;
    case 167u: goto L_00145ED0;
    case 168u: goto L_00145EE0;
    case 169u: goto L_00145EF8;
    case 170u: goto L_00145F30;
    case 171u: goto L_00145FC4;
    case 172u: goto L_00145FE4;
    case 173u: goto L_00146000;
    case 174u: goto L_0014600C;
    case 175u: goto L_00146018;
    case 176u: goto L_0014602C;
    case 177u: goto L_00146054;
    case 178u: goto L_001460A8;
    case 179u: goto L_001460C0;
    case 180u: goto L_00146138;
    case 181u: goto L_00146158;
    case 182u: goto L_00146168;
    case 183u: goto L_00146194;
    case 184u: goto L_001461C0;
    case 185u: goto L_001461D0;
    case 186u: goto L_001461FC;
    case 187u: goto L_00146238;
    case 188u: goto L_00146274;
    case 189u: goto L_00146310;
    case 190u: goto L_00146338;
    case 191u: goto L_00146380;
    case 192u: goto L_001463A0;
    case 193u: goto L_001463D8;
    case 194u: goto L_001463E8;
    case 195u: goto L_00146418;
    case 196u: goto L_00146480;
    case 197u: goto L_001464B0;
    case 198u: goto L_001464C0;
    case 199u: goto L_001464D0;
    case 200u: goto L_001464F0;
    case 201u: goto L_00146540;
    case 202u: goto L_00146550;
    case 203u: goto L_001465C0;
    case 204u: goto L_00146668;
    case 205u: goto L_00146678;
    case 206u: goto L_00146688;
    case 207u: goto L_00146790;
    case 208u: goto L_00146868;
    case 209u: goto L_00146870;
    case 210u: goto L_00146880;
    case 211u: goto L_00146988;
    case 212u: goto L_00146A74;
    case 213u: goto L_00146A80;
    case 214u: goto L_00146BE0;
    case 215u: goto L_00146DA0;
    case 216u: goto L_00146E70;
    case 217u: goto L_00146E80;
    case 218u: goto L_00146E90;
    case 219u: goto L_00146EB0;
    case 220u: goto L_00146F00;
    case 221u: goto L_00146F10;
    case 222u: goto L_00146F90;
    case 223u: goto L_00146FA4;
    case 224u: goto L_00146FE0;
    case 225u: goto L_00147060;
    case 226u: goto L_00147070;
    case 227u: goto L_00147080;
    case 228u: goto L_001470F0;
    case 229u: goto L_00147130;
    case 230u: goto L_00147138;
    case 231u: goto L_00147148;
    case 232u: goto L_001471B8;
    case 233u: goto L_00147208;
    case 234u: goto L_00147214;
    case 235u: goto L_0014722C;
    case 236u: goto L_00147290;
    case 237u: goto L_00147320;
    case 238u: goto L_00147358;
    case 239u: goto L_00147368;
    case 240u: goto L_00147378;
    case 241u: goto L_0014739C;
    case 242u: goto L_001473EC;
    case 243u: goto L_001473FC;
    case 244u: goto L_00147490;
    case 245u: goto L_00147560;
    case 246u: goto L_001475A4;
    case 247u: goto L_001475D8;
    case 248u: goto L_00147610;
    case 249u: goto L_00147900;
    case 250u: goto L_00147BF0;
    case 251u: goto L_00147E90;
    default: bad_entry(c, 0x00144000u); return;
    }
L_00144000:
    c.facc = fp::mul(c.f[0], c.f[3]);
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.facc = fp::mul(c.f[0], c.f[5]);
    c.f[20] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[12] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144020u); c.f[23] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00144020u) [[unlikely]] return; }
L_00144020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00144040; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00144040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144048u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00144048u) [[unlikely]] return; }
L_00144048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00144068; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_00144068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144070u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00144070u) [[unlikely]] return; }
L_00144070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00144090; } }
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_00144090:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00144130; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00144100; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001440D0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001440C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144150; } }
L_001440C0:
    c.f[22] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144150; } }
    c.budget -= 1;
L_001440D0:
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    fpu_div(c, 22u, c.f[0], c.f[21]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144150; } }
    c.budget -= 1;
L_00144100:
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    fpu_div(c, 22u, c.f[0], c.f[20]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144150; } }
    c.budget -= 1;
L_00144130:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    fpu_div(c, 22u, c.f[0], c.f[23]);
    c.budget -= 8;
L_00144150:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.f[12] = c.f[22];  if (t) { goto L_001442C8; } }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144164u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00144164u) [[unlikely]] return; }
L_00144164:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144170u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00144170u) [[unlikely]] return; }
L_00144170:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144180u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00144180u) [[unlikely]] return; }
L_00144180:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144190u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144190u) [[unlikely]] return; }
L_00144190:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014419Cu); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014419Cu) [[unlikely]] return; }
L_0014419C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001441D0; } }
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001441D0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441E0u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001441E0u) [[unlikely]] return; }
L_001441E0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441ECu); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001441ECu) [[unlikely]] return; }
L_001441EC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00144220; } }
    c.f[3] = ld32((c.r[21].w[0] + 16u));
    c.f[2] = ld32((c.r[21].w[0] + 20u));
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_00144220:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144230u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144230u) [[unlikely]] return; }
L_00144230:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014423Cu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014423Cu) [[unlikely]] return; }
L_0014423C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00144270; } }
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.budget -= 8;
L_00144270:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144280u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144280u) [[unlikely]] return; }
L_00144280:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014428Cu); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014428Cu) [[unlikely]] return; }
L_0014428C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001442E0; } }
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.f[0]);  if (t) { goto L_001442E0; } }
    c.budget -= 1;
L_001442C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442D4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001442D4u) [[unlikely]] return; }
L_001442D4:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442E0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001442E0u) [[unlikely]] return; }
L_001442E0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442F0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001442F0u) [[unlikely]] return; }
L_001442F0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442FCu); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001442FCu) [[unlikely]] return; }
L_001442FC:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014430Cu); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0014430Cu) [[unlikely]] return; }
L_0014430C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144318u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00144318u) [[unlikely]] return; }
L_00144318:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144328u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144328u) [[unlikely]] return; }
L_00144328:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144338u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144338u) [[unlikely]] return; }
L_00144338:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144344u); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144344u) [[unlikely]] return; }
L_00144344:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[21].w[0] + 80u);  if (t) { goto L_00144380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144360u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144360u) [[unlikely]] return; }
L_00144360:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00144380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014437Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014437Cu) [[unlikely]] return; }
L_0014437C:
    c.budget -= 1;
L_00144380:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144390u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144390u) [[unlikely]] return; }
L_00144390:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014439Cu); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014439Cu) [[unlikely]] return; }
L_0014439C:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001443ACu); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001443ACu) [[unlikely]] return; }
L_001443AC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001443B8u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001443B8u) [[unlikely]] return; }
L_001443B8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001443C8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001443C8u) [[unlikely]] return; }
L_001443C8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001443D8u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001443D8u) [[unlikely]] return; }
L_001443D8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001443E4u); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001443E4u) [[unlikely]] return; }
L_001443E4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[20].w[0] + 80u);  if (t) { goto L_00144420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144400u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144400u) [[unlikely]] return; }
L_00144400:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[19].w[0] + 16u);  if (t) { goto L_00144420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014441Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014441Cu) [[unlikely]] return; }
L_0014441C:
    c.budget -= 1;
L_00144420:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00144428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00144460:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 64u));
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001444C0u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001444C0u) [[unlikely]] return; }
L_001444C0:
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[7] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = c.r[2].w[0];
    c.f[10] = ld32((c.r[29].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[6] = ld32((c.r[29].w[0] + 96u));
    c.f[4] = fp::mul(c.f[3], c.f[3]);
    c.f[5] = fp::mul(c.f[7], c.f[7]);
    c.facc = fp::add(c.f[5], c.f[4]);
    c.f[11] = ld32((c.r[29].w[0] + 120u));
    c.f[9] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = fp::mul(c.f[3], c.f[10]);
    c.f[4] = fp::mul(c.f[7], c.f[6]);
    c.f[21] = fp::add(c.facc, fp::mul(c.f[11], c.f[11]));
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[11], c.f[9]));
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.f[8] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = fp::mul(c.f[9], c.f[9]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[10], c.f[10]));
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[8]));
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 34;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144728; } }
L_00144550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144558u);  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x00144558u) [[unlikely]] return; }
L_00144558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.f[22] = c.f[20] ^ fp::kSign;
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = c.f[0];
    c.f[21] = fp::mul(c.f[1], c.f[21]);
    c.f[0] = fp::add(c.f[22], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144590u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00144590u) [[unlikely]] return; }
L_00144590:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001445A0u) [[unlikely]] return; }
L_001445A0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445ACu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001445ACu) [[unlikely]] return; }
L_001445AC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001445C8; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 2;
L_001445C8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445D8u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001445D8u) [[unlikely]] return; }
L_001445D8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445E4u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001445E4u) [[unlikely]] return; }
L_001445E4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00144600; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 2;
L_00144600:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = fp::sub(c.f[22], c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 64u);
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144620u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00144620u) [[unlikely]] return; }
L_00144620:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144630u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00144630u) [[unlikely]] return; }
L_00144630:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014463Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014463Cu) [[unlikely]] return; }
L_0014463C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00144658; } }
    c.r[18].d[0] = c.r[18].d[0] | 4ull;
    c.budget -= 2;
L_00144658:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144668u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00144668u) [[unlikely]] return; }
L_00144668:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144674u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144674u) [[unlikely]] return; }
L_00144674:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00144690; } }
    c.r[18].d[0] = c.r[18].d[0] | 8ull;
    c.budget -= 2;
L_00144690:
    c.r[2].d[0] = c.r[18].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 12ull;  if (t) { goto L_001446F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001446F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001446ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001446ACu) [[unlikely]] return; }
L_001446AC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001446BCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001446BCu) [[unlikely]] return; }
L_001446BC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001446D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001446D0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001446D0u) [[unlikely]] return; }
L_001446D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001446E8; } }
L_001446D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001446E4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001446E4u) [[unlikely]] return; }
L_001446E4:
    c.budget -= 1;
L_001446E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00144728; } }
L_001446F0:
    c.r[2].d[0] = c.r[18].d[0] & 12ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00144710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144704u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00144704u) [[unlikely]] return; }
L_00144704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144720; } }
    c.budget -= 1;
L_00144710:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014471Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014471Cu) [[unlikely]] return; }
L_0014471C:
    c.budget -= 1;
L_00144720:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00144728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00144750:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001447B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 19104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001447B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144A00; } }
    c.budget -= 1;
L_001447B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00144890; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00144860; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00144850; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00144800; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00144800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001448A0; } }
L_00144800:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014480Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014480Cu) [[unlikely]] return; }
L_0014480C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + 14456u);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[2], c.r[2].w[0] + 14452u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 12;
L_0014483C:
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_001448A8; } }
    c.budget -= 1;
L_00144850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001448A8; } }
L_00144860:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);  if (t) { goto L_00144880; } }
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001448A8; } }
    c.budget -= 1;
L_00144880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001448A8; } }
L_00144890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001448A8; } }
L_001448A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_001448A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[19].w[0] + 16u);  if (t) { goto L_001448C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001448C0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001448C0u) [[unlikely]] return; }
L_001448C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00144978; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00144968; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00144958; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00144908; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00144908; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144988; } }
L_00144908:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144914u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00144914u) [[unlikely]] return; }
L_00144914:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + 14456u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[2], c.r[2].w[0] + 14452u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_00144998; } }
L_00144958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_00144998; } }
L_00144968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_00144998; } }
L_00144978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_00144998; } }
L_00144988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_00144998:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + 16u);  if (t) { goto L_001449B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449B0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001449B0u) [[unlikely]] return; }
L_001449B0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449BCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001449BCu) [[unlikely]] return; }
L_001449BC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001449F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001449F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 19104u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_001449F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144A00; } }
L_001449F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00144A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00144A20:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144C20; } }
L_00144A38:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144C20; } }
    c.budget -= 1;
L_00144A50:
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_00144A90; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[6].d[0] = ld16((c.r[6].w[0] + 562u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] & 4ull;  if (t) { goto L_00144A90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C20; } }
    c.budget -= 1;
L_00144A90:
    c.r[2].d[0] = ld16((c.r[8].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144AB8; } }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144C20; } }
L_00144AB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00144AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C20; } }
    c.budget -= 1;
L_00144AD0:
    c.r[7].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 562u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 58368ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00144AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C20; } }
L_00144AF0:
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 136u);
    set32(c.r[7], ld32((c.r[5].w[0] + 56u)));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 136ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00144B58; } }
    c.r[7].d[0] = ld16((c.r[2].w[0] + 562u));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[7].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00144B40; } }
    set32(c.r[7], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00144B58; } }
    c.budget -= 1;
L_00144B40:
    c.r[6].d[0] = c.r[7].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00144B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C20; } }
    c.budget -= 1;
L_00144B58:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 564u));
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00144B98; } }
    c.r[6].d[0] = ld16((c.r[2].w[0] + 560u));
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00144B98; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00144B90; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00144B98; } }
L_00144B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C20; } }
L_00144B98:
    set32(c.r[6], ld32((c.r[2].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00144C18; } }
    c.r[6].d[0] = ld16((c.r[2].w[0] + 562u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00144BB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_00144BB8:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 562u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00144BD0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 2;
L_00144BD0:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 556u));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00144BE0:
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 524u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144C20; } }
    c.budget -= 1;
L_00144C08:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144BE0u | kUnwind; return; } goto L_00144BE0; } }
L_00144C18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00144C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00144C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144C64u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x00144C64u) [[unlikely]] return; }
L_00144C64:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144C70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144C70u) [[unlikely]] return; }
L_00144C70:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144D10; } }
    c.budget -= 1;
L_00144C90:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CA4u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x00144CA4u) [[unlikely]] return; }
L_00144CA4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144CB0u) [[unlikely]] return; }
L_00144CB0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00144CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144D10; } }
    c.budget -= 1;
L_00144CD0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CE4u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x00144CE4u) [[unlikely]] return; }
L_00144CE4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CF0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00144CF0u) [[unlikely]] return; }
L_00144CF0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00144D08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00144D08:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_00144D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00144D30:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[7].w[0] + 2688u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[12], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
L_00144D50:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00144D60:
    c.r[6].d[0] = ld8((c.r[12].w[0]));
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00144D80; } }
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 4;
L_00144D80:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00144D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144DB8; } }
L_00144D90:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144D60u | kUnwind; return; } goto L_00144D60; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144D50u | kUnwind; return; } goto L_00144D50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00144DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00144DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144DD4u); set32(c.r[5], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x00144D30u; return; } if (c.pc != 0x00144DD4u) [[unlikely]] return; }
L_00144DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144E40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 2688u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00144E00:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00144E18; } }
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00144E48; } }
L_00144E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00144E30; } }
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00144E48; } }
    c.budget -= 1;
L_00144E30:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144E00u | kUnwind; return; } goto L_00144E00; } }
L_00144E40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00144E48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00144E60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00144E90u) [[unlikely]] return; }
L_00144E90:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2928u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_00144F08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144F08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00144EC8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00144EC8:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00144ED8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00144ED8:
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[12]);  if (t) { goto L_00144F50; } }
L_00144F08:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00144F30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[12]);  if (t) { goto L_00144F50; } }
L_00144F30:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_00144F48; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144F50; } }
L_00144F48:
    c.f[12] = 0u;
    c.budget -= 2;
L_00144F50:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00144F5Cu) [[unlikely]] return; }
L_00144F5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 84u, depth + 1u); else { c.pc = 0x001450C0u; return; } if (c.pc != 0x00144F6Cu) [[unlikely]] return; }
L_00144F6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F7Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00144F7Cu) [[unlikely]] return; }
L_00144F7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 84u, depth + 1u); else { c.pc = 0x001450C0u; return; } if (c.pc != 0x00144F8Cu) [[unlikely]] return; }
L_00144F8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00144FA8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00144FA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144FC0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00144FC0:
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[6].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00145010; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00145010:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00145038; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00145038:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00145058; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00145068; } }
    c.budget -= 1;
L_00145058:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00145068:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00145088; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00145098; } }
    c.budget -= 1;
L_00145088:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00145098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001450C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001450F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001450F0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001450F0u) [[unlikely]] return; }
L_001450F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145100; } }
L_001450F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145100u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00145100u) [[unlikely]] return; }
L_00145100:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145118; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 2;
L_00145118:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145124u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00145124u) [[unlikely]] return; }
L_00145124:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145130u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00145130u) [[unlikely]] return; }
L_00145130:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00145200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001451C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00145170; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00145220; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00145220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145220; } }
L_00145170:
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[18], c.r[16].w[0] + 48u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00145180:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014518Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0014518Cu) [[unlikely]] return; }
L_0014518C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145180u | kUnwind; return; } goto L_00145180; } }
    set32(c.r[4], c.r[16].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451A8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001451A8u) [[unlikely]] return; }
L_001451A8:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001451B4u) [[unlikely]] return; }
L_001451B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145220; } }
    c.budget -= 1;
L_001451C0:
    set32(c.r[18], c.r[16].w[0] + 48u);
    set32(c.r[17], c.r[18].w[0] + 48u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001451D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451DCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001451DCu) [[unlikely]] return; }
L_001451DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001451D0u | kUnwind; return; } goto L_001451D0; } }
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451F8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001451F8u) [[unlikely]] return; }
L_001451F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145220; } }
L_00145200:
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145210u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00145210u) [[unlikely]] return; }
L_00145210:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014521Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0014521Cu) [[unlikely]] return; }
L_0014521C:
    c.budget -= 1;
L_00145220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00145240:
    set32(c.r[8], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00145270; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145338; } }
    c.budget -= 1;
L_00145270:
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00145330; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145330; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    st16((c.r[8].w[0] + 520u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 522u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[8].w[0] + 604u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 608u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 612u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 616u), c.f[12]);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001452D8; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 520u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0] + 520u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00145308; } }
    c.budget -= 1;
L_001452D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001452F8; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 520u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0] + 520u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00145308; } }
    c.budget -= 1;
L_001452F8:
    c.r[2].d[0] = ld16((c.r[8].w[0] + 520u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[8].w[0] + 520u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00145308:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00145328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8657u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[2].w[0] + 519u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00145328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00145338; } }
L_00145330:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00145338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00145340:
    c.r[4].d[0] = ld16((c.r[4].w[0] + 520u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001453E0; } }
    c.budget -= 1;
L_00145360:
    c.r[3].d[0] = c.r[4].d[0] & 61440ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16384u);  if (t) { goto L_001453C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001453A8; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00145390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001453D8; } }
    c.budget -= 1;
L_00145390:
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001453D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001453E0; } }
L_001453A8:
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001453D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001453E0; } }
L_001453C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001453D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001453E0; } }
L_001453D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001453E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001453F0:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[4], c.r[4].w[0] << 13);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_00145440:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_00145518; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[28].w[0] - 23820u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 1u);  if (t) { goto L_00145518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[16].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 18784u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_001454B8:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00145518; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 48u);  if (t) { goto L_00145508; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 2944u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001454F8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001454F8u) [[unlikely]] return; }
L_001454F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001455B8; } }
L_00145508:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001454B8u | kUnwind; return; } goto L_001454B8; } }
L_00145518:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_001455B0; } }
    set32(c.r[2], c.r[28].w[0] - 23812u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 1u);  if (t) { goto L_001455B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[16].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 22880u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00145550:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001455B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 48u);  if (t) { goto L_001455A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 2944u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00145590u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00145590u) [[unlikely]] return; }
L_00145590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001455A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001455B8; } }
L_001455A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145550u | kUnwind; return; } goto L_00145550; } }
L_001455B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001455B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001455E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00145618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145778; } }
    c.budget -= 1;
L_00145618:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00145678; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00145678; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_00145678; } }
    goto L_00145640;
L_0014563C:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.budget -= 1;
L_00145640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 360u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00145670; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00145678; } }
    c.budget -= 1;
L_00145670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145778; } }
L_00145678:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001456D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001456B4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001456B4u) [[unlikely]] return; }
L_001456B4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001456C4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001456C4u) [[unlikely]] return; }
L_001456C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145700; } }
    c.budget -= 1;
L_001456D0:
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 12;
L_00145700:
    set32(c.r[16], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145778; } }
    c.budget -= 1;
L_00145718:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_00145768; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2944u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00145754u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00145754u) [[unlikely]] return; }
L_00145754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00145778; } }
    c.budget -= 1;
L_00145768:
    set32(c.r[16], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_00145770:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145718u | kUnwind; return; } goto L_00145718; } }
L_00145778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00145790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001457C0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x001457C0u) [[unlikely]] return; }
L_001457C0:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001457D0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001457D0u) [[unlikely]] return; }
L_001457D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001457F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001457E4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001457E4u) [[unlikely]] return; }
L_001457E4:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001457F8; } }
L_001457F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001457F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00145810:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145844u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00145844u) [[unlikely]] return; }
L_00145844:
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145854u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x00145854u) [[unlikely]] return; }
L_00145854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 224u);  if (t) { goto L_00145920; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145868u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145868u) [[unlikely]] return; }
L_00145868:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145928; } }
L_00145880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145888u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00145888u) [[unlikely]] return; }
L_00145888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145898u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00145898u) [[unlikely]] return; }
L_00145898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458A4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001458A4u) [[unlikely]] return; }
L_001458A4:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458B0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001458B0u) [[unlikely]] return; }
L_001458B0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458BCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001458BCu) [[unlikely]] return; }
L_001458BC:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00145918; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00145918; } }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458F4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001458F4u) [[unlikely]] return; }
L_001458F4:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00145918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014590Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0014590Cu) [[unlikely]] return; }
L_0014590C:
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00145928; } }
L_00145918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145928; } }
L_00145920:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00145928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00145950:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014599Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014599Cu) [[unlikely]] return; }
L_0014599C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001459ACu) [[unlikely]] return; }
L_001459AC:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
L_001459B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[20].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459E8u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001459E8u) [[unlikely]] return; }
L_001459E8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459F8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001459F8u) [[unlikely]] return; }
L_001459F8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A04u); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00145A04u) [[unlikely]] return; }
L_00145A04:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_00145A20; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 2;
L_00145A20:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A30u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00145A30u) [[unlikely]] return; }
L_00145A30:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A3Cu); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00145A3Cu) [[unlikely]] return; }
L_00145A3C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_00145A58; } }
    c.r[19].d[0] = c.r[19].d[0] | 2ull;
    c.budget -= 2;
L_00145A58:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00145A70; } }
    st32((c.r[21].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145BF8; } }
    c.budget -= 1;
L_00145A70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00145BA0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00145B20; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00145A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145BA0; } }
L_00145A98:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145AA8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00145AA8u) [[unlikely]] return; }
L_00145AA8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145AB4u); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00145AB4u) [[unlikely]] return; }
L_00145AB4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00145AD8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00145AF0; } }
    c.budget -= 1;
L_00145AD8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145AE8u); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00145AE8u) [[unlikely]] return; }
L_00145AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145B08; } }
L_00145AF0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00145B08u) [[unlikely]] return; }
L_00145B08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B14u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00145B14u) [[unlikely]] return; }
L_00145B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 128ull;  if (t) { goto L_00145BA0; } }
    c.budget -= 1;
L_00145B20:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B30u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00145B30u) [[unlikely]] return; }
L_00145B30:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B3Cu); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00145B3Cu) [[unlikely]] return; }
L_00145B3C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00145B60; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00145B78; } }
    c.budget -= 1;
L_00145B60:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B70u); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00145B70u) [[unlikely]] return; }
L_00145B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145B90; } }
L_00145B78:
    set32(c.r[4], c.r[29].w[0] + 176u);
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B90u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00145B90u) [[unlikely]] return; }
L_00145B90:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B9Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00145B9Cu) [[unlikely]] return; }
L_00145B9C:
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 1;
L_00145BA0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001459B8u | kUnwind; return; } goto L_001459B8; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_00145BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_00145BF0; } }
    c.budget -= 1;
L_00145BC8:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00145BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145BDCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145BDCu) [[unlikely]] return; }
L_00145BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { goto L_00145BF0; } }
    c.budget -= 1;
L_00145BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00145BF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00145BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00145C30:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145C78u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00145C78u) [[unlikely]] return; }
L_00145C78:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_00145C88:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    set32(c.r[6], c.r[20].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145C9Cu); set32(c.r[7], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0010(c, 498u, depth + 1u); else { c.pc = 0x00143BB0u; return; } if (c.pc != 0x00145C9Cu) [[unlikely]] return; }
L_00145C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 400u);  if (t) { goto L_00145D38; } }
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CB0u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x00145CB0u) [[unlikely]] return; }
L_00145CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 384u);  if (t) { goto L_00145D38; } }
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CC4u); set32(c.r[6], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00145CC4u) [[unlikely]] return; }
L_00145CC4:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00145CDCu) [[unlikely]] return; }
L_00145CDC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00145CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[20].w[0] + 192u));  if (t) { goto L_00145D00; } }
L_00145CF8:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_00145D00:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D0Cu); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00145D0Cu) [[unlikely]] return; }
L_00145D0C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D1Cu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00145D1Cu) [[unlikely]] return; }
L_00145D1C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D28u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145D28u) [[unlikely]] return; }
L_00145D28:
    st32((c.r[21].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00145E60; } }
    c.budget -= 1;
L_00145D38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145C88u | kUnwind; return; } goto L_00145C88; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[19], 0u - 1u);
    set32(c.r[18], c.r[18].w[0] + 2824u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 368u);
    c.budget -= 5;
L_00145D60:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D88u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00145D88u) [[unlikely]] return; }
L_00145D88:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D98u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x00145D98u) [[unlikely]] return; }
L_00145D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_00145E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145DA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145DA8u) [[unlikely]] return; }
L_00145DA8:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_00145E20; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00145DD0; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00145E20; } }
L_00145DD0:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145DE0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00145DE0u) [[unlikely]] return; }
L_00145DE0:
    c.f[12] = ld32((c.r[20].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145DF0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00145DF0u) [[unlikely]] return; }
L_00145DF0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145E00u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00145E00u) [[unlikely]] return; }
L_00145E00:
    c.f[21] = c.f[20];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00145E20; } }
    c.budget -= 1;
L_00145E10:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00145E60; } }
    c.budget -= 1;
L_00145E20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145D60u | kUnwind; return; } goto L_00145D60; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145E60; } }
    c.budget -= 1;
L_00145E48:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145E54u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145E54u) [[unlikely]] return; }
L_00145E54:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00145E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00145E90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145EC0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00145EC0u) [[unlikely]] return; }
L_00145EC0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145ED0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x00145ED0u) [[unlikely]] return; }
L_00145ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_00145F10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145EE0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145EE0u) [[unlikely]] return; }
L_00145EE0:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00145F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145EF8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00145EF8u) [[unlikely]] return; }
L_00145EF8:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00145F18; } }
    c.budget -= 1;
L_00145F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00145F18; } }
L_00145F10:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00145F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00145F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00145F58; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001460B0; } }
L_00145F58:
    set32(c.r[2], ld32((c.r[4].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145F70; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001460B0; } }
L_00145F70:
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[16], c.r[2].w[0] + 48u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00146048; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00146038; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00145FF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00145FD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00145FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001460A0; } }
    c.budget -= 1;
L_00145FB8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145FC4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00145FC4u) [[unlikely]] return; }
L_00145FC4:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.f[0]);  if (t) { goto L_001460A0; } }
L_00145FD8:
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145FE4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00145FE4u) [[unlikely]] return; }
L_00145FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001460A0; } }
    c.budget -= 1;
L_00145FF0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146000u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00146000u) [[unlikely]] return; }
L_00146000:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014600Cu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0014600Cu) [[unlikely]] return; }
L_0014600C:
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146018u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00146018u) [[unlikely]] return; }
L_00146018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014602Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0014602Cu) [[unlikely]] return; }
L_0014602C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001460A0; } }
    c.budget -= 1;
L_00146038:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001460B0; } }
    c.budget -= 1;
L_00146048:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146054u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00146054u) [[unlikely]] return; }
L_00146054:
    set32(c.r[3], c.r[29].w[0] + 36u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00146090; } }
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_00146090:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 4;
L_001460A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001460A8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001460A8u) [[unlikely]] return; }
L_001460A8:
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_001460B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001460C0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00146100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00146358; } }
L_00146100:
    set32(c.r[16], ld32((c.r[2].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00146118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00146358; } }
    c.budget -= 1;
L_00146118:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00146130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146358; } }
    c.budget -= 1;
L_00146130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146138u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00146138u) [[unlikely]] return; }
L_00146138:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146158u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00146158u) [[unlikely]] return; }
L_00146158:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146168u); set32(c.r[5], c.r[5].w[0] + 2976u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00146168u) [[unlikely]] return; }
L_00146168:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00146180; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00146180:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146194u); set32(c.r[5], c.r[5].w[0] + 2992u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00146194u) [[unlikely]] return; }
L_00146194:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001461AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001461AC:
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001461C0u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001461C0u) [[unlikely]] return; }
L_001461C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001461D0u); set32(c.r[5], c.r[5].w[0] + 2976u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001461D0u) [[unlikely]] return; }
L_001461D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001461E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001461E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001461FCu); set32(c.r[5], c.r[5].w[0] + 2992u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001461FCu) [[unlikely]] return; }
L_001461FC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00146214; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00146214:
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00146228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00146358; } }
L_00146228:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146238u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00146238u) [[unlikely]] return; }
L_00146238:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00146250; } }
    c.r[20].d[0] = c.r[20].d[0] | 16ull;
    c.budget -= 2;
L_00146250:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00146268; } }
    c.r[20].d[0] = c.r[20].d[0] | 32ull;
    c.budget -= 2;
L_00146268:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146274u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00146274u) [[unlikely]] return; }
L_00146274:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00146288; } }
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 1;
L_00146288:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001462A0; } }
    c.r[20].d[0] = c.r[20].d[0] | 2ull;
    c.budget -= 2;
L_001462A0:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_00146328; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00146328; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_00146328; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00146300; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00146300; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00146300; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_001462F8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001462F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146350; } }
L_001462F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00146358; } }
L_00146300:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146310u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x00146310u) [[unlikely]] return; }
L_00146310:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00146350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00146358; } }
    c.budget -= 1;
L_00146328:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146338u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x00146338u) [[unlikely]] return; }
L_00146338:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00146350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00146358; } }
    c.budget -= 1;
L_00146350:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00146358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00146380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2896u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_001463A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00146478; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 1;
L_001463D8:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_00146460; } }
L_001463E8:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[10].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00146448; } }
L_00146418:
    set32(c.r[7], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0])));
    set32(c.r[5], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146418u | kUnwind; return; } goto L_00146418; } }
    c.budget -= 1;
L_00146448:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[5].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001463E8u | kUnwind; return; } goto L_001463E8; } }
    c.budget -= 1;
L_00146460:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001463D8u | kUnwind; return; } goto L_001463D8; } }
    c.budget -= 1;
L_00146478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00146480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001464B0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 244u, depth + 1u); else { c.pc = 0x00147490u; return; } if (c.pc != 0x001464B0u) [[unlikely]] return; }
L_001464B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00146588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001464C0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 245u, depth + 1u); else { c.pc = 0x00147560u; return; } if (c.pc != 0x001464C0u) [[unlikely]] return; }
L_001464C0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00146588; } }
L_001464D0:
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00146570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001464F0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00147BF0u; return; } if (c.pc != 0x001464F0u) [[unlikely]] return; }
L_001464F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146570; } }
    c.f[5] = ld32((c.r[19].w[0] + 48u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 56u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00146560; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146540u); c.f[12] = fp::sub(c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00146540u) [[unlikely]] return; }
L_00146540:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146550u); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00146550u) [[unlikely]] return; }
L_00146550:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00146568; } }
    c.budget -= 1;
L_00146560:
    c.f[20] = c.f[22];
    c.budget -= 2;
L_00146568:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00146570:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001464D0u | kUnwind; return; } goto L_001464D0; } }
    c.budget -= 1;
L_00146588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[0] = c.f[20];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001465C0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 520u));
    c.f[20] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00146E68; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 604u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00146630; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146630; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00146640; } }
L_00146630:
    st16((c.r[21].w[0] + 520u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 522u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00146E68; } }
    c.budget -= 1;
L_00146640:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146A50; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 612u)));
    c.f[12] = ld32((c.r[21].w[0] + 616u));
    set32(c.r[19], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146668u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00146668u) [[unlikely]] return; }
L_00146668:
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00146678:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146688u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00146688u) [[unlikely]] return; }
L_00146688:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 16u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146678u | kUnwind; return; } goto L_00146678; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146768; } }
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146720; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146720:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146740; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146740:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146760; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146768:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00146858; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146790u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x00146790u) [[unlikely]] return; }
L_00146790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146858; } }
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146810; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
L_00146810:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146830; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146830:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146850; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146858:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = ld32((c.r[21].w[0] + 616u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146868u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00146868u) [[unlikely]] return; }
L_00146868:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00146870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146880u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00146880u) [[unlikely]] return; }
L_00146880:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146870u | kUnwind; return; } goto L_00146870; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146960; } }
    c.f[5] = ld32((c.r[18].w[0] + 20u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[18].w[0] + 16u));
    c.f[4] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146918:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146938; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146938:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146958; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146960:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00146E68; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146988u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x00146988u) [[unlikely]] return; }
L_00146988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146E68; } }
    c.f[5] = ld32((c.r[18].w[0] + 20u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[18].w[0] + 16u));
    c.f[4] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146A08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
L_00146A08:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146A28; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146A28:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146A48; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146A50:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146AE8; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 608u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[17], ld32((c.r[21].w[0] + 612u)));
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146A74u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00146A74u) [[unlikely]] return; }
L_00146A74:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146A80u); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00146A80u) [[unlikely]] return; }
L_00146A80:
    c.f[1] = ld32((c.r[21].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00146E68; } }
    c.f[7] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[5] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[6] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[4] = fp::mul(c.f[4], c.f[7]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::mul(c.f[7], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146AE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], ld32((c.r[21].w[0] + 608u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[21].w[0] + 612u)));  if (t) { goto L_00146BB8; } }
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146B70:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146B90; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146B90:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146BB0; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146BB8:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00146CA8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146BE0u); set32(c.r[7], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x00146BE0u) [[unlikely]] return; }
L_00146BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146CA8; } }
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146C60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
L_00146C60:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146C80; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146C80:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146CA0; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146CA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146D78; } }
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[17].w[0] + 16u));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146D30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
L_00146D30:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146D50; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146D50:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146D70; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146D78:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00146E68; } }
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146DA0u); set32(c.r[7], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x00146DA0u) [[unlikely]] return; }
L_00146DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146E68; } }
    c.f[5] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[2], 0u + 72u);
    c.f[6] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[17].w[0] + 16u));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146E20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40580000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
L_00146E20:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40870000u);  if (t) { goto L_00146E40; } }
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146E40:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_00146E60; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_00146E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F50; } }
L_00146E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146E70u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 244u, depth + 1u); else { c.pc = 0x00147490u; return; } if (c.pc != 0x00146E70u) [[unlikely]] return; }
L_00146E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00146F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146E80u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 245u, depth + 1u); else { c.pc = 0x00147560u; return; } if (c.pc != 0x00146E80u) [[unlikely]] return; }
L_00146E80:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00146F48; } }
L_00146E90:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00146F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146EB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00147BF0u; return; } if (c.pc != 0x00146EB0u) [[unlikely]] return; }
L_00146EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146F30; } }
    c.f[5] = ld32((c.r[18].w[0] + 48u));
    c.f[4] = ld32((c.r[20].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 56u));
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00146F20; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146F00u); c.f[12] = fp::sub(c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00146F00u) [[unlikely]] return; }
L_00146F00:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146F10u); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00146F10u) [[unlikely]] return; }
L_00146F10:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00146F28; } }
    c.budget -= 1;
L_00146F20:
    c.f[20] = c.f[22];
    c.budget -= 2;
L_00146F28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00146F30:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146E90u | kUnwind; return; } goto L_00146E90; } }
    c.budget -= 1;
L_00146F48:
    c.f[0] = c.f[20];
    c.budget -= 2;
L_00146F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00146F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146FA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x00146FA4u) [[unlikely]] return; }
L_00146FA4:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00146FC8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00146FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00146FE0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 520u));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00147350; } }
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001471E8; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 612u)));
    c.f[12] = ld32((c.r[20].w[0] + 616u));
    set32(c.r[17], ld32((c.r[20].w[0] + 608u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147060u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00147060u) [[unlikely]] return; }
L_00147060:
    set32(c.r[22], c.r[29].w[0] + 192u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_00147070:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147080u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00147080u) [[unlikely]] return; }
L_00147080:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 16u);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147070u | kUnwind; return; } goto L_00147070; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001470C8; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_001470C8:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00147120; } }
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001470F0u); set32(c.r[7], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x001470F0u) [[unlikely]] return; }
L_001470F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147120; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_00147120:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = ld32((c.r[20].w[0] + 616u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147130u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00147130u) [[unlikely]] return; }
L_00147130:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00147138:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147148u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00147148u) [[unlikely]] return; }
L_00147148:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 16u);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147138u | kUnwind; return; } goto L_00147138; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00147190; } }
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_00147190:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00147350; } }
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001471B8u); set32(c.r[7], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x001471B8u) [[unlikely]] return; }
L_001471B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147350; } }
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_001471E8:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147238; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 608u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[16], ld32((c.r[20].w[0] + 612u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147208u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00147208u) [[unlikely]] return; }
L_00147208:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147214u); st32((c.r[29].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00147214u) [[unlikely]] return; }
L_00147214:
    c.f[1] = ld32((c.r[20].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00147350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014722Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014722Cu) [[unlikely]] return; }
L_0014722C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00147458; } }
    c.budget -= 1;
L_00147238:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], ld32((c.r[20].w[0] + 608u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[20].w[0] + 612u)));  if (t) { goto L_00147270; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_00147270:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001472C0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147290u); set32(c.r[7], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x00147290u) [[unlikely]] return; }
L_00147290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001472C0; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_001472C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001472F8; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
    c.budget -= 1;
L_001472F8:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00147350; } }
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147320u); set32(c.r[7], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x00147320u) [[unlikely]] return; }
L_00147320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147350; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00147458; } }
L_00147350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147358u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 244u, depth + 1u); else { c.pc = 0x00147490u; return; } if (c.pc != 0x00147358u) [[unlikely]] return; }
L_00147358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00147450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147368u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 245u, depth + 1u); else { c.pc = 0x00147560u; return; } if (c.pc != 0x00147368u) [[unlikely]] return; }
L_00147368:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00147448; } }
L_00147378:
    set32(c.r[20], ld32((c.r[17].w[0])));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = ld32((c.r[19].w[0] + 4u));  if (t) { goto L_00147430; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014739Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00147BF0u; return; } if (c.pc != 0x0014739Cu) [[unlikely]] return; }
L_0014739C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147430; } }
    c.f[5] = ld32((c.r[20].w[0] + 48u));
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 56u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00147408; } }
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001473ECu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001473ECu) [[unlikely]] return; }
L_001473EC:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001473FCu); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001473FCu) [[unlikely]] return; }
L_001473FC:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147428; } }
L_00147408:
    c.f[3] = ld32((c.r[20].w[0] + 48u));
    c.f[2] = ld32((c.r[20].w[0] + 52u));
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_00147428:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00147430:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147378u | kUnwind; return; } goto L_00147378; } }
    c.budget -= 1;
L_00147448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00147458; } }
L_00147450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00147458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00147490:
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.f[6] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001474BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001474BC:
    c.f[4] = ld32((c.r[5].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001474E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001474E0:
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[6], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_00147518; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147518:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_00147550; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];  c.pc = t; return; }
L_00147560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001475A4u);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x001475A4u) [[unlikely]] return; }
L_001475A4:
    c.f[2] = fp::cvt_w_s(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[16], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001475D8u);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x001475D8u) [[unlikely]] return; }
L_001475D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00147610:
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[8] = ld32((c.r[5].w[0] + 16u));
    c.f[10] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0] + 36u));
    c.f[9] = ld32((c.r[5].w[0] + 32u));
    c.f[7] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[8], c.f[6]);
    c.f[2] = fp::sub(c.f[5], c.f[10]);
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[9], c.f[6]);
    c.f[2] = fp::sub(c.f[7], c.f[10]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_001477E8; } }
    c.f[11] = ld32((c.r[4].w[0]));
    set32(c.r[7], c.r[29].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.f[6] = fp::sub(c.f[6], c.f[11]);
    c.f[4] = fp::sub(c.f[7], c.f[3]);
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    c.f[8] = fp::sub(c.f[8], c.f[11]);
    c.f[7] = fp::sub(c.f[10], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[8]);
    st32((c.r[29].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001476A0; } }
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 3;
L_001476A0:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001476B8; } }
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 3;
L_001476B8:
    set32(c.r[3], c.r[29].w[0] + 20u);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[5] = fp::sub(c.f[5], c.f[3]);
    c.f[3] = fp::sub(c.f[9], c.f[11]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[9] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[8], c.f[5]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_00147708; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_00147708:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00147720; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
L_00147720:
    c.f[2] = fp::mul(c.f[3], c.f[7]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[5], c.f[6]);
    set32(c.r[3], c.r[29].w[0] + 24u);
    st32((c.r[3].w[0]), c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 8u);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[2] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.f[4] = fp::mul(c.f[0], c.f[2]);  if (t) { goto L_00147760; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_00147760:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00147778; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
L_00147778:
    set32(c.r[2], 0u + 1u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0014779C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014779C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001477BC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001477BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001477BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001478F8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001477DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001477DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001478F8; } }
    c.budget -= 1;
L_001477E8:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.f[11] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[8]));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_00147838; } }
    fpu_compare(c, fp::key(c.f[8]) == fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147838; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00147830; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00147838; } }
    c.budget -= 1;
L_00147830:
    c.f[11] = c.f[6];
    c.budget -= 2;
L_00147838:
    fpu_compare(c, fp::key(c.f[10]) == fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147870; } }
    fpu_compare(c, fp::key(c.f[7]) == fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147870; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00147868; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00147870; } }
L_00147868:
    c.f[0] = c.f[10];
    c.budget -= 2;
L_00147870:
    c.f[1] = fp::sub(c.f[7], c.f[0]);
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[2] = fp::sub(c.f[10], c.f[0]);
    c.f[3] = fp::sub(c.f[8], c.f[11]);
    c.f[4] = fp::sub(c.f[9], c.f[11]);
    c.f[0] = fp::sub(c.f[6], c.f[11]);
    c.facc = fp::mul(c.f[3], c.f[5]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001478B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001478B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001478D4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001478D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001478D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001478F4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001478F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001478F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001478F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00147900:
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[8] = ld32((c.r[5].w[0] + 20u));
    c.f[10] = ld32((c.r[5].w[0] + 8u));
    c.f[5] = ld32((c.r[5].w[0] + 40u));
    c.f[9] = ld32((c.r[5].w[0] + 36u));
    c.f[7] = ld32((c.r[5].w[0] + 24u));
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[8], c.f[6]);
    c.f[2] = fp::sub(c.f[5], c.f[10]);
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[9], c.f[6]);
    c.f[2] = fp::sub(c.f[7], c.f[10]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_00147AD8; } }
    c.f[11] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[7], c.r[29].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.f[6] = fp::sub(c.f[6], c.f[11]);
    c.f[4] = fp::sub(c.f[7], c.f[3]);
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    c.f[8] = fp::sub(c.f[8], c.f[11]);
    c.f[7] = fp::sub(c.f[10], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[8]);
    st32((c.r[29].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00147990; } }
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 3;
L_00147990:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001479A8; } }
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 3;
L_001479A8:
    set32(c.r[3], c.r[29].w[0] + 20u);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[5] = fp::sub(c.f[5], c.f[3]);
    c.f[3] = fp::sub(c.f[9], c.f[11]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[9] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[8], c.f[5]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_001479F8; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_001479F8:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00147A10; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
L_00147A10:
    c.f[2] = fp::mul(c.f[3], c.f[7]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[5], c.f[6]);
    set32(c.r[3], c.r[29].w[0] + 24u);
    st32((c.r[3].w[0]), c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 8u);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[2] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.f[4] = fp::mul(c.f[0], c.f[2]);  if (t) { goto L_00147A50; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_00147A50:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00147A68; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
L_00147A68:
    set32(c.r[2], 0u + 1u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_00147A8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147AAC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147AAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147BE8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147ACC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147BE8; } }
    c.budget -= 1;
L_00147AD8:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.f[11] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[8]));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_00147B28; } }
    fpu_compare(c, fp::key(c.f[8]) == fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B28; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00147B20; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00147B28; } }
    c.budget -= 1;
L_00147B20:
    c.f[11] = c.f[6];
    c.budget -= 2;
L_00147B28:
    fpu_compare(c, fp::key(c.f[10]) == fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B60; } }
    fpu_compare(c, fp::key(c.f[7]) == fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B60; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00147B58; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00147B60; } }
L_00147B58:
    c.f[0] = c.f[10];
    c.budget -= 2;
L_00147B60:
    c.f[1] = fp::sub(c.f[7], c.f[0]);
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[2] = fp::sub(c.f[10], c.f[0]);
    c.f[3] = fp::sub(c.f[8], c.f[11]);
    c.f[4] = fp::sub(c.f[9], c.f[11]);
    c.f[0] = fp::sub(c.f[6], c.f[11]);
    c.facc = fp::mul(c.f[3], c.f[5]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147BA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00147BC4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147BC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00147BE4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147BE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147BE4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00147BE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00147BF0:
    c.f[8] = ld32((c.r[5].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 24u));
    c.f[11] = ld32((c.r[5].w[0]));
    c.f[9] = ld32((c.r[5].w[0] + 32u));
    c.f[10] = ld32((c.r[5].w[0] + 40u));
    c.f[5] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[7], c.f[8]);
    c.f[2] = fp::sub(c.f[9], c.f[11]);
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[10], c.f[8]);
    c.f[2] = fp::sub(c.f[5], c.f[11]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_00147DC8; } }
    c.f[12] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[7], c.r[29].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.f[6] = fp::sub(c.f[8], c.f[12]);
    c.f[4] = fp::sub(c.f[5], c.f[3]);
    c.f[8] = fp::sub(c.f[7], c.f[12]);
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    c.f[7] = fp::sub(c.f[11], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[8]);
    st32((c.r[29].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00147C80; } }
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 3;
L_00147C80:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00147C98; } }
    c.f[1] = ld32((c.r[29].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 3;
L_00147C98:
    set32(c.r[3], c.r[29].w[0] + 20u);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[5] = fp::sub(c.f[9], c.f[3]);
    c.f[3] = fp::sub(c.f[10], c.f[12]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[9] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[8], c.f[5]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_00147CE8; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_00147CE8:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00147D00; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
L_00147D00:
    c.f[2] = fp::mul(c.f[3], c.f[7]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[5], c.f[6]);
    set32(c.r[3], c.r[29].w[0] + 24u);
    st32((c.r[3].w[0]), c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 8u);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[2] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.f[4] = fp::mul(c.f[0], c.f[2]);  if (t) { goto L_00147D40; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 2;
L_00147D40:
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00147D58; } }
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
L_00147D58:
    set32(c.r[2], 0u + 1u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_00147D7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147D9C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147D9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147D9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147E88; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00147DBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147E88; } }
    c.budget -= 1;
L_00147DC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[6] = fp::sub(c.f[7], c.f[3]);
    c.f[7] = fp::sub(c.f[5], c.f[2]);
    c.f[5] = fp::sub(c.f[8], c.f[3]);
    c.f[4] = fp::sub(c.f[11], c.f[2]);
    c.facc = fp::mul(c.f[5], c.f[7]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[6]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00147E00; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147E00:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147E48; } }
    c.f[0] = fp::sub(c.f[9], c.f[2]);
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[10], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00147E34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147E34:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147E48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00147E48:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00147E88; } }
    c.f[0] = fp::sub(c.f[10], c.f[3]);
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.f[9], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00147E78; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147E78:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147E88; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00147E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00147E90:
    c.f[10] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[8] = ld32((c.r[7].w[0]));
    c.f[9] = ld32((c.r[7].w[0] + 8u));
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[10]);
    c.f[2] = fp::sub(c.f[8], c.f[7]);
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[9], c.f[10]);
    c.f[2] = fp::sub(c.f[5], c.f[7]);
    c.f[11] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    fpu_compare(c, fp::key(c.f[11]) == fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00147F60; } }
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[6] = fp::sub(c.f[4], c.f[3]);
    c.f[4] = fp::sub(c.f[7], c.f[2]);
    c.f[7] = fp::sub(c.f[5], c.f[2]);
    c.f[5] = fp::sub(c.f[10], c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[7]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[6]));
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00147F28; } }
    c.f[0] = fp::sub(c.f[8], c.f[2]);
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[9], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00147F28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00147F28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = fp::sub(c.f[9], c.f[3]);  if (t) { goto L_00147F58; } }
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.f[8], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[1] = fp::mul(c.f[11], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00147F58; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00147F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0012(c, 3u, depth); } }
L_00147F60:
    c.r[2].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[6] = fp::sub(c.f[4], c.f[3]);
    c.f[4] = fp::sub(c.f[7], c.f[2]);
    c.f[7] = fp::sub(c.f[5], c.f[2]);
    c.f[5] = fp::sub(c.f[10], c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[7]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[6]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00147F98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147F98:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = fp::sub(c.f[8], c.f[2]);  if (t) { goto L_00147FD8; } }
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[9], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00147FC8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147FC8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147FD8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00147FD8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.f[0] = fp::sub(c.f[9], c.f[3]);  if (t) { [[clang::musttail]] return unit_0012(c, 3u, depth); } }
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.f[8], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0012(c, 2u, depth); } }
    [[clang::musttail]] return unit_0012(c, 1u, depth);
}

}
