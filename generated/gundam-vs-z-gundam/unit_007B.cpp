#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
    85, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0,
    98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0,
    205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0,
    215, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0,
    305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC010;
    case 3u: goto L_002EC028;
    case 4u: goto L_002EC040;
    case 5u: goto L_002EC060;
    case 6u: goto L_002EC0B0;
    case 7u: goto L_002EC0B8;
    case 8u: goto L_002EC0D8;
    case 9u: goto L_002EC108;
    case 10u: goto L_002EC150;
    case 11u: goto L_002EC2F8;
    case 12u: goto L_002EC304;
    case 13u: goto L_002EC310;
    case 14u: goto L_002EC318;
    case 15u: goto L_002EC320;
    case 16u: goto L_002EC340;
    case 17u: goto L_002EC350;
    case 18u: goto L_002EC360;
    case 19u: goto L_002EC414;
    case 20u: goto L_002EC424;
    case 21u: goto L_002EC480;
    case 22u: goto L_002EC484;
    case 23u: goto L_002EC488;
    case 24u: goto L_002EC48C;
    case 25u: goto L_002EC490;
    case 26u: goto L_002EC494;
    case 27u: goto L_002EC498;
    case 28u: goto L_002EC49C;
    case 29u: goto L_002EC4A0;
    case 30u: goto L_002EC4A4;
    case 31u: goto L_002EC4A8;
    case 32u: goto L_002EC4AC;
    case 33u: goto L_002EC4B0;
    case 34u: goto L_002EC4B4;
    case 35u: goto L_002EC4B8;
    case 36u: goto L_002EC4BC;
    case 37u: goto L_002EC4C0;
    case 38u: goto L_002EC4C4;
    case 39u: goto L_002EC4C8;
    case 40u: goto L_002EC4CC;
    case 41u: goto L_002EC4D0;
    case 42u: goto L_002EC4D4;
    case 43u: goto L_002EC4D8;
    case 44u: goto L_002EC4DC;
    case 45u: goto L_002EC4E0;
    case 46u: goto L_002EC4E4;
    case 47u: goto L_002EC4E8;
    case 48u: goto L_002EC4EC;
    case 49u: goto L_002EC4F0;
    case 50u: goto L_002EC4F4;
    case 51u: goto L_002EC4F8;
    case 52u: goto L_002EC4FC;
    case 53u: goto L_002EC500;
    case 54u: goto L_002EC504;
    case 55u: goto L_002EC508;
    case 56u: goto L_002EC50C;
    case 57u: goto L_002EC510;
    case 58u: goto L_002EC514;
    case 59u: goto L_002EC518;
    case 60u: goto L_002EC51C;
    case 61u: goto L_002EC520;
    case 62u: goto L_002EC524;
    case 63u: goto L_002EC528;
    case 64u: goto L_002EC52C;
    case 65u: goto L_002EC530;
    case 66u: goto L_002EC534;
    case 67u: goto L_002EC538;
    case 68u: goto L_002EC53C;
    case 69u: goto L_002EC540;
    case 70u: goto L_002EC544;
    case 71u: goto L_002EC548;
    case 72u: goto L_002EC54C;
    case 73u: goto L_002EC550;
    case 74u: goto L_002EC554;
    case 75u: goto L_002EC558;
    case 76u: goto L_002EC55C;
    case 77u: goto L_002EC560;
    case 78u: goto L_002EC564;
    case 79u: goto L_002EC568;
    case 80u: goto L_002EC56C;
    case 81u: goto L_002EC570;
    case 82u: goto L_002EC574;
    case 83u: goto L_002EC578;
    case 84u: goto L_002EC57C;
    case 85u: goto L_002EC580;
    case 86u: goto L_002EC584;
    case 87u: goto L_002EC58C;
    case 88u: goto L_002EC68C;
    case 89u: goto L_002EC6C8;
    case 90u: goto L_002EC700;
    case 91u: goto L_002EC728;
    case 92u: goto L_002EC7D0;
    case 93u: goto L_002EC7F0;
    case 94u: goto L_002EC844;
    case 95u: goto L_002EC870;
    case 96u: goto L_002EC968;
    case 97u: goto L_002EC974;
    case 98u: goto L_002EC980;
    case 99u: goto L_002EC988;
    case 100u: goto L_002EC990;
    case 101u: goto L_002EC9B0;
    case 102u: goto L_002EC9C0;
    case 103u: goto L_002EC9D0;
    case 104u: goto L_002ECB34;
    case 105u: goto L_002ECB60;
    case 106u: goto L_002ECB70;
    case 107u: goto L_002ECB88;
    case 108u: goto L_002ECBE0;
    case 109u: goto L_002ECC48;
    case 110u: goto L_002ECCE0;
    case 111u: goto L_002ECD04;
    case 112u: goto L_002ECD28;
    case 113u: goto L_002ECD40;
    case 114u: goto L_002ECD50;
    case 115u: goto L_002ECD84;
    case 116u: goto L_002ECDD8;
    case 117u: goto L_002ECDFC;
    case 118u: goto L_002ECE20;
    case 119u: goto L_002ECE40;
    case 120u: goto L_002ECF90;
    case 121u: goto L_002ECFA8;
    case 122u: goto L_002ECFC0;
    case 123u: goto L_002ED034;
    case 124u: goto L_002ED040;
    case 125u: goto L_002ED060;
    case 126u: goto L_002ED09C;
    case 127u: goto L_002ED0B0;
    case 128u: goto L_002ED0EC;
    case 129u: goto L_002ED164;
    case 130u: goto L_002ED180;
    case 131u: goto L_002ED1E0;
    case 132u: goto L_002ED21C;
    case 133u: goto L_002ED240;
    case 134u: goto L_002ED250;
    case 135u: goto L_002ED2C0;
    case 136u: goto L_002ED2D0;
    case 137u: goto L_002ED2E0;
    case 138u: goto L_002ED328;
    case 139u: goto L_002ED340;
    case 140u: goto L_002ED350;
    case 141u: goto L_002ED358;
    case 142u: goto L_002ED368;
    case 143u: goto L_002ED370;
    case 144u: goto L_002ED3A0;
    case 145u: goto L_002ED3C8;
    case 146u: goto L_002ED3D0;
    case 147u: goto L_002ED3D8;
    case 148u: goto L_002ED3F0;
    case 149u: goto L_002ED420;
    case 150u: goto L_002ED480;
    case 151u: goto L_002ED4A0;
    case 152u: goto L_002ED510;
    case 153u: goto L_002ED570;
    case 154u: goto L_002ED580;
    case 155u: goto L_002ED590;
    case 156u: goto L_002ED628;
    case 157u: goto L_002ED660;
    case 158u: goto L_002ED670;
    case 159u: goto L_002ED690;
    case 160u: goto L_002ED6C0;
    case 161u: goto L_002ED6D0;
    case 162u: goto L_002ED6F0;
    case 163u: goto L_002ED700;
    case 164u: goto L_002ED790;
    case 165u: goto L_002ED7A0;
    case 166u: goto L_002ED7B0;
    case 167u: goto L_002ED7C0;
    case 168u: goto L_002ED8F0;
    case 169u: goto L_002ED920;
    case 170u: goto L_002ED9DC;
    case 171u: goto L_002EDA10;
    case 172u: goto L_002EDA50;
    case 173u: goto L_002EDAC0;
    case 174u: goto L_002EDAF0;
    case 175u: goto L_002EDB18;
    case 176u: goto L_002EDB80;
    case 177u: goto L_002EDBA0;
    case 178u: goto L_002EDBF0;
    case 179u: goto L_002EDCF0;
    case 180u: goto L_002EDD6C;
    case 181u: goto L_002EDDA0;
    case 182u: goto L_002EDE10;
    case 183u: goto L_002EDF40;
    case 184u: goto L_002EDF98;
    case 185u: goto L_002EE090;
    case 186u: goto L_002EE0E8;
    case 187u: goto L_002EE1F0;
    case 188u: goto L_002EE248;
    case 189u: goto L_002EE350;
    case 190u: goto L_002EE3A8;
    case 191u: goto L_002EE4B0;
    case 192u: goto L_002EE508;
    case 193u: goto L_002EE610;
    case 194u: goto L_002EE620;
    case 195u: goto L_002EE630;
    case 196u: goto L_002EE690;
    case 197u: goto L_002EE698;
    case 198u: goto L_002EE6A0;
    case 199u: goto L_002EE6A8;
    case 200u: goto L_002EE6B0;
    case 201u: goto L_002EE6B8;
    case 202u: goto L_002EE6DC;
    case 203u: goto L_002EE6E4;
    case 204u: goto L_002EE6F8;
    case 205u: goto L_002EE700;
    case 206u: goto L_002EE708;
    case 207u: goto L_002EE710;
    case 208u: goto L_002EE718;
    case 209u: goto L_002EE720;
    case 210u: goto L_002EE728;
    case 211u: goto L_002EE7B0;
    case 212u: goto L_002EE7D0;
    case 213u: goto L_002EE7E0;
    case 214u: goto L_002EE7F4;
    case 215u: goto L_002EE800;
    case 216u: goto L_002EE80C;
    case 217u: goto L_002EE81C;
    case 218u: goto L_002EE824;
    case 219u: goto L_002EE8F0;
    case 220u: goto L_002EE978;
    case 221u: goto L_002EE980;
    case 222u: goto L_002EE998;
    case 223u: goto L_002EE9AC;
    case 224u: goto L_002EE9E8;
    case 225u: goto L_002EEA08;
    case 226u: goto L_002EEA10;
    case 227u: goto L_002EEADC;
    case 228u: goto L_002EEB68;
    case 229u: goto L_002EEB70;
    case 230u: goto L_002EEB88;
    case 231u: goto L_002EEB9C;
    case 232u: goto L_002EEBD8;
    case 233u: goto L_002EEBF8;
    case 234u: goto L_002EEC08;
    case 235u: goto L_002EEC1C;
    case 236u: goto L_002EEC28;
    case 237u: goto L_002EEC34;
    case 238u: goto L_002EEC44;
    case 239u: goto L_002EEC4C;
    case 240u: goto L_002EED28;
    case 241u: goto L_002EED30;
    case 242u: goto L_002EED48;
    case 243u: goto L_002EED5C;
    case 244u: goto L_002EEDA8;
    case 245u: goto L_002EEDC0;
    case 246u: goto L_002EEDD4;
    case 247u: goto L_002EEE70;
    case 248u: goto L_002EEE78;
    case 249u: goto L_002EEE90;
    case 250u: goto L_002EEEA4;
    case 251u: goto L_002EEF00;
    case 252u: goto L_002EEF70;
    case 253u: goto L_002EEF7C;
    case 254u: goto L_002EEFAC;
    case 255u: goto L_002EEFD0;
    case 256u: goto L_002EF018;
    case 257u: goto L_002EF088;
    case 258u: goto L_002EF09C;
    case 259u: goto L_002EF0AC;
    case 260u: goto L_002EF0C0;
    case 261u: goto L_002EF0CC;
    case 262u: goto L_002EF0D8;
    case 263u: goto L_002EF0E8;
    case 264u: goto L_002EF0F0;
    case 265u: goto L_002EF1AC;
    case 266u: goto L_002EF1B4;
    case 267u: goto L_002EF1C0;
    case 268u: goto L_002EF1D0;
    case 269u: goto L_002EF1D8;
    case 270u: goto L_002EF1E0;
    case 271u: goto L_002EF1F0;
    case 272u: goto L_002EF1F8;
    case 273u: goto L_002EF21C;
    case 274u: goto L_002EF224;
    case 275u: goto L_002EF230;
    case 276u: goto L_002EF25C;
    case 277u: goto L_002EF264;
    case 278u: goto L_002EF270;
    case 279u: goto L_002EF2B0;
    case 280u: goto L_002EF2C0;
    case 281u: goto L_002EF2D0;
    case 282u: goto L_002EF370;
    case 283u: goto L_002EF384;
    case 284u: goto L_002EF394;
    case 285u: goto L_002EF3A8;
    case 286u: goto L_002EF3B4;
    case 287u: goto L_002EF3C0;
    case 288u: goto L_002EF3D0;
    case 289u: goto L_002EF3D8;
    case 290u: goto L_002EF45C;
    case 291u: goto L_002EF464;
    case 292u: goto L_002EF4B8;
    case 293u: goto L_002EF4F0;
    case 294u: goto L_002EF518;
    case 295u: goto L_002EF580;
    case 296u: goto L_002EF5A0;
    case 297u: goto L_002EF600;
    case 298u: goto L_002EFD28;
    case 299u: goto L_002EFD40;
    case 300u: goto L_002EFDE8;
    case 301u: goto L_002EFF28;
    case 302u: goto L_002EFF5C;
    case 303u: goto L_002EFF64;
    case 304u: goto L_002EFF78;
    case 305u: goto L_002EFF80;
    case 306u: goto L_002EFF8C;
    case 307u: goto L_002EFFAC;
    case 308u: goto L_002EFFD4;
    case 309u: goto L_002EFFE0;
    case 310u: goto L_002EFFEC;
    case 311u: goto L_002EFFF8;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_002EC010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 16320u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 15232u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_002EC028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC040:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EC060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 128u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 331u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 332u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 333u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EC120; } }
