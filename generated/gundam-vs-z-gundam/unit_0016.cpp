#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0016[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0,
    0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21,
    0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0,
};

void unit_0016(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00158000;
    case 2u: goto L_00158018;
    case 3u: goto L_00158050;
    case 4u: goto L_00158070;
    case 5u: goto L_00158158;
    case 6u: goto L_001581AC;
    case 7u: goto L_001581B8;
    case 8u: goto L_001581C4;
    case 9u: goto L_001581DC;
    case 10u: goto L_001581EC;
    case 11u: goto L_001581F8;
    case 12u: goto L_00158204;
    case 13u: goto L_0015820C;
    case 14u: goto L_0015821C;
    case 15u: goto L_00158230;
    case 16u: goto L_00158244;
    case 17u: goto L_00158258;
    case 18u: goto L_00158260;
    case 19u: goto L_00158288;
    case 20u: goto L_001582E8;
    case 21u: goto L_001582FC;
    case 22u: goto L_00158304;
    case 23u: goto L_00158320;
    case 24u: goto L_00158334;
    case 25u: goto L_00158434;
    case 26u: goto L_00158448;
    case 27u: goto L_00158454;
    case 28u: goto L_00158468;
    case 29u: goto L_0015848C;
    case 30u: goto L_001584A8;
    case 31u: goto L_001584C8;
    case 32u: goto L_001584E8;
    case 33u: goto L_001584F0;
    case 34u: goto L_0015851C;
    case 35u: goto L_00158540;
    case 36u: goto L_0015854C;
    case 37u: goto L_00158570;
    case 38u: goto L_00158580;
    case 39u: goto L_0015858C;
    case 40u: goto L_00158598;
    case 41u: goto L_001585AC;
    case 42u: goto L_001585B8;
    case 43u: goto L_001585C4;
    case 44u: goto L_00158610;
    case 45u: goto L_00158624;
    case 46u: goto L_0015863C;
    case 47u: goto L_001586F0;
    case 48u: goto L_001587E0;
    case 49u: goto L_00158860;
    case 50u: goto L_001588B0;
    case 51u: goto L_001588B8;
    case 52u: goto L_001588C8;
    case 53u: goto L_00158958;
    case 54u: goto L_001589D0;
    case 55u: goto L_001589D8;
    case 56u: goto L_00158A0C;
    case 57u: goto L_00158A1C;
    case 58u: goto L_00158A30;
    case 59u: goto L_00158A38;
    case 60u: goto L_00158A90;
    case 61u: goto L_00158AB4;
    case 62u: goto L_00158AD8;
    case 63u: goto L_00158C20;
    case 64u: goto L_00158C68;
    case 65u: goto L_00158C88;
    case 66u: goto L_00158C90;
    case 67u: goto L_00158CB0;
    case 68u: goto L_00158CC4;
    case 69u: goto L_00158CD8;
    case 70u: goto L_00158CE0;
    case 71u: goto L_00158D04;
    case 72u: goto L_00158D30;
    case 73u: goto L_00158D84;
    case 74u: goto L_00158D98;
    case 75u: goto L_00158DA0;
    case 76u: goto L_00158E90;
    case 77u: goto L_00158ECC;
    case 78u: goto L_00158EE0;
    case 79u: goto L_00158F04;
    case 80u: goto L_00158F0C;
    case 81u: goto L_00158F2C;
    case 82u: goto L_00158F40;
    case 83u: goto L_00158F80;
    case 84u: goto L_00158F90;
    case 85u: goto L_00158FB0;
    case 86u: goto L_00158FC4;
    case 87u: goto L_00159000;
    case 88u: goto L_001591E8;
    case 89u: goto L_001593D0;
    case 90u: goto L_00159470;
    case 91u: goto L_00159508;
    case 92u: goto L_00159510;
    case 93u: goto L_0015951C;
    case 94u: goto L_00159524;
    case 95u: goto L_00159538;
    case 96u: goto L_00159624;
    case 97u: goto L_0015962C;
    case 98u: goto L_00159684;
    case 99u: goto L_0015968C;
    case 100u: goto L_001596C0;
    case 101u: goto L_001596C8;
    case 102u: goto L_00159708;
    case 103u: goto L_00159710;
    case 104u: goto L_0015973C;
    case 105u: goto L_00159750;
    case 106u: goto L_00159758;
    case 107u: goto L_00159760;
    case 108u: goto L_00159774;
    case 109u: goto L_001597EC;
    case 110u: goto L_00159800;
    case 111u: goto L_00159868;
    case 112u: goto L_0015987C;
    case 113u: goto L_00159884;
    case 114u: goto L_00159898;
    case 115u: goto L_001598AC;
    case 116u: goto L_00159924;
    case 117u: goto L_00159938;
    case 118u: goto L_0015994C;
    case 119u: goto L_00159968;
    case 120u: goto L_00159984;
    case 121u: goto L_001599A8;
    case 122u: goto L_00159A58;
    case 123u: goto L_00159A6C;
    case 124u: goto L_00159AD0;
    case 125u: goto L_00159AE4;
    case 126u: goto L_00159B30;
    case 127u: goto L_00159B5C;
    case 128u: goto L_00159B78;
    case 129u: goto L_00159BD0;
    case 130u: goto L_00159BE4;
    case 131u: goto L_00159BEC;
    case 132u: goto L_00159C08;
    case 133u: goto L_00159C1C;
    case 134u: goto L_00159C30;
    case 135u: goto L_00159C4C;
    case 136u: goto L_00159C60;
    case 137u: goto L_00159C7C;
    case 138u: goto L_00159CD4;
    case 139u: goto L_00159CF8;
    case 140u: goto L_00159D14;
    case 141u: goto L_00159D2C;
    case 142u: goto L_00159D4C;
    case 143u: goto L_00159D60;
    case 144u: goto L_00159D74;
    case 145u: goto L_00159D90;
    case 146u: goto L_00159DE8;
    case 147u: goto L_00159DFC;
    case 148u: goto L_00159E10;
    case 149u: goto L_00159E28;
    case 150u: goto L_00159E4C;
    case 151u: goto L_00159EF0;
    case 152u: goto L_00159F18;
    case 153u: goto L_00159F2C;
    case 154u: goto L_00159F34;
    case 155u: goto L_00159F44;
    case 156u: goto L_00159F58;
    case 157u: goto L_00159FF4;
    case 158u: goto L_0015A034;
    case 159u: goto L_0015A048;
    case 160u: goto L_0015A05C;
    case 161u: goto L_0015A0B0;
    case 162u: goto L_0015A0C4;
    case 163u: goto L_0015A0D8;
    case 164u: goto L_0015A0F8;
    case 165u: goto L_0015A10C;
    case 166u: goto L_0015A128;
    case 167u: goto L_0015A130;
    case 168u: goto L_0015A14C;
    case 169u: goto L_0015A1D4;
    case 170u: goto L_0015A1E8;
    case 171u: goto L_0015A1F0;
    case 172u: goto L_0015A204;
    case 173u: goto L_0015A220;
    case 174u: goto L_0015A240;
    case 175u: goto L_0015A254;
    case 176u: goto L_0015A270;
    case 177u: goto L_0015A284;
    case 178u: goto L_0015A2A0;
    case 179u: goto L_0015A2E8;
    case 180u: goto L_0015A2F8;
    case 181u: goto L_0015A30C;
    case 182u: goto L_0015A320;
    case 183u: goto L_0015A380;
    case 184u: goto L_0015A390;
    case 185u: goto L_0015A39C;
    case 186u: goto L_0015A3C4;
    case 187u: goto L_0015A3F0;
    case 188u: goto L_0015A40C;
    case 189u: goto L_0015A424;
    case 190u: goto L_0015A430;
    case 191u: goto L_0015A444;
    case 192u: goto L_0015A460;
    case 193u: goto L_0015A468;
    case 194u: goto L_0015A478;
    case 195u: goto L_0015A488;
    case 196u: goto L_0015A490;
    case 197u: goto L_0015A498;
    case 198u: goto L_0015A4A8;
    case 199u: goto L_0015A4B0;
    case 200u: goto L_0015A4D8;
    case 201u: goto L_0015A520;
    case 202u: goto L_0015A52C;
    case 203u: goto L_0015A540;
    case 204u: goto L_0015A584;
    case 205u: goto L_0015A58C;
    case 206u: goto L_0015A63C;
    case 207u: goto L_0015A640;
    case 208u: goto L_0015A66C;
    case 209u: goto L_0015A680;
    case 210u: goto L_0015A690;
    case 211u: goto L_0015A6AC;
    case 212u: goto L_0015A6C8;
    case 213u: goto L_0015A710;
    case 214u: goto L_0015A71C;
    case 215u: goto L_0015A730;
    case 216u: goto L_0015A774;
    case 217u: goto L_0015A77C;
    case 218u: goto L_0015A828;
    case 219u: goto L_0015A854;
    case 220u: goto L_0015A868;
    case 221u: goto L_0015A878;
    case 222u: goto L_0015A880;
    case 223u: goto L_0015A8C0;
    case 224u: goto L_0015A8E4;
    case 225u: goto L_0015A9B0;
    case 226u: goto L_0015A9F8;
    case 227u: goto L_0015AA0C;
    case 228u: goto L_0015AA1C;
    case 229u: goto L_0015AA38;
    case 230u: goto L_0015AA4C;
    case 231u: goto L_0015AAC8;
    case 232u: goto L_0015AB04;
    case 233u: goto L_0015AB20;
    case 234u: goto L_0015AB34;
    case 235u: goto L_0015AB84;
    case 236u: goto L_0015AB98;
    case 237u: goto L_0015ABAC;
    case 238u: goto L_0015ABCC;
    case 239u: goto L_0015ABE0;
    case 240u: goto L_0015ABF4;
    case 241u: goto L_0015AC5C;
    case 242u: goto L_0015AC78;
    case 243u: goto L_0015AC8C;
    case 244u: goto L_0015ACDC;
    case 245u: goto L_0015ACF0;
    case 246u: goto L_0015AD04;
    case 247u: goto L_0015AD24;
    case 248u: goto L_0015AD38;
    case 249u: goto L_0015AD4C;
    case 250u: goto L_0015AD70;
    case 251u: goto L_0015AD94;
    case 252u: goto L_0015AE20;
    case 253u: goto L_0015AE3C;
    case 254u: goto L_0015AF80;
    case 255u: goto L_0015AFD8;
    case 256u: goto L_0015AFE8;
    case 257u: goto L_0015B004;
    case 258u: goto L_0015B018;
    case 259u: goto L_0015B020;
    case 260u: goto L_0015B034;
    case 261u: goto L_0015B048;
    case 262u: goto L_0015B064;
    case 263u: goto L_0015B078;
    case 264u: goto L_0015B088;
    case 265u: goto L_0015B0A4;
    case 266u: goto L_0015B0B4;
    case 267u: goto L_0015B0C8;
    case 268u: goto L_0015B0DC;
    case 269u: goto L_0015B0F8;
    case 270u: goto L_0015B10C;
    case 271u: goto L_0015B118;
    case 272u: goto L_0015B12C;
    case 273u: goto L_0015B138;
    case 274u: goto L_0015B140;
    case 275u: goto L_0015B1C4;
    case 276u: goto L_0015B1D8;
    case 277u: goto L_0015B1EC;
    case 278u: goto L_0015B1F4;
    case 279u: goto L_0015B254;
    case 280u: goto L_0015B268;
    case 281u: goto L_0015B27C;
    case 282u: goto L_0015B288;
    case 283u: goto L_0015B2A4;
    case 284u: goto L_0015B32C;
    case 285u: goto L_0015B334;
    case 286u: goto L_0015B394;
    case 287u: goto L_0015B3B0;
    case 288u: goto L_0015B3C4;
    case 289u: goto L_0015B410;
    case 290u: goto L_0015B424;
    case 291u: goto L_0015B438;
    case 292u: goto L_0015B458;
    case 293u: goto L_0015B46C;
    case 294u: goto L_0015B480;
    case 295u: goto L_0015B490;
    case 296u: goto L_0015B4AC;
    case 297u: goto L_0015B548;
    case 298u: goto L_0015B550;
    case 299u: goto L_0015B5BC;
    case 300u: goto L_0015B5D8;
    case 301u: goto L_0015B5EC;
    case 302u: goto L_0015B638;
    case 303u: goto L_0015B64C;
    case 304u: goto L_0015B660;
    case 305u: goto L_0015B680;
    case 306u: goto L_0015B694;
    case 307u: goto L_0015B6A8;
    case 308u: goto L_0015B6D0;
    case 309u: goto L_0015B6E4;
    case 310u: goto L_0015B760;
    case 311u: goto L_0015B79C;
    case 312u: goto L_0015B7B0;
    case 313u: goto L_0015B7C0;
    case 314u: goto L_0015B7D4;
    case 315u: goto L_0015B808;
    case 316u: goto L_0015B81C;
    case 317u: goto L_0015B830;
    case 318u: goto L_0015B84C;
    case 319u: goto L_0015B870;
    case 320u: goto L_0015B8B8;
    case 321u: goto L_0015B998;
    case 322u: goto L_0015B9D0;
    case 323u: goto L_0015B9D8;
    case 324u: goto L_0015BA2C;
    case 325u: goto L_0015BA50;
    case 326u: goto L_0015BAA0;
    case 327u: goto L_0015BAF0;
    case 328u: goto L_0015BB0C;
    case 329u: goto L_0015BB30;
    case 330u: goto L_0015BB48;
    case 331u: goto L_0015BB5C;
    case 332u: goto L_0015BBD0;
    case 333u: goto L_0015BBF0;
    case 334u: goto L_0015BBF8;
    case 335u: goto L_0015BC60;
    case 336u: goto L_0015BC74;
    case 337u: goto L_0015BC7C;
    case 338u: goto L_0015BD08;
    case 339u: goto L_0015BD1C;
    case 340u: goto L_0015BD88;
    case 341u: goto L_0015BDB0;
    case 342u: goto L_0015BDD8;
    case 343u: goto L_0015BE0C;
    case 344u: goto L_0015BE78;
    case 345u: goto L_0015BE8C;
    case 346u: goto L_0015BE94;
    case 347u: goto L_0015BF20;
    case 348u: goto L_0015BF34;
    case 349u: goto L_0015BF40;
    case 350u: goto L_0015BF58;
    case 351u: goto L_0015BF60;
    case 352u: goto L_0015BF9C;
    case 353u: goto L_0015BFDC;
    case 354u: goto L_0015BFF0;
    case 355u: goto L_0015BFF8;
    default: bad_entry(c, 0x00158000u); return;
    }
