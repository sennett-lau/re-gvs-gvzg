#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290,
    0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A8000;
    case 2u: goto L_003A8040;
    case 3u: goto L_003A8048;
    case 4u: goto L_003A8050;
    case 5u: goto L_003A8064;
    case 6u: goto L_003A806C;
    case 7u: goto L_003A8080;
    case 8u: goto L_003A8094;
    case 9u: goto L_003A80A8;
    case 10u: goto L_003A80C0;
    case 11u: goto L_003A80D0;
    case 12u: goto L_003A80E0;
    case 13u: goto L_003A8118;
    case 14u: goto L_003A8138;
    case 15u: goto L_003A8150;
    case 16u: goto L_003A8160;
    case 17u: goto L_003A818C;
    case 18u: goto L_003A819C;
    case 19u: goto L_003A81A8;
    case 20u: goto L_003A81B4;
    case 21u: goto L_003A81DC;
    case 22u: goto L_003A81E8;
    case 23u: goto L_003A8208;
    case 24u: goto L_003A8218;
    case 25u: goto L_003A8224;
    case 26u: goto L_003A828C;
    case 27u: goto L_003A82A8;
    case 28u: goto L_003A82C0;
    case 29u: goto L_003A82E0;
    case 30u: goto L_003A83CC;
    case 31u: goto L_003A83E0;
    case 32u: goto L_003A83F0;
    case 33u: goto L_003A8408;
    case 34u: goto L_003A8410;
    case 35u: goto L_003A8420;
    case 36u: goto L_003A8430;
    case 37u: goto L_003A84E8;
    case 38u: goto L_003A8500;
    case 39u: goto L_003A8510;
    case 40u: goto L_003A8518;
    case 41u: goto L_003A8530;
    case 42u: goto L_003A8540;
    case 43u: goto L_003A85D0;
    case 44u: goto L_003A8670;
    case 45u: goto L_003A8700;
    case 46u: goto L_003A8720;
    case 47u: goto L_003A8740;
    case 48u: goto L_003A8750;
    case 49u: goto L_003A8780;
    case 50u: goto L_003A8790;
    case 51u: goto L_003A87A0;
    case 52u: goto L_003A88D8;
    case 53u: goto L_003A8940;
    case 54u: goto L_003A8A20;
    case 55u: goto L_003A8A90;
    case 56u: goto L_003A8AB4;
    case 57u: goto L_003A8AC0;
    case 58u: goto L_003A8ACC;
    case 59u: goto L_003A8AD8;
    case 60u: goto L_003A8AE4;
    case 61u: goto L_003A8AEC;
    case 62u: goto L_003A8B08;
    case 63u: goto L_003A8B14;
    case 64u: goto L_003A8B38;
    case 65u: goto L_003A8B44;
    case 66u: goto L_003A8B4C;
    case 67u: goto L_003A8B70;
    case 68u: goto L_003A8BA0;
    case 69u: goto L_003A8BAC;
    case 70u: goto L_003A8BB8;
    case 71u: goto L_003A8BC4;
    case 72u: goto L_003A8BD0;
    case 73u: goto L_003A8BD8;
    case 74u: goto L_003A8BF8;
    case 75u: goto L_003A8C04;
    case 76u: goto L_003A8C28;
    case 77u: goto L_003A8C34;
    case 78u: goto L_003A8C50;
    case 79u: goto L_003A8C74;
    case 80u: goto L_003A8C80;
    case 81u: goto L_003A8C8C;
    case 82u: goto L_003A8C98;
    case 83u: goto L_003A8CA4;
    case 84u: goto L_003A8CAC;
    case 85u: goto L_003A8CB8;
    case 86u: goto L_003A8CD8;
    case 87u: goto L_003A8CE4;
    case 88u: goto L_003A8D14;
    case 89u: goto L_003A8D20;
    case 90u: goto L_003A8D40;
    case 91u: goto L_003A8D7C;
    case 92u: goto L_003A8D80;
    case 93u: goto L_003A8E18;
    case 94u: goto L_003A8E34;
    case 95u: goto L_003A8E48;
    case 96u: goto L_003A8EB0;
    case 97u: goto L_003A8F2C;
    case 98u: goto L_003A8F38;
    case 99u: goto L_003A8FE4;
    case 100u: goto L_003A8FF0;
    case 101u: goto L_003A9014;
    case 102u: goto L_003A902C;
    case 103u: goto L_003A91A0;
    case 104u: goto L_003A91D0;
    case 105u: goto L_003A921C;
    case 106u: goto L_003A9228;
    case 107u: goto L_003A92D8;
    case 108u: goto L_003A92E4;
    case 109u: goto L_003A9308;
    case 110u: goto L_003A931C;
    case 111u: goto L_003A9340;
    case 112u: goto L_003A9358;
    case 113u: goto L_003A9360;
    case 114u: goto L_003A9370;
    case 115u: goto L_003A9380;
    case 116u: goto L_003A9390;
    case 117u: goto L_003A93E0;
    case 118u: goto L_003A94C0;
    case 119u: goto L_003A94E0;
    case 120u: goto L_003A9538;
    case 121u: goto L_003A9560;
    case 122u: goto L_003A9568;
    case 123u: goto L_003A95A8;
    case 124u: goto L_003A96F8;
    case 125u: goto L_003A9740;
    case 126u: goto L_003A9768;
    case 127u: goto L_003A9788;
    case 128u: goto L_003A9790;
    case 129u: goto L_003A97F8;
    case 130u: goto L_003A980C;
    case 131u: goto L_003A9824;
    case 132u: goto L_003A98A0;
    case 133u: goto L_003A9910;
    case 134u: goto L_003A9980;
    case 135u: goto L_003A99B0;
    case 136u: goto L_003A99B8;
    case 137u: goto L_003A99C0;
    case 138u: goto L_003A99C8;
    case 139u: goto L_003A99D4;
    case 140u: goto L_003A99E0;
    case 141u: goto L_003A9A00;
    case 142u: goto L_003A9A40;
    case 143u: goto L_003A9A50;
    case 144u: goto L_003A9A58;
    case 145u: goto L_003A9A60;
    case 146u: goto L_003A9A68;
    case 147u: goto L_003A9A80;
    case 148u: goto L_003A9A98;
    case 149u: goto L_003A9AA4;
    case 150u: goto L_003A9AB4;
    case 151u: goto L_003A9AD0;
    case 152u: goto L_003A9AEC;
    case 153u: goto L_003A9AF4;
    case 154u: goto L_003A9B14;
    case 155u: goto L_003A9B34;
    case 156u: goto L_003A9B40;
    case 157u: goto L_003A9B60;
    case 158u: goto L_003A9B90;
    case 159u: goto L_003A9BE4;
    case 160u: goto L_003A9C14;
    case 161u: goto L_003A9C48;
    case 162u: goto L_003A9C58;
    case 163u: goto L_003A9C84;
    case 164u: goto L_003A9C90;
    case 165u: goto L_003A9CA0;
    case 166u: goto L_003A9D08;
    case 167u: goto L_003A9D18;
    case 168u: goto L_003A9D28;
    case 169u: goto L_003A9D84;
    case 170u: goto L_003A9DA8;
    case 171u: goto L_003A9DD0;
    case 172u: goto L_003A9E20;
    case 173u: goto L_003A9E30;
    case 174u: goto L_003A9E5C;
    case 175u: goto L_003A9E6C;
    case 176u: goto L_003A9E74;
    case 177u: goto L_003A9E84;
    case 178u: goto L_003A9F40;
    case 179u: goto L_003A9F58;
    case 180u: goto L_003A9F90;
    case 181u: goto L_003A9FB0;
    case 182u: goto L_003A9FE0;
    case 183u: goto L_003AA0A0;
    case 184u: goto L_003AA0D8;
    case 185u: goto L_003AA0E0;
    case 186u: goto L_003AA170;
    case 187u: goto L_003AA178;
    case 188u: goto L_003AA2B0;
    case 189u: goto L_003AA2C0;
    case 190u: goto L_003AA2D0;
    case 191u: goto L_003AA308;
    case 192u: goto L_003AA320;
    case 193u: goto L_003AA338;
    case 194u: goto L_003AA370;
    case 195u: goto L_003AA378;
    case 196u: goto L_003AA394;
    case 197u: goto L_003AA3B8;
    case 198u: goto L_003AA3C8;
    case 199u: goto L_003AA3D8;
    case 200u: goto L_003AA3F4;
    case 201u: goto L_003AA404;
    case 202u: goto L_003AA414;
    case 203u: goto L_003AA43C;
    case 204u: goto L_003AA454;
    case 205u: goto L_003AA470;
    case 206u: goto L_003AA498;
    case 207u: goto L_003AA504;
    case 208u: goto L_003AA55C;
    case 209u: goto L_003AA5BC;
    case 210u: goto L_003AA60C;
    case 211u: goto L_003AA618;
    case 212u: goto L_003AA640;
    case 213u: goto L_003AA694;
    case 214u: goto L_003AA6B0;
    case 215u: goto L_003AA808;
    case 216u: goto L_003AA810;
    case 217u: goto L_003AA820;
    case 218u: goto L_003AA830;
    case 219u: goto L_003AA84C;
    case 220u: goto L_003AA85C;
    case 221u: goto L_003AA864;
    case 222u: goto L_003AA890;
    case 223u: goto L_003AA8D0;
    case 224u: goto L_003AA8E0;
    case 225u: goto L_003AA8FC;
    case 226u: goto L_003AA9E8;
    case 227u: goto L_003AAA40;
    case 228u: goto L_003AAB10;
    case 229u: goto L_003AAB48;
    case 230u: goto L_003AAC68;
    case 231u: goto L_003AACC0;
    case 232u: goto L_003AAD48;
    case 233u: goto L_003AAD98;
    case 234u: goto L_003AADD0;
    case 235u: goto L_003AAE10;
    case 236u: goto L_003AAE30;
    case 237u: goto L_003AAE44;
    case 238u: goto L_003AAE58;
    case 239u: goto L_003AAE64;
    case 240u: goto L_003AAEA8;
    case 241u: goto L_003AAEB0;
    case 242u: goto L_003AAF00;
    case 243u: goto L_003AAF18;
    case 244u: goto L_003AAF40;
    case 245u: goto L_003AAF78;
    case 246u: goto L_003AAFB0;
    case 247u: goto L_003AB07C;
    case 248u: goto L_003AB0F4;
    case 249u: goto L_003AB250;
    case 250u: goto L_003AB410;
    case 251u: goto L_003AB458;
    case 252u: goto L_003AB468;
    case 253u: goto L_003AB474;
    case 254u: goto L_003AB490;
    case 255u: goto L_003AB584;
    case 256u: goto L_003AB5A0;
    case 257u: goto L_003AB5C0;
    case 258u: goto L_003AB634;
    case 259u: goto L_003AB65C;
    case 260u: goto L_003AB670;
    case 261u: goto L_003AB690;
    case 262u: goto L_003AB6B0;
    case 263u: goto L_003AB6C4;
    case 264u: goto L_003AB6F4;
    case 265u: goto L_003AB704;
    case 266u: goto L_003AB710;
    case 267u: goto L_003AB71C;
    case 268u: goto L_003AB728;
    case 269u: goto L_003AB734;
    case 270u: goto L_003AB740;
    case 271u: goto L_003AB74C;
    case 272u: goto L_003AB760;
    case 273u: goto L_003AB76C;
    case 274u: goto L_003AB780;
    case 275u: goto L_003AB7A8;
    case 276u: goto L_003AB7F4;
    case 277u: goto L_003AB804;
    case 278u: goto L_003AB820;
    case 279u: goto L_003AB8B0;
    case 280u: goto L_003AB900;
    case 281u: goto L_003AB938;
    case 282u: goto L_003AB9D0;
    case 283u: goto L_003AB9E0;
    case 284u: goto L_003AB9FC;
    case 285u: goto L_003ABA40;
    case 286u: goto L_003ABA54;
    case 287u: goto L_003ABA5C;
    case 288u: goto L_003ABA64;
    case 289u: goto L_003ABA6C;
    case 290u: goto L_003ABA7C;
    case 291u: goto L_003ABA88;
    case 292u: goto L_003ABA98;
    case 293u: goto L_003ABB30;
    case 294u: goto L_003ABC68;
    case 295u: goto L_003ABC78;
    case 296u: goto L_003ABCC4;
    case 297u: goto L_003ABCD8;
    case 298u: goto L_003ABCE0;
    case 299u: goto L_003ABCE8;
    case 300u: goto L_003ABF20;
    case 301u: goto L_003ABF68;
    case 302u: goto L_003ABF78;
    case 303u: goto L_003ABF80;
    default: bad_entry(c, 0x003A8000u); return;
    }