L_002EC0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0B8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002EC0B8u) [[unlikely]] return; }
L_002EC0B8:
    set32(c.r[5], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_002EC0D8:
    c.r[19].d[0] = c.r[16].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC0B0u | kUnwind; return; } goto L_002EC0B0; } }
    set32(c.r[2], 0u + 32u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC108u); st8((c.r[18].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002EC108u) [[unlikely]] return; }
L_002EC108:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EC128; } }
L_002EC120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC0D8u | kUnwind; return; } goto L_002EC0D8; } }
L_002EC128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EC150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 331u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 304u);
    set32(c.r[3], c.r[5].w[0] + 27u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EC1A0; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 25u);  if (t) { goto L_002EC1A0; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_002EC2B8; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_002EC1A0:
    st8((c.r[5].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 26u));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[5].w[0] + 26u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] + 26u);  if (t) { goto L_002EC1C0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002EC1C0:
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EC288; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 28u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_002EC250; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002EC230; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EC1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC288; } }
L_002EC1F8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBCBC0000u);
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[7].d[0] = c.r[7].d[0] | 27263ull;
    c.f[1] = c.r[7].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DC40000u);
    c.r[6].d[0] = c.r[6].d[0] | 39846ull;
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_002EC288; } }
L_002EC230:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E390000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[6].d[0] = c.r[6].d[0] | 22545ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_002EC288; } }
L_002EC250:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3C650000u);
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[7].d[0] = c.r[7].d[0] | 24641ull;
    c.f[1] = c.r[7].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CE50000u);
    c.r[6].d[0] = c.r[6].d[0] | 24641ull;
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_002EC288:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EC2A8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_002EC2B8; } }
    c.budget -= 1;
L_002EC2A8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002EC2B8:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EC2E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EC328; } }
    c.budget -= 1;
L_002EC2E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2F8u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EC2F8u) [[unlikely]] return; }
L_002EC2F8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC304u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EC304u) [[unlikely]] return; }
L_002EC304:
    c.budget -= 1;
L_002EC308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC310u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EC310u) [[unlikely]] return; }
L_002EC310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC318u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002EC318u) [[unlikely]] return; }
L_002EC318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC320u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EC320u) [[unlikely]] return; }
L_002EC320:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EC328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EC340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EC350:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EC360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EC3A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC3B0; } }
L_002EC3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC458; } }
L_002EC3B0:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC414u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002EC414u) [[unlikely]] return; }
L_002EC414:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC424u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002EC424u) [[unlikely]] return; }
L_002EC424:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC458; } }
L_002EC448:
    set32(c.r[2], 0u + 1u);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_002EC458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EC480:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.budget -= 1;