L_00158000:
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_00158018:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00158038; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158048; } }
L_00158038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00158050; } }
L_00158048:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00158050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00158070:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001585E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001585E0; } }
    set32(c.r[23], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001585E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001585E0; } }
    set32(c.r[20], ld32((c.r[23].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001585E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[3].d[0] = c.r[5].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 18u);  if (t) { goto L_00158118; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00158110; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 503u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00158118; } }
    c.budget -= 1;
L_00158110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001585E0; } }
L_00158118:
    set32(c.r[21], ld32((c.r[23].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001585E0; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 796u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00158140; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 803u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001585E0; } }
    c.budget -= 1;
L_00158140:
    set32(c.r[19], c.r[4].w[0] + 304u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 188u);
    c.budget -= 6;
L_00158158:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[3], c.r[5].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001585C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00158188; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001581A0; } }
L_00158188:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001581D0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001581D0; } }
    c.budget -= 1;
L_001581A0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581ACu); set32(c.r[5], c.r[23].w[0] + 32u);  if (depth < kMaxDepth) unit_002E(c, 346u, depth + 1u); else { c.pc = 0x001BB640u; return; } if (c.pc != 0x001581ACu) [[unlikely]] return; }
L_001581AC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 348u, depth + 1u); else { c.pc = 0x001BB7A0u; return; } if (c.pc != 0x001581B8u) [[unlikely]] return; }
L_001581B8:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581C4u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001581C4u) [[unlikely]] return; }
L_001581C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001581E0; } }
    c.budget -= 1;