L_003A8000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43810000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003A8038; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_003A8040; } }
    c.budget -= 1;
L_003A8038:
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_003A8040:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A8048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A8050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8064u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003A8064u) [[unlikely]] return; }
L_003A8064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A806Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003A806Cu) [[unlikely]] return; }
L_003A806C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22392u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8080u); set32(c.r[4], c.r[2].w[0] + 7440u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x003A8080u) [[unlikely]] return; }
L_003A8080:
    set32(c.r[2], ld32((c.r[28].w[0] - 22392u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8094u); set32(c.r[4], c.r[2].w[0] + 7680u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x003A8094u) [[unlikely]] return; }
L_003A8094:
    set32(c.r[2], ld32((c.r[28].w[0] - 22392u)));
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80A8u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x003A80A8u) [[unlikely]] return; }
L_003A80A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A80C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80D0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A80D0u) [[unlikely]] return; }
L_003A80D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80E0u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A80E0u) [[unlikely]] return; }
L_003A80E0:
    set32(c.r[6], ld32((c.r[28].w[0] - 22380u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 3768u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8118u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A8118u) [[unlikely]] return; }
L_003A8118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8138u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A8138u) [[unlikely]] return; }
L_003A8138:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[28].w[0] - 22384u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_003A8160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A8180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A82B0; } }
L_003A8180:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A818Cu); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x003A818Cu) [[unlikely]] return; }
L_003A818C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003A81C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A819Cu); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x003A819Cu) [[unlikely]] return; }
L_003A819C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81A8u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x003A81A8u) [[unlikely]] return; }
L_003A81A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81B4u); set32(c.r[4], c.r[4].w[0] + 3776u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x003A81B4u) [[unlikely]] return; }
L_003A81B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A82B0; } }
    c.budget -= 1;
L_003A81C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10176u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003A81F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81DCu); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x003A81DCu) [[unlikely]] return; }
L_003A81DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81E8u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x003A81E8u) [[unlikely]] return; }
L_003A81E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A82B0; } }
L_003A81F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 6064u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8208u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0084(c, 65u, depth + 1u); else { c.pc = 0x003101B0u; return; } if (c.pc != 0x003A8208u) [[unlikely]] return; }
L_003A8208:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003A8230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8218u); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x003A8218u) [[unlikely]] return; }
L_003A8218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8224u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x003A8224u) [[unlikely]] return; }
L_003A8224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A82B0; } }
    c.budget -= 1;
L_003A8230:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22384u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 22384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A82A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 10194u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[28].w[0] - 22384u), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A828Cu); st8((c.r[1].w[0] + 10195u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A828Cu) [[unlikely]] return; }
L_003A828C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82A8u); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x00310150u; return; } if (c.pc != 0x003A82A8u) [[unlikely]] return; }
L_003A82A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A82B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A82C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82E0u); st32((c.r[28].w[0] - 22372u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A82E0u) [[unlikely]] return; }
L_003A82E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    c.r[1].d[0] = c.r[1].d[0] | 13312ull;
    set32(c.r[5], c.r[16].w[0] + 16384u);
    set32(c.r[15], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[24], c.r[16].w[0] + 17408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[3], 0u + 22u);
    c.r[1].d[0] = c.r[1].d[0] | 13312ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[8], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 13312ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF330000u);
    set32(c.r[13], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | 13107ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF990000u);
    c.r[1].d[0] = c.r[1].d[0] | 15360ull;
    c.r[7].d[0] = c.r[2].d[0] | 39321ull;
    set32(c.r[12], c.r[16].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[1].d[0] = c.r[1].d[0] | 17408ull;
    set32(c.r[11], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[1].d[0] = c.r[1].d[0] | 19456ull;
    set32(c.r[10], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[1].d[0] = c.r[1].d[0] | 21504ull;
    set32(c.r[9], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[16].w[0] + 12u), c.r[24].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st8((c.r[2].w[0] + 16296u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 16288u), c.r[15].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 16292u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[2], ld32((c.r[14].w[0] + 16288u)));
    st32((c.r[14].w[0] + 16284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 52u), c.r[13].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 56u), c.r[12].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 60u), c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 64u), c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 72u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83CCu); st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x003A83CCu) [[unlikely]] return; }
