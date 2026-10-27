#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0,
};

void unit_009B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0036C000;
    case 2u: goto L_0036C010;
    case 3u: goto L_0036C050;
    case 4u: goto L_0036C060;
    case 5u: goto L_0036C0A0;
    case 6u: goto L_0036C0BC;
    case 7u: goto L_0036C0D0;
    case 8u: goto L_0036C0F0;
    case 9u: goto L_0036C128;
    case 10u: goto L_0036C13C;
    case 11u: goto L_0036C150;
    case 12u: goto L_0036C158;
    case 13u: goto L_0036C184;
    case 14u: goto L_0036C1A0;
    case 15u: goto L_0036C1D0;
    case 16u: goto L_0036C2F0;
    case 17u: goto L_0036C31C;
    case 18u: goto L_0036C320;
    case 19u: goto L_0036C34C;
    case 20u: goto L_0036C380;
    case 21u: goto L_0036C3A0;
    case 22u: goto L_0036C3EC;
    case 23u: goto L_0036C400;
    case 24u: goto L_0036C414;
    case 25u: goto L_0036C41C;
    case 26u: goto L_0036C428;
    case 27u: goto L_0036C48C;
    case 28u: goto L_0036C4AC;
    case 29u: goto L_0036C4E0;
    case 30u: goto L_0036C50C;
    case 31u: goto L_0036C540;
    case 32u: goto L_0036C578;
    case 33u: goto L_0036C608;
    case 34u: goto L_0036C61C;
    case 35u: goto L_0036C63C;
    case 36u: goto L_0036C670;
    case 37u: goto L_0036C684;
    case 38u: goto L_0036C800;
    case 39u: goto L_0036C828;
    case 40u: goto L_0036C854;
    case 41u: goto L_0036C85C;
    case 42u: goto L_0036C878;
    case 43u: goto L_0036C8A0;
    case 44u: goto L_0036C8C0;
    case 45u: goto L_0036C90C;
    case 46u: goto L_0036C920;
    case 47u: goto L_0036C928;
    case 48u: goto L_0036C930;
    case 49u: goto L_0036C980;
    case 50u: goto L_0036C9A0;
    case 51u: goto L_0036C9E8;
    case 52u: goto L_0036CAA4;
    case 53u: goto L_0036CBC0;
    case 54u: goto L_0036CBEC;
    case 55u: goto L_0036CBF0;
    case 56u: goto L_0036CC1C;
    case 57u: goto L_0036CC50;
    case 58u: goto L_0036CC78;
    case 59u: goto L_0036CCE0;
    case 60u: goto L_0036CD00;
    case 61u: goto L_0036CD2C;
    case 62u: goto L_0036CD50;
    case 63u: goto L_0036CD70;
    case 64u: goto L_0036CD80;
    case 65u: goto L_0036CD90;
    case 66u: goto L_0036CDC0;
    case 67u: goto L_0036CE00;
    case 68u: goto L_0036CE20;
    case 69u: goto L_0036CE30;
    case 70u: goto L_0036CE40;
    case 71u: goto L_0036CE60;
    case 72u: goto L_0036CE70;
    case 73u: goto L_0036CE80;
    case 74u: goto L_0036CE90;
    case 75u: goto L_0036CF20;
    case 76u: goto L_0036CF48;
    case 77u: goto L_0036CF80;
    case 78u: goto L_0036CFE8;
    case 79u: goto L_0036D018;
    case 80u: goto L_0036D040;
    case 81u: goto L_0036D058;
    case 82u: goto L_0036D070;
    case 83u: goto L_0036D1B8;
    case 84u: goto L_0036D260;
    case 85u: goto L_0036D288;
    case 86u: goto L_0036D290;
    case 87u: goto L_0036D2A0;
    case 88u: goto L_0036D2A8;
    case 89u: goto L_0036D2CC;
    case 90u: goto L_0036D2FC;
    case 91u: goto L_0036D304;
    case 92u: goto L_0036D33C;
    case 93u: goto L_0036D358;
    case 94u: goto L_0036D370;
    case 95u: goto L_0036D3EC;
    case 96u: goto L_0036D480;
    case 97u: goto L_0036D4B8;
    case 98u: goto L_0036D4C4;
    case 99u: goto L_0036D4F0;
    case 100u: goto L_0036D518;
    case 101u: goto L_0036D540;
    case 102u: goto L_0036D550;
    case 103u: goto L_0036D5D4;
    case 104u: goto L_0036D5E0;
    case 105u: goto L_0036D5EC;
    case 106u: goto L_0036D618;
    case 107u: goto L_0036D660;
    case 108u: goto L_0036D66C;
    case 109u: goto L_0036D6A4;
    case 110u: goto L_0036D6B0;
    case 111u: goto L_0036D6F0;
    case 112u: goto L_0036D700;
    case 113u: goto L_0036D710;
    case 114u: goto L_0036D7B0;
    case 115u: goto L_0036D7F0;
    case 116u: goto L_0036D804;
    case 117u: goto L_0036D80C;
    case 118u: goto L_0036D81C;
    case 119u: goto L_0036D830;
    case 120u: goto L_0036D864;
    case 121u: goto L_0036D8B8;
    case 122u: goto L_0036D8C8;
    case 123u: goto L_0036D964;
    case 124u: goto L_0036D970;
    case 125u: goto L_0036D980;
    case 126u: goto L_0036D9A0;
    case 127u: goto L_0036D9C0;
    case 128u: goto L_0036D9E0;
    case 129u: goto L_0036DA28;
    case 130u: goto L_0036DA50;
    case 131u: goto L_0036DA94;
    case 132u: goto L_0036DAC8;
    case 133u: goto L_0036DB00;
    case 134u: goto L_0036DB10;
    case 135u: goto L_0036DB20;
    case 136u: goto L_0036DB40;
    case 137u: goto L_0036DB54;
    case 138u: goto L_0036DB60;
    case 139u: goto L_0036DB70;
    case 140u: goto L_0036DBC0;
    case 141u: goto L_0036DBEC;
    case 142u: goto L_0036DC00;
    case 143u: goto L_0036DC2C;
    case 144u: goto L_0036DC40;
    case 145u: goto L_0036DC70;
    case 146u: goto L_0036DC80;
    case 147u: goto L_0036DCC4;
    case 148u: goto L_0036DCCC;
    case 149u: goto L_0036DCE0;
    case 150u: goto L_0036DD3C;
    case 151u: goto L_0036DD44;
    case 152u: goto L_0036DD60;
    case 153u: goto L_0036DDA8;
    case 154u: goto L_0036DDB0;
    case 155u: goto L_0036DDCC;
    case 156u: goto L_0036DDF8;
    case 157u: goto L_0036DE34;
    case 158u: goto L_0036DE5C;
    case 159u: goto L_0036DE70;
    case 160u: goto L_0036DE88;
    case 161u: goto L_0036DE90;
    case 162u: goto L_0036DE98;
    case 163u: goto L_0036DED0;
    case 164u: goto L_0036DED8;
    case 165u: goto L_0036DF18;
    case 166u: goto L_0036DF20;
    case 167u: goto L_0036DF30;
    case 168u: goto L_0036DF48;
    case 169u: goto L_0036DF68;
    case 170u: goto L_0036DF8C;
    case 171u: goto L_0036DFC0;
    case 172u: goto L_0036DFF4;
    case 173u: goto L_0036E018;
    case 174u: goto L_0036E04C;
    case 175u: goto L_0036E080;
    case 176u: goto L_0036E090;
    case 177u: goto L_0036E0E0;
    case 178u: goto L_0036E0E8;
    case 179u: goto L_0036E118;
    case 180u: goto L_0036E130;
    case 181u: goto L_0036E160;
    case 182u: goto L_0036E168;
    case 183u: goto L_0036E1C4;
    case 184u: goto L_0036E200;
    case 185u: goto L_0036E248;
    case 186u: goto L_0036E274;
    case 187u: goto L_0036E284;
    case 188u: goto L_0036E29C;
    case 189u: goto L_0036E2CC;
    case 190u: goto L_0036E2D8;
    case 191u: goto L_0036E2E0;
    case 192u: goto L_0036E2F0;
    case 193u: goto L_0036E360;
    case 194u: goto L_0036E3A0;
    case 195u: goto L_0036E3B0;
    case 196u: goto L_0036E3E0;
    case 197u: goto L_0036E3F0;
    case 198u: goto L_0036E404;
    case 199u: goto L_0036E420;
    case 200u: goto L_0036E464;
    case 201u: goto L_0036E4D0;
    case 202u: goto L_0036E4D8;
    case 203u: goto L_0036E4F0;
    case 204u: goto L_0036E530;
    case 205u: goto L_0036E538;
    case 206u: goto L_0036E540;
    case 207u: goto L_0036E550;
    case 208u: goto L_0036E578;
    case 209u: goto L_0036E580;
    case 210u: goto L_0036E590;
    case 211u: goto L_0036E5C0;
    case 212u: goto L_0036E5C8;
    case 213u: goto L_0036E620;
    case 214u: goto L_0036E630;
    case 215u: goto L_0036E638;
    case 216u: goto L_0036E640;
    case 217u: goto L_0036E648;
    case 218u: goto L_0036E650;
    case 219u: goto L_0036E658;
    case 220u: goto L_0036E670;
    case 221u: goto L_0036E690;
    case 222u: goto L_0036E700;
    case 223u: goto L_0036E730;
    case 224u: goto L_0036E740;
    case 225u: goto L_0036E7B0;
    case 226u: goto L_0036E7D0;
    case 227u: goto L_0036E800;
    case 228u: goto L_0036E830;
    case 229u: goto L_0036E840;
    case 230u: goto L_0036E860;
    case 231u: goto L_0036E890;
    case 232u: goto L_0036E8B0;
    case 233u: goto L_0036E8F0;
    case 234u: goto L_0036E950;
    case 235u: goto L_0036E9C0;
    case 236u: goto L_0036E9F8;
    case 237u: goto L_0036EA10;
    case 238u: goto L_0036EA30;
    case 239u: goto L_0036EA60;
    case 240u: goto L_0036EAC0;
    case 241u: goto L_0036EAE0;
    case 242u: goto L_0036EB40;
    case 243u: goto L_0036EBB0;
    case 244u: goto L_0036EBD0;
    case 245u: goto L_0036EC00;
    case 246u: goto L_0036EC20;
    case 247u: goto L_0036EC8C;
    case 248u: goto L_0036ECA8;
    case 249u: goto L_0036ECB0;
    case 250u: goto L_0036ECC0;
    case 251u: goto L_0036ECE8;
    case 252u: goto L_0036ECF0;
    case 253u: goto L_0036ECF8;
    case 254u: goto L_0036ED44;
    case 255u: goto L_0036ED50;
    case 256u: goto L_0036ED5C;
    case 257u: goto L_0036ED80;
    case 258u: goto L_0036EDA0;
    case 259u: goto L_0036EE30;
    case 260u: goto L_0036EE44;
    case 261u: goto L_0036EEA0;
    case 262u: goto L_0036EEB8;
    case 263u: goto L_0036EED0;
    case 264u: goto L_0036EEF0;
    case 265u: goto L_0036F00C;
    case 266u: goto L_0036F044;
    case 267u: goto L_0036F084;
    case 268u: goto L_0036F0BC;
    case 269u: goto L_0036F0D0;
    case 270u: goto L_0036F218;
    case 271u: goto L_0036F250;
    case 272u: goto L_0036F28C;
    case 273u: goto L_0036F2C4;
    case 274u: goto L_0036F2E0;
    case 275u: goto L_0036F400;
    case 276u: goto L_0036F43C;
    case 277u: goto L_0036F480;
    case 278u: goto L_0036F4BC;
    case 279u: goto L_0036F4D0;
    case 280u: goto L_0036F5C8;
    case 281u: goto L_0036F620;
    case 282u: goto L_0036F648;
    case 283u: goto L_0036F6A4;
    case 284u: goto L_0036F730;
    case 285u: goto L_0036F740;
    case 286u: goto L_0036F784;
    case 287u: goto L_0036F798;
    case 288u: goto L_0036F7A0;
    case 289u: goto L_0036F7E0;
    case 290u: goto L_0036F824;
    case 291u: goto L_0036F860;
    case 292u: goto L_0036FA8C;
    case 293u: goto L_0036FAB8;
    case 294u: goto L_0036FAC0;
    case 295u: goto L_0036FAD0;
    case 296u: goto L_0036FAE0;
    case 297u: goto L_0036FAF0;
    case 298u: goto L_0036FB28;
    case 299u: goto L_0036FB3C;
    case 300u: goto L_0036FB90;
    case 301u: goto L_0036FCA0;
    case 302u: goto L_0036FCB8;
    case 303u: goto L_0036FCF0;
    case 304u: goto L_0036FD00;
    case 305u: goto L_0036FD30;
    case 306u: goto L_0036FD4C;
    case 307u: goto L_0036FD64;
    case 308u: goto L_0036FD80;
    case 309u: goto L_0036FDA0;
    case 310u: goto L_0036FDAC;
    case 311u: goto L_0036FDE0;
    case 312u: goto L_0036FE00;
    case 313u: goto L_0036FE10;
    case 314u: goto L_0036FE20;
    case 315u: goto L_0036FE40;
    case 316u: goto L_0036FE8C;
    case 317u: goto L_0036FED8;
    case 318u: goto L_0036FF54;
    case 319u: goto L_0036FF7C;
    case 320u: goto L_0036FFA8;
    case 321u: goto L_0036FFAC;
    case 322u: goto L_0036FFD4;
    case 323u: goto L_0036FFE8;
    case 324u: goto L_0036FFF0;
    case 325u: goto L_0036FFF8;
    default: bad_entry(c, 0x0036C000u); return;
    }