L_001581D0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581DCu); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001581DCu) [[unlikely]] return; }
L_001581DC:
    c.budget -= 1;
L_001581E0:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 42u, depth + 1u); else { c.pc = 0x002D8AC0u; return; } if (c.pc != 0x001581ECu) [[unlikely]] return; }
L_001581EC:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 42u, depth + 1u); else { c.pc = 0x002D8AC0u; return; } if (c.pc != 0x001581F8u) [[unlikely]] return; }
L_001581F8:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 42u, depth + 1u); else { c.pc = 0x002D8AC0u; return; } if (c.pc != 0x00158204u) [[unlikely]] return; }
L_00158204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015820Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015820Cu) [[unlikely]] return; }
L_0015820C:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015821Cu); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015821Cu) [[unlikely]] return; }
L_0015821C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158230u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00158230u) [[unlikely]] return; }
L_00158230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158244u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158244u) [[unlikely]] return; }
L_00158244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158258u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00158258u) [[unlikely]] return; }
L_00158258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158260u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00158260u) [[unlikely]] return; }
L_00158260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158288u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158288u) [[unlikely]] return; }
L_00158288:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 498u)));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 496u)));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_001582D8; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001582D8; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001582D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001582E8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001582E8u) [[unlikely]] return; }
L_001582E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001582FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x001582FCu) [[unlikely]] return; }
L_001582FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00158304u) [[unlikely]] return; }
L_00158304:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158320u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158320u) [[unlikely]] return; }
L_00158320:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158334u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00158334u) [[unlikely]] return; }
L_00158334:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001583B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_001583B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001583B0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00158380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001583B0; } }
    c.budget -= 1;
L_00158380:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00158460; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00158460; } }
    c.budget -= 1;
L_001583B0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[30].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00158440; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158440; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_00158440; } }
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158434u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 354u, depth + 1u); else { c.pc = 0x0014FED0u; return; } if (c.pc != 0x00158434u) [[unlikely]] return; }
L_00158434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001584E8; } }
    c.budget -= 1;
L_00158440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158448u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 28u, depth + 1u); else { c.pc = 0x001501D0u; return; } if (c.pc != 0x00158448u) [[unlikely]] return; }
L_00158448:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158454u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0013(c, 352u, depth + 1u); else { c.pc = 0x0014FE70u; return; } if (c.pc != 0x00158454u) [[unlikely]] return; }
L_00158454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001584E8; } }
    c.budget -= 1;
L_00158460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158468u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00158468u) [[unlikely]] return; }
L_00158468:
    c.f[3] = ld32((c.r[22].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015848Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015848Cu) [[unlikely]] return; }
L_0015848C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584A8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001584A8u) [[unlikely]] return; }
L_001584A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F150000u);  if (t) { goto L_001584D0; } }
    set32(c.r[4], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584C8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x001584C8u) [[unlikely]] return; }
L_001584C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001584E8; } }
L_001584D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F150000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584E8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x001584E8u) [[unlikely]] return; }
L_001584E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 197u, depth + 1u); else { c.pc = 0x00152100u; return; } if (c.pc != 0x001584F0u) [[unlikely]] return; }
L_001584F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158570; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001585C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001585C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015851Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0015851Cu) [[unlikely]] return; }
L_0015851C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158540; } }
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158540u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 199u, depth + 1u); else { c.pc = 0x001521B0u; return; } if (c.pc != 0x00158540u) [[unlikely]] return; }
L_00158540:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015854Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0015854Cu) [[unlikely]] return; }
L_0015854C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158570; } }
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158570u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 199u, depth + 1u); else { c.pc = 0x001521B0u; return; } if (c.pc != 0x00158570u) [[unlikely]] return; }
L_00158570:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_001585A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 43u, depth + 1u); else { c.pc = 0x002D8AE0u; return; } if (c.pc != 0x00158580u) [[unlikely]] return; }
L_00158580:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015858Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 43u, depth + 1u); else { c.pc = 0x002D8AE0u; return; } if (c.pc != 0x0015858Cu) [[unlikely]] return; }
L_0015858C:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 43u, depth + 1u); else { c.pc = 0x002D8AE0u; return; } if (c.pc != 0x00158598u) [[unlikely]] return; }
L_00158598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001585C8; } }
L_001585A0:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 44u, depth + 1u); else { c.pc = 0x002D8B00u; return; } if (c.pc != 0x001585ACu) [[unlikely]] return; }
L_001585AC:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 44u, depth + 1u); else { c.pc = 0x002D8B00u; return; } if (c.pc != 0x001585B8u) [[unlikely]] return; }
L_001585B8:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 44u, depth + 1u); else { c.pc = 0x002D8B00u; return; } if (c.pc != 0x001585C4u) [[unlikely]] return; }
L_001585C4:
    c.budget -= 1;
L_001585C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158158u | kUnwind; return; } goto L_00158158; } }
    c.budget -= 1;
L_001585E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00158610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00158624u) [[unlikely]] return; }
L_00158624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00158848; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158650; } }
L_0015863C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00158848; } }
    c.budget -= 1;
L_00158650:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_00158758; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00158670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001587C0; } }
L_00158670:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 120u);  if (t) { goto L_00158690; } }
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00158690:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[11], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[6].w[0] + 13776u);
    set32(c.r[5], c.r[5].w[0] + 13616u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));
    c.r[10].d[0] = c.r[8].d[0] & 127ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 58u)));
    c.r[9].d[0] = c.r[9].d[0] & 4ull;
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 21;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001587C0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[6].w[0] + 12208u);
    c.budget -= 3;
L_001586F0:
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 24;
    { const bool t = c.r[5].d[0] != c.r[7].d[0]; set32(c.r[3], c.r[3].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001586F0u | kUnwind; return; } goto L_001586F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001587C0; } }
L_00158758:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00158788; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001587C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00158848; } }
    c.budget -= 1;
L_00158788:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001587C0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001587C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00158848; } }
L_001587C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00158840; } }
    c.f[0] = 0u;
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_001587E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001587F8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00158828; } }
L_001587F8:
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 12u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158828; } }
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_00158828:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001587E0u | kUnwind; return; } goto L_001587E0; } }
    c.budget -= 1;
L_00158840:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00158848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158860:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00158A68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 384u)));
    set32(c.r[22], c.r[16].w[0] + 304u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00158A68; } }
    c.budget -= 1;
L_001588B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588B8u); set32(c.r[20], ld32((c.r[21].w[0] + 8u)));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001588B8u) [[unlikely]] return; }
L_001588B8:
    c.f[13] = ld32((c.r[21].w[0] + 16u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588C8u); c.f[12] = ld32((c.r[21].w[0] + 12u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001588C8u) [[unlikely]] return; }
L_001588C8:
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[3], c.r[4].w[0] - 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 14u);  if (t) { goto L_001588F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001588F0; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00158990; } }
L_001588F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[3], 0u + 14u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_00158940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00158960; } }
    c.budget -= 1;
L_00158940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_00158958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158958u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00158958u) [[unlikely]] return; }
L_00158958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_00158968; } }
L_00158960:
    set32(c.r[4], 0u + 43u);
    c.budget -= 2;
L_00158968:
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_00158A50; } }
    c.budget -= 1;
L_00158990:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 8240u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[19], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_00158A50; } }
    c.budget -= 1;
L_001589D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001589D8u) [[unlikely]] return; }
L_001589D8:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 11616u);
    c.f[14] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[4], 0u + 1u);
    c.f[15] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A0Cu); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00158A0Cu) [[unlikely]] return; }