L_002EC484:
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 1;
L_002EC488:
    set32(c.r[5], c.r[29].w[0] + 252u);
    c.budget -= 1;
L_002EC48C:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.budget -= 1;
L_002EC490:
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.budget -= 1;
L_002EC494:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.budget -= 1;
L_002EC498:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.budget -= 1;
L_002EC49C:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 1;
L_002EC4A0:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_002EC4A4:
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002EC4A8:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 1;
L_002EC4AC:
    set32(c.r[19], c.r[20].w[0] + 304u);
    c.budget -= 1;
L_002EC4B0:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_002EC4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007B(c, 18u, depth + 1u); else { c.pc = 0x002EC360u; return; } if (c.pc != 0x002EC4BCu) [[unlikely]] return; }
    goto L_002EC4BC;
L_002EC4B8:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_002EC4BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 1;
L_002EC4C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC4C4:
    set32(c.r[3], c.r[3].w[0] - 15888u);
    c.budget -= 1;
L_002EC4C8:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_002EC4CC:
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.budget -= 1;
L_002EC4D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002EC4D4:
    set32(c.r[3], c.r[28].w[0] - 28684u);
    c.budget -= 1;
L_002EC4D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC4DC:
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.budget -= 1;
L_002EC4E0:
    set32(c.r[18], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_002EC4E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 1;
L_002EC4E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC4EC:
    set32(c.r[3], c.r[3].w[0] - 15904u);
    c.budget -= 1;
L_002EC4F0:
    set32(c.r[17], c.r[29].w[0] + 212u);
    c.budget -= 1;
L_002EC4F4:
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.budget -= 1;
L_002EC4F8:
    set32(c.r[16], c.r[29].w[0] + 228u);
    c.budget -= 1;
L_002EC4FC:
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_002EC500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC504:
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.budget -= 1;
L_002EC508:
    set32(c.r[21], c.r[29].w[0] + 216u);
    c.budget -= 1;
L_002EC50C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC510:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_002EC514:
    st32((c.r[1].w[0] + 20244u), c.r[5].w[0]);
    c.budget -= 1;
L_002EC518:
    set32(c.r[22], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_002EC51C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC520:
    set32(c.r[23], c.r[29].w[0] + 236u);
    c.budget -= 1;
L_002EC524:
    st32((c.r[1].w[0] + 20288u), c.r[5].w[0]);
    c.budget -= 1;
L_002EC528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC52C:
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002EC530:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC534:
    st32((c.r[1].w[0] + 20280u), c.r[4].w[0]);
    c.budget -= 1;
L_002EC538:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC53C:
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002EC540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.budget -= 1;
L_002EC544:
    set32(c.r[3], ld32((c.r[1].w[0] + 936u)));
    c.budget -= 1;
L_002EC548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_002EC54C:
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.budget -= 1;
L_002EC550:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 27u));
    c.budget -= 1;
L_002EC554:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 242u);  if (t) { goto L_002EC6C8; } }
    goto L_002EC55C;
L_002EC558:
    set32(c.r[30], c.r[29].w[0] + 242u);
    c.budget -= 1;
L_002EC55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC564u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EC564u) [[unlikely]] return; }
    goto L_002EC564;
L_002EC560:
    set32(c.r[4], c.r[20].w[0] + 192u);
    c.budget -= 1;
L_002EC564:
    c.f[3] = ld32((c.r[20].w[0] + 112u));
    c.budget -= 1;
L_002EC568:
    c.f[2] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_002EC56C:
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    c.budget -= 1;
L_002EC570:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 1;
L_002EC574:
    c.f[14] = 0u;
    c.budget -= 1;
L_002EC578:
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 1;
L_002EC57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC584u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EC584u) [[unlikely]] return; }
    goto L_002EC584;
L_002EC580:
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 1;
L_002EC584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC58Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EC58Cu) [[unlikely]] return; }
L_002EC58C:
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - 15872u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 128u);
    c.f[3] = c.r[4].w[0];
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0]));
    st32((c.r[22].w[0]), c.f[1]);
    st32((c.r[23].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[3], c.r[29].w[0] + 244u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[2], c.r[29].w[0] + 246u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 28682u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 252u));
    st8((c.r[28].w[0] - 28683u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[28].w[0] - 28684u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 51;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC668; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28681u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EC684; } }
L_002EC668:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 28681u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002EC684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC68Cu); set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x002EC68Cu) [[unlikely]] return; }
L_002EC68C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6C8u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x002EC6C8u) [[unlikely]] return; }
L_002EC6C8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002EC700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC728u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002EC728u) [[unlikely]] return; }
L_002EC728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC7B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 44u), c.f[0]);  if (t) { goto L_002EC788; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_002EC798; } }
    c.budget -= 1;
L_002EC788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_002EC798:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 14384u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 13872u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_002EC7B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EC7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EC7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[4].w[0] + 304u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 317u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 318u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 319u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 322u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 316u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 314u), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC844u); st16((c.r[4].w[0] + 312u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002EC844u) [[unlikely]] return; }
L_002EC844:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EC870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 317u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 304u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] + 13u);  if (t) { goto L_002EC8C0; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EC8C0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EC928; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EC8C0:
    c.r[3].d[0] = ld16((c.r[7].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_002EC8E4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EC8E4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_002EC8E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EC8F8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EC8F8:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 12u));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EC910; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002EC910:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_002EC928; } }
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 3;
L_002EC928:
    c.r[4].d[0] = c.r[6].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EC950; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EC998; } }
    c.budget -= 1;
L_002EC950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC968u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EC968u) [[unlikely]] return; }
L_002EC968:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC974u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EC974u) [[unlikely]] return; }
L_002EC974:
    c.budget -= 1;
L_002EC978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC980u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EC980u) [[unlikely]] return; }
L_002EC980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC988u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002EC988u) [[unlikely]] return; }
L_002EC988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC990u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EC990u) [[unlikely]] return; }
L_002EC990:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EC998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EC9B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EC9C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EC9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[5], c.r[5].w[0] - 15648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[28].w[0] - 28680u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[16].w[0] + 304u);
    st32((c.r[1].w[0] + 20252u), c.r[5].w[0]);
    set32(c.r[11], c.r[29].w[0] + 36u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20260u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15664u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[29].w[0] + 56u);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    set32(c.r[10], c.r[29].w[0] + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[1].w[0] + 20272u), c.r[6].w[0]);
    set32(c.r[9], c.r[29].w[0] + 44u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[5].w[0]);
    set32(c.r[8], c.r[29].w[0] + 58u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], 0u + 2u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[29].w[0] + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 932u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 317u));
    c.budget -= 45;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 62u);  if (t) { goto L_002ECB60; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] - 15792u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[11].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[10].w[0]), c.f[1]);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECB10; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28677u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002ECB2C; } }
L_002ECB10:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 28677u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_002ECB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB34u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x002ECB34u) [[unlikely]] return; }
L_002ECB34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB60u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x002ECB60u) [[unlikely]] return; }
L_002ECB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ECB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002ECB88u) [[unlikely]] return; }
L_002ECB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECBD0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 13344u);
    set32(c.r[3], c.r[3].w[0] - 12992u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_002ECBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ECBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_002ECD20; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ECD10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002ECC50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ECC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD28; } }
    c.budget -= 1;
L_002ECC20:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC48u); set32(c.r[4], c.r[4].w[0] - 15632u);  if (depth < kMaxDepth) unit_007A(c, 374u, depth + 1u); else { c.pc = 0x002EB9D0u; return; } if (c.pc != 0x002ECC48u) [[unlikely]] return; }
L_002ECC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD28; } }
L_002ECC50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002ECD28; } }
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 15312u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002ECCA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ECD28; } }
    c.budget -= 1;