L_003A83CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A83E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);  c.pc = t; return; }
L_003A83F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8408u); set32(c.r[4], 0u + 1394u);  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x003A8408u) [[unlikely]] return; }
L_003A8408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8410u);  if (depth < kMaxDepth) unit_00AA(c, 38u, depth + 1u); else { c.pc = 0x003A8500u; return; } if (c.pc != 0x003A8410u) [[unlikely]] return; }
L_003A8410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8420:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { set32(c.r[4], 0u + 1394u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002147C0u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 59u, depth); }
L_003A8430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22680u)));
    c.budget -= 33;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A84F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].sd[0] < 234ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A84E8; } }
    st8((c.r[4].w[0] + 16296u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 16296u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16288u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A84E8u); st32((c.r[3].w[0] + 16284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 41u, depth + 1u); else { c.pc = 0x003A8530u; return; } if (c.pc != 0x003A84E8u) [[unlikely]] return; }
L_003A84E8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 22680u), c.r[3].w[0]);
    c.budget -= 2;
L_003A84F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8510u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x003A8510u) [[unlikely]] return; }
L_003A8510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8518u);  if (depth < kMaxDepth) unit_00AA(c, 41u, depth + 1u); else { c.pc = 0x003A8530u; return; } if (c.pc != 0x003A8518u) [[unlikely]] return; }
L_003A8518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A8530:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 255u);
    c.budget -= 4;
L_003A8540:
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[3].d[0] = c.r[7].sd[0] < 7808ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 572u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 574u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 576u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 578u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 580u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 582u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 584u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 586u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8540u | kUnwind; return; } goto L_003A8540; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 16188u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st32((c.r[3].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 84u), 0u);  c.pc = t; return; }
L_003A85D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003A85F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A85F0; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 1;
L_003A85F0:
    set32(c.r[10], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[17], c.r[3].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], 0u + 128u);
    c.r[9].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[16], c.r[5].w[0] >> 8);
    if (c.r[9].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[25], c.r[5].w[0] >> 16);
    c.r[9].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[24], c.r[6].w[0] >> 8);
    set32(c.r[15], c.r[6].w[0] >> 16);
    set32(c.r[14], c.r[7].w[0] >> 8);
    set32(c.r[10], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[13], c.r[7].w[0] >> 16);
    set32(c.r[12], c.r[8].w[0] >> 8);
    set32(c.r[11], c.r[8].w[0] >> 16);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + c.r[17].w[0]);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(c.r[24].w[0]));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 42u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[6], 0u + 128u);
    c.budget -= 32;
L_003A8670:
    c.r[11].d[0] = ld8((c.r[3].w[0]));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[9].d[0] | c.r[5].d[0];
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_003A86A8; } }
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { goto L_003A86D8; } }
L_003A86A8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003A86D0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003A86D0; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_003A86D0; } }
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { goto L_003A86D8; } }
    c.budget -= 1;
L_003A86D0:
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.budget -= 2;
L_003A86D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8670u | kUnwind; return; } goto L_003A8670; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8700:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 29u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003A8720:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003A8740:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), c.f[12]);  c.pc = t; return; }
L_003A8750:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_003A876C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A876C; } }
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.budget -= 1;
L_003A876C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003A8780:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16300u), c.r[4].w[0]);  c.pc = t; return; }
L_003A8790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003A87A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    c.f[0] = c.r[3].w[0];
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[11].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 23;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003A8800; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8800:
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A8810; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_003A8810:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A8930; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[7].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 18u)));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 28u));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 29u));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003A88B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003A88C4; } }
L_003A88B8:
    set32(c.r[3], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 3;
L_003A88C4:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88D8u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 321u, depth + 1u); else { c.pc = 0x00123268u; return; } if (c.pc != 0x003A88D8u) [[unlikely]] return; }
L_003A88D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[5], c.r[4].w[0] + 68u);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32767u);  if (t) { goto L_003A8908; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003A8908:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 10;
L_003A8930:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A8940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[11].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.r[1].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] + 48u);  if (t) { goto L_003A8A78; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[6], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 28u));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 29u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 30u)));
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 31;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[6].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_003A8A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003A8A0C; } }
L_003A8A00:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_003A8A0C:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A20u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 321u, depth + 1u); else { c.pc = 0x00123268u; return; } if (c.pc != 0x003A8A20u) [[unlikely]] return; }
L_003A8A20:
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[5], c.r[4].w[0] + 68u);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32767u);  if (t) { goto L_003A8A50; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003A8A50:
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 10;
L_003A8A78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A8A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 97u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AB4u); st32((c.r[28].w[0] - 22376u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8AB4u) [[unlikely]] return; }
L_003A8AB4:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AC0u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8AC0u) [[unlikely]] return; }
L_003A8AC0:
    set32(c.r[4], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8ACCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8ACCu) [[unlikely]] return; }
L_003A8ACC:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8AD8u) [[unlikely]] return; }
L_003A8AD8:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8AE4u) [[unlikely]] return; }
L_003A8AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AECu);  if (depth < kMaxDepth) unit_00AA(c, 111u, depth + 1u); else { c.pc = 0x003A9340u; return; } if (c.pc != 0x003A8AECu) [[unlikely]] return; }
L_003A8AEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A8B30; } }
    c.budget -= 1;
L_003A8B08:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 90u, depth + 1u); else { c.pc = 0x003A8D40u; return; } if (c.pc != 0x003A8B14u) [[unlikely]] return; }
L_003A8B14:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8B08u | kUnwind; return; } goto L_003A8B08; } }
    c.budget -= 1;
L_003A8B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B38u);  if (depth < kMaxDepth) unit_00AA(c, 114u, depth + 1u); else { c.pc = 0x003A9370u; return; } if (c.pc != 0x003A8B38u) [[unlikely]] return; }
L_003A8B38:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8B44u) [[unlikely]] return; }
L_003A8B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B4Cu);  if (depth < kMaxDepth) unit_008B(c, 98u, depth + 1u); else { c.pc = 0x0032C860u; return; } if (c.pc != 0x003A8B4Cu) [[unlikely]] return; }
L_003A8B4C:
    st32((c.r[28].w[0] - 22376u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A8B70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A8C38; } }
    set32(c.r[4], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BA0u); c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8BA0u) [[unlikely]] return; }
L_003A8BA0:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BACu); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8BACu) [[unlikely]] return; }
L_003A8BAC:
    set32(c.r[4], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BB8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8BB8u) [[unlikely]] return; }
L_003A8BB8:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8BC4u) [[unlikely]] return; }
L_003A8BC4:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8BD0u) [[unlikely]] return; }
L_003A8BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BD8u);  if (depth < kMaxDepth) unit_00AA(c, 111u, depth + 1u); else { c.pc = 0x003A9340u; return; } if (c.pc != 0x003A8BD8u) [[unlikely]] return; }
L_003A8BD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A8C20; } }
L_003A8BF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 90u, depth + 1u); else { c.pc = 0x003A8D40u; return; } if (c.pc != 0x003A8C04u) [[unlikely]] return; }
L_003A8C04:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8BF8u | kUnwind; return; } goto L_003A8BF8; } }
L_003A8C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C28u);  if (depth < kMaxDepth) unit_00AA(c, 114u, depth + 1u); else { c.pc = 0x003A9370u; return; } if (c.pc != 0x003A8C28u) [[unlikely]] return; }
L_003A8C28:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8C34u) [[unlikely]] return; }
L_003A8C34:
    c.budget -= 1;
L_003A8C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A8C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], 0u + 97u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8C74u) [[unlikely]] return; }
L_003A8C74:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C80u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8C80u) [[unlikely]] return; }
L_003A8C80:
    set32(c.r[4], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C8Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8C8Cu) [[unlikely]] return; }
L_003A8C8C:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8C98u) [[unlikely]] return; }
L_003A8C98:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8CA4u) [[unlikely]] return; }
L_003A8CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CACu);  if (depth < kMaxDepth) unit_00AA(c, 111u, depth + 1u); else { c.pc = 0x003A9340u; return; } if (c.pc != 0x003A8CACu) [[unlikely]] return; }
L_003A8CAC:
    set32(c.r[17], 0u + 2u);
    set32(c.r[16], 0u + 8u);
    c.budget -= 3;
L_003A8CB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A8D00; } }
    c.budget -= 1;
L_003A8CD8:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CE4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 90u, depth + 1u); else { c.pc = 0x003A8D40u; return; } if (c.pc != 0x003A8CE4u) [[unlikely]] return; }
L_003A8CE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8CD8u | kUnwind; return; } goto L_003A8CD8; } }
L_003A8D00:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8CB8u | kUnwind; return; } goto L_003A8CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D14u);  if (depth < kMaxDepth) unit_00AA(c, 114u, depth + 1u); else { c.pc = 0x003A9370u; return; } if (c.pc != 0x003A8D14u) [[unlikely]] return; }
L_003A8D14:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003A8D20u) [[unlikely]] return; }
L_003A8D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A8D40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[2].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D7Cu); st16((c.r[2].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 104u, depth + 1u); else { c.pc = 0x003A91D0u; return; } if (c.pc != 0x003A8D7Cu) [[unlikely]] return; }
L_003A8D7C:
    c.budget -= 1;