L_00158A0C:
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A1Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158A1Cu) [[unlikely]] return; }
L_00158A1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00158A30u) [[unlikely]] return; }
L_00158A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00158A38u) [[unlikely]] return; }
L_00158A38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001589D0u | kUnwind; return; } goto L_001589D0; } }
    c.budget -= 1;
L_00158A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001588B0u | kUnwind; return; } goto L_001588B0; } }
    c.budget -= 1;
L_00158A68:
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
L_00158A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00158C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AB4u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00158AB4u) [[unlikely]] return; }
L_00158AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00158C08; } }
    set32(c.r[5], c.r[16].w[0] + 304u);
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 120u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[10], 0u + 16u);
    c.budget -= 7;
L_00158AD8:
    c.r[9].d[0] = ld8((c.r[6].w[0] + 515u));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 221u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00158BE8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00158B20; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 515u));
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 106u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 9;
L_00158B20:
    c.r[9].d[0] = ld8((c.r[6].w[0] + 515u));
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[11].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = ld16((c.r[7].w[0] + 106u));
    c.budget -= 8;
    { const bool t = c.r[11].d[0] == c.r[7].d[0];  if (t) { goto L_00158B88; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 515u));
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[7].w[0] + 106u));
    c.r[7].d[0] = c.r[9].d[0] & 65280ull;
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00158B78; } }
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[7].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[7].d[0] = c.r[7].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_00158B88; } }
L_00158B78:
    c.r[7].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[7].d[0] = c.r[7].d[0] | 16ull;
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 4;
L_00158B88:
    c.r[7].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[10].d[0];  if (t) { goto L_00158BC8; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 23788u)));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 184u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00158BC8; } }
    c.r[7].d[0] = ld8((c.r[6].w[0] + 515u));
    c.r[9].d[0] = ld8((c.r[9].w[0] + 186u));
    set32(c.r[7], c.r[8].w[0] << (c.r[7].w[0] & 31u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00158BC8; } }
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00158BE8; } }
L_00158BC8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00158BE0; } }
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_00158BE8; } }
L_00158BE0:
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00158BE8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158AD8u | kUnwind; return; } goto L_00158AD8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00158C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158C20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158F60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00158F60; } }
    set32(c.r[18], c.r[4].w[0] + 304u);
    set32(c.r[19], c.r[19].w[0] - 27856u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00158C68:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 221u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00158F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C88u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00158C88u) [[unlikely]] return; }
L_00158C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00158C90u) [[unlikely]] return; }
L_00158C90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158CB0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158CB0u) [[unlikely]] return; }
L_00158CB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158CC4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00158CC4u) [[unlikely]] return; }
L_00158CC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158CD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00158CD8u) [[unlikely]] return; }
L_00158CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158CE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00158CE0u) [[unlikely]] return; }
L_00158CE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC3890000u);  if (t) { goto L_00158D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2960000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D04u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158D04u) [[unlikely]] return; }
L_00158D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158D30; } }
    c.budget -= 1;
L_00158D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[3].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2960000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D30u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158D30u) [[unlikely]] return; }
L_00158D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 2720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42580000u);
    set32(c.r[4], 0u + 1u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D84u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00158D84u) [[unlikely]] return; }
L_00158D84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00158D98u) [[unlikely]] return; }
L_00158D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00158DA0u) [[unlikely]] return; }
L_00158DA0:
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158DF8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00158DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);  if (t) { goto L_00158E18; } }
    c.budget -= 1;
L_00158DF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.budget -= 8;
L_00158E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 2960u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00158E40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00158E58; } }
L_00158E40:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00158E58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[15] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E90u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00158E90u) [[unlikely]] return; }
L_00158E90:
    c.f[1] = c.r[17].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[4].d[0] = c.r[3].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158ECCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158ECCu) [[unlikely]] return; }
L_00158ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158EE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00158EE0u) [[unlikely]] return; }
L_00158EE0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00158F40; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00158F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F04u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00158F04u) [[unlikely]] return; }
L_00158F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00158F0Cu) [[unlikely]] return; }
L_00158F0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F2Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00158F2Cu) [[unlikely]] return; }
L_00158F2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 3680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00158F40u) [[unlikely]] return; }
L_00158F40:
    set32(c.r[3], c.r[16].w[0] + 32767u);
    set32(c.r[16], c.r[3].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 8704u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158C68u | kUnwind; return; } goto L_00158C68; } }
    c.budget -= 1;
L_00158F60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00158F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F90u);  if (depth < kMaxDepth) unit_0018(c, 208u, depth + 1u); else { c.pc = 0x00162680u; return; } if (c.pc != 0x00158F90u) [[unlikely]] return; }
L_00158F90:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 326u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158FC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00158FC4u) [[unlikely]] return; }
L_00158FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[11].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00159458; } }
    set32(c.r[10], c.r[16].w[0] + 304u);
    set32(c.r[11], c.r[11].w[0] - 27856u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[4].d[0] | 34953ull;
    set32(c.r[7], 0u + 1u);
    c.f[3] = c.r[5].w[0];
    set32(c.r[6], 0u + 2u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 20u);
    c.budget -= 13;
L_00159000:
    c.r[13].d[0] = ld8((c.r[11].w[0] + 515u));
    set32(c.r[14], ld32((c.r[28].w[0] - 23788u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 36u)));
    set32(c.r[9], c.r[13].w[0] << 4);
    set32(c.r[9], c.r[14].w[0] + c.r[9].w[0]);
    set32(c.r[13], c.r[7].w[0] << (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[14].w[0] + 235u));
    set32(c.r[12], c.r[12].w[0] + 1024u);
    set32(c.r[9], c.r[9].w[0] + 140u);
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    st16((c.r[10].w[0] + 36u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.budget -= 14;
    { const bool t = c.r[14].d[0] == c.r[6].d[0]; c.r[15].d[0] = c.r[13].d[0] & 255ull;  if (t) { goto L_00159268; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[7].d[0];  if (t) { goto L_00159148; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_00159050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159438; } }
L_00159050:
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[13].d[0]; c.r[1].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;  if (t) { goto L_00159098; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00159070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));  if (t) { goto L_001590A0; } }
L_00159070:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_00159088; } }
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));  if (t) { goto L_001590A0; } }
L_00159088:
    set32(c.r[12], c.r[13].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));  if (t) { goto L_001590A0; } }
    c.budget -= 1;
L_00159098:
    st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001590A0:
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_001590F0; } }
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[13], c.r[10].w[0] + 12u);
    set32(c.r[13], c.r[13].w[0] + 16u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[10].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[10].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[10].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0] + 22u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[10].w[0] + 24u), c.r[4].w[0]);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[13].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 16;
L_001590F0:
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.f[1] = c.r[13].w[0];
    c.f[0] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.f[1] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 8u), c.f[0]);  if (t) { goto L_00159438; } }
L_00159148:
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.r[1].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001591C0; } }
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(0u));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.f[1] = c.r[13].w[0];
    c.f[0] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.f[1] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 8u), c.f[0]);  if (t) { goto L_00159438; } }
L_001591C0:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[12], c.r[14].w[0] + 1u);  if (t) { goto L_001591D8; } }
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[10].w[0] + 38u), static_cast<std::uint16_t>(c.r[9].w[0]));  if (t) { goto L_00159438; } }
L_001591D8:
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[13], c.r[10].w[0] + 12u);
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001591E8:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] > 0;  if (t) { goto L_00159200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_00159208; } }
    c.budget -= 1;
L_00159200:
    set32(c.r[9], c.r[9].w[0] - 1u);
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 2;
L_00159208:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00159230; } }
    c.f[0] = ld32((c.r[13].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[13].w[0] + 4u), c.f[0]);  if (t) { goto L_00159230; } }
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[13].w[0] + 4u), c.f[2]);
    c.budget -= 2;