L_002ECCA8:
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002ECCB8; } }
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002ECCB8:
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002ECCE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 15632u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCE0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_007A(c, 374u, depth + 1u); else { c.pc = 0x002EB9D0u; return; } if (c.pc != 0x002ECCE0u) [[unlikely]] return; }
L_002ECCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD28; } }
L_002ECCE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 15632u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 405u, depth + 1u); else { c.pc = 0x002EBF70u; return; } if (c.pc != 0x002ECD04u) [[unlikely]] return; }
L_002ECD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECD28; } }
    c.budget -= 1;
L_002ECD10:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ECD28; } }
    c.budget -= 1;
L_002ECD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD28u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x002ECD28u) [[unlikely]] return; }
L_002ECD28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ECD40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECD50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD84u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002ECD84u) [[unlikely]] return; }
L_002ECD84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ECE00; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[3], c.r[3].w[0] - 12768u);
    set32(c.r[2], c.r[2].w[0] - 11360u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDD8u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x002ECDD8u) [[unlikely]] return; }
L_002ECDD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 15296u);
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002ECDFCu) [[unlikely]] return; }
L_002ECDFC:
    c.budget -= 1;
L_002ECE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ECE20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15024u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ECE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] - 15296u);
    set32(c.r[7], 0u + 20481u);
    set32(c.r[6], c.r[6].w[0] - 15056u);
    set32(c.r[5], c.r[5].w[0] - 15040u);
    set32(c.r[2], c.r[17].w[0] + 304u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[9], c.r[9].w[0] << 5);
    set32(c.r[16], c.r[8].w[0] + c.r[9].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 80u), c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[4].w[0] + 308u), c.f[0]);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[1] = ld32((c.r[4].w[0] + 308u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 312u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[1] = ld32((c.r[4].w[0] + 308u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 316u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 59;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002ECF78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ECF68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[10].d[0];  if (t) { goto L_002ECF58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ECF50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECF80; } }
    c.budget -= 1;
L_002ECF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_002ECF80; } }
L_002ECF58:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ECF80; } }
    c.budget -= 1;
L_002ECF68:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ECF80; } }
    c.budget -= 1;
L_002ECF78:
    set32(c.r[3], 0u + 64u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002ECF80:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 148u, depth + 1u); else { c.pc = 0x002ED3F0u; return; } if (c.pc != 0x002ECF90u) [[unlikely]] return; }
L_002ECF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECFA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFA8u); c.r[4].d[0] = ld8((c.r[2].w[0] + 8656u));  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x002ECFA8u) [[unlikely]] return; }
L_002ECFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ECFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED010; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED010; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ED040; } }
    c.budget -= 1;
L_002ED010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED034u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED034u) [[unlikely]] return; }
L_002ED034:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED040u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 137u, depth + 1u); else { c.pc = 0x002ED2E0u; return; } if (c.pc != 0x002ED040u) [[unlikely]] return; }
L_002ED040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 838u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_002ED0A0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED09Cu); st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007B(c, 127u, depth + 1u); else { c.pc = 0x002ED0B0u; return; } if (c.pc != 0x002ED09Cu) [[unlikely]] return; }
L_002ED09C:
    c.budget -= 1;
L_002ED0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 838u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_002ED0D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002ED0F8; } }
L_002ED0D8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0ECu); st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007B(c, 130u, depth + 1u); else { c.pc = 0x002ED180u; return; } if (c.pc != 0x002ED0ECu) [[unlikely]] return; }
L_002ED0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED168; } }
    c.budget -= 1;
L_002ED0F8:
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED150; } }
    st32((c.r[4].w[0] + 120u), c.f[1]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002ED150:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED164u);  if (depth < kMaxDepth) unit_007B(c, 131u, depth + 1u); else { c.pc = 0x002ED1E0u; return; } if (c.pc != 0x002ED164u) [[unlikely]] return; }
L_002ED164:
    c.budget -= 1;
L_002ED168:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED180:
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ED1D8; } }
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002ED1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED1E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 838u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED208; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002ED228; } }
L_002ED208:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED21Cu); st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_007B(c, 130u, depth + 1u); else { c.pc = 0x002ED180u; return; } if (c.pc != 0x002ED21Cu) [[unlikely]] return; }
L_002ED21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED228; } }
    c.budget -= 1;
L_002ED228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ED2B8; } }
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ED2C0; } }
L_002ED2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2C0u); set32(c.r[5], ld32((c.r[4].w[0] + 24u)));  if (depth < kMaxDepth) unit_007B(c, 137u, depth + 1u); else { c.pc = 0x002ED2E0u; return; } if (c.pc != 0x002ED2C0u) [[unlikely]] return; }
L_002ED2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED2D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002ED2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED380; } }
    st32((c.r[16].w[0] + 160u), c.f[1]);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED330; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED328u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002ED328u) [[unlikely]] return; }
L_002ED328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED340; } }
L_002ED330:
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED340u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002ED340u) [[unlikely]] return; }
L_002ED340:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED350u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002ED350u) [[unlikely]] return; }
L_002ED350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED358u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002ED358u) [[unlikely]] return; }
L_002ED358:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED368u); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002ED368u) [[unlikely]] return; }
L_002ED368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED370u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002ED370u) [[unlikely]] return; }
L_002ED370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ED380; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002ED380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ED3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3C8u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_007B(c, 137u, depth + 1u); else { c.pc = 0x002ED2E0u; return; } if (c.pc != 0x002ED3C8u) [[unlikely]] return; }
L_002ED3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3D0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002ED3D0u) [[unlikely]] return; }
L_002ED3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3D8u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002ED3D8u) [[unlikely]] return; }
L_002ED3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ED3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED420u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002ED420u) [[unlikely]] return; }
L_002ED420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED468; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 11136u);
    set32(c.r[3], c.r[3].w[0] - 10864u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_002ED468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ED480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ED4A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 15200u);
    set32(c.r[7], c.r[4].w[0] + 304u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14856u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[7].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 33u)));  goto L_002EDAF0; }
L_002ED510:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_002ED540; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002ED550; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED550; } }
    c.budget -= 1;
L_002ED540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002ED560; } }
L_002ED550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ED560; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002ED560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002ED580:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002ED590:
    set32(c.r[29], c.r[29].w[0] - 848u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[7].w[0] + 240u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 244u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 248u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 20;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_002ED698; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002ED630; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002ED600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED9E0; } }
    c.budget -= 1;
L_002ED600:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED9E0; } }
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED628u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_007B(c, 172u, depth + 1u); else { c.pc = 0x002EDA50u; return; } if (c.pc != 0x002ED628u) [[unlikely]] return; }
L_002ED628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED9E0; } }
L_002ED630:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ED650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002ED9E0; } }
L_002ED650:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002ED678; } }
    c.budget -= 1;
L_002ED660:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED670u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 171u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x002ED670u) [[unlikely]] return; }
L_002ED670:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002ED678:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED660u | kUnwind; return; } goto L_002ED660; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED690u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_007B(c, 172u, depth + 1u); else { c.pc = 0x002EDA50u; return; } if (c.pc != 0x002ED690u) [[unlikely]] return; }
L_002ED690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED9E0; } }
L_002ED698:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ED6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002ED6F0; } }
L_002ED6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002ED6D8; } }
L_002ED6C0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6D0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 171u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x002ED6D0u) [[unlikely]] return; }
L_002ED6D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002ED6D8:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED6C0u | kUnwind; return; } goto L_002ED6C0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6F0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_007B(c, 172u, depth + 1u); else { c.pc = 0x002EDA50u; return; } if (c.pc != 0x002ED6F0u) [[unlikely]] return; }
L_002ED6F0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_002ED778; } }
    c.budget -= 1;