L_0036C000:
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0036C050; } }
    c.budget -= 1;
L_0036C010:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036C040; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_0036C058; } }
L_0036C040:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0036C050:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036C058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036C0C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0036C0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0A0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036C0A0u) [[unlikely]] return; }
L_0036C0A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0BCu); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0036C0BCu) [[unlikely]] return; }
L_0036C0BC:
    c.budget -= 1;
L_0036C0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C0D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036C0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29096u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C128u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036C128u) [[unlikely]] return; }
L_0036C128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], c.r[2].w[0] - 15632u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C13Cu); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036C13Cu) [[unlikely]] return; }
L_0036C13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C150u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036C150u) [[unlikely]] return; }
L_0036C150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C158u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036C158u) [[unlikely]] return; }
L_0036C158:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27740u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27739u)));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C184u); st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009B(c, 14u, depth + 1u); else { c.pc = 0x0036C1A0u; return; } if (c.pc != 0x0036C184u) [[unlikely]] return; }
L_0036C184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036C1A0:
    set32(c.r[6], c.r[4].w[0] + 304u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[28].w[0] - 27744u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].d[0] = c.r[7].d[0] | 52429ull;
    set32(c.r[10], 0u + 1u);
    c.f[1] = c.r[8].w[0];
    c.f[0] = c.r[9].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