L_00159230:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[9].d[0] = c.r[14].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[15], c.r[15].w[0] + c.r[12].w[0]);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001591E8u | kUnwind; return; } goto L_001591E8; } }
    c.r[9].d[0] = c.r[15].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00159438; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));  if (t) { goto L_00159438; } }
    c.budget -= 1;
L_00159268:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_00159328; } }
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 38u)));
    set32(c.r[12], c.r[13].w[0] - c.r[14].w[0]);
    c.r[1].d[0] = c.r[12].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00159298; } }
    st16((c.r[10].w[0] + 38u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001592D0; } }
    c.budget -= 1;
L_00159298:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_001592B0; } }
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));  if (t) { goto L_001592D0; } }
L_001592B0:
    set32(c.r[12], c.r[13].w[0] - 5u);
    st16((c.r[10].w[0] + 38u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 38u)));
    c.r[1].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001592D0; } }
    st16((c.r[10].w[0] + 38u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.budget -= 1;
L_001592D0:
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 8u)));
    c.f[1] = c.r[13].w[0];
    c.f[0] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 8u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 38u)));
    c.f[0] = c.r[9].w[0];
    c.f[1] = c.r[12].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 8u), c.f[0]);  if (t) { goto L_00159438; } }
    c.budget -= 1;
L_00159328:
    c.r[12].d[0] = c.r[15].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_00159348; } }
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.r[1].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001593B8; } }
L_00159348:
    st16((c.r[10].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(0u));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.f[1] = c.r[13].w[0];
    c.f[0] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    c.f[1] = c.r[12].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 8u), c.f[0]);  if (t) { goto L_00159438; } }
    c.budget -= 1;
L_001593B8:
    st32((c.r[10].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[12], c.r[10].w[0] + 12u);
    c.r[14].d[0] = 0ull + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001593D0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] > 0;  if (t) { goto L_001593E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001593F0; } }
    c.budget -= 1;
L_001593E8:
    set32(c.r[9], c.r[9].w[0] - 1u);
    st16((c.r[12].w[0] + 2u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 2;
L_001593F0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00159420; } }
    c.f[0] = ld32((c.r[12].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[12].w[0] + 4u), c.f[0]);  if (t) { goto L_00159420; } }
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[12].w[0] + 4u), c.r[4].w[0]);
    st16((c.r[12].w[0] + 2u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.budget -= 4;
L_00159420:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[9].d[0] = c.r[14].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 10u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001593D0u | kUnwind; return; } goto L_001593D0; } }
    c.budget -= 1;
L_00159438:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[9].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159000u | kUnwind; return; } goto L_00159000; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00159458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159470:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00159A90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001594D0; } }
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001594D4; } }
L_001594D0:
    c.f[2] = 0u;
    c.budget -= 1;
L_001594D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43130000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[20], c.r[4].w[0] + 304u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43120000u);
    c.r[30].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.f[21] = fp::add(c.f[1], c.f[2]);
    c.f[20] = fp::add(c.f[0], c.f[2]);
    c.budget -= 13;
L_00159508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159510u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 83u, depth + 1u); else { c.pc = 0x00158F80u; return; } if (c.pc != 0x00159510u) [[unlikely]] return; }
L_00159510:
    c.r[23].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015951Cu); c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015951Cu) [[unlikely]] return; }
L_0015951C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159524u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00159524u) [[unlikely]] return; }
L_00159524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159538u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159538u) [[unlikely]] return; }
L_00159538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 7520u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001595D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00159588; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159728; } }
    c.budget -= 1;
L_00159588:
    c.r[4].d[0] = c.r[23].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00159728; } }
L_001595D0:
    c.r[16].d[0] = c.r[23].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001596B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00159658; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001595F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159728; } }
L_001595F8:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159624u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00159624u) [[unlikely]] return; }
L_00159624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015962Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0015962Cu) [[unlikely]] return; }
L_0015962C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00159728; } }
    c.budget -= 1;
L_00159658:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159684u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00159684u) [[unlikely]] return; }
L_00159684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015968Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0015968Cu) [[unlikely]] return; }
L_0015968C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00159728; } }
    c.budget -= 1;
L_001596B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001596C0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001596C0u) [[unlikely]] return; }
L_001596C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001596C8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001596C8u) [[unlikely]] return; }
L_001596C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], c.r[16].w[0] << 1);
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159708u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00159708u) [[unlikely]] return; }
L_00159708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159710u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00159710u) [[unlikely]] return; }
L_00159710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_00159728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[20].w[0] + 4u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015973Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015973Cu) [[unlikely]] return; }
L_0015973C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159750u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159750u) [[unlikely]] return; }
L_00159750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159758u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159758u) [[unlikely]] return; }
L_00159758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00159760u) [[unlikely]] return; }
L_00159760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159774u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159774u) [[unlikely]] return; }
L_00159774:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8693u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001597B8; } }
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_001597D8; } }
L_001597B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.budget -= 8;
L_001597D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[20].w[0] + 8u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597ECu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001597ECu) [[unlikely]] return; }
L_001597EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159800u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159800u) [[unlikely]] return; }
L_00159800:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00159838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00159960; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 235u));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159960; } }
L_00159838:
    c.r[4].d[0] = c.r[23].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[16].w[0] + 4u);
    set32(c.r[22], c.r[16].w[0] + 8u);
    c.budget -= 12;
L_00159868:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015987Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015987Cu) [[unlikely]] return; }
L_0015987C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159884u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00159884u) [[unlikely]] return; }
L_00159884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159898u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159898u) [[unlikely]] return; }
L_00159898:
    c.f[12] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598ACu); c.f[13] = fp::mul(c.f[12], c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001598ACu) [[unlikely]] return; }
L_001598AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 7280u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 12u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 19444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159924u); st32((c.r[1].w[0] + 19456u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00159924u) [[unlikely]] return; }
L_00159924:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159938u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159938u) [[unlikely]] return; }
L_00159938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015994Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0015994Cu) [[unlikely]] return; }
L_0015994C:
    c.budget -= 1;
L_00159950:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159868u | kUnwind; return; } goto L_00159868; } }
L_00159960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159968u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159968u) [[unlikely]] return; }
L_00159968:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC28D0000u);  if (t) { goto L_00159990; } }
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159984u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159984u) [[unlikely]] return; }
L_00159984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001599A8; } }
    c.budget -= 1;
L_00159990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599A8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001599A8u) [[unlikely]] return; }
L_001599A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[23].w[0];
    st32((c.r[1].w[0] + 19416u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].d[0] = c.r[23].d[0] << 56;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 8720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 13264u);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19412u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A58u); st32((c.r[1].w[0] + 19456u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00159A58u) [[unlikely]] return; }
L_00159A58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159A6Cu) [[unlikely]] return; }
L_00159A6C:
    set32(c.r[3], c.r[17].w[0] + 32767u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + 8704u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159508u | kUnwind; return; } goto L_00159508; } }
L_00159A90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00159AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159AE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00159AE4u) [[unlikely]] return; }
L_00159AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159B18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00159B10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159B18; } }
    c.budget -= 1;
L_00159B10:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00159B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159CE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B5Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159B5Cu) [[unlikely]] return; }
L_00159B5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B78u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159B78u) [[unlikely]] return; }
L_00159B78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 9200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BD0u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00159BD0u) [[unlikely]] return; }
L_00159BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159BE4u) [[unlikely]] return; }
L_00159BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BECu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159BECu) [[unlikely]] return; }
L_00159BEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C08u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159C08u) [[unlikely]] return; }
L_00159C08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C1Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159C1Cu) [[unlikely]] return; }
L_00159C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159E00; } }
    c.budget -= 1;
L_00159C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C30u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159C30u) [[unlikely]] return; }
L_00159C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33E0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C4Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159C4Cu) [[unlikely]] return; }
L_00159C4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 15200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00159C60u) [[unlikely]] return; }
L_00159C60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2BE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C7Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159C7Cu) [[unlikely]] return; }
L_00159C7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 15440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CD4u); st32((c.r[1].w[0] + 19456u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159CD4u) [[unlikely]] return; }
L_00159CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159E00; } }
    c.budget -= 1;