L_002ED700:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 752u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 756u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 760u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 96u));
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 688u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 692u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 696u), c.f[0]);
    c.budget -= 30;
L_002ED778:
    c.r[1].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 752u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED700u | kUnwind; return; } goto L_002ED700; } }
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED790u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 393u, depth + 1u); else { c.pc = 0x0020F7F0u; return; } if (c.pc != 0x002ED790u) [[unlikely]] return; }
L_002ED790:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7A0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 393u, depth + 1u); else { c.pc = 0x0020F7F0u; return; } if (c.pc != 0x002ED7A0u) [[unlikely]] return; }
L_002ED7A0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002ED908; } }
    c.budget -= 1;
L_002ED7B0:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002ED8F8; } }
    c.budget -= 1;
L_002ED7C0:
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.f[4] = ld32((c.r[3].w[0] + 432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 832u);
    c.f[3] = ld32((c.r[3].w[0] + 448u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 464u));
    c.f[1] = ld32((c.r[3].w[0] + 480u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 832u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 436u));
    c.f[3] = ld32((c.r[3].w[0] + 452u));
    c.f[2] = ld32((c.r[3].w[0] + 468u));
    c.f[1] = ld32((c.r[3].w[0] + 484u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 836u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 440u));
    c.f[3] = ld32((c.r[3].w[0] + 456u));
    c.f[2] = ld32((c.r[3].w[0] + 472u));
    c.f[1] = ld32((c.r[3].w[0] + 488u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 840u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 176u));
    c.f[3] = ld32((c.r[3].w[0] + 192u));
    c.f[2] = ld32((c.r[3].w[0] + 208u));
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 816u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 180u));
    c.f[3] = ld32((c.r[3].w[0] + 196u));
    c.f[2] = ld32((c.r[3].w[0] + 212u));
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 820u), c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 184u));
    c.f[3] = ld32((c.r[3].w[0] + 200u));
    c.f[2] = ld32((c.r[3].w[0] + 216u));
    c.f[1] = ld32((c.r[3].w[0] + 232u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 76;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8F0u); st32((c.r[29].w[0] + 824u), c.f[1]);  if (depth < kMaxDepth) unit_007B(c, 173u, depth + 1u); else { c.pc = 0x002EDAC0u; return; } if (c.pc != 0x002ED8F0u) [[unlikely]] return; }
L_002ED8F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002ED8F8:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED7C0u | kUnwind; return; } goto L_002ED7C0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ED908:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED7B0u | kUnwind; return; } goto L_002ED7B0; } }
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED920u); set32(c.r[5], c.r[29].w[0] + 832u);  if (depth < kMaxDepth) unit_007B(c, 173u, depth + 1u); else { c.pc = 0x002EDAC0u; return; } if (c.pc != 0x002ED920u) [[unlikely]] return; }
L_002ED920:
    set32(c.r[2], c.r[20].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    vu::mr32(c.vu0, 15u, 6u, 0u);
    vu::move(c.vu0, 1u, 7u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 6u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mr32(c.vu0, 15u, 4u, 5u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 9344u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[7].w[0] - 14832u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[5], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] + 20244u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 936u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20296u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9DCu); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0067(c, 120u, depth + 1u); else { c.pc = 0x0029DF90u; return; } if (c.pc != 0x002ED9DCu) [[unlikely]] return; }
L_002ED9DC:
    c.budget -= 1;
L_002ED9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_002EDA10:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + 96u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_002EDA50:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + 32u);
    set32(c.r[6], c.r[3].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[8].w[0] + 192u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 1u, 7u, 0u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 7u, c.vu0.vf[8].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[9].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[9].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[9].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_002EDAC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 9344u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::move(c.vu0, 1u, 4u, 0u);
    vu::move(c.vu0, 1u, 5u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_002EDAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB18u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002EDB18u) [[unlikely]] return; }
L_002EDB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDB68; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 9344u);
    set32(c.r[3], c.r[3].w[0] - 6608u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_002EDB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EDB80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EDBA0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], c.r[4].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 14651u);
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[11].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 14672u);
    c.budget -= 20;
L_002EDBF0:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] << 56;
    set32(c.r[12], c.r[10].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[11].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[13].w[0]));
    st32((c.r[8].w[0] + 64u), c.f[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 4u));
    st32((c.r[8].w[0] + 68u), c.f[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 8u));
    st32((c.r[8].w[0] + 72u), c.f[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 16u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[13].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 18u)));
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[5], c.r[13].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 20u));
    c.budget -= 61;
    { const bool t = c.r[11].d[0] != 0ull; st8((c.r[12].w[0] + 256u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDBF0u | kUnwind; return; } goto L_002EDBF0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EDCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[17].w[0] + 304u);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + 304u);  if (t) { goto L_002EDD38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EDD80; } }
    c.budget -= 1;
L_002EDD38:
    c.f[1] = ld32((c.r[7].w[0] + 116u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDD80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDD6Cu) [[unlikely]] return; }
L_002EDD6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EDD80; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EDD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EDDA0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[9].d[0] = c.r[8].d[0] | 55053ull;
    set32(c.r[10], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    set32(c.r[13], 0u + 3u);
    c.r[8].d[0] = c.r[8].d[0] | 4710ull;
    set32(c.r[12], 0u + 20u);
    c.f[4] = c.r[8].w[0];
    c.f[5] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[3] = c.r[8].w[0];
    c.f[2] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[8].d[0] = c.r[8].d[0] | 55053ull;
    c.f[6] = c.r[8].w[0];
    c.f[7] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.f[0] = c.r[11].w[0];
    c.r[9].d[0] = c.r[8].d[0] | 13107ull;
    c.budget -= 28;
L_002EDE10:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[14], c.r[8].w[0] - 1u);  if (t) { goto L_002EDE38; } }
    c.r[8].d[0] = c.r[7].d[0] << 56;
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EDF18; } }
    c.budget -= 1;
L_002EDE38:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    set32(c.r[8], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002EDE78; } }
    c.r[8].d[0] = c.r[7].d[0] << 56;
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 192u), c.r[11].w[0]);  if (t) { goto L_002EDF18; } }
    c.budget -= 1;
L_002EDE78:
    c.r[8].d[0] = c.r[7].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EDEC0; } }
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[6]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 72u), c.f[1]);  if (t) { goto L_002EDF18; } }
L_002EDEC0:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 192u));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 192u), c.f[1]);  if (t) { goto L_002EDF00; } }
    st32((c.r[3].w[0] + 192u), c.f[2]);
    c.budget -= 2;
L_002EDF00:
    c.f[1] = ld32((c.r[3].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDF18; } }
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.budget -= 2;
L_002EDF18:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDE10u | kUnwind; return; } goto L_002EDE10; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EDF40:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[13].d[0] = c.r[8].d[0] | 52429ull;
    set32(c.r[14], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    set32(c.r[10], 0u + 1u);
    c.r[12].d[0] = c.r[8].d[0] | 13107ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52428ull;
    c.f[2] = c.r[8].w[0];
    c.f[5] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[8].d[0] = c.r[8].d[0] | 55046ull;
    c.f[1] = c.r[8].w[0];
    c.f[4] = 0u;
    c.f[3] = c.r[11].w[0];
    c.budget -= 22;
L_002EDF98:
    c.r[15].d[0] = c.r[7].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);  if (t) { goto L_002EDFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE060; } }
    c.budget -= 1;
L_002EDFB8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] - 1u);  if (t) { goto L_002EDFD8; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE060; } }
    c.budget -= 1;
L_002EDFD8:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    set32(c.r[8], c.r[9].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002EE000; } }
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[13].w[0]);
    st32((c.r[3].w[0] + 192u), c.r[11].w[0]);
    c.budget -= 6;