L_0036C1D0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[10].d[0];  if (t) { goto L_0036C260; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0036C1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C2C8; } }
    c.budget -= 1;
L_0036C1F0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_0036C248; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[9].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[3], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_0036C2C8; } }
L_0036C248:
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_0036C2C8; } }
    c.budget -= 1;
L_0036C260:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_0036C2B8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_0036C2C8; } }
L_0036C2B8:
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_0036C2C8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[7].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C1D0u | kUnwind; return; } goto L_0036C1D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036C2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0036C360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C31Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036C31Cu) [[unlikely]] return; }
L_0036C31C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036C320:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C34Cu); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0036C34Cu) [[unlikely]] return; }
L_0036C34C:
    c.budget -= 1;
L_0036C350:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C320u | kUnwind; return; } goto L_0036C320; } }
L_0036C360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036C380:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036C3A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29096u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3ECu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036C3ECu) [[unlikely]] return; }
L_0036C3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], c.r[2].w[0] - 14336u);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C400u); st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036C400u) [[unlikely]] return; }
L_0036C400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C414u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036C414u) [[unlikely]] return; }
L_0036C414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C41Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036C41Cu) [[unlikely]] return; }
L_0036C41C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[28].w[0] - 27732u);
    set32(c.r[19], c.r[28].w[0] - 27728u);
    c.budget -= 3;
L_0036C428:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 31328u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[22], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[21], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C48Cu); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036C48Cu) [[unlikely]] return; }
L_0036C48C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4ACu); st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036C4ACu) [[unlikely]] return; }
L_0036C4AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4E0u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0036C4E0u) [[unlikely]] return; }
L_0036C4E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C428u | kUnwind; return; } goto L_0036C428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C50Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 31u, depth + 1u); else { c.pc = 0x0036C540u; return; } if (c.pc != 0x0036C50Cu) [[unlikely]] return; }
L_0036C50C:
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
L_0036C540:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[28].w[0] - 27728u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[28].w[0] - 27736u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_0036C578:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0036C688; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036C678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 31328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], c.r[22].w[0] + 16u);  if (t) { goto L_0036C610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C608u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036C608u) [[unlikely]] return; }
L_0036C608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0036C688; } }
L_0036C610:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C61Cu); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036C61Cu) [[unlikely]] return; }
L_0036C61C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C63Cu); st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036C63Cu) [[unlikely]] return; }
L_0036C63C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C670u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0036C670u) [[unlikely]] return; }
L_0036C670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C688; } }
L_0036C678:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C684u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0036C684u) [[unlikely]] return; }
L_0036C684:
    c.budget -= 1;
L_0036C688:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036C738; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036C6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C7B8; } }
L_0036C6A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036C720; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_0036C7B8; } }
    c.budget -= 1;
L_0036C720:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_0036C7B8; } }
    c.budget -= 1;
L_0036C738:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036C7A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[5].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_0036C7B8; } }
L_0036C7A8:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_0036C7B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C578u | kUnwind; return; } goto L_0036C578; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0036C800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0036C888; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036C828:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036C878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C854u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036C854u) [[unlikely]] return; }
L_0036C854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C85Cu); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036C85Cu) [[unlikely]] return; }
L_0036C85C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C878u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0036C878u) [[unlikely]] return; }
L_0036C878:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C828u | kUnwind; return; } goto L_0036C828; } }
L_0036C888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036C8A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31024u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036C8C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 31008u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 29096u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C90Cu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036C90Cu) [[unlikely]] return; }
L_0036C90C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], c.r[2].w[0] - 13376u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C920u); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036C920u) [[unlikely]] return; }
L_0036C920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C928u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036C928u) [[unlikely]] return; }
L_0036C928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C930u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036C930u) [[unlikely]] return; }
L_0036C930:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 560u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 12u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 13u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 14u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C980u); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 50u, depth + 1u); else { c.pc = 0x0036C9A0u; return; } if (c.pc != 0x0036C980u) [[unlikely]] return; }
L_0036C980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036C9A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_0036C9D8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0036C9D8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 320u);
    set32(c.r[16], c.r[16].w[0] - 31040u);
    c.budget -= 4;
L_0036C9E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0036CB48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036CB00; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036CAB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036CA40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036CA28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CB78; } }
    c.budget -= 1;
L_0036CA28:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), 0u);  if (t) { goto L_0036CB78; } }
    c.budget -= 1;
L_0036CA40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036CB78; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAA4u); c.r[5].d[0] = ld8((c.r[16].w[0]));  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0036CAA4u) [[unlikely]] return; }
L_0036CAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CB78; } }
    c.budget -= 1;
L_0036CAB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036CAE8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0036CB78; } }
    c.budget -= 1;
L_0036CAE8:
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_0036CB78; } }
    c.budget -= 1;
L_0036CB00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0036CB78; } }
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { goto L_0036CB78; } }
    c.budget -= 1;
L_0036CB48:
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 4u), c.f[1]);  if (t) { goto L_0036CB78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_0036CB78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] + 40u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C9E8u | kUnwind; return; } goto L_0036C9E8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036CBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0036CC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CBECu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036CBECu) [[unlikely]] return; }
L_0036CBEC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036CBF0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036CC20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC1Cu); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0036CC1Cu) [[unlikely]] return; }
L_0036CC1C:
    c.budget -= 1;
L_0036CC20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CBF0u | kUnwind; return; } goto L_0036CBF0; } }
L_0036CC30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036CC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC78u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0036CC78u) [[unlikely]] return; }
L_0036CC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036CCC8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 30992u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 13088u);
    set32(c.r[4], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_0036CCC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036CCE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036CD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30960u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036CD2Cu) [[unlikely]] return; }
L_0036CD2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CD50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036CD70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036CD80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0036CD90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_0036CDB0; } }
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_0036CDB8; } }
    c.budget -= 1;
L_0036CDB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 2;
L_0036CDB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CDC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_0036CDE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036CDF0; } }
L_0036CDE8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036CDF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE20u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0036CE20u) [[unlikely]] return; }
L_0036CE20:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE30u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0036CE30u) [[unlikely]] return; }
L_0036CE30:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE40u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0036CE40u) [[unlikely]] return; }
L_0036CE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036CE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[3] = c.r[3].w[0];
    st32((c.r[4].w[0] + 308u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FC0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 328u), 0u);
    st32((c.r[4].w[0] + 324u), 0u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 320u), 0u);  c.pc = t; return; }
L_0036CF20:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0036D248; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 19920u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036CF48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036D248; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036D248; } }
    c.budget -= 1;
L_0036CF80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036CFB8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0036D248; } }
    c.budget -= 1;
L_0036CFB8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  if (t) { goto L_0036CFD4; } }
    set32(c.r[3], c.r[5].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0036CFD4:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_0036D248; } }