L_003A8D80:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003A8E90; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A8DC0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8D80u | kUnwind; return; } goto L_003A8D80; } }
    c.budget -= 1;
L_003A8DC0:
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;  if (t) { goto L_003A8DD8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A8DF0; } }
    c.budget -= 1;
L_003A8DD8:
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(224ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_003A8E10; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A8E10; } }
    c.budget -= 1;
L_003A8DF0:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A8E90; } }
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A8E20; } }
L_003A8E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E18u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_00AA(c, 133u, depth + 1u); else { c.pc = 0x003A9910u; return; } if (c.pc != 0x003A8E18u) [[unlikely]] return; }
L_003A8E18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_003A8E20:
    c.r[3].d[0] = 0ull | 33088ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A8E48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E34u);  if (depth < kMaxDepth) unit_00AA(c, 115u, depth + 1u); else { c.pc = 0x003A9380u; return; } if (c.pc != 0x003A8E34u) [[unlikely]] return; }
L_003A8E34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8E48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E48u);  if (depth < kMaxDepth) unit_00AA(c, 96u, depth + 1u); else { c.pc = 0x003A8EB0u; return; } if (c.pc != 0x003A8E48u) [[unlikely]] return; }
L_003A8E48:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003A8E68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8D80u | kUnwind; return; } goto L_003A8D80; } }
L_003A8E68:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8D80u | kUnwind; return; } goto L_003A8D80; } }
    c.budget -= 1;
L_003A8E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A8EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[17].d[0] = ld16((c.r[4].w[0] + 572u));
    set32(c.r[4], c.r[19].w[0] + 368u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A91B0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] ^ 22ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_003A8F18; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[2].d[0] = c.r[2].d[0] ^ 22ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[18].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_003A8F18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 47u, depth + 1u); else { c.pc = 0x00124E10u; return; } if (c.pc != 0x003A8F2Cu) [[unlikely]] return; }
L_003A8F2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F38u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x003A8F38u) [[unlikely]] return; }
L_003A8F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 32u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[17].w[0] << 9);
    set32(c.r[2], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[19].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[4], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14010000u);
    st64((c.r[19].w[0] + 24u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16256ull;
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 83u);
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 80u);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], 0u + 81u);
    st64((c.r[19].w[0] + 16u), 0ull);
    st64((c.r[19].w[0] + 24u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 82u);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[19].w[0] + 16u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[19].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[2].d[0] = 0ull | 32800ull;
    set32(c.r[17], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[19].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16284u)));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8FE4u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED0u; return; } if (c.pc != 0x003A8FE4u) [[unlikely]] return; }
L_003A8FE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8FF0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x003A8FF0u) [[unlikely]] return; }
L_003A8FF0:
    set32(c.r[19], c.r[19].w[0] + 32u);
    st64((c.r[19].w[0]), 0ull);
    st64((c.r[19].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 22376u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9020; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9014u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 158u, depth + 1u); else { c.pc = 0x002ADF30u; return; } if (c.pc != 0x003A9014u) [[unlikely]] return; }
L_003A9014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9030; } }
    c.budget -= 1;
L_003A9020:
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A902Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 162u, depth + 1u); else { c.pc = 0x002AE030u; return; } if (c.pc != 0x003A902Cu) [[unlikely]] return; }
L_003A902C:
    c.budget -= 1;
L_003A9030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], 0u + 3u);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[11].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40070000u);
    set32(c.r[12], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] | 62469ull;
    c.r[5].d[0] = c.r[6].d[0] << 5;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55400000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32640ull;
    set32(c.r[10], 0u + 14u);
    c.r[8].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[9], 0u + 63u);
    set32(c.r[2], c.r[4].w[0] + 176u);
    c.r[3].d[0] = c.r[6].d[0] << 6;
    st32((c.r[28].w[0] - 22660u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x64000000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[7], 0u + 21u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[13], 0u + 854u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[14].d[0] = c.r[6].d[0] | 21264ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 32u);
    st64((c.r[6].w[0]), c.r[11].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[10].d[0]);
    c.r[11].d[0] = 0ull | 32896ull;
    st64((c.r[6].w[0] + 16u), 0ull);
    c.r[10].d[0] = c.r[11].d[0] << 16;
    st64((c.r[6].w[0] + 24u), c.r[9].d[0]);
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    st64((c.r[6].w[0]), c.r[8].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[6].w[0] + 8u), c.r[2].d[0]);
    c.r[8].d[0] = c.r[9].d[0] << 32;
    st64((c.r[6].w[0] + 16u), c.r[5].d[0]);
    mmi::pcpyld(c.r[2], c.r[0], c.r[8]);
    st64((c.r[6].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[14].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[13].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[10].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st64((c.r[6].w[0]), 0ull);
    set32(c.r[8], ld32((c.r[28].w[0] - 22372u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 26u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1824u);
    set32(c.r[7], c.r[7].w[0] + 1728u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 24u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 26u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[9], c.r[9].w[0] + 1728u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[7], c.r[7].w[0] + 1824u);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[8].w[0] << 4);
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[6].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 92;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91A0u); set32(c.r[6], c.r[6].w[0] + 32u);  if (depth < kMaxDepth) unit_008B(c, 84u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x003A91A0u) [[unlikely]] return; }
L_003A91A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[3], c.r[3].w[0] + 192u);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 4;
L_003A91B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A91D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_003A9328; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 22660u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22664u)));
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A9328; } }
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A921Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 47u, depth + 1u); else { c.pc = 0x00124E10u; return; } if (c.pc != 0x003A921Cu) [[unlikely]] return; }
L_003A921C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9228u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x003A9228u) [[unlikely]] return; }
L_003A9228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 14u);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[6], 0u + 83u);
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[3], c.r[17].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[16].w[0] + 24u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16288ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 81u);
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 80u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 2u);
    st64((c.r[16].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 82u);
    st64((c.r[16].w[0]), c.r[4].d[0]);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[16].w[0] + 16u), 0ull);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    st64((c.r[16].w[0] + 24u), c.r[6].d[0]);
    c.r[2].d[0] = 0ull | 32772ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[17], c.r[16].w[0] + 16u);
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92D8u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED0u; return; } if (c.pc != 0x003A92D8u) [[unlikely]] return; }
L_003A92D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92E4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x003A92E4u) [[unlikely]] return; }
L_003A92E4:
    set32(c.r[16], c.r[16].w[0] + 32u);
    st64((c.r[16].w[0]), 0ull);
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 22376u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9310; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9308u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 158u, depth + 1u); else { c.pc = 0x002ADF30u; return; } if (c.pc != 0x003A9308u) [[unlikely]] return; }
L_003A9308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9320; } }
L_003A9310:
    set32(c.r[4], ld32((c.r[28].w[0] - 22660u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A931Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 162u, depth + 1u); else { c.pc = 0x002AE030u; return; } if (c.pc != 0x003A931Cu) [[unlikely]] return; }
L_003A931C:
    c.budget -= 1;
L_003A9320:
    set32(c.r[3], c.r[16].w[0] + 16u);
    st32((c.r[28].w[0] - 22660u), c.r[3].w[0]);
    c.budget -= 2;
L_003A9328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9358u); st32((c.r[2].w[0] + 76u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 125u, depth + 1u); else { c.pc = 0x003A9740u; return; } if (c.pc != 0x003A9358u) [[unlikely]] return; }
L_003A9358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9360u);  if (depth < kMaxDepth) unit_00AA(c, 118u, depth + 1u); else { c.pc = 0x003A94C0u; return; } if (c.pc != 0x003A9360u) [[unlikely]] return; }
L_003A9360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9390u);  if (depth < kMaxDepth) unit_00AA(c, 117u, depth + 1u); else { c.pc = 0x003A93E0u; return; } if (c.pc != 0x003A9390u) [[unlikely]] return; }
L_003A9390:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] - 33u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 33u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 7808ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A93C8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A93C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A93E0:
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003A9408; } }
    c.r[1].d[0] = c.r[5].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 129u);  if (t) { goto L_003A9428; } }
L_003A9408:
    c.r[2].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 240ll ? 1ull : 0ull;  if (t) { goto L_003A9428; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-193ll);  if (t) { goto L_003A9428; } }
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 3;
L_003A9428:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { goto L_003A9450; } }
    c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 64u);  if (t) { goto L_003A9490; } }