L_002EE000:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE048; } }
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 192u), c.f[0]);  if (t) { goto L_002EE030; } }
    st32((c.r[3].w[0] + 192u), c.f[4]);
    c.budget -= 1;
L_002EE030:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE048; } }
    st32((c.r[3].w[0] + 192u), c.f[3]);
    c.budget -= 2;
L_002EE048:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.budget -= 6;
L_002EE060:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDF98u | kUnwind; return; } goto L_002EDF98; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EE090:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[13].d[0] = c.r[8].d[0] | 39322ull;
    set32(c.r[14], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    set32(c.r[10], 0u + 1u);
    c.r[12].d[0] = c.r[8].d[0] | 26214ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DE10000u);
    c.r[8].d[0] = c.r[8].d[0] | 18349ull;
    c.f[2] = c.r[8].w[0];
    c.f[5] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[8].d[0] = c.r[8].d[0] | 55053ull;
    c.f[1] = c.r[8].w[0];
    c.f[4] = 0u;
    c.f[3] = c.r[11].w[0];
    c.budget -= 22;
L_002EE0E8:
    c.r[15].d[0] = c.r[7].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);  if (t) { goto L_002EE108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE1C0; } }
    c.budget -= 1;
L_002EE108:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] - 1u);  if (t) { goto L_002EE128; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE1C0; } }
    c.budget -= 1;
L_002EE128:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    set32(c.r[8], c.r[9].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002EE150; } }
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[13].w[0]);
    st32((c.r[3].w[0] + 192u), c.r[11].w[0]);
    c.budget -= 6;
L_002EE150:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE198; } }
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 192u), c.f[0]);  if (t) { goto L_002EE180; } }
    st32((c.r[3].w[0] + 192u), c.f[4]);
    c.budget -= 1;
L_002EE180:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE198; } }
    st32((c.r[3].w[0] + 192u), c.f[3]);
    c.budget -= 2;
L_002EE198:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_002EE1C0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE0E8u | kUnwind; return; } goto L_002EE0E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EE1F0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[13].d[0] = c.r[8].d[0] | 39322ull;
    set32(c.r[14], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[10], 0u + 1u);
    c.r[12].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[8].d[0] = c.r[8].d[0] | 49808ull;
    c.f[2] = c.r[8].w[0];
    c.f[5] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[8].d[0] = c.r[8].d[0] | 49808ull;
    c.f[1] = c.r[8].w[0];
    c.f[4] = 0u;
    c.f[3] = c.r[11].w[0];
    c.budget -= 22;
L_002EE248:
    c.r[15].d[0] = c.r[7].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);  if (t) { goto L_002EE268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE320; } }
    c.budget -= 1;
L_002EE268:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] - 1u);  if (t) { goto L_002EE288; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE320; } }
    c.budget -= 1;
L_002EE288:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    set32(c.r[8], c.r[9].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002EE2B0; } }
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[13].w[0]);
    st32((c.r[3].w[0] + 192u), c.r[11].w[0]);
    c.budget -= 6;
L_002EE2B0:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE2F8; } }
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 192u), c.f[0]);  if (t) { goto L_002EE2E0; } }
    st32((c.r[3].w[0] + 192u), c.f[4]);
    c.budget -= 1;
L_002EE2E0:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE2F8; } }
    st32((c.r[3].w[0] + 192u), c.f[3]);
    c.budget -= 2;
L_002EE2F8:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_002EE320:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE248u | kUnwind; return; } goto L_002EE248; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EE350:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[13].d[0] = c.r[8].d[0] | 39322ull;
    set32(c.r[14], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    set32(c.r[10], 0u + 1u);
    c.r[12].d[0] = c.r[8].d[0] | 26214ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[8].d[0] = c.r[8].d[0] | 49808ull;
    c.f[2] = c.r[8].w[0];
    c.f[5] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[8].d[0] = c.r[8].d[0] | 55053ull;
    c.f[1] = c.r[8].w[0];
    c.f[4] = 0u;
    c.f[3] = c.r[11].w[0];
    c.budget -= 22;
L_002EE3A8:
    c.r[15].d[0] = c.r[7].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);  if (t) { goto L_002EE3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE480; } }
    c.budget -= 1;
L_002EE3C8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] - 1u);  if (t) { goto L_002EE3E8; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE480; } }
    c.budget -= 1;
L_002EE3E8:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    set32(c.r[8], c.r[9].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002EE410; } }
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[13].w[0]);
    st32((c.r[3].w[0] + 192u), c.r[11].w[0]);
    c.budget -= 6;
L_002EE410:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE458; } }
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 192u), c.f[0]);  if (t) { goto L_002EE440; } }
    st32((c.r[3].w[0] + 192u), c.f[4]);
    c.budget -= 1;
L_002EE440:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE458; } }
    st32((c.r[3].w[0] + 192u), c.f[3]);
    c.budget -= 2;
L_002EE458:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_002EE480:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE3A8u | kUnwind; return; } goto L_002EE3A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EE4B0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[13].d[0] = c.r[8].d[0] | 39322ull;
    set32(c.r[14], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    set32(c.r[10], 0u + 1u);
    c.r[12].d[0] = c.r[8].d[0] | 13107ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DB80000u);
    c.r[8].d[0] = c.r[8].d[0] | 20971ull;
    c.f[2] = c.r[8].w[0];
    c.f[5] = c.r[9].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52432ull;
    c.f[1] = c.r[8].w[0];
    c.f[4] = 0u;
    c.f[3] = c.r[11].w[0];
    c.budget -= 22;
L_002EE508:
    c.r[15].d[0] = c.r[7].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);  if (t) { goto L_002EE528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE5E0; } }
    c.budget -= 1;
L_002EE528:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] - 1u);  if (t) { goto L_002EE548; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st16((c.r[6].w[0] + 224u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EE5E0; } }
    c.budget -= 1;
L_002EE548:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    set32(c.r[8], c.r[9].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002EE570; } }
    st16((c.r[6].w[0] + 240u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[13].w[0]);
    st32((c.r[3].w[0] + 192u), c.r[11].w[0]);
    c.budget -= 6;
L_002EE570:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EE5B8; } }
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 192u), c.f[0]);  if (t) { goto L_002EE5A0; } }
    st32((c.r[3].w[0] + 192u), c.f[4]);
    c.budget -= 1;
L_002EE5A0:
    c.f[0] = ld32((c.r[3].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE5B8; } }
    st32((c.r[3].w[0] + 192u), c.f[3]);
    c.budget -= 2;
L_002EE5B8:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_002EE5E0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE508u | kUnwind; return; } goto L_002EE508; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EE610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EE620:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EE630:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[18], ld32((c.r[21].w[0] + 28u)));
    c.f[1] = ld32((c.r[18].w[0] + 308u));
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002EEEC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE6F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE690u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EE690u) [[unlikely]] return; }
L_002EE690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE698u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002EE698u) [[unlikely]] return; }
L_002EE698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EE6A0u) [[unlikely]] return; }
L_002EE6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EE6A8u) [[unlikely]] return; }
L_002EE6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6B0u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002EE6B0u) [[unlikely]] return; }
L_002EE6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002EE6B8u) [[unlikely]] return; }
L_002EE6B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 23593ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[12] = 0u;
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6DCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EE6DCu) [[unlikely]] return; }
L_002EE6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6E4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EE6E4u) [[unlikely]] return; }
L_002EE6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE728; } }
    c.budget -= 1;
L_002EE6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6F8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EE6F8u) [[unlikely]] return; }
L_002EE6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE700u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002EE700u) [[unlikely]] return; }
L_002EE700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE708u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EE708u) [[unlikely]] return; }
L_002EE708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE710u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EE710u) [[unlikely]] return; }
L_002EE710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE718u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002EE718u) [[unlikely]] return; }
L_002EE718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002EE720u) [[unlikely]] return; }
L_002EE720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE728u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EE728u) [[unlikely]] return; }
L_002EE728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[28].w[0] - 28676u);
    st32((c.r[1].w[0] + 20240u), c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EEBC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EE9D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEEC8; } }