L_0036CFE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], c.r[3].w[0] + 629u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 629u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0036D008; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0036D008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D248; } }
L_0036D018:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_0036D248; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D250; } }
L_0036D040:
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0036D248; } }
    c.budget -= 1;
L_0036D058:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0036D248; } }
    c.budget -= 1;
L_0036D070:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_0036D248; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FC0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 320u), c.f[0]);
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 604u)));
    c.budget -= 33;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 305u);  if (t) { goto L_0036D188; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0036D188; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036D138; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036D138; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036D138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D248; } }
L_0036D138:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0036D158; } }
    st32((c.r[4].w[0] + 108u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D248; } }
    c.budget -= 1;
L_0036D158:
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0036D248; } }
L_0036D188:
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0036D248; } }
L_0036D1B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 305u);  if (t) { goto L_0036D1F8; } }
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 320u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_0036D218; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0036D218; } }
    c.budget -= 1;
L_0036D1F8:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_0036D218:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[5], 0u + 3u);  if (t) { goto L_0036D248; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 5;
L_0036D248:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036D250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D288u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0036D288u) [[unlikely]] return; }
L_0036D288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D290u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0036D290u) [[unlikely]] return; }
L_0036D290:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2A0u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036D2A0u) [[unlikely]] return; }
L_0036D2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0036D2A8u) [[unlikely]] return; }
L_0036D2A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036D2D0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2CCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036D2CCu) [[unlikely]] return; }
L_0036D2CC:
    c.budget -= 1;
L_0036D2D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[28].w[0] - 27724u);
    set32(c.r[5], 0u + 11u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2FCu); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0036D2FCu) [[unlikely]] return; }
L_0036D2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D304u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0036D304u) [[unlikely]] return; }
L_0036D304:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036D348; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036D348; } }
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 4560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D33Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0036D33Cu) [[unlikely]] return; }
L_0036D33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D358; } }
    c.budget -= 1;
L_0036D348:
    set32(c.r[4], c.r[16].w[0] + 4320u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D358u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0036D358u) [[unlikely]] return; }
L_0036D358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036D370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 308u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 308u);  if (t) { goto L_0036D3C0; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036D3C8; } }
    c.budget -= 1;
L_0036D3C0:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0036D3C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[3].w[0] + 3840u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[6], c.r[3].w[0] + 4080u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D3ECu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0036D3ECu) [[unlikely]] return; }
L_0036D3EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FC0000u);
    c.f[3] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    st8((c.r[17].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 304u)));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[5] = c.r[3].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 32u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 304u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 328u), 0u);
    st32((c.r[17].w[0] + 324u), 0u);
    st32((c.r[17].w[0] + 320u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036D7D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19952u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036D4B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4C4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0036D4C4u) [[unlikely]] return; }
L_0036D4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036D7D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u - 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
L_0036D4F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036D520; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D518u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0036D518u) [[unlikely]] return; }
L_0036D518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D7D0; } }
L_0036D520:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0036D548; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D540u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0036D540u) [[unlikely]] return; }
L_0036D540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D7D0; } }
L_0036D548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D550u); set32(c.r[4], c.r[4].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x0036D550u) [[unlikely]] return; }
L_0036D550:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0036D7D0; } }
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 304u)));
    c.f[4] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 308u));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FC0000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[5] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 32u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 304u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5D4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0036D5D4u) [[unlikely]] return; }
L_0036D5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D7D0; } }
    c.budget -= 1;
L_0036D5E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5ECu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x0036D5ECu) [[unlikely]] return; }
L_0036D5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036D7D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], 0u - 2u);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D618u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0036D618u) [[unlikely]] return; }
L_0036D618:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0036D640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D640; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036D650; } }
    c.budget -= 1;
L_0036D640:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
    c.budget -= 1;
L_0036D650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
L_0036D660:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D66Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x0036D66Cu) [[unlikely]] return; }
L_0036D66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036D7D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6A4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0036D6A4u) [[unlikely]] return; }
L_0036D6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D7D8; } }
    c.budget -= 1;
L_0036D6B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036D7D0; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0036D6E0; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0036D6E0:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
    c.budget -= 1;
L_0036D6F0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
    c.budget -= 1;
L_0036D700:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
    c.budget -= 1;
L_0036D710:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0036D730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
    c.budget -= 1;
L_0036D730:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036D7D0; } }
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FC0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = ld32((c.r[16].w[0] + 308u));
    c.f[3] = ld32((c.r[4].w[0] + 604u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 320u), c.f[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D7D0; } }
L_0036D7B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036D7D0; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0036D7D0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036D7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0036D804u) [[unlikely]] return; }
L_0036D804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D80Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036D80Cu) [[unlikely]] return; }
L_0036D80C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D81Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0036D81Cu) [[unlikely]] return; }
L_0036D81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D864u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0036D864u) [[unlikely]] return; }
L_0036D864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036D898; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] - 9824u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
L_0036D898:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[16], c.r[2].w[0] + 304u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[3].w[0] + 1560u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8B8u); st8((c.r[2].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007C(c, 149u, depth + 1u); else { c.pc = 0x002F10C0u; return; } if (c.pc != 0x0036D8B8u) [[unlikely]] return; }
L_0036D8B8:
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0036D8C8:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 240u);
    set32(c.r[3], c.r[5].w[0] + 480u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + 720u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + 960u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1200u);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1440u);
    set32(c.r[2], c.r[5].w[0] + 1680u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1920u);
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D8C8u | kUnwind; return; } goto L_0036D8C8; } }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[6].w[0] + 4800u);  if (t) { goto L_0036D958; } }
    set32(c.r[2], c.r[6].w[0] + 5040u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + 5280u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + 5520u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + 5760u);
    set32(c.r[2], c.r[6].w[0] + 6000u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 11;
L_0036D958:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D964u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_007C(c, 155u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x0036D964u) [[unlikely]] return; }
L_0036D964:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 157u, depth + 1u); else { c.pc = 0x002F1170u; return; } if (c.pc != 0x0036D970u) [[unlikely]] return; }
L_0036D970:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D980u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 158u, depth + 1u); else { c.pc = 0x002F11D0u; return; } if (c.pc != 0x0036D980u) [[unlikely]] return; }
L_0036D980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036D9A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036D9C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[3], c.r[3].w[0] - 9408u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_0036D9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0036DAC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036DA48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DAE0; } }
L_0036DA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA28u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x002F1840u; return; } if (c.pc != 0x0036DA28u) [[unlikely]] return; }
L_0036DA28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036DAE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036DAE0; } }
    c.budget -= 1;