L_003A9450:
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 159ll ? 1ull : 0ull;  if (t) { goto L_003A9470; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(-65ll);  if (t) { goto L_003A9470; } }
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (t) { goto L_003A9490; } }
L_003A9470:
    c.r[2].d[0] = c.r[3].sd[0] < 159ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 253ll ? 1ull : 0ull;  if (t) { goto L_003A9490; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9490; } }
    set32(c.r[4], c.r[4].w[0] - 159u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003A9490:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(8225ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_003A94C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A9550; } }
    c.budget -= 1;
L_003A94E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < 242ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9550; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A9550; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] << 9);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 88u));
    set32(c.r[2], ld32((c.r[5].w[0] + 16284u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9538u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 121u, depth + 1u); else { c.pc = 0x003A9560u; return; } if (c.pc != 0x003A9538u) [[unlikely]] return; }
L_003A9538:
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A94E0u | kUnwind; return; } goto L_003A94E0; } }
    c.budget -= 1;
L_003A9550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9560:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A9568:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9568u | kUnwind; return; } goto L_003A9568; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A95A8:
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 6));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    c.r[9].d[0] = c.r[8].d[0] & 3ull;
    c.r[7].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[8], c.r[7].w[0] << 4);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[7].d[0] = c.r[10].d[0] & 3ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[10].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 2));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[11].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 6));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    c.r[9].d[0] = c.r[8].d[0] & 3ull;
    c.r[7].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[8], c.r[7].w[0] << 4);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[7].d[0] = c.r[10].d[0] & 3ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[10].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 2));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[11].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[10].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 2));
    c.r[8].d[0] = c.r[7].d[0] & 3ull;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[11].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 82;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A95A8u | kUnwind; return; } goto L_003A95A8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A96F8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A96F8u | kUnwind; return; } goto L_003A96F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9740:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_003A9768:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003A9860; } }
    c.budget -= 1;
L_003A9788:
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 2;
L_003A9790:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003A9840; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9790u | kUnwind; return; } goto L_003A9790; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;  if (t) { goto L_003A97B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A97D0; } }
L_003A97B8:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(224ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_003A97F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A97F0; } }
    c.budget -= 1;
L_003A97D0:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9840; } }
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_003A97F8; } }
    c.budget -= 1;
L_003A97F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97F8u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00AA(c, 133u, depth + 1u); else { c.pc = 0x003A9910u; return; } if (c.pc != 0x003A97F8u) [[unlikely]] return; }
L_003A97F8:
    c.r[3].d[0] = 0ull | 33088ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9790u | kUnwind; return; } goto L_003A9790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A980Cu);  if (depth < kMaxDepth) unit_00AA(c, 115u, depth + 1u); else { c.pc = 0x003A9380u; return; } if (c.pc != 0x003A980Cu) [[unlikely]] return; }
L_003A980C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < 7808ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9790u | kUnwind; return; } goto L_003A9790; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9790u | kUnwind; return; } goto L_003A9790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9824u);  if (depth < kMaxDepth) unit_00AA(c, 132u, depth + 1u); else { c.pc = 0x003A98A0u; return; } if (c.pc != 0x003A9824u) [[unlikely]] return; }
L_003A9824:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].sd[0] < 242ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9790u | kUnwind; return; } goto L_003A9790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9878; } }
L_003A9840:
    set32(c.r[2], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9788u | kUnwind; return; } goto L_003A9788; } }
    c.budget -= 1;
L_003A9860:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9768u | kUnwind; return; } goto L_003A9768; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A9878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A98A0:
    set32(c.r[6], ld32((c.r[28].w[0] - 22372u)));
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[5].w[0] + 572u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 572u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A9900; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 16188u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16188u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 16188u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 88u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 22372u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 15;
L_003A9900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9910:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_003A9928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9970; } }
L_003A9928:
    c.r[1].d[0] = c.r[3].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 32767u);  if (t) { goto L_003A9940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1312u);  if (t) { goto L_003A9970; } }
    c.budget -= 1;
L_003A9940:
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 32767u);  if (t) { goto L_003A9958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1313u);  if (t) { goto L_003A9970; } }
    c.budget -= 1;
L_003A9958:
    set32(c.r[2], 0u + 165u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 32767u);  if (t) { goto L_003A996C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 34211ull;  if (t) { goto L_003A9970; } }
L_003A996C:
    set32(c.r[2], c.r[2].w[0] + 1279u);
    c.budget -= 1;
L_003A9970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A9980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27160u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A99B0u) [[unlikely]] return; }
L_003A99B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99B8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003A99B8u) [[unlikely]] return; }
L_003A99B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99C0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003A99C0u) [[unlikely]] return; }
L_003A99C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99C8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003A99C8u) [[unlikely]] return; }
L_003A99C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99D4u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003A99D4u) [[unlikely]] return; }
L_003A99D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99E0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003A99E0u) [[unlikely]] return; }
L_003A99E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9B58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A9AC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9B80; } }
    c.budget -= 1;
L_003A9A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A40u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003A9A40u) [[unlikely]] return; }
L_003A9A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A50u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003A9A50u) [[unlikely]] return; }
L_003A9A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A58u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x003A9A58u) [[unlikely]] return; }
L_003A9A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A60u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003A9A60u) [[unlikely]] return; }
L_003A9A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A68u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003A9A68u) [[unlikely]] return; }
L_003A9A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[6], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A80u); st32((c.r[28].w[0] - 22368u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A9A80u) [[unlikely]] return; }
L_003A9A80:
    set32(c.r[4], ld32((c.r[28].w[0] - 22368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[2].d[0] | 61568ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A98u); c.r[6].d[0] = c.r[2].d[0] | 61568ull;  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x003A9A98u) [[unlikely]] return; }
L_003A9A98:
    set32(c.r[4], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AA4u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x003A9AA4u) [[unlikely]] return; }
L_003A9AA4:
    set32(c.r[6], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], 0u + 3417u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AB4u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003A9AB4u) [[unlikely]] return; }
L_003A9AB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A9B80; } }
L_003A9AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AD0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003A9AD0u) [[unlikely]] return; }
L_003A9AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9B80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AECu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x003A9AECu) [[unlikely]] return; }
L_003A9AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AF4u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x003A9AF4u) [[unlikely]] return; }
L_003A9AF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6800u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B14u); st32((c.r[2].w[0] + 112u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 178u, depth + 1u); else { c.pc = 0x003A9F40u; return; } if (c.pc != 0x003A9B14u) [[unlikely]] return; }
L_003A9B14:
    set32(c.r[3], ld32((c.r[28].w[0] - 22368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + 96u);
    set32(c.r[5], c.r[2].w[0] + 3120u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B34u); set32(c.r[6], c.r[2].w[0] + 3360u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x003A9B34u) [[unlikely]] return; }
L_003A9B34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B40u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003A9B40u) [[unlikely]] return; }
L_003A9B40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A9B80; } }
    c.budget -= 1;
L_003A9B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003A9B60u) [[unlikely]] return; }
L_003A9B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9B80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003A9B80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 10u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[8], c.r[7].w[0] + 3u);  if (t) { goto L_003A9DA0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A9D30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A9C20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A9BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
L_003A9BD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BE4u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x003A9BE4u) [[unlikely]] return; }
L_003A9BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9DB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    st32((c.r[2].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C14u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003A9C14u) [[unlikely]] return; }
L_003A9C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
    c.budget -= 1;
L_003A9C20:
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_003A9C60; } }
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C48u); st32((c.r[2].w[0] + 124u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003A9C48u) [[unlikely]] return; }
L_003A9C48:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C58u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003A9C58u) [[unlikely]] return; }
L_003A9C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
L_003A9C60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] & 64ull;  if (t) { goto L_003A9CA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9CA8; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 167u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003A9C84u) [[unlikely]] return; }
L_003A9C84:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C90u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003A9C90u) [[unlikely]] return; }
L_003A9C90:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CA0u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003A9CA0u) [[unlikely]] return; }
L_003A9CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
L_003A9CA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22368u)));
    c.r[2].d[0] = c.r[6].d[0] & 1024ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[5], c.r[3].w[0] + 112u);
    set32(c.r[7], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A9CD8; } }
    set32(c.r[2], c.r[7].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9CD8; } }
    set32(c.r[8], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003A9CD8:
    c.r[2].d[0] = c.r[6].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9CF0; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_003A9CF0; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 1;
L_003A9CF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[8].d[0];  if (t) { goto L_003A9D20; } }
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D08u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003A9D08u) [[unlikely]] return; }
L_003A9D08:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D18u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003A9D18u) [[unlikely]] return; }
L_003A9D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
L_003A9D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D28u); set32(c.r[4], c.r[3].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003A9D28u) [[unlikely]] return; }
L_003A9D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
L_003A9D30:
    set32(c.r[5], ld32((c.r[28].w[0] - 22368u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 96u));
    set32(c.r[4], c.r[5].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    st8((c.r[5].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 98u));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[5].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A9D90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 223ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D84u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003A9D84u) [[unlikely]] return; }