L_002EE7A0:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[23], c.r[29].w[0] + 216u);
    c.budget -= 4;
L_002EE7B0:
    c.r[22].d[0] = c.r[20].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EE9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7D0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EE7D0u) [[unlikely]] return; }
L_002EE7D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002EE7E0u) [[unlikely]] return; }
L_002EE7E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7F4u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002EE7F4u) [[unlikely]] return; }
L_002EE7F4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE800u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002EE800u) [[unlikely]] return; }
L_002EE800:
    c.f[13] = ld32((c.r[23].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE80Cu); c.f[12] = ld32((c.r[29].w[0] + 208u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002EE80Cu) [[unlikely]] return; }
L_002EE80C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE81Cu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EE81Cu) [[unlikely]] return; }
L_002EE81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE824u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EE824u) [[unlikely]] return; }
L_002EE824:
    c.f[1] = ld32((c.r[19].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE85C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_002EE878; } }
L_002EE85C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[1].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
L_002EE878:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 28673u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE8F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.f[14] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 13936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 68u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8F0u); c.f[12] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EE8F0u) [[unlikely]] return; }
L_002EE8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE978; } }
L_002EE8F8:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 13936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    set32(c.r[2], c.r[6].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 72u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE978u); c.f[12] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EE978u) [[unlikely]] return; }
L_002EE978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE980u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EE980u) [[unlikely]] return; }
L_002EE980:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002EE9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE998u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 49u, depth + 1u); else { c.pc = 0x0029CD10u; return; } if (c.pc != 0x002EE998u) [[unlikely]] return; }
L_002EE998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE9B0; } }
L_002EE9A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9ACu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EE9ACu) [[unlikely]] return; }
L_002EE9AC:
    c.budget -= 1;
L_002EE9B0:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[3].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[3].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE7B0u | kUnwind; return; } goto L_002EE7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEEC8; } }
    c.budget -= 1;
L_002EE9D8:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002EE9E8:
    c.r[21].d[0] = c.r[18].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_002EEBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA08u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EEA08u) [[unlikely]] return; }
L_002EEA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA10u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EEA10u) [[unlikely]] return; }
L_002EEA10:
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEA48; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_002EEA64; } }
L_002EEA48:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[1].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
L_002EEA64:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 28673u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EEAE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.f[14] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 13936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 68u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEADCu); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EEADCu) [[unlikely]] return; }
L_002EEADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEB68; } }
    c.budget -= 1;
L_002EEAE8:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 13936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    set32(c.r[2], c.r[6].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 72u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB68u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EEB68u) [[unlikely]] return; }
L_002EEB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB70u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EEB70u) [[unlikely]] return; }
L_002EEB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002EEB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB88u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 49u, depth + 1u); else { c.pc = 0x0029CD10u; return; } if (c.pc != 0x002EEB88u) [[unlikely]] return; }
L_002EEB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEBA0; } }
L_002EEB90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB9Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EEB9Cu) [[unlikely]] return; }
L_002EEB9C:
    c.budget -= 1;
L_002EEBA0:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE9E8u | kUnwind; return; } goto L_002EE9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEEC8; } }
    c.budget -= 1;
L_002EEBC8:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[23], c.r[29].w[0] + 216u);
    c.budget -= 4;
L_002EEBD8:
    c.r[22].d[0] = c.r[18].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EEEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBF8u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EEBF8u) [[unlikely]] return; }
L_002EEBF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002EEC08u) [[unlikely]] return; }
L_002EEC08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC1Cu); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002EEC1Cu) [[unlikely]] return; }
L_002EEC1C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002EEC28u) [[unlikely]] return; }
L_002EEC28:
    c.f[13] = ld32((c.r[23].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC34u); c.f[12] = ld32((c.r[29].w[0] + 208u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002EEC34u) [[unlikely]] return; }
L_002EEC34:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC44u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EEC44u) [[unlikely]] return; }
L_002EEC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EEC4Cu) [[unlikely]] return; }
L_002EEC4C:
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEC84; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_002EECA0; } }
L_002EEC84:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[1].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
L_002EECA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 28673u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EEDE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 936u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 13936u);
    set32(c.r[4], c.r[4].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 68u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED28u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EED28u) [[unlikely]] return; }
L_002EED28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED30u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EED30u) [[unlikely]] return; }
L_002EED30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002EED50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED48u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 49u, depth + 1u); else { c.pc = 0x0029CD10u; return; } if (c.pc != 0x002EED48u) [[unlikely]] return; }
L_002EED48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EED60; } }
L_002EED50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED5Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EED5Cu) [[unlikely]] return; }
L_002EED5C:
    c.budget -= 1;
L_002EED60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] - 13808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 9312u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 6u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 6u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDA8u); st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EEDA8u) [[unlikely]] return; }
L_002EEDA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002EEDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDC0u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 49u, depth + 1u); else { c.pc = 0x0029CD10u; return; } if (c.pc != 0x002EEDC0u) [[unlikely]] return; }
L_002EEDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEEA8; } }
L_002EEDC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDD4u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EEDD4u) [[unlikely]] return; }
L_002EEDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEEA8; } }
    c.budget -= 1;
L_002EEDE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 936u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 13936u);
    set32(c.r[4], c.r[4].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[14] = c.r[2].w[0];
    st32((c.r[1].w[0] + 20276u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 72u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE70u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EEE70u) [[unlikely]] return; }
L_002EEE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE78u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EEE78u) [[unlikely]] return; }
L_002EEE78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002EEE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE90u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 49u, depth + 1u); else { c.pc = 0x0029CD10u; return; } if (c.pc != 0x002EEE90u) [[unlikely]] return; }
L_002EEE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEEA8; } }
L_002EEE98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEA4u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EEEA4u) [[unlikely]] return; }
L_002EEEA4:
    c.budget -= 1;
L_002EEEA8:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEBD8u | kUnwind; return; } goto L_002EEBD8; } }
    c.budget -= 1;
L_002EEEC8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002EEF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 29u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_002EEF30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EEF48; } }
L_002EEF30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], 0u + 389u);  if (t) { goto L_002EEF48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 396u);  if (t) { goto L_002EEF58; } }
L_002EEF48:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 98u)));
    c.budget -= 4;
L_002EEF58:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EEF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEFB0; } }
    c.budget -= 1;
L_002EEF70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 196u, depth + 1u); else { c.pc = 0x0016ED40u; return; } if (c.pc != 0x002EEF7Cu) [[unlikely]] return; }
L_002EEF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);  if (t) { goto L_002EEF90; } }
    set32(c.r[3], c.r[3].w[0] - 4144u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 3;
L_002EEF90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002EEF98:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEF70u | kUnwind; return; } goto L_002EEF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 81u, depth + 1u); else { c.pc = 0x0022D150u; return; } if (c.pc != 0x002EEFACu) [[unlikely]] return; }
L_002EEFAC:
    c.budget -= 1;
L_002EEFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EEFD0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 13664u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 544u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF018u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF018u) [[unlikely]] return; }
L_002EF018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[21], c.r[29].w[0] + 184u);
    set32(c.r[3], c.r[28].w[0] - 28672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.budget -= 28;
L_002EF088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 79u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[16].w[0] + 64u);  if (t) { goto L_002EF270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF09Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EF09Cu) [[unlikely]] return; }
L_002EF09C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002EF0ACu) [[unlikely]] return; }
L_002EF0AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0C0u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002EF0C0u) [[unlikely]] return; }
L_002EF0C0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002EF0CCu) [[unlikely]] return; }
L_002EF0CC:
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0D8u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002EF0D8u) [[unlikely]] return; }
L_002EF0D8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[20].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0E8u); st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EF0E8u) [[unlikely]] return; }
L_002EF0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0F0u); set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EF0F0u) [[unlikely]] return; }
L_002EF0F0:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EF128; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28669u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EF144; } }
L_002EF128:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 28669u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002EF144:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 14u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] - 13744u);
    set32(c.r[3], c.r[3].w[0] - 13696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 13792u);
    set32(c.r[2], 0u + 170u);
    set32(c.r[4], c.r[4].w[0] - 168u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[7], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 14u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1ACu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EF1ACu) [[unlikely]] return; }