L_0036DA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA50u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_007C(c, 166u, depth + 1u); else { c.pc = 0x002F1350u; return; } if (c.pc != 0x0036DA50u) [[unlikely]] return; }
L_0036DA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DAE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036DA88; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036DA88; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036DA80; } }
L_0036DA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 98u)));  if (t) { goto L_0036DAA0; } }
L_0036DA88:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 101u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA94u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_007C(c, 161u, depth + 1u); else { c.pc = 0x002F1270u; return; } if (c.pc != 0x0036DA94u) [[unlikely]] return; }
L_0036DA94:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_0036DAA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st8((c.r[1].w[0] - 29919u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036DAE0; } }
L_0036DAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAC8u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_007C(c, 189u, depth + 1u); else { c.pc = 0x002F1910u; return; } if (c.pc != 0x0036DAC8u) [[unlikely]] return; }
L_0036DAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DAE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0036DAE0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036DB00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036DB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB20u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0036DB20u) [[unlikely]] return; }
L_0036DB20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    st32((c.r[3].w[0] + 1560u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0036DB54u) [[unlikely]] return; }
L_0036DB54:
    set32(c.r[4], c.r[16].w[0] + 308u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB60u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_007C(c, 190u, depth + 1u); else { c.pc = 0x002F1990u; return; } if (c.pc != 0x0036DB60u) [[unlikely]] return; }
L_0036DB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036DB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1560u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036DB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DBB0; } }
L_0036DB88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036DBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DBB0; } }
L_0036DBA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0036DBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1560u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0036DBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036DBEC; } }
L_0036DBE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29919u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DBECu); set32(c.r[4], c.r[2].w[0] + 308u);  if (depth < kMaxDepth) unit_007C(c, 164u, depth + 1u); else { c.pc = 0x002F1330u; return; } if (c.pc != 0x0036DBECu) [[unlikely]] return; }
L_0036DBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1560u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0036DC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036DC2C; } }
L_0036DC20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29919u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC2Cu); set32(c.r[4], c.r[2].w[0] + 308u);  if (depth < kMaxDepth) unit_007C(c, 165u, depth + 1u); else { c.pc = 0x002F1340u; return; } if (c.pc != 0x0036DC2Cu) [[unlikely]] return; }
L_0036DC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30880u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036DC70u) [[unlikely]] return; }
L_0036DC70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036DCD0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCC4u); st8((c.r[2].w[0] + 9845u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0036DCC4u) [[unlikely]] return; }
L_0036DCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCCCu);  if (depth < kMaxDepth) unit_009B(c, 210u, depth + 1u); else { c.pc = 0x0036E590u; return; } if (c.pc != 0x0036DCCCu) [[unlikely]] return; }
L_0036DCCC:
    c.budget -= 1;
L_0036DCD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0036DEE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_0036DEA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036DDB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036DD50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036DD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF20; } }
L_0036DD28:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD3Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0036DD3Cu) [[unlikely]] return; }
L_0036DD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 213u, depth + 1u); else { c.pc = 0x0036E620u; return; } if (c.pc != 0x0036DD44u) [[unlikely]] return; }
L_0036DD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF20; } }
    c.budget -= 1;
L_0036DD50:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD60u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0036DD60u) [[unlikely]] return; }
L_0036DD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DD90; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0036DD80; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036DD90; } }
L_0036DD80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036DD90:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036DF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDA8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036DDA8u) [[unlikely]] return; }
L_0036DDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDB0u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036DDB0u) [[unlikely]] return; }
L_0036DDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF20; } }
L_0036DDB8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[4], c.r[16].w[0] + 9u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDCCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0036DDCCu) [[unlikely]] return; }
L_0036DDCC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036DDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036DDF0; } }
    c.budget -= 1;
L_0036DDE8:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0036DDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDF8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0036DDF8u) [[unlikely]] return; }
L_0036DDF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DE68; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22496u));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DE50; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE34u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0036DE34u) [[unlikely]] return; }
L_0036DE34:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 9845u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036DE88; } }
L_0036DE50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE5Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0036DE5Cu) [[unlikely]] return; }
L_0036DE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DE88; } }
    c.budget -= 1;
L_0036DE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE70u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0036DE70u) [[unlikely]] return; }
L_0036DE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0036DE88; } }
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE88u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0036DE88u) [[unlikely]] return; }
L_0036DE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE90u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036DE90u) [[unlikely]] return; }
L_0036DE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE98u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036DE98u) [[unlikely]] return; }
L_0036DE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF20; } }
L_0036DEA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036DEC8; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0036DEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DED0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036DED0u) [[unlikely]] return; }
L_0036DED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DED8u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036DED8u) [[unlikely]] return; }
L_0036DED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF20; } }
L_0036DEE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036DF10; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 254u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0036DF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DF18u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036DF18u) [[unlikely]] return; }
L_0036DF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DF20u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036DF20u) [[unlikely]] return; }
L_0036DF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036DF30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DF48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0036DF48u) [[unlikely]] return; }
L_0036DF48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DF68u); set32(c.r[4], c.r[4].w[0] + 20000u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0036DF68u) [[unlikely]] return; }
L_0036DF68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DF8Cu); set32(c.r[4], c.r[2].w[0] + 9506u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0036DF8Cu) [[unlikely]] return; }
L_0036DF8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 20032u);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DFC0u); set32(c.r[6], c.r[2].w[0] + 9506u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0036DFC0u) [[unlikely]] return; }
L_0036DFC0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 572u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DFF4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0036DFF4u) [[unlikely]] return; }
L_0036DFF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E018u); set32(c.r[4], c.r[2].w[0] + 9836u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0036E018u) [[unlikely]] return; }
L_0036E018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 20032u);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E04Cu); set32(c.r[6], c.r[2].w[0] + 9836u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0036E04Cu) [[unlikely]] return; }
L_0036E04C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 572u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CE0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E080u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0036E080u) [[unlikely]] return; }
L_0036E080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036E090:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0036E0B8; } }
    c.r[18].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 5u);  if (t) { goto L_0036E0D0; } }
L_0036E0B8:
    c.r[18].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[1].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0036E0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 5u);  if (t) { goto L_0036E0D0; } }
L_0036E0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0E0u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0036E0E0u) [[unlikely]] return; }
L_0036E0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0036E0E8u) [[unlikely]] return; }
L_0036E0E8:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 8);  if (t) { goto L_0036E1E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[5], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 5184u);
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] + 145u);
    c.budget -= 9;
L_0036E118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1539u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1539u);  if (t) { goto L_0036E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E1C8; } }
    c.budget -= 1;
L_0036E130:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0036E138:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 44u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E130u | kUnwind; return; } goto L_0036E130; } }
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E160u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0036E160u) [[unlikely]] return; }
L_0036E160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E168u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0036E168u) [[unlikely]] return; }
L_0036E168:
    set32(c.r[4], c.r[2].w[0] >> 1);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[4].d[0] << 33;
    set32(c.r[3], c.r[4].w[0] << 1);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 33);  if (t) { goto L_0036E194; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0036E194:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036E1C8; } }
    set32(c.r[2], 0u + 320u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[16].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E1C4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0036E1C4u) [[unlikely]] return; }
L_0036E1C4:
    c.budget -= 1;
L_0036E1C8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 257u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 49u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E118u | kUnwind; return; } goto L_0036E118; } }
    c.budget -= 1;
L_0036E1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0036E200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036E250; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036E230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E2D0; } }
    c.budget -= 1;
L_0036E230:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 155u);
    set32(c.r[2], 0u + 615u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E248u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0036E248u) [[unlikely]] return; }
L_0036E248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E2D0; } }
L_0036E250:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 555ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0036E2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E274u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0036E274u) [[unlikely]] return; }
L_0036E274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0036E2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0036E284u) [[unlikely]] return; }
L_0036E284:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E29Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0036E29Cu) [[unlikely]] return; }
L_0036E29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E2D0; } }
    c.budget -= 1;