L_00159CE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CF8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159CF8u) [[unlikely]] return; }
L_00159CF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3250000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D14u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159D14u) [[unlikely]] return; }
L_00159D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 20464u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D2Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00159D2Cu) [[unlikely]] return; }
L_00159D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159E00; } }
    c.budget -= 1;
L_00159D38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 101u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D4Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159D4Cu) [[unlikely]] return; }
L_00159D4C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D60u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159D60u) [[unlikely]] return; }
L_00159D60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 8480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00159D74u) [[unlikely]] return; }
L_00159D74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D90u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159D90u) [[unlikely]] return; }
L_00159D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 9200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43290000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DE8u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00159DE8u) [[unlikely]] return; }
L_00159DE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159DFCu) [[unlikely]] return; }
L_00159DFC:
    c.budget -= 1;
L_00159E00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00159E28u) [[unlikely]] return; }
L_00159E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159ED0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00159E88; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E4Cu); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x001627C0u; return; } if (c.pc != 0x00159E4Cu) [[unlikely]] return; }
L_00159E4C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00159E78; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00159E88; } }
    c.budget -= 1;
L_00159E78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 4;
L_00159E88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159ED0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00159EC0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00159EC8; } }
    c.budget -= 1;
L_00159EC0:
    set32(c.r[3], 0u + 15u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00159EC8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00159ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00159EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015A258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F18u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159F18u) [[unlikely]] return; }
L_00159F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 8480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F2Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00159F2Cu) [[unlikely]] return; }
L_00159F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F34u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00159F34u) [[unlikely]] return; }
L_00159F34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F44u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x00159F44u) [[unlikely]] return; }
L_00159F44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00159F58u) [[unlikely]] return; }
L_00159F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159FC0; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_00159FD8; } }
    c.budget -= 1;
L_00159FC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_00159FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428E0000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159FF4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00159FF4u) [[unlikely]] return; }
L_00159FF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A034u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015A034u) [[unlikely]] return; }
L_0015A034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A048u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A048u) [[unlikely]] return; }
L_0015A048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A05Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A05Cu) [[unlikely]] return; }
L_0015A05C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 180u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A0B0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015A0B0u) [[unlikely]] return; }
L_0015A0B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A0C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A0C4u) [[unlikely]] return; }
L_0015A0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A0D8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A0D8u) [[unlikely]] return; }
L_0015A0D8:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A0F8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015A0F8u) [[unlikely]] return; }
L_0015A0F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A10Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A10Cu) [[unlikely]] return; }
L_0015A10C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A128u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A128u) [[unlikely]] return; }
L_0015A128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A130u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0015A130u) [[unlikely]] return; }
L_0015A130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A14Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015A14Cu) [[unlikely]] return; }
L_0015A14C:
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 60u);
    c.r[3].d[0] = c.r[3].d[0] | 15551ull;
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 182u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1D4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015A1D4u) [[unlikely]] return; }
L_0015A1D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A1E8u) [[unlikely]] return; }
L_0015A1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015A1F0u) [[unlikely]] return; }
L_0015A1F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A204u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A204u) [[unlikely]] return; }
L_0015A204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A220u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015A220u) [[unlikely]] return; }
L_0015A220:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A240u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015A240u) [[unlikely]] return; }
L_0015A240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A254u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A254u) [[unlikely]] return; }
L_0015A254:
    c.budget -= 1;
L_0015A258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0015A284u) [[unlikely]] return; }
L_0015A284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0015A290; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0015A290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A2A0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015A888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2E8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015A2E8u) [[unlikely]] return; }
L_0015A2E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2F8u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015A2F8u) [[unlikely]] return; }
L_0015A2F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A30Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A30Cu) [[unlikely]] return; }
L_0015A30C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A320u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015A320u) [[unlikely]] return; }
L_0015A320:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0015A448; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { goto L_0015A3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A380u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0015A380u) [[unlikely]] return; }
L_0015A380:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A390u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0015A390u) [[unlikely]] return; }
L_0015A390:
    set32(c.r[4], c.r[20].w[0] + 8624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A39Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0015A39Cu) [[unlikely]] return; }
L_0015A39C:
    c.f[12] = ld32((c.r[29].w[0] + 336u));
    c.f[13] = ld32((c.r[29].w[0] + 344u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015A3E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3C4u);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0015A3C4u) [[unlikely]] return; }
L_0015A3C4:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0015A3E8; } }
L_0015A3D0:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1252u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 6;
L_0015A3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A3F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015A3F0u) [[unlikely]] return; }
L_0015A3F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A40Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A40Cu) [[unlikely]] return; }
L_0015A40C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A424u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015A424u) [[unlikely]] return; }
L_0015A424:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A430u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0015A430u) [[unlikely]] return; }
L_0015A430:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A444u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015A444u) [[unlikely]] return; }
L_0015A444:
    c.budget -= 1;
L_0015A448:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { goto L_0015A480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A460u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0015A460u) [[unlikely]] return; }
L_0015A460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A468u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0015A468u) [[unlikely]] return; }
L_0015A468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A478u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0015A478u) [[unlikely]] return; }
L_0015A478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A4A8; } }
L_0015A480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A488u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0015A488u) [[unlikely]] return; }
L_0015A488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A490u); set32(c.r[4], ld32((c.r[20].w[0] + 1252u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0015A490u) [[unlikely]] return; }
L_0015A490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A498u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0015A498u) [[unlikely]] return; }
L_0015A498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0015A4A8u) [[unlikely]] return; }
L_0015A4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4B0u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0015A4B0u) [[unlikely]] return; }
L_0015A4B0:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 27856u);
    set32(c.r[23], c.r[29].w[0] + 344u);
    set32(c.r[17], c.r[29].w[0] + 340u);
    set32(c.r[30], c.r[29].w[0] + 324u);
    set32(c.r[16], c.r[29].w[0] + 312u);
    set32(c.r[21], c.r[29].w[0] + 316u);
    set32(c.r[22], c.r[29].w[0] + 320u);
    c.budget -= 10;
L_0015A4D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0015A690; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015A690; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 77ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015A518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015A690; } }
L_0015A518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A520u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0015A520u) [[unlikely]] return; }
L_0015A520:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A52Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0015A52Cu) [[unlikely]] return; }
L_0015A52C:
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A540u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0015A540u) [[unlikely]] return; }
L_0015A540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015A690; } }
    c.f[20] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A584u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0015A584u) [[unlikely]] return; }
L_0015A584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A58Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0015A58Cu) [[unlikely]] return; }
L_0015A58C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015A5C0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0015A5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 160u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 515u));
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.f[0] = c.r[4].w[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015A628; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[21].w[0]), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_0015A638; } }
    c.budget -= 1;
L_0015A628:
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[22].w[0]), 0u);
    c.budget -= 4;
L_0015A638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A640u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015A640u) [[unlikely]] return; }
    goto L_0015A640;
L_0015A63C:
    c.budget -= 1;
L_0015A640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A66Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A66Cu) [[unlikely]] return; }
L_0015A66C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A680u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015A680u) [[unlikely]] return; }
L_0015A680:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A690u) [[unlikely]] return; }
L_0015A690:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A4D8u | kUnwind; return; } goto L_0015A4D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 37u, depth + 1u); else { c.pc = 0x002AC8A0u; return; } if (c.pc != 0x0015A6ACu) [[unlikely]] return; }
L_0015A6AC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 244u);  if (t) { goto L_0015A888; } }
    set32(c.r[30], c.r[29].w[0] + 228u);
    set32(c.r[19], c.r[29].w[0] + 232u);
    set32(c.r[18], c.r[29].w[0] + 236u);
    set32(c.r[16], c.r[29].w[0] + 240u);
    c.budget -= 4;