L_002EF1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1B4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EF1B4u) [[unlikely]] return; }
L_002EF1B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1C0u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002EF1C0u) [[unlikely]] return; }
L_002EF1C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002EF1D0u) [[unlikely]] return; }
L_002EF1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1D8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x002EF1D8u) [[unlikely]] return; }
L_002EF1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002EF1E0u) [[unlikely]] return; }
L_002EF1E0:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1F0u); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EF1F0u) [[unlikely]] return; }
L_002EF1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1F8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002EF1F8u) [[unlikely]] return; }
L_002EF1F8:
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[20].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF21Cu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EF21Cu) [[unlikely]] return; }
L_002EF21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF224u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EF224u) [[unlikely]] return; }
L_002EF224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF230u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EF230u) [[unlikely]] return; }
L_002EF230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF270; } }
L_002EF238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF25Cu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EF25Cu) [[unlikely]] return; }
L_002EF25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF264u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EF264u) [[unlikely]] return; }
L_002EF264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF270u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EF270u) [[unlikely]] return; }
L_002EF270:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF088u | kUnwind; return; } goto L_002EF088; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002EF2B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EF2C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EF2D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[7], c.r[28].w[0] - 28668u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[22], c.r[29].w[0] + 200u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[1].w[0] + 936u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[8].w[0]);
    set32(c.r[4], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[21], c.r[19].w[0] + 304u);
    st32((c.r[1].w[0] + 20260u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.budget -= 40;
L_002EF370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002EF4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF384u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EF384u) [[unlikely]] return; }
L_002EF384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF394u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002EF394u) [[unlikely]] return; }
L_002EF394:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3A8u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002EF3A8u) [[unlikely]] return; }
L_002EF3A8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3B4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002EF3B4u) [[unlikely]] return; }
L_002EF3B4:
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3C0u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002EF3C0u) [[unlikely]] return; }
L_002EF3C0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3D0u); st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EF3D0u) [[unlikely]] return; }
L_002EF3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3D8u); set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EF3D8u) [[unlikely]] return; }
L_002EF3D8:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EF410; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28665u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EF42C; } }
L_002EF410:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 28665u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002EF42C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 112u));
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 14u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[2], c.r[2].w[0] - 170u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF45Cu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EF45Cu) [[unlikely]] return; }
L_002EF45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF464u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EF464u) [[unlikely]] return; }
L_002EF464:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 13600u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20252u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13632u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 13568u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4B8u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EF4B8u) [[unlikely]] return; }
L_002EF4B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF370u | kUnwind; return; } goto L_002EF370; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002EF4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF518u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002EF518u) [[unlikely]] return; }
L_002EF518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EF560; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], c.r[4].w[0] - 2688u);
    set32(c.r[3], c.r[3].w[0] - 704u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_002EF560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EF580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EF5A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] - 13552u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 341u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 340u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 373u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 372u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  goto L_002EF600; }
L_002EF600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_002EF6B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EF638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF718; } }
    c.budget -= 1;
L_002EF638:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 10u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[6].d[0] = c.r[5].d[0] | 39322ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { goto L_002EF718; } }
    c.budget -= 1;
L_002EF6B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EF6F8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], 0u - 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002EF718; } }
    c.budget -= 1;
L_002EF6F8:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002EF718:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EF7A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002EF760; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EF740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF7D8; } }
L_002EF740:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 5u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), 0u);  if (t) { goto L_002EF7D8; } }
L_002EF760:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EF7D8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[6], 0u + 5u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[5].w[0]);  if (t) { goto L_002EF7D8; } }
L_002EF7A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EF7C8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_002EF7C8:
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_002EF7D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 36u);  if (t) { goto L_002EF940; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002EF888; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EF808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF9A0; } }
    c.budget -= 1;
L_002EF808:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.f[2] = c.r[5].w[0];
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { goto L_002EF9A0; } }
    c.budget -= 1;
L_002EF888:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EF918; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], 0u + 15u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[6].w[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { goto L_002EF9A0; } }
L_002EF918:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002EF9A0; } }
    c.budget -= 1;
L_002EF940:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EF980; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002EF9A0; } }
    c.budget -= 1;
L_002EF980:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002EF9A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EFA28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002EF9E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EF9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFA60; } }
L_002EF9C8:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 15u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), 0u);  if (t) { goto L_002EFA60; } }
L_002EF9E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EFA60; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[6], 0u + 5u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[5].w[0]);  if (t) { goto L_002EFA60; } }
L_002EFA28:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EFA50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_002EFA50:
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_002EFA60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 68u);  if (t) { goto L_002EFBD8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002EFB18; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EFA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFC38; } }
    c.budget -= 1;
L_002EFA90:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 5u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[6].d[0] = c.r[5].d[0] | 52429ull;
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { goto L_002EFC38; } }
L_002EFB18:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EFBB0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[7], 0u + 5u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[2] = c.r[6].w[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { goto L_002EFC38; } }
    c.budget -= 1;
L_002EFBB0:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002EFC38; } }
    c.budget -= 1;
L_002EFBD8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EFC18; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002EFC38; } }
    c.budget -= 1;
L_002EFC18:
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002EFC38:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EFCC0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002EFC80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EFC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFCF8; } }
L_002EFC60:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 5u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), 0u);  if (t) { goto L_002EFCF8; } }
L_002EFC80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EFCF8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[6], 0u + 5u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[5].w[0]);  if (t) { goto L_002EFCF8; } }
L_002EFCC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002EFCE8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_002EFCE8:
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_002EFCF8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EFD18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EFD30; } }
    c.budget -= 1;
L_002EFD18:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD28u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002EFD28u) [[unlikely]] return; }
L_002EFD28:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EFD30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EFD40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], c.r[20].w[0] - 13472u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[22], c.r[16].w[0] + 304u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[19], c.r[19].w[0] - 13520u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[18], c.r[18].w[0] - 13424u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[28].w[0] - 28664u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.budget -= 42;
L_002EFDE8:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.r[5].d[0] = c.r[21].d[0] << 56;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002EFF90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 20252u), c.r[20].w[0]);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[18].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EFE50; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFE68; } }
L_002EFE50:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_002EFE68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20260u)));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EFEA8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFEC0; } }
L_002EFEA8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_002EFEC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20260u)));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EFF00; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFF18; } }
L_002EFF00:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_002EFF18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF28u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EFF28u) [[unlikely]] return; }
L_002EFF28:
    c.f[0] = c.r[21].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[2], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF5Cu); c.f[14] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EFF5Cu) [[unlikely]] return; }
L_002EFF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF64u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EFF64u) [[unlikely]] return; }
L_002EFF64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 12u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF78u); c.f[12] = ld32((c.r[17].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002EFF78u) [[unlikely]] return; }
L_002EFF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF80u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EFF80u) [[unlikely]] return; }
L_002EFF80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF8Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002EFF8Cu) [[unlikely]] return; }
L_002EFF8C:
    c.budget -= 1;
L_002EFF90:
    set32(c.r[3], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[3].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[3].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 7;
L_002EFFAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFDE8u | kUnwind; return; } goto L_002EFDE8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_002EFFD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002EFFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01070000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
L_002EFFEC:
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23132u), c.r[4].w[0]);
    c.budget -= 3;
L_002EFFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0000u); set32(c.r[6], 0u + 1564u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002F0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007C(c, 1u, depth);
}

}