L_003A9D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9DB8; } }
    c.budget -= 1;
L_003A9D90:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A9DB8; } }
L_003A9DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DA8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003A9DA8u) [[unlikely]] return; }
L_003A9DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A9DC0; } }
L_003A9DB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A9DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003A9EB0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003A9E60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9F28; } }
    c.budget -= 1;
L_003A9E10:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E20u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003A9E20u) [[unlikely]] return; }
L_003A9E20:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x003A9E30u) [[unlikely]] return; }
L_003A9E30:
    set32(c.r[3], ld32((c.r[28].w[0] - 22368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 7382u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E5Cu);  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002242A0u; return; } if (c.pc != 0x003A9E5Cu) [[unlikely]] return; }
L_003A9E5C:
    c.budget -= 1;
L_003A9E60:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E6Cu); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003A9E6Cu) [[unlikely]] return; }
L_003A9E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003A9E74u) [[unlikely]] return; }
L_003A9E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E84u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003A9E84u) [[unlikely]] return; }
L_003A9E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A9F28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_003A9F28; } }
    c.budget -= 1;
L_003A9EB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    st8((c.r[1].w[0] - 6800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 6799u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6800u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9F10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A9F00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9F20; } }
L_003A9EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 6792u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A9F20; } }
    c.budget -= 1;
L_003A9F00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 6792u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A9F20; } }
    c.budget -= 1;
L_003A9F10:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st8((c.r[1].w[0] - 6792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003A9F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9F30; } }
L_003A9F28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A9F30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003A9F58u) [[unlikely]] return; }
L_003A9F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A9F80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 24688u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 23856u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 8;
L_003A9F80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9F90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 27184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A8000u < 16384u) { entry = entries_00AA[(t - 0x003A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A9FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[4].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A9FE0u) [[unlikely]] return; }
L_003A9FE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22368u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[13].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[24], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    set32(c.r[15], 0u + 32u);
    c.r[10].d[0] = c.r[3].d[0] | 52429ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0xC3EA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    c.r[5].d[0] = c.r[3].d[0] | 32768ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x44000000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3EB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xC4000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x439D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC39D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[6].d[0] = c.r[4].d[0] | 52429ull;
    st8((c.r[16].w[0] + 75u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    st8((c.r[16].w[0] + 77u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA0A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_003AA0C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AA2A8; } }
L_003AA0C0:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[5].w[0];
    c.budget -= 6;
L_003AA0D8:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_003AA0E0:
    c.f[2] = ld32((c.r[9].w[0] + 16u));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_003AA108; } }
    c.f[2] = ld32((c.r[9].w[0] + 24u));
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA128; } }
L_003AA108:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[6].d[0];  if (t) { goto L_003AA130; } }
    c.f[2] = ld32((c.r[9].w[0] + 24u));
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA130; } }
    c.budget -= 1;
L_003AA128:
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 2;
L_003AA130:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[5].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA0E0u | kUnwind; return; } goto L_003AA0E0; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[5].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA0D8u | kUnwind; return; } goto L_003AA0D8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[5].w[0];
    c.budget -= 7;
L_003AA170:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_003AA178:
    c.f[2] = ld32((c.r[11].w[0] + 56u));
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[9].w[0] + 32u), c.f[0]);  if (t) { goto L_003AA1A0; } }
    c.f[2] = ld32((c.r[11].w[0] + 64u));
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA1C0; } }
L_003AA1A0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AA1C8; } }
    c.f[2] = ld32((c.r[11].w[0] + 64u));
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AA1C8; } }
    c.budget -= 1;
L_003AA1C0:
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[9].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_003AA1C8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA178u | kUnwind; return; } goto L_003AA178; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[5].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA170u | kUnwind; return; } goto L_003AA170; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_003AA238; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003AA210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA278; } }
    c.budget -= 1;
L_003AA210:
    set32(c.r[5], ld32((c.r[28].w[0] - 22368u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], c.r[7].w[0] + 1u);  if (t) { goto L_003AA278; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003AA278; } }
L_003AA238:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] << 56;
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 75u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AA278; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_003AA278:
    set32(c.r[5], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_003AA2A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 77u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_003AA2A0; } }
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_003AA2A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AA2A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AA2B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003AA2C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003AA2D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA308u); set32(c.r[17], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003AA308u) [[unlikely]] return; }
L_003AA308:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA320u); set32(c.r[4], c.r[3].w[0] + 2880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA320u) [[unlikely]] return; }
L_003AA320:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA338u); set32(c.r[4], c.r[3].w[0] + 2640u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA338u) [[unlikely]] return; }
L_003AA338:
    set32(c.r[3], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].sd[0] = static_cast<std::int32_t>(0x00620000u);  if (t) { goto L_003AA358; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 27200u);  if (t) { goto L_003AA35C; } }
L_003AA358:
    set32(c.r[20], c.r[20].w[0] + 27204u);
    c.budget -= 1;
L_003AA35C:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003AA490; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AA370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA378u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003AA378u) [[unlikely]] return; }
L_003AA378:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA394u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003AA394u) [[unlikely]] return; }
L_003AA394:
    set32(c.r[3], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AA420; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] + 96u);  if (t) { goto L_003AA420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3B8u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x003AA3B8u) [[unlikely]] return; }
L_003AA3B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3C8u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x003AA3C8u) [[unlikely]] return; }
L_003AA3C8:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3D8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003AA3D8u) [[unlikely]] return; }
L_003AA3D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 5520u);
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3F4u); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA3F4u) [[unlikely]] return; }
L_003AA3F4:
    c.f[12] = 0u;
    c.f[13] = c.f[20] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA404u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003AA404u) [[unlikely]] return; }
L_003AA404:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA414u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x003AA414u) [[unlikely]] return; }
L_003AA414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA458; } }
    c.budget -= 1;
L_003AA420:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[16].w[0] + 5520u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA43Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA43Cu) [[unlikely]] return; }
L_003AA43C:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA454u); set32(c.r[4], c.r[3].w[0] + 3600u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA454u) [[unlikely]] return; }
L_003AA454:
    c.budget -= 1;
L_003AA458:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA470u); set32(c.r[4], c.r[3].w[0] + 3840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA470u) [[unlikely]] return; }
L_003AA470:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 240u);
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA370u | kUnwind; return; } goto L_003AA370; } }
    c.budget -= 1;
L_003AA490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA498u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003AA498u) [[unlikely]] return; }
L_003AA498:
    set32(c.r[2], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA568; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 73u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AA508; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 74u)));
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 75u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA504u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA504u) [[unlikely]] return; }
L_003AA504:
    c.budget -= 1;
L_003AA508:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 75u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 74u)));
    set32(c.r[5], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 73u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = c.r[6].w[0];
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[3].w[0] + 20u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA55Cu);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA55Cu) [[unlikely]] return; }
L_003AA55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA610; } }
    c.budget -= 1;
L_003AA568:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 77u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = c.r[6].w[0];
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[3].w[0] + 20u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA5BCu);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA5BCu) [[unlikely]] return; }
L_003AA5BC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 77u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[3].w[0] + 17u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA60Cu);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003AA60Cu) [[unlikely]] return; }
L_003AA60C:
    c.budget -= 1;
L_003AA610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA618u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 212u, depth + 1u); else { c.pc = 0x003AA640u; return; } if (c.pc != 0x003AA618u) [[unlikely]] return; }
L_003AA618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003AA640:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA694u); st32((c.r[29].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003AA694u) [[unlikely]] return; }
L_003AA694:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 27216u);
    set32(c.r[21], c.r[29].w[0] + 212u);
    set32(c.r[22], c.r[29].w[0] + 276u);
    set32(c.r[23], c.r[29].w[0] + 264u);
    set32(c.r[30], c.r[29].w[0] + 268u);
    c.budget -= 7;
L_003AA6B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003AA8A0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22368u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[7], 0u + 6u);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 73u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 74u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 75u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[8], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[11], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 2u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 3u)));
    set32(c.r[9], c.r[9].w[0] - c.r[4].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    set32(c.r[8], c.r[8].w[0] - c.r[3].w[0]);
    set32(c.r[11], c.r[11].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[12].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 74u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 75u)));
    mmi::mult(c, 1, c.r[10].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[9].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[30].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 74u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 75u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 272u);
    c.budget -= 64;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_003AA890; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003AA890; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003AA7E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003AA7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA880; } }
    c.budget -= 1;
L_003AA7E8:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_003AA808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA810u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003AA810u) [[unlikely]] return; }
L_003AA810:
    c.f[13] = ld32((c.r[16].w[0] - 24u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA820u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003AA820u) [[unlikely]] return; }