L_0036E2A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036E2D0; } }
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2CCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0036E2CCu) [[unlikely]] return; }
L_0036E2CC:
    c.budget -= 1;
L_0036E2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2D8u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036E2D8u) [[unlikely]] return; }
L_0036E2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2E0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036E2E0u) [[unlikely]] return; }
L_0036E2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036E470; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0036E428; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036E398; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036E368; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036E340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E4C8; } }
    c.budget -= 1;
L_0036E340:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 33u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[5], c.r[16].w[0] + 12u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E360u); st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x0036E360u) [[unlikely]] return; }
L_0036E360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E4C8; } }
L_0036E368:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036E4C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036E4C8; } }
    c.budget -= 1;
L_0036E398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3A0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0036E3A0u) [[unlikely]] return; }
L_0036E3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0036E3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0036E3B0u) [[unlikely]] return; }
L_0036E3B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036E4C8; } }
    c.budget -= 1;
L_0036E3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3E0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0036E3E0u) [[unlikely]] return; }
L_0036E3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0036E410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3F0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0036E3F0u) [[unlikely]] return; }
L_0036E3F0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E404u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0036E404u) [[unlikely]] return; }
L_0036E404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E4C8; } }
    c.budget -= 1;
L_0036E410:
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E420u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0036E420u) [[unlikely]] return; }
L_0036E420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E4C8; } }
L_0036E428:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036E4C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E464u); st16((c.r[2].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0036E464u) [[unlikely]] return; }
L_0036E464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E4C8; } }
    c.budget -= 1;
L_0036E470:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036E4C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036E4B8; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9845u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036E4C8; } }
    c.budget -= 1;
L_0036E4B8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0036E4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E4D0u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036E4D0u) [[unlikely]] return; }
L_0036E4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E4D8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036E4D8u) [[unlikely]] return; }
L_0036E4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0036E548; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036E520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E580; } }
L_0036E520:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E530u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0036E530u) [[unlikely]] return; }
L_0036E530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E538u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036E538u) [[unlikely]] return; }
L_0036E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E540u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036E540u) [[unlikely]] return; }
L_0036E540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E580; } }
L_0036E548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E550u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0036E550u) [[unlikely]] return; }
L_0036E550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E570; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E580; } }
L_0036E570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E578u);  if (depth < kMaxDepth) unit_009B(c, 167u, depth + 1u); else { c.pc = 0x0036DF30u; return; } if (c.pc != 0x0036E578u) [[unlikely]] return; }
L_0036E578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E580u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_009B(c, 176u, depth + 1u); else { c.pc = 0x0036E090u; return; } if (c.pc != 0x0036E580u) [[unlikely]] return; }
L_0036E580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[28].w[0] - 22496u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0036E600; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[16], c.r[16].w[0] + 5184u);
    c.budget -= 3;
L_0036E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E5C8u); set32(c.r[4], c.r[16].w[0] + 9836u);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0036E5C8u) [[unlikely]] return; }
L_0036E5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E5E8; } }
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22496u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[28].w[0] - 22496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0036E5E8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 33u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E5C0u | kUnwind; return; } goto L_0036E5C0; } }
    c.budget -= 1;
L_0036E600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036E620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E630u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 220u, depth + 1u); else { c.pc = 0x0036E670u; return; } if (c.pc != 0x0036E630u) [[unlikely]] return; }
L_0036E630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E638u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 220u, depth + 1u); else { c.pc = 0x0036E670u; return; } if (c.pc != 0x0036E638u) [[unlikely]] return; }
L_0036E638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E640u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009B(c, 220u, depth + 1u); else { c.pc = 0x0036E670u; return; } if (c.pc != 0x0036E640u) [[unlikely]] return; }
L_0036E640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E648u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_009B(c, 220u, depth + 1u); else { c.pc = 0x0036E670u; return; } if (c.pc != 0x0036E648u) [[unlikely]] return; }
L_0036E648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E650u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_009B(c, 222u, depth + 1u); else { c.pc = 0x0036E700u; return; } if (c.pc != 0x0036E650u) [[unlikely]] return; }
L_0036E650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E658u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009B(c, 220u, depth + 1u); else { c.pc = 0x0036E670u; return; } if (c.pc != 0x0036E658u) [[unlikely]] return; }
L_0036E658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036E670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E690u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0036E690u) [[unlikely]] return; }
L_0036E690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E6E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 30848u);
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
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_0036E6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036E700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 30848u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_0036E730:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E740u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0036E740u) [[unlikely]] return; }
L_0036E740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E790; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E730u | kUnwind; return; } goto L_0036E730; } }
L_0036E790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036E7B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036E7D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036E800:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036E820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E828; } }
L_0036E820:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036E828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E830:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0036E840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036E860:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036E890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036E8B0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 16096u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 24u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036E8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0036E948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E9A0; } }
    c.budget -= 1;
L_0036E948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E950u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0036E950u) [[unlikely]] return; }
L_0036E950:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 15550u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036E980; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0036E980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 30912u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0036E9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036E9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036E9F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036EA00; } }
    c.budget -= 1;
L_0036E9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E9F8u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0036E9F8u) [[unlikely]] return; }
L_0036E9F8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036EA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036EA10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036EA30:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036EA60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_0036EA80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036EAB8; } }
L_0036EA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 22u);  if (t) { goto L_0036EA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036EAA0; } }
L_0036EA98:
    set32(c.r[3], 0u + 21u);
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036EAA0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0036EAB8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036EAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EAC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036EAE0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], c.r[7].w[0] + 15648u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 30912u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036EB40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036EB60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036EBA0; } }
L_0036EB60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036EB7C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 5u);  if (t) { goto L_0036EB80; } }
L_0036EB7C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 1;
L_0036EB80:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22496u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0036EBA0; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036EBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EBB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30736u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036EBD0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 29u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036EC00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 26208u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036EC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036EC78; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.f[0]);  if (t) { goto L_0036EC90; } }
    c.budget -= 1;
L_0036EC78:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC8Cu); set32(c.r[6], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036EC8Cu) [[unlikely]] return; }
L_0036EC8C:
    c.budget -= 1;
L_0036EC90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x0036ECA8u) [[unlikely]] return; }
L_0036ECA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 250u, depth + 1u); else { c.pc = 0x0036ECC0u; return; } if (c.pc != 0x0036ECB0u) [[unlikely]] return; }
L_0036ECB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036ECC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036ECF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECE8u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0036ECE8u) [[unlikely]] return; }
L_0036ECE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECF0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168610u; return; } if (c.pc != 0x0036ECF0u) [[unlikely]] return; }
L_0036ECF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 85u, depth + 1u); else { c.pc = 0x001957B0u; return; } if (c.pc != 0x0036ECF8u) [[unlikely]] return; }
L_0036ECF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036ED30; } }
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_0036ED48; } }
    c.budget -= 1;
L_0036ED30:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED44u); set32(c.r[5], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0036ED44u) [[unlikely]] return; }
L_0036ED44:
    c.budget -= 1;
L_0036ED48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 24u, depth + 1u); else { c.pc = 0x001387A0u; return; } if (c.pc != 0x0036ED50u) [[unlikely]] return; }
L_0036ED50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 451u, depth + 1u); else { c.pc = 0x001C5750u; return; } if (c.pc != 0x0036ED5Cu) [[unlikely]] return; }
L_0036ED5C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036ED80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036EDA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036EE00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036EDE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036EE28; } }
    c.budget -= 1;