L_0015A6C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015A878; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015A878; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015A878; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015A878; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_0015A878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A710u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0015A710u) [[unlikely]] return; }
L_0015A710:
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A71Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0015A71Cu) [[unlikely]] return; }
L_0015A71C:
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A730u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0015A730u) [[unlikely]] return; }
L_0015A730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015A878; } }
    c.f[20] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A774u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0015A774u) [[unlikely]] return; }
L_0015A774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A77Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0015A77Cu) [[unlikely]] return; }
L_0015A77C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015A7B0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0015A7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 160u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.f[0] = c.r[4].w[0];
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015A810; } }
    st32((c.r[19].w[0]), 0u);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_0015A820; } }
L_0015A810:
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 4;
L_0015A820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A828u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015A828u) [[unlikely]] return; }
L_0015A828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A854u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015A854u) [[unlikely]] return; }
L_0015A854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A868u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015A868u) [[unlikely]] return; }
L_0015A868:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A878u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015A878u) [[unlikely]] return; }
L_0015A878:
    set32(c.r[21], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A6C8u | kUnwind; return; } goto L_0015A6C8; } }
    goto L_0015A884;
L_0015A880:
    c.budget -= 1;
L_0015A884:
    c.budget -= 1;
L_0015A888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0015A8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015A9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A8E4u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0015A8E4u) [[unlikely]] return; }
L_0015A8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015A9A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 496u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0015A924; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0015A924:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015A950; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015A958; } }
    c.budget -= 1;
L_0015A950:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015A958:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 500u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_0015A998; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_0015A978; } }
    st16((c.r[6].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015A978:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 500u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015A998; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[6].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0015A998:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015A9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015AD50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015A9F8u) [[unlikely]] return; }
L_0015A9F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 3200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015AA0Cu) [[unlikely]] return; }
L_0015AA0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA1Cu); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015AA1Cu) [[unlikely]] return; }
L_0015AA1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2CA0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA38u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015AA38u) [[unlikely]] return; }
L_0015AA38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015AA4Cu) [[unlikely]] return; }
L_0015AA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1600u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0015AAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_0015AAC0; } }
    c.budget -= 1;
L_0015AAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_0015AAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015AAC8u) [[unlikely]] return; }
L_0015AAC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 500u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB04u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015AB04u) [[unlikely]] return; }
L_0015AB04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43450000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C60000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB20u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015AB20u) [[unlikely]] return; }
L_0015AB20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015AB34u) [[unlikely]] return; }
L_0015AB34:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 500u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB84u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015AB84u) [[unlikely]] return; }
L_0015AB84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB98u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015AB98u) [[unlikely]] return; }
L_0015AB98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015ABACu) [[unlikely]] return; }
L_0015ABAC:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABCCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015ABCCu) [[unlikely]] return; }
L_0015ABCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABE0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015ABE0u) [[unlikely]] return; }
L_0015ABE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015ABF4u) [[unlikely]] return; }
L_0015ABF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC5Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015AC5Cu) [[unlikely]] return; }
L_0015AC5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC78u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015AC78u) [[unlikely]] return; }
L_0015AC78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC8Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015AC8Cu) [[unlikely]] return; }
L_0015AC8C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACDCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015ACDCu) [[unlikely]] return; }
L_0015ACDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACF0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015ACF0u) [[unlikely]] return; }
L_0015ACF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD04u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015AD04u) [[unlikely]] return; }
L_0015AD04:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD24u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015AD24u) [[unlikely]] return; }
L_0015AD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD38u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015AD38u) [[unlikely]] return; }
L_0015AD38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015AD4Cu) [[unlikely]] return; }
L_0015AD4C:
    c.budget -= 1;
L_0015AD50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015AD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015AF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD94u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0015AD94u) [[unlikely]] return; }
L_0015AD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015AF70; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[3], c.r[16].w[0] + 304u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 9);
    set32(c.r[7], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 1568u);  if (t) { goto L_0015ADE0; } }
    set32(c.r[6], c.r[5].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 5;
L_0015ADE0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8686u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0015AE08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015AF70; } }
L_0015AE08:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[10], 0u - 1u);
    c.f[2] = c.r[7].w[0];
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_0015AE20:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0015AF50; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[10].d[0];  if (t) { goto L_0015AE40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_0015AF50; } }
L_0015AE3C:
    c.budget -= 1;
L_0015AE40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[9].d[0];  if (t) { goto L_0015AED0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015AE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015AF28; } }
    c.budget -= 1;
L_0015AE60:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[9].d[0];  if (t) { goto L_0015AE98; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0015AF50; } }
L_0015AE98:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015AF50; } }
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0015AF50; } }
L_0015AED0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015AF20; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::mult(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0015AF50; } }
    c.budget -= 1;
L_0015AF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[7].w[0]);  if (t) { goto L_0015AF50; } }
L_0015AF28:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 10;
L_0015AF50:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[5].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AE20u | kUnwind; return; } goto L_0015AE20; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0015AF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015AF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015B6A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[18], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1568u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1584u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AFD8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015AFD8u) [[unlikely]] return; }
L_0015AFD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AFE8u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015AFE8u) [[unlikely]] return; }
L_0015AFE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3110000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B004u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B004u) [[unlikely]] return; }
L_0015B004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B018u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B018u) [[unlikely]] return; }
L_0015B018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B020u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B020u) [[unlikely]] return; }
L_0015B020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 3920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B034u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015B034u) [[unlikely]] return; }
L_0015B034:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015B078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B048u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B048u) [[unlikely]] return; }
L_0015B048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43970000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B064u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B064u) [[unlikely]] return; }
L_0015B064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 4640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B078u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015B078u) [[unlikely]] return; }
L_0015B078:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015B130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B088u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B088u) [[unlikely]] return; }
L_0015B088:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33D0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0A4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B0A4u) [[unlikely]] return; }
L_0015B0A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0B4u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015B0B4u) [[unlikely]] return; }
L_0015B0B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B0C8u) [[unlikely]] return; }
L_0015B0C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015B110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0DCu);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B0DCu) [[unlikely]] return; }
L_0015B0DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43970000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3380000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0F8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B0F8u) [[unlikely]] return; }
L_0015B0F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 4640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B10Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015B10Cu) [[unlikely]] return; }
L_0015B10C:
    c.budget -= 1;
L_0015B110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B118u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B118u) [[unlikely]] return; }
L_0015B118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 4160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B12Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015B12Cu) [[unlikely]] return; }
L_0015B12C:
    c.budget -= 1;
L_0015B130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B138u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B138u) [[unlikely]] return; }
L_0015B138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B140u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0015B140u) [[unlikely]] return; }
L_0015B140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0015B190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0015B1A0; } }
L_0015B190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0015B1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43940000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3090000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1C4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B1C4u) [[unlikely]] return; }
L_0015B1C4:
    c.f[12] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1D8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015B1D8u) [[unlikely]] return; }
L_0015B1D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B1ECu) [[unlikely]] return; }
L_0015B1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015B1F4u) [[unlikely]] return; }
L_0015B1F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0015B280; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 3680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_0015B220; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), 0u);  if (t) { goto L_0015B230; } }
    c.budget -= 1;
L_0015B220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0015B230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43940000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3350000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B254u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B254u) [[unlikely]] return; }
L_0015B254:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B268u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015B268u) [[unlikely]] return; }
L_0015B268:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B27Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B27Cu) [[unlikely]] return; }
L_0015B27C:
    c.budget -= 1;