L_003AA820:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA830u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 12u, depth + 1u); else { c.pc = 0x002D82D0u; return; } if (c.pc != 0x003AA830u) [[unlikely]] return; }
L_003AA830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA84Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003AA84Cu) [[unlikely]] return; }
L_003AA84C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA85Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003AA85Cu) [[unlikely]] return; }
L_003AA85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA864u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003AA864u) [[unlikely]] return; }
L_003AA864:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA808u | kUnwind; return; } goto L_003AA808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA890; } }
    c.budget -= 1;
L_003AA880:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA890u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003AA890u) [[unlikely]] return; }
L_003AA890:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA6B0u | kUnwind; return; } goto L_003AA6B0; } }
L_003AA8A0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003AA8D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 322u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003AA8E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 223u, depth + 1u); else { c.pc = 0x003AA8D0u; return; } if (c.pc != 0x003AA8FCu) [[unlikely]] return; }
L_003AA8FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);  if (t) { goto L_003AAB80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22528u)));
    c.r[18].d[0] = c.r[2].d[0] | 22528ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22529u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22530u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22531u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22532u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22533u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22534u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22535u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 145u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22536u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22537u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22538u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22539u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22540u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st16((c.r[2].w[0] + 296u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 57;
L_003AA9E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15u)));
    set32(c.r[5], c.r[18].w[0] + 19u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 17u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA40u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003AAA40u) [[unlikely]] return; }
L_003AAA40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 41u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 42u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 45u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 46u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 47u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 137u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 49u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 266u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 50u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 46;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA9E8u | kUnwind; return; } goto L_003AA9E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8944u);
    c.r[6].d[0] = c.r[2].d[0] | 22688ull;
    set32(c.r[4], 0u + 6u);
    c.budget -= 6;
L_003AAB10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAB10u | kUnwind; return; } goto L_003AAB10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 30056u);
    c.r[5].d[0] = c.r[2].d[0] | 22712ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 6;
L_003AAB48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAB48u | kUnwind; return; } goto L_003AAB48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 22722u));
    st16((c.r[28].w[0] - 24116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 22724u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24112u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AAE08; } }
L_003AAB80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[19].d[0] = c.r[2].d[0] | 22528ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    st8((c.r[1].w[0] + 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    st8((c.r[1].w[0] + 22529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    st8((c.r[1].w[0] + 22530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    st8((c.r[1].w[0] + 22531u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 150u)));
    st8((c.r[1].w[0] + 22532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 151u)));
    st8((c.r[1].w[0] + 22533u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 144u)));
    st8((c.r[1].w[0] + 22534u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 145u)));
    st8((c.r[1].w[0] + 22535u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 146u)));
    st8((c.r[1].w[0] + 22536u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 147u)));
    st8((c.r[1].w[0] + 22537u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 148u)));
    st8((c.r[1].w[0] + 22538u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 149u)));
    st8((c.r[1].w[0] + 22539u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    st8((c.r[1].w[0] + 22540u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 58;
L_003AAC68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[19].w[0] + 19u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 276u)));
    st8((c.r[19].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 280u)));
    st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 284u)));
    st8((c.r[19].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    st8((c.r[19].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACC0u); set32(c.r[5], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003AACC0u) [[unlikely]] return; }
L_003AACC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 291u)));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    st8((c.r[19].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    st8((c.r[19].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 121u)));
    st8((c.r[19].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 128u)));
    st8((c.r[19].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    st8((c.r[19].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 136u)));
    st8((c.r[19].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 137u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAD48u); st8((c.r[19].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x003AAD48u) [[unlikely]] return; }
L_003AAD48:
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 21u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 266u)));
    st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 270u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC68u | kUnwind; return; } goto L_003AAC68; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    set32(c.r[6], c.r[6].w[0] - 8944u);
    c.r[5].d[0] = c.r[2].d[0] | 22688ull;
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
L_003AAD98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAD98u | kUnwind; return; } goto L_003AAD98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    set32(c.r[5], c.r[5].w[0] - 30056u);
    c.r[4].d[0] = c.r[2].d[0] | 22712ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 6;
L_003AADD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AADD0u | kUnwind; return; } goto L_003AADD0; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st16((c.r[1].w[0] + 22722u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st16((c.r[1].w[0] + 22724u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003AAE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE10u);  if (depth < kMaxDepth) unit_00AA(c, 236u, depth + 1u); else { c.pc = 0x003AAE30u; return; } if (c.pc != 0x003AAE10u) [[unlikely]] return; }
L_003AAE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AAE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 223u, depth + 1u); else { c.pc = 0x003AA8D0u; return; } if (c.pc != 0x003AAE44u) [[unlikely]] return; }
L_003AAE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AAE98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] | 22528ull;
    c.budget -= 3;
L_003AAE58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 276u, depth + 1u); else { c.pc = 0x002379B0u; return; } if (c.pc != 0x003AAE64u) [[unlikely]] return; }
L_003AAE64:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE58u | kUnwind; return; } goto L_003AAE58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22541u)));
    st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 22542u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 327u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AAEE8; } }
L_003AAE98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] | 22528ull;
    c.budget -= 4;
L_003AAEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x003AAEB0u) [[unlikely]] return; }
L_003AAEB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAEA8u | kUnwind; return; } goto L_003AAEA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    st8((c.r[1].w[0] + 22541u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 327u)));
    st8((c.r[1].w[0] + 22542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_003AAEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AAF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 223u, depth + 1u); else { c.pc = 0x003AA8D0u; return; } if (c.pc != 0x003AAF18u) [[unlikely]] return; }
L_003AAF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AAF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22364u), c.r[3].w[0]);  if (t) { goto L_003AAF30; } }
L_003AAF28:
    st32((c.r[28].w[0] - 22364u), 0u);
    c.budget -= 2;
L_003AAF30:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 7312u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003AAF40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 22736ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22364u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AAF78; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF78u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003AAF78u) [[unlikely]] return; }
L_003AAF78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF40u | kUnwind; return; } goto L_003AAF40; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AAFB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 107u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 77u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 106u);  if (t) { goto L_003AAFF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AB220; } }
L_003AAFF0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 27296u);
    set32(c.r[5], c.r[5].w[0] + 7312u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[20], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[19].w[0] + 3u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB048; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 223u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AB220; } }
    c.budget -= 1;
L_003AB048:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB220; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22364u)));
    set32(c.r[18], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] + 6u);  if (t) { goto L_003AB0D0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AB0B8; } }
    c.r[4].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB07Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 249u, depth + 1u); else { c.pc = 0x003AB250u; return; } if (c.pc != 0x003AB07Cu) [[unlikely]] return; }
L_003AB07C:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB0B0; } }
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003AB0B0:
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 2;
L_003AB0B8:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    st16((c.r[21].w[0] + 680u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003AB218; } }
L_003AB0D0:
    c.r[16].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 680u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 249u, depth + 1u); else { c.pc = 0x003AB250u; return; } if (c.pc != 0x003AB0F4u) [[unlikely]] return; }
L_003AB0F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_003AB188; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 680u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AB158; } }
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AB130; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] - 2u));
    c.r[3].d[0] = c.r[3].d[0] & 65471ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] - 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003AB138; } }
L_003AB130:
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 2;
L_003AB138:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003AB208; } }
    c.budget -= 1;
L_003AB158:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = 0ull | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AB180; } }
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003AB208; } }
L_003AB180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003AB208; } }
L_003AB188:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 680u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003AB1C0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB1A8; } }
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 1;
L_003AB1A8:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003AB208; } }
L_003AB1C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003AB1F8; } }
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_003AB1F8; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AB208; } }
L_003AB1F8:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003AB208:
    set32(c.r[3], 0u + 127u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 65280ull;
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003AB218:
    st32((c.r[20].w[0]), c.r[19].w[0]);
    st32((c.r[20].w[0]), c.r[19].w[0]);
    c.budget -= 2;
L_003AB220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003AB250:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AB330; } }
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB270; } }
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_003AB270:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB288; } }
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB288:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB2A0; } }
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB2A0:
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB2B8; } }
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB2B8:
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB2D0; } }
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB2D0:
    c.r[3].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB2E8; } }
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB2E8:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB300; } }
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB300:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB318; } }
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB318:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB408; } }
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_003AB408; } }
L_003AB330:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB348; } }
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_003AB348:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB360; } }
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB360:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB378; } }
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB378:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB390; } }
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB390:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB3A8; } }
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB3A8:
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB3C0; } }
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB3C0:
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB3D8; } }
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB3D8:
    c.r[3].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB3F0; } }
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB3F0:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB408; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003AB408:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AB410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AB440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 28336u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003AB450; } }
    c.budget -= 1;