L_0036EDE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036EE28; } }
    c.budget -= 1;
L_0036EE00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 36u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EE28; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036EE28:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0036EE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 5;
L_0036EE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036EE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036EED8; } }
    c.budget -= 1;
L_0036EE58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036EE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EED8; } }
    c.budget -= 1;
L_0036EE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036EE98; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036EE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EED8; } }
    c.budget -= 1;
L_0036EE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EEA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 274u, depth + 1u); else { c.pc = 0x0036F2E0u; return; } if (c.pc != 0x0036EEA0u) [[unlikely]] return; }
L_0036EEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036EED8; } }
L_0036EEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EEB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 269u, depth + 1u); else { c.pc = 0x0036F0D0u; return; } if (c.pc != 0x0036EEB8u) [[unlikely]] return; }
L_0036EEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036EED8; } }
L_0036EEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 264u, depth + 1u); else { c.pc = 0x0036EEF0u; return; } if (c.pc != 0x0036EED0u) [[unlikely]] return; }
L_0036EED0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0036EED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036EEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036EF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F0C0; } }
L_0036EF10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EF88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8677u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036EF70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036EF48; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EF50; } }
L_0036EF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F0C0; } }
L_0036EF50:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_0036F0C0; } }
    c.budget -= 1;
L_0036EF70:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036EF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F0C0; } }
    c.budget -= 1;
L_0036EF88:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EFA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_0036EFC0; } }
L_0036EFA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036EFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F0C0; } }
L_0036EFC0:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 753u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8677u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_0036F050; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F014; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 22700u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F00Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 279u, depth + 1u); else { c.pc = 0x0036F4D0u; return; } if (c.pc != 0x0036F00Cu) [[unlikely]] return; }
L_0036F00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F044; } }
L_0036F014:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 22704u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F044u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 279u, depth + 1u); else { c.pc = 0x0036F4D0u; return; } if (c.pc != 0x0036F044u) [[unlikely]] return; }
L_0036F044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F0C0; } }
    c.budget -= 1;
L_0036F050:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F08C; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 22700u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F084u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 291u, depth + 1u); else { c.pc = 0x0036F860u; return; } if (c.pc != 0x0036F084u) [[unlikely]] return; }
L_0036F084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F0BC; } }
L_0036F08C:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 22704u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0BCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 291u, depth + 1u); else { c.pc = 0x0036F860u; return; } if (c.pc != 0x0036F0BCu) [[unlikely]] return; }
L_0036F0BC:
    c.budget -= 1;
L_0036F0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F0D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2C8; } }
L_0036F0F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F168; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8678u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036F150; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 18ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036F128; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F130; } }
L_0036F128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F2C8; } }
L_0036F130:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_0036F2C8; } }
    c.budget -= 1;
L_0036F150:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2C8; } }
    c.budget -= 1;
L_0036F168:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F188; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_0036F1A0; } }
L_0036F188:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 18ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2C8; } }
L_0036F1A0:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] & 16ull;  if (t) { goto L_0036F1D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F1D8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0036F1D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8678u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F258; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F220; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 21596u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F218u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 279u, depth + 1u); else { c.pc = 0x0036F4D0u; return; } if (c.pc != 0x0036F218u) [[unlikely]] return; }
L_0036F218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F250; } }
L_0036F220:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 21600u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F250u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 279u, depth + 1u); else { c.pc = 0x0036F4D0u; return; } if (c.pc != 0x0036F250u) [[unlikely]] return; }
L_0036F250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2C8; } }
L_0036F258:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F294; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 21596u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F28Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 291u, depth + 1u); else { c.pc = 0x0036F860u; return; } if (c.pc != 0x0036F28Cu) [[unlikely]] return; }
L_0036F28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2C4; } }
L_0036F294:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 21600u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F2C4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009B(c, 291u, depth + 1u); else { c.pc = 0x0036F860u; return; } if (c.pc != 0x0036F2C4u) [[unlikely]] return; }
L_0036F2C4:
    c.budget -= 1;
L_0036F2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F4C0; } }
L_0036F300:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F378; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8679u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036F360; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036F338; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F340; } }
L_0036F338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F4C0; } }
L_0036F340:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_0036F4C0; } }
    c.budget -= 1;
L_0036F360:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F4C0; } }
    c.budget -= 1;
L_0036F378:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F398; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_0036F3B0; } }
L_0036F398:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F4C0; } }
L_0036F3B0:
    st8((c.r[4].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8679u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F448; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F408; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 20492u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F400u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 279u, depth + 1u); else { c.pc = 0x0036F4D0u; return; } if (c.pc != 0x0036F400u) [[unlikely]] return; }
L_0036F400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F43C; } }
L_0036F408:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 20496u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F43Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 279u, depth + 1u); else { c.pc = 0x0036F4D0u; return; } if (c.pc != 0x0036F43Cu) [[unlikely]] return; }
L_0036F43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F4C0; } }
    c.budget -= 1;
L_0036F448:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F488; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 20492u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F480u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 291u, depth + 1u); else { c.pc = 0x0036F860u; return; } if (c.pc != 0x0036F480u) [[unlikely]] return; }
L_0036F480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F4BC; } }
L_0036F488:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 20496u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 291u, depth + 1u); else { c.pc = 0x0036F860u; return; } if (c.pc != 0x0036F4BCu) [[unlikely]] return; }
L_0036F4BC:
    c.budget -= 1;
L_0036F4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F4D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036F510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F830; } }
    c.budget -= 1;
L_0036F510:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F830; } }
L_0036F528:
    set32(c.r[20], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 1264u)));
    c.r[2].d[0] = 0ull & 255ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 9u);
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1264u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036F668; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F640; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0036F618; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F618; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0036F5C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F5C0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036F5C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F5C0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F738; } }
L_0036F5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F5C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 301u, depth + 1u); else { c.pc = 0x0036FCA0u; return; } if (c.pc != 0x0036F5C8u) [[unlikely]] return; }
L_0036F5C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 793u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F5F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036F5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
    c.budget -= 1;
L_0036F5E8:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
    c.budget -= 1;
L_0036F5F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0036F608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
L_0036F608:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
    c.budget -= 1;
L_0036F618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 301u, depth + 1u); else { c.pc = 0x0036FCA0u; return; } if (c.pc != 0x0036F620u) [[unlikely]] return; }
L_0036F620:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0036F630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
L_0036F630:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
    c.budget -= 1;
L_0036F640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F648u);  if (depth < kMaxDepth) unit_009B(c, 301u, depth + 1u); else { c.pc = 0x0036FCA0u; return; } if (c.pc != 0x0036F648u) [[unlikely]] return; }
L_0036F648:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036F658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
L_0036F658:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
    c.budget -= 1;
L_0036F668:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 765u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F738; } }
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036F738; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0036F6B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F6A4u);  if (depth < kMaxDepth) unit_009B(c, 301u, depth + 1u); else { c.pc = 0x0036FCA0u; return; } if (c.pc != 0x0036F6A4u) [[unlikely]] return; }
L_0036F6A4:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
L_0036F6B0:
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_0036F6CC; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_0036F6CC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 755u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036F728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036F830; } }
    c.budget -= 1;