L_0015B280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B288u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B288u) [[unlikely]] return; }
L_0015B288:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3120000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2A4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B2A4u) [[unlikely]] return; }
L_0015B2A4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8686u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], c.r[5].w[0] - 9904u);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[6].w[0] << 4);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_0015B308; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0015B318; } }
L_0015B308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0015B318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B32Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B32Cu) [[unlikely]] return; }
L_0015B32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B334u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B334u) [[unlikely]] return; }
L_0015B334:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 19408u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B394u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015B394u) [[unlikely]] return; }
L_0015B394:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3140000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3B0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B3B0u) [[unlikely]] return; }
L_0015B3B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B3C4u) [[unlikely]] return; }
L_0015B3C4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B410u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015B410u) [[unlikely]] return; }
L_0015B410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B424u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B424u) [[unlikely]] return; }
L_0015B424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B438u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B438u) [[unlikely]] return; }
L_0015B438:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B458u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015B458u) [[unlikely]] return; }
L_0015B458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B46Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B46Cu) [[unlikely]] return; }
L_0015B46C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B480u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B480u) [[unlikely]] return; }
L_0015B480:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015B6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B490u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B490u) [[unlikely]] return; }
L_0015B490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4ACu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B4ACu) [[unlikely]] return; }
L_0015B4AC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8686u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], c.r[5].w[0] - 9904u);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[6].w[0] << 4);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_0015B510; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0015B520; } }
L_0015B510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0015B520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19412u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19416u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B548u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B548u) [[unlikely]] return; }
L_0015B548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B550u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0015B550u) [[unlikely]] return; }
L_0015B550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 19408u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5BCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015B5BCu) [[unlikely]] return; }
L_0015B5BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3400000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5D8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B5D8u) [[unlikely]] return; }
L_0015B5D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B5ECu) [[unlikely]] return; }
L_0015B5EC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B638u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015B638u) [[unlikely]] return; }
L_0015B638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B64Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B64Cu) [[unlikely]] return; }
L_0015B64C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B660u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B660u) [[unlikely]] return; }
L_0015B660:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B680u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015B680u) [[unlikely]] return; }
L_0015B680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B694u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015B694u) [[unlikely]] return; }
L_0015B694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B6A8u) [[unlikely]] return; }
L_0015B6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015B6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0015B6E4u) [[unlikely]] return; }
L_0015B6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015B750; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 824u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 826u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015B720; } }
    st16((c.r[5].w[0] + 826u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0015B720:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015B750; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 824u)));
    set32(c.r[3], 0u + 4000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015B750; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0015B750; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0015B750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015B820; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B79Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015B79Cu) [[unlikely]] return; }
L_0015B79C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 2240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015B7B0u) [[unlikely]] return; }
L_0015B7B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7C0u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015B7C0u) [[unlikely]] return; }
L_0015B7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015B7D4u) [[unlikely]] return; }
L_0015B7D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 826u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.f[13];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B808u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015B808u) [[unlikely]] return; }
L_0015B808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 2000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B81Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015B81Cu) [[unlikely]] return; }
L_0015B81C:
    c.budget -= 1;
L_0015B820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B84Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0015B84Cu) [[unlikely]] return; }
L_0015B84C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015BA80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_0015B878; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B870u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 215u, depth + 1u); else { c.pc = 0x001627C0u; return; } if (c.pc != 0x0015B870u) [[unlikely]] return; }
L_0015B870:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0015B878:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015BA80; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 9);
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 40u);
    c.budget -= 13;
L_0015B8B8:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0]; set32(c.r[12], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0015B920; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[11], c.r[12].w[0] + 3u);  if (t) { goto L_0015B8E0; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0015B920; } }
L_0015B8E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[10], c.r[12].w[0] + 1u);  if (t) { goto L_0015B8F8; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0015B920; } }
L_0015B8F8:
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B918; } }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015B920; } }
    c.budget -= 1;
L_0015B918:
    set32(c.r[5], c.r[9].w[0] - 5u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0015B920:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B8B8u | kUnwind; return; } goto L_0015B8B8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015BA78; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 515u));
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 130u)));
    set32(c.r[16], c.r[3].w[0] + 128u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 128u)));
    c.budget -= 15;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0015B984; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0015B984:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015BA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B998u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0015B998u) [[unlikely]] return; }
L_0015B998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015BA00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015B9F8; } }
    set32(c.r[2], 0u + 1200u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B9D0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0018(c, 241u, depth + 1u); else { c.pc = 0x00163160u; return; } if (c.pc != 0x0015B9D0u) [[unlikely]] return; }
L_0015B9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B9D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x0015B9D8u) [[unlikely]] return; }
L_0015B9D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0015BA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015BA00; } }
L_0015B9F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015BA00:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0015BA18; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0015BA18:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015BA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA2Cu);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0015BA2Cu) [[unlikely]] return; }
L_0015BA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015BA78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015BA70; } }
    set32(c.r[2], 0u + 1200u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA50u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x0015BA50u) [[unlikely]] return; }
L_0015BA50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0015BA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015BA78; } }
L_0015BA70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015BA78:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015BA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015BAA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0017(c, 20u, depth); } }
    set32(c.r[18], c.r[4].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAF0u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015BAF0u) [[unlikely]] return; }
L_0015BAF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0015BB18; } }
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB0Cu); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015BB0Cu) [[unlikely]] return; }
L_0015BB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015BB48; } }
    c.budget -= 1;
L_0015BB18:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0015BB38; } }
    set32(c.r[5], 0u + 50u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB30u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015BB30u) [[unlikely]] return; }
L_0015BB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015BB48; } }
L_0015BB38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB48u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 204u, depth + 1u); else { c.pc = 0x00162560u; return; } if (c.pc != 0x0015BB48u) [[unlikely]] return; }
L_0015BB48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015BB5Cu) [[unlikely]] return; }
L_0015BB5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0015BD20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 9200u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 515u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBD0u); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015BBD0u) [[unlikely]] return; }
L_0015BBD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3870000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBF0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015BBF0u) [[unlikely]] return; }
L_0015BBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0015BBF8u) [[unlikely]] return; }
L_0015BBF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0015BC50; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015BC50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
L_0015BC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC60u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015BC60u) [[unlikely]] return; }
L_0015BC60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015BC74u) [[unlikely]] return; }
L_0015BC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC7Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015BC7Cu) [[unlikely]] return; }
L_0015BC7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.f[2] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[2]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0015BCF8; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015BCF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
L_0015BCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BD08u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015BD08u) [[unlikely]] return; }
L_0015BD08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BD1Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015BD1Cu) [[unlikely]] return; }
L_0015BD1C:
    c.budget -= 1;
L_0015BD20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0015BF38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(47ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 515u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BD88u); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015BD88u) [[unlikely]] return; }
L_0015BD88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);  if (t) { goto L_0015BDB8; } }
    c.f[12] = c.r[2].w[0];
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDB0u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015BDB0u) [[unlikely]] return; }
L_0015BDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015BDE0; } }
L_0015BDB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3870000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.f[20] = 0u;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDD8u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015BDD8u) [[unlikely]] return; }
L_0015BDD8:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(46ll);
    c.budget -= 2;
L_0015BDE0:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE0Cu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0015BE0Cu) [[unlikely]] return; }
L_0015BE0C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0015BE68; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015BE68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
L_0015BE68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE78u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015BE78u) [[unlikely]] return; }
L_0015BE78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE8Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015BE8Cu) [[unlikely]] return; }
L_0015BE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE94u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015BE94u) [[unlikely]] return; }
L_0015BE94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.f[2] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[2]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0015BF10; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015BF10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
L_0015BF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF20u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015BF20u) [[unlikely]] return; }
L_0015BF20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015BF34u) [[unlikely]] return; }
L_0015BF34:
    c.budget -= 1;
L_0015BF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF40u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015BF40u) [[unlikely]] return; }
L_0015BF40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015BFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF58u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0015BF58u) [[unlikely]] return; }
L_0015BF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 242u, depth + 1u); else { c.pc = 0x001631B0u; return; } if (c.pc != 0x0015BF60u) [[unlikely]] return; }
L_0015BF60:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42580000u);
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[15] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[1] = fp::mul(c.f[15], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF9Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0015BF9Cu) [[unlikely]] return; }
L_0015BF9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 8960u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC36A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43550000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFDCu); st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015BFDCu) [[unlikely]] return; }
L_0015BFDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015BFF0u) [[unlikely]] return; }
L_0015BFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFF8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015BFF8u) [[unlikely]] return; }
L_0015BFF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_0017(c, 1u, depth);
}

}