L_003AB440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 28048u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003AB450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003AB458u) [[unlikely]] return; }
L_003AB458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB468u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003AB468u) [[unlikely]] return; }
L_003AB468:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003AB474u) [[unlikely]] return; }
L_003AB474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 304u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 255u);
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[3].w[0] + 8u);
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 311u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 315u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 316u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 317u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 318u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 319u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 336u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 338u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 342u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 340u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 341u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 49;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003AB578; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 1236u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003AB588; } }
L_003AB578:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB584u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003AB584u) [[unlikely]] return; }
L_003AB584:
    c.budget -= 1;
L_003AB588:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AB5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 304u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
L_003AB5C0:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003AB640; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AB640; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_003AB5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AB628; } }
L_003AB5F0:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_003AB608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AB628; } }
    c.budget -= 1;
L_003AB608:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_003AB620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AB628; } }
    c.budget -= 1;
L_003AB620:
    set32(c.r[2], 0u + 16u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003AB628:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB634u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003AB634u) [[unlikely]] return; }
L_003AB634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB650; } }
    c.budget -= 1;
L_003AB640:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB5C0u | kUnwind; return; } goto L_003AB5C0; } }
L_003AB650:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB65Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003AB65Cu) [[unlikely]] return; }
L_003AB65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 28624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A8000u < 16384u) { entry = entries_00AA[(t - 0x003A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003AB690:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 712u), c.r[3].w[0]);  c.pc = t; return; }
L_003AB6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 283u, depth + 1u); else { c.pc = 0x003AB9E0u; return; } if (c.pc != 0x003AB6C4u) [[unlikely]] return; }
L_003AB6C4:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003AB770; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6F4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003AB6F4u) [[unlikely]] return; }
L_003AB6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AB758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB704u); set32(c.r[5], 0u + 235u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003AB704u) [[unlikely]] return; }
L_003AB704:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003AB710u) [[unlikely]] return; }
L_003AB710:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB71Cu); set32(c.r[5], 0u + 236u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003AB71Cu) [[unlikely]] return; }
L_003AB71C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB728u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003AB728u) [[unlikely]] return; }
L_003AB728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003AB734u) [[unlikely]] return; }
L_003AB734:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB740u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003AB740u) [[unlikely]] return; }
L_003AB740:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB74Cu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003AB74Cu) [[unlikely]] return; }
L_003AB74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB770; } }
    c.budget -= 1;
L_003AB758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003AB760u) [[unlikely]] return; }
L_003AB760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB76Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003AB76Cu) [[unlikely]] return; }
L_003AB76C:
    c.budget -= 1;
L_003AB770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] + 304u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
L_003AB7A8:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003AB7D0; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] | 32ull;  if (t) { goto L_003AB7D0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_003AB7D0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB7A8u | kUnwind; return; } goto L_003AB7A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB7F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003AB7F4u) [[unlikely]] return; }
L_003AB7F4:
    c.budget -= 1;
L_003AB7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB804u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003AB804u) [[unlikely]] return; }
L_003AB804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB8A0; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 340u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_003AB858; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003AB868; } }
L_003AB858:
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 4;
L_003AB868:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 37u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003AB890; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003AB8A0; } }
L_003AB890:
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 4;
L_003AB8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AB8B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AB9B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 338u)));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_003AB9B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AB9B0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AB900:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AB9A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB928; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AB9A0; } }
L_003AB928:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 38u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB938u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BAB70u; return; } if (c.pc != 0x003AB938u) [[unlikely]] return; }
L_003AB938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AB9B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 38u)));
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[18].w[0] + 38u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 38u)));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 34u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB9B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 34u)));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AB9B0; } }
    c.budget -= 1;
L_003AB9A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB900u | kUnwind; return; } goto L_003AB900; } }
L_003AB9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AB9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AB9E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 127u, depth + 1u); else { c.pc = 0x001B1D30u; return; } if (c.pc != 0x003AB9FCu) [[unlikely]] return; }
L_003AB9FC:
    c.f[0] = ld32((c.r[16].w[0] + 3504u));
    set32(c.r[17], c.r[29].w[0] + 68u);
    set32(c.r[18], c.r[29].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3508u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3512u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3568u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3572u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3576u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA40u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003ABA40u) [[unlikely]] return; }
L_003ABA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA54u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003ABA54u) [[unlikely]] return; }
L_003ABA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA5Cu); set32(c.r[4], c.r[16].w[0] + 3456u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003ABA5Cu) [[unlikely]] return; }
L_003ABA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA64u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003ABA64u) [[unlikely]] return; }
L_003ABA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA6Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003ABA6Cu) [[unlikely]] return; }
L_003ABA6C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 1296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA7Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x003ABA7Cu) [[unlikely]] return; }
L_003ABA7C:
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA88u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003ABA88u) [[unlikely]] return; }
L_003ABA88:
    c.f[0] = c.r[2].w[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA98u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003ABA98u) [[unlikely]] return; }
L_003ABA98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ABAD8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_003ABAC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    set32(c.r[3], c.r[3].w[0] + 768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);  if (t) { goto L_003ABAE8; } }
L_003ABAC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    set32(c.r[3], c.r[3].w[0] - 768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);  if (t) { goto L_003ABAE8; } }
L_003ABAD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);
    c.budget -= 4;
L_003ABAE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 16384u);  if (t) { goto L_003ABB00; } }
    st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);
    c.budget -= 2;
L_003ABB00:
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    c.r[1].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 2048u);  if (t) { goto L_003ABB18; } }
    st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);
    c.budget -= 2;
L_003ABB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003ABB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 52u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 41u, depth); } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 50u);  if (t) { [[clang::musttail]] return unit_00AB(c, 38u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 36u, depth); } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { [[clang::musttail]] return unit_00AB(c, 35u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 32u, depth); } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { [[clang::musttail]] return unit_00AB(c, 30u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 29u, depth); } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { [[clang::musttail]] return unit_00AB(c, 26u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 24u, depth); } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { [[clang::musttail]] return unit_00AB(c, 23u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 20u);  if (t) { [[clang::musttail]] return unit_00AB(c, 20u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 12u);  if (t) { [[clang::musttail]] return unit_00AB(c, 18u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 17u, depth); } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { [[clang::musttail]] return unit_00AB(c, 14u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 12u, depth); } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { [[clang::musttail]] return unit_00AB(c, 11u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 8u, depth); } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003ABF70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003ABF18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003ABCD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003ABC70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ABC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.budget -= 1;
L_003ABC28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 22348u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 22352u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22356u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC68u); st8((c.r[28].w[0] - 22360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x003ABC68u) [[unlikely]] return; }
L_003ABC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
L_003ABC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC78u); set32(c.r[4], 0u + 130u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003ABC78u) [[unlikely]] return; }
L_003ABC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCC4u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x003ABCC4u) [[unlikely]] return; }
L_003ABCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.budget -= 1;
L_003ABCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCD8u); set32(c.r[4], 0u + 130u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003ABCD8u) [[unlikely]] return; }
L_003ABCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCE0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x003ABCE0u) [[unlikely]] return; }
L_003ABCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCE8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003ABCE8u) [[unlikely]] return; }
L_003ABCE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 251u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ABDF0; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_003ABDC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ABDA0; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 254u);  if (t) { goto L_003ABDA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ABDA0; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003ABD78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ABD70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABE18; } }
L_003ABD50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003ABD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 43u, depth); } }
L_003ABD78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22348u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003ABE18; } }
L_003ABDA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22352u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22352u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003ABE18; } }
L_003ABDC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22356u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22356u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003ABE18; } }
L_003ABDF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22360u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[28].w[0] - 22360u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003ABE18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ABE50; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
L_003ABE50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22348u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003ABE80; } }
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.budget -= 1;
L_003ABE80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22352u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_003ABEA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.budget -= 1;
L_003ABEA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003ABEE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 40u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
L_003ABEE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22360u)));
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.budget -= 1;
L_003ABF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF20u); set32(c.r[4], 0u + 131u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003ABF20u) [[unlikely]] return; }
L_003ABF20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF68u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 11u, depth + 1u); else { c.pc = 0x0033C270u; return; } if (c.pc != 0x003ABF68u) [[unlikely]] return; }
L_003ABF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
L_003ABF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF78u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x003ABF78u) [[unlikely]] return; }
L_003ABF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF80u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003ABF80u) [[unlikely]] return; }
L_003ABF80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 251u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 7u, depth); } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { [[clang::musttail]] return unit_00AB(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 5u, depth); } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 254u);  if (t) { [[clang::musttail]] return unit_00AB(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 5u, depth); } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_00AB(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ABFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 42u, depth); } }
L_003ABFE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 6;
    [[clang::musttail]] return unit_00AB(c, 1u, depth);
}

}