L_0036F728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 301u, depth + 1u); else { c.pc = 0x0036FCA0u; return; } if (c.pc != 0x0036F730u) [[unlikely]] return; }
L_0036F730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0036F778; } }
L_0036F738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 301u, depth + 1u); else { c.pc = 0x0036FCA0u; return; } if (c.pc != 0x0036F740u) [[unlikely]] return; }
L_0036F740:
    c.f[1] = ld32((c.r[16].w[0] + 1072u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036F760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
L_0036F760:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036F770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F778; } }
L_0036F770:
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0036F778:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 31u, depth + 1u); else { c.pc = 0x001C8670u; return; } if (c.pc != 0x0036F784u) [[unlikely]] return; }
L_0036F784:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036F800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 139u, depth + 1u); else { c.pc = 0x00269800u; return; } if (c.pc != 0x0036F798u) [[unlikely]] return; }
L_0036F798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F7A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 260u, depth + 1u); else { c.pc = 0x0026A9B0u; return; } if (c.pc != 0x0036F7A0u) [[unlikely]] return; }
L_0036F7A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1504u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1516u)));
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1516u)));
    st32((c.r[16].w[0] + 508u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1344u));
    c.f[2] = ld32((c.r[16].w[0] + 1348u));
    c.f[1] = ld32((c.r[16].w[0] + 1352u));
    c.f[0] = ld32((c.r[16].w[0] + 1356u));
    st32((c.r[16].w[0] + 1296u), c.f[3]);
    st32((c.r[16].w[0] + 1300u), c.f[2]);
    st32((c.r[16].w[0] + 1304u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F7E0u); st32((c.r[16].w[0] + 1308u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 101u, depth + 1u); else { c.pc = 0x001F0D10u; return; } if (c.pc != 0x0036F7E0u) [[unlikely]] return; }
L_0036F7E0:
    c.f[0] = ld32((c.r[16].w[0] + 1184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1184u), c.f[0]);  if (t) { goto L_0036F810; } }
    c.budget -= 1;
L_0036F800:
    st32((c.r[16].w[0] + 1260u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 1264u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[18].w[0]);
    c.budget -= 4;
L_0036F810:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 754u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036F828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F824u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0036F824u) [[unlikely]] return; }
L_0036F824:
    c.budget -= 1;
L_0036F828:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0036F830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036F860:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036F898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036FB68; } }
    c.budget -= 1;
L_0036F898:
    set32(c.r[19], ld32((c.r[20].w[0] + 1260u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 1264u)));
    c.r[2].d[0] = 0ull & 255ull;
    set32(c.r[17], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1256u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036F8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FB08; } }
L_0036F8E0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036F9C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F9A8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0036F988; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F988; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_0036F968; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F968; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036F948; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F948; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FA50; } }
L_0036F948:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0036F958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
L_0036F958:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
    c.budget -= 1;
L_0036F968:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036F978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
L_0036F978:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
    c.budget -= 1;
L_0036F988:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0036F998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
L_0036F998:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
    c.budget -= 1;
L_0036F9A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036F9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
L_0036F9B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
    c.budget -= 1;
L_0036F9C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036F9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
L_0036F9D8:
    set32(c.r[2], 0u + 11u);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1264u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_0036F9F4; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_0036F9F4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 755u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 756u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036FA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036FB68; } }
    c.budget -= 1;
L_0036FA50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036FA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FA80; } }
L_0036FA60:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036FA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036FA80; } }
L_0036FA78:
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0036FA80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FA8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x0036FA8Cu) [[unlikely]] return; }
L_0036FA8C:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0036FB00; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20048u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036FAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036FB08; } }
L_0036FAC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FB08; } }
    c.budget -= 1;
L_0036FAD0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FB08; } }
    c.budget -= 1;
L_0036FAE0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FB08; } }
    c.budget -= 1;
L_0036FAF0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036FB08; } }
    c.budget -= 1;
L_0036FB00:
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0036FB08:
    st8((c.r[20].w[0] + 770u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 961u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 1472u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 1476u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB28u); st32((c.r[20].w[0] + 1480u), 0u);  if (depth < kMaxDepth) unit_0032(c, 31u, depth + 1u); else { c.pc = 0x001C8670u; return; } if (c.pc != 0x0036FB28u) [[unlikely]] return; }
L_0036FB28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036FB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB3Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 139u, depth + 1u); else { c.pc = 0x00269800u; return; } if (c.pc != 0x0036FB3Cu) [[unlikely]] return; }
L_0036FB3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    set32(c.r[2], 0u - 197u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036FB60; } }
L_0036FB50:
    st32((c.r[20].w[0] + 1260u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[17].w[0]);
    c.budget -= 4;
L_0036FB60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0036FB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036FB90:
    st8((c.r[4].w[0] + 756u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[9], c.r[7].w[0] + 2u);  if (t) { goto L_0036FBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036FC90; } }
    c.budget -= 1;
L_0036FBC8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[3], 0u - 4u);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036FC08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0036FC08:
    set32(c.r[6], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036FC38; } }
    st8((c.r[4].w[0] + 820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 704u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 8516u), 0u);
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0036FC38:
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036FC80; } }
    st8((c.r[4].w[0] + 821u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 708u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    st8((c.r[4].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0036FC88; } }
L_0036FC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036FC90; } }
L_0036FC88:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0036FC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 680u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x0036FCB8u) [[unlikely]] return; }
L_0036FCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036FCE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_0036FCD4; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_0036FCD4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036FCE0:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x0036FCF0u) [[unlikely]] return; }
L_0036FCF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036FD00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD30u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0036FD30u) [[unlikely]] return; }
L_0036FD30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036FD50; } }
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036FD4Cu) [[unlikely]] return; }
L_0036FD4C:
    c.budget -= 1;
L_0036FD50:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 308u, depth + 1u); else { c.pc = 0x0036FD80u; return; } if (c.pc != 0x0036FD64u) [[unlikely]] return; }
L_0036FD64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036FD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036FDC0; } }
L_0036FDA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FDACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FDACu) [[unlikely]] return; }
L_0036FDAC:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FDA0u | kUnwind; return; } goto L_0036FDA0; } }
L_0036FDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036FDE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 19392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036FE00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036FE10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0036FE20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 19072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036FE40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29104u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[22], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE8Cu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036FE8Cu) [[unlikely]] return; }
L_0036FE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], c.r[28].w[0] - 27719u);
    set32(c.r[3], c.r[3].w[0] + 560u);
    st32((c.r[21].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 88u), 0u);
    st32((c.r[21].w[0] + 84u), 0u);
    st32((c.r[21].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 4u, depth); } }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_0036FED8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[20], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[28].w[0] - 27720u);
    set32(c.r[2], c.r[2].w[0] - 19088u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF54u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036FF54u) [[unlikely]] return; }
L_0036FF54:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[4], c.r[20].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[20].w[0] + 16u);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF7Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036FF7Cu) [[unlikely]] return; }
L_0036FF7C:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FFA8u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0036FFA8u) [[unlikely]] return; }
L_0036FFA8:
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 1;
L_0036FFAC:
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    st8((c.r[20].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 10;
L_0036FFD4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0036FFE8; } }
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FFE8u); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0036FFE8u) [[unlikely]] return; }
L_0036FFE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0036FFF0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0036FFF8:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_009C(c, 1u, depth);
}

}
