#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005C[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 10, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    346, 0, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00270000;
    case 2u: goto L_00270004;
    case 3u: goto L_00270008;
    case 4u: goto L_0027000C;
    case 5u: goto L_00270010;
    case 6u: goto L_00270014;
    case 7u: goto L_00270018;
    case 8u: goto L_0027001C;
    case 9u: goto L_00270020;
    case 10u: goto L_00270028;
    case 11u: goto L_0027002C;
    case 12u: goto L_00270038;
    case 13u: goto L_00270048;
    case 14u: goto L_00270050;
    case 15u: goto L_0027008C;
    case 16u: goto L_00270098;
    case 17u: goto L_002700BC;
    case 18u: goto L_002700E0;
    case 19u: goto L_00270100;
    case 20u: goto L_00270140;
    case 21u: goto L_00270158;
    case 22u: goto L_00270168;
    case 23u: goto L_00270174;
    case 24u: goto L_00270198;
    case 25u: goto L_002701B0;
    case 26u: goto L_00270200;
    case 27u: goto L_00270248;
    case 28u: goto L_00270284;
    case 29u: goto L_00270290;
    case 30u: goto L_002702A0;
    case 31u: goto L_002702B0;
    case 32u: goto L_002702C0;
    case 33u: goto L_00270300;
    case 34u: goto L_00270308;
    case 35u: goto L_00270338;
    case 36u: goto L_0027034C;
    case 37u: goto L_00270360;
    case 38u: goto L_00270374;
    case 39u: goto L_00270388;
    case 40u: goto L_00270390;
    case 41u: goto L_002703C0;
    case 42u: goto L_002703E8;
    case 43u: goto L_002703F0;
    case 44u: goto L_002703F8;
    case 45u: goto L_00270400;
    case 46u: goto L_00270430;
    case 47u: goto L_00270450;
    case 48u: goto L_00270488;
    case 49u: goto L_002704A8;
    case 50u: goto L_002704D0;
    case 51u: goto L_002704E4;
    case 52u: goto L_0027055C;
    case 53u: goto L_00270594;
    case 54u: goto L_002705C0;
    case 55u: goto L_002705D4;
    case 56u: goto L_002705EC;
    case 57u: goto L_00270630;
    case 58u: goto L_0027066C;
    case 59u: goto L_0027067C;
    case 60u: goto L_0027068C;
    case 61u: goto L_002706A8;
    case 62u: goto L_002706B0;
    case 63u: goto L_002706C4;
    case 64u: goto L_002706F8;
    case 65u: goto L_00270714;
    case 66u: goto L_00270750;
    case 67u: goto L_002707A4;
    case 68u: goto L_002707F4;
    case 69u: goto L_00270844;
    case 70u: goto L_002708B0;
    case 71u: goto L_00270920;
    case 72u: goto L_00270988;
    case 73u: goto L_0027098C;
    case 74u: goto L_002709AC;
    case 75u: goto L_002709F0;
    case 76u: goto L_00270A00;
    case 77u: goto L_00270A60;
    case 78u: goto L_00270A70;
    case 79u: goto L_00270AA0;
    case 80u: goto L_00270AEC;
    case 81u: goto L_00270B0C;
    case 82u: goto L_00270B20;
    case 83u: goto L_00270B68;
    case 84u: goto L_00270B90;
    case 85u: goto L_00270BAC;
    case 86u: goto L_00270C00;
    case 87u: goto L_00270C44;
    case 88u: goto L_00270C60;
    case 89u: goto L_00270C6C;
    case 90u: goto L_00270C90;
    case 91u: goto L_00270CAC;
    case 92u: goto L_00270D90;
    case 93u: goto L_00270DD8;
    case 94u: goto L_00270E04;
    case 95u: goto L_00270E24;
    case 96u: goto L_00270E40;
    case 97u: goto L_00270E5C;
    case 98u: goto L_00270EA0;
    case 99u: goto L_00270F18;
    case 100u: goto L_00270F80;
    case 101u: goto L_00270FB8;
    case 102u: goto L_00270FF0;
    case 103u: goto L_00271020;
    case 104u: goto L_00271070;
    case 105u: goto L_002710A0;
    case 106u: goto L_002710C4;
    case 107u: goto L_002710E0;
    case 108u: goto L_00271100;
    case 109u: goto L_00271140;
    case 110u: goto L_002711B8;
    case 111u: goto L_00271204;
    case 112u: goto L_0027122C;
    case 113u: goto L_00271248;
    case 114u: goto L_0027126C;
    case 115u: goto L_002712B0;
    case 116u: goto L_002712C0;
    case 117u: goto L_002712C8;
    case 118u: goto L_002712D8;
    case 119u: goto L_00271348;
    case 120u: goto L_002713A8;
    case 121u: goto L_002713D0;
    case 122u: goto L_00271450;
    case 123u: goto L_00271460;
    case 124u: goto L_00271478;
    case 125u: goto L_002714C0;
    case 126u: goto L_002714E8;
    case 127u: goto L_002714FC;
    case 128u: goto L_0027153C;
    case 129u: goto L_00271544;
    case 130u: goto L_00271570;
    case 131u: goto L_0027158C;
    case 132u: goto L_00271594;
    case 133u: goto L_002715A8;
    case 134u: goto L_002715B8;
    case 135u: goto L_002715E0;
    case 136u: goto L_00271620;
    case 137u: goto L_00271648;
    case 138u: goto L_00271670;
    case 139u: goto L_00271698;
    case 140u: goto L_002716AC;
    case 141u: goto L_002716CC;
    case 142u: goto L_002716D8;
    case 143u: goto L_002716E0;
    case 144u: goto L_002716F8;
    case 145u: goto L_00271700;
    case 146u: goto L_00271708;
    case 147u: goto L_00271730;
    case 148u: goto L_00271770;
    case 149u: goto L_002717A8;
    case 150u: goto L_002717AC;
    case 151u: goto L_002717D0;
    case 152u: goto L_00271838;
    case 153u: goto L_0027184C;
    case 154u: goto L_00271854;
    case 155u: goto L_00271860;
    case 156u: goto L_00271870;
    case 157u: goto L_0027188C;
    case 158u: goto L_002718F0;
    case 159u: goto L_00271900;
    case 160u: goto L_00271934;
    case 161u: goto L_00271948;
    case 162u: goto L_00271960;
    case 163u: goto L_0027198C;
    case 164u: goto L_00271994;
    case 165u: goto L_002719A8;
    case 166u: goto L_002719B0;
    case 167u: goto L_002719B8;
    case 168u: goto L_002719F0;
    case 169u: goto L_00271A10;
    case 170u: goto L_00271A40;
    case 171u: goto L_00271A58;
    case 172u: goto L_00271A90;
    case 173u: goto L_00271AC0;
    case 174u: goto L_00271B20;
    case 175u: goto L_00271B34;
    case 176u: goto L_00271B3C;
    case 177u: goto L_00271B48;
    case 178u: goto L_00271B58;
    case 179u: goto L_00271B74;
    case 180u: goto L_00271B88;
    case 181u: goto L_00271BE4;
    case 182u: goto L_00271C28;
    case 183u: goto L_00271C50;
    case 184u: goto L_00271C58;
    case 185u: goto L_00271C60;
    case 186u: goto L_00271C68;
    case 187u: goto L_00271C90;
    case 188u: goto L_00271CCC;
    case 189u: goto L_00271CD4;
    case 190u: goto L_00271D18;
    case 191u: goto L_00271D40;
    case 192u: goto L_00271D64;
    case 193u: goto L_00271DC0;
    case 194u: goto L_00271E30;
    case 195u: goto L_00271E78;
    case 196u: goto L_00271EB4;
    case 197u: goto L_00271ED0;
    case 198u: goto L_00271F30;
    case 199u: goto L_00271F44;
    case 200u: goto L_00271F64;
    case 201u: goto L_00271F74;
    case 202u: goto L_00271F80;
    case 203u: goto L_00271F98;
    case 204u: goto L_00271FA8;
    case 205u: goto L_00271FD0;
    case 206u: goto L_00271FE0;
    case 207u: goto L_00272020;
    case 208u: goto L_00272030;
    case 209u: goto L_00272040;
    case 210u: goto L_00272050;
    case 211u: goto L_00272090;
    case 212u: goto L_002720A8;
    case 213u: goto L_002720D0;
    case 214u: goto L_00272140;
    case 215u: goto L_00272300;
    case 216u: goto L_0027234C;
    case 217u: goto L_00272370;
    case 218u: goto L_0027238C;
    case 219u: goto L_002723E0;
    case 220u: goto L_002723F0;
    case 221u: goto L_00272460;
    case 222u: goto L_00272470;
    case 223u: goto L_00272480;
    case 224u: goto L_00272490;
    case 225u: goto L_002724A0;
    case 226u: goto L_002724B0;
    case 227u: goto L_002724C0;
    case 228u: goto L_002724D8;
    case 229u: goto L_00272510;
    case 230u: goto L_00272520;
    case 231u: goto L_00272550;
    case 232u: goto L_00272570;
    case 233u: goto L_00272584;
    case 234u: goto L_002725A8;
    case 235u: goto L_002725E0;
    case 236u: goto L_002725F0;
    case 237u: goto L_002725F8;
    case 238u: goto L_00272610;
    case 239u: goto L_00272624;
    case 240u: goto L_0027264C;
    case 241u: goto L_00272674;
    case 242u: goto L_00272688;
    case 243u: goto L_00272700;
    case 244u: goto L_002727E8;
    case 245u: goto L_00272814;
    case 246u: goto L_00272830;
    case 247u: goto L_00272840;
    case 248u: goto L_0027286C;
    case 249u: goto L_00272890;
    case 250u: goto L_00272940;
    case 251u: goto L_002729D0;
    case 252u: goto L_00272A00;
    case 253u: goto L_00272A30;
    case 254u: goto L_00272A84;
    case 255u: goto L_00272AC0;
    case 256u: goto L_00272AEC;
    case 257u: goto L_00272B10;
    case 258u: goto L_00272B38;
    case 259u: goto L_00272B80;
    case 260u: goto L_00272B90;
    case 261u: goto L_00272BD0;
    case 262u: goto L_00272BF8;
    case 263u: goto L_00272C98;
    case 264u: goto L_00272CD0;
    case 265u: goto L_00272CF0;
    case 266u: goto L_00272D18;
    case 267u: goto L_00272D40;
    case 268u: goto L_00272D60;
    case 269u: goto L_00272D88;
    case 270u: goto L_00272DA0;
    case 271u: goto L_00272DC0;
    case 272u: goto L_00272E30;
    case 273u: goto L_00272E40;
    case 274u: goto L_00272E60;
    case 275u: goto L_00272E70;
    case 276u: goto L_00272E88;
    case 277u: goto L_00272EA0;
    case 278u: goto L_00272EC0;
    case 279u: goto L_00272ED0;
    case 280u: goto L_00272F10;
    case 281u: goto L_00272F28;
    case 282u: goto L_00272FE0;
    case 283u: goto L_00273050;
    case 284u: goto L_00273068;
    case 285u: goto L_002730C0;
    case 286u: goto L_002730D8;
    case 287u: goto L_00273120;
    case 288u: goto L_00273180;
    case 289u: goto L_00273190;
    case 290u: goto L_002731D0;
    case 291u: goto L_002731E0;
    case 292u: goto L_00273210;
    case 293u: goto L_00273220;
    case 294u: goto L_00273228;
    case 295u: goto L_00273230;
    case 296u: goto L_00273244;
    case 297u: goto L_00273260;
    case 298u: goto L_0027327C;
    case 299u: goto L_00273290;
    case 300u: goto L_002732B0;
    case 301u: goto L_00273318;
    case 302u: goto L_00273350;
    case 303u: goto L_00273360;
    case 304u: goto L_002733A0;
    case 305u: goto L_00273440;
    case 306u: goto L_00273470;
    case 307u: goto L_0027348C;
    case 308u: goto L_002734B0;
    case 309u: goto L_002734C0;
    case 310u: goto L_002734F4;
    case 311u: goto L_00273530;
    case 312u: goto L_00273568;
    case 313u: goto L_00273590;
    case 314u: goto L_002735B0;
    case 315u: goto L_00273630;
    case 316u: goto L_002736C0;
    case 317u: goto L_002736E0;
    case 318u: goto L_00273700;
    case 319u: goto L_00273720;
    case 320u: goto L_00273760;
    case 321u: goto L_00273780;
    case 322u: goto L_002737C0;
    case 323u: goto L_002737F0;
    case 324u: goto L_00273810;
    case 325u: goto L_0027383C;
    case 326u: goto L_00273860;
    case 327u: goto L_00273880;
    case 328u: goto L_002738A0;
    case 329u: goto L_002738C0;
    case 330u: goto L_002738C8;
    case 331u: goto L_00273960;
    case 332u: goto L_00273970;
    case 333u: goto L_0027399C;
    case 334u: goto L_002739C0;
    case 335u: goto L_00273A08;
    case 336u: goto L_00273A30;
    case 337u: goto L_00273A70;
    case 338u: goto L_00273A90;
    case 339u: goto L_00273AFC;
    case 340u: goto L_00273B44;
    case 341u: goto L_00273B60;
    case 342u: goto L_00273BF0;
    case 343u: goto L_00273C30;
    case 344u: goto L_00273C54;
    case 345u: goto L_00273C78;
    case 346u: goto L_00273C80;
    case 347u: goto L_00273C88;
    case 348u: goto L_00273C90;
    case 349u: goto L_00273C9C;
    case 350u: goto L_00273CA8;
    case 351u: goto L_00273CC0;
    case 352u: goto L_00273CD0;
    case 353u: goto L_00273D10;
    case 354u: goto L_00273D64;
    case 355u: goto L_00273D88;
    case 356u: goto L_00273DA8;
    case 357u: goto L_00273DE0;
    case 358u: goto L_00273E24;
    case 359u: goto L_00273E74;
    case 360u: goto L_00273EC0;
    case 361u: goto L_00273EF4;
    case 362u: goto L_00273F18;
    case 363u: goto L_00273F38;
    case 364u: goto L_00273FA4;
    case 365u: goto L_00273FE0;
    default: bad_entry(c, 0x00270000u); return;
    }
L_00270000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00270010; } }
    goto L_00270008;
L_00270004:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002700C0; } }
    goto L_00270010;
L_0027000C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00270010:
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00270014:
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00270018:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.budget -= 1;
L_0027001C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270030; } }
    goto L_00270024;
L_00270020:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002700C0; } }
    goto L_0027002C;
L_00270028:
    c.budget -= 1;
L_0027002C:
    c.budget -= 1;
L_00270030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 225u, depth + 1u); else { c.pc = 0x0026E8F0u; return; } if (c.pc != 0x00270038u) [[unlikely]] return; }
L_00270038:
    set32(c.r[2], ld32((c.r[28].w[0] - 23692u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00270078; } }
L_00270048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x00270050u) [[unlikely]] return; }
L_00270050:
    set32(c.r[3], ld32((c.r[28].w[0] - 23692u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270078; } }
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270048u | kUnwind; return; } goto L_00270048; } }
L_00270078:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 23692u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027008Cu); st32((c.r[28].w[0] - 23696u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0027008Cu) [[unlikely]] return; }
L_0027008C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270098u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x00270098u) [[unlikely]] return; }
L_00270098:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700BCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005D(c, 239u, depth + 1u); else { c.pc = 0x00276B10u; return; } if (c.pc != 0x002700BCu) [[unlikely]] return; }
L_002700BC:
    c.budget -= 1;
L_002700C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002700E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00270108; } }
L_00270100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270198; } }
L_00270108:
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23588u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270198; } }
    c.budget -= 1;
L_00270138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 225u, depth + 1u); else { c.pc = 0x0026E8F0u; return; } if (c.pc != 0x00270140u) [[unlikely]] return; }
L_00270140:
    set32(c.r[3], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 23692u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270158u); set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x00270158u) [[unlikely]] return; }
L_00270158:
    st32((c.r[28].w[0] - 23696u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270168u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x00270168u) [[unlikely]] return; }
L_00270168:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270174u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x00270174u) [[unlikely]] return; }
L_00270174:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270198u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005D(c, 239u, depth + 1u); else { c.pc = 0x00276B10u; return; } if (c.pc != 0x00270198u) [[unlikely]] return; }
L_00270198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002701B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_002701D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270298; } }
L_002701D8:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[2], 0u + 40u);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_00270230; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 38u);  if (t) { goto L_00270228; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00270220; } }
L_00270200:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00270218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270238; } }
    c.budget -= 1;
L_00270218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00270240; } }
L_00270220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00270240; } }
L_00270228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00270240; } }
L_00270230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00270240; } }
L_00270238:
    set32(c.r[4], 0u + 4u);
    c.budget -= 2;
L_00270240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270248u);  if (depth < kMaxDepth) unit_005D(c, 202u, depth + 1u); else { c.pc = 0x002765D0u; return; } if (c.pc != 0x00270248u) [[unlikely]] return; }
L_00270248:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00270278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270298; } }
L_00270278:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270284u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x00270284u) [[unlikely]] return; }
L_00270284:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270290u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x00270290u) [[unlikely]] return; }
L_00270290:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00270298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_002702A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002702B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_002702C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002702E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_002703A8; } }
L_002702E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002702F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002703A8; } }
    c.budget -= 1;
L_002702F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270300u);  if (depth < kMaxDepth) unit_005C(c, 226u, depth + 1u); else { c.pc = 0x002724B0u; return; } if (c.pc != 0x00270300u) [[unlikely]] return; }
L_00270300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270308u);  if (depth < kMaxDepth) unit_005C(c, 227u, depth + 1u); else { c.pc = 0x002724C0u; return; } if (c.pc != 0x00270308u) [[unlikely]] return; }
L_00270308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00270330; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00270320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_00270324; } }
L_00270320:
    set32(c.r[2], 0u - 8u);
    c.budget -= 1;
L_00270324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002703A8; } }
    c.budget -= 1;
L_00270330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270338u);  if (depth < kMaxDepth) unit_005C(c, 238u, depth + 1u); else { c.pc = 0x00272610u; return; } if (c.pc != 0x00270338u) [[unlikely]] return; }
L_00270338:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00270358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027034Cu);  if (depth < kMaxDepth) unit_005C(c, 229u, depth + 1u); else { c.pc = 0x00272510u; return; } if (c.pc != 0x0027034Cu) [[unlikely]] return; }
L_0027034C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_002703A8; } }
    c.budget -= 1;
L_00270358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270360u);  if (depth < kMaxDepth) unit_005C(c, 246u, depth + 1u); else { c.pc = 0x00272830u; return; } if (c.pc != 0x00270360u) [[unlikely]] return; }
L_00270360:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00270380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270374u);  if (depth < kMaxDepth) unit_005C(c, 229u, depth + 1u); else { c.pc = 0x00272510u; return; } if (c.pc != 0x00270374u) [[unlikely]] return; }
L_00270374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_002703A8; } }
    c.budget -= 1;
L_00270380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270388u);  if (depth < kMaxDepth) unit_005C(c, 235u, depth + 1u); else { c.pc = 0x002725E0u; return; } if (c.pc != 0x00270388u) [[unlikely]] return; }
L_00270388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270390u);  if (depth < kMaxDepth) unit_005C(c, 292u, depth + 1u); else { c.pc = 0x00273210u; return; } if (c.pc != 0x00270390u) [[unlikely]] return; }
L_00270390:
    set32(c.r[3], ld32((c.r[28].w[0] - 30356u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002703A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 6u);  if (t) { goto L_002703A8; } }
L_002703A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002703C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 3u);  if (t) { goto L_002703E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270418; } }
L_002703E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703E8u);  if (depth < kMaxDepth) unit_005C(c, 243u, depth + 1u); else { c.pc = 0x00272700u; return; } if (c.pc != 0x002703E8u) [[unlikely]] return; }
L_002703E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703F0u);  if (depth < kMaxDepth) unit_005C(c, 297u, depth + 1u); else { c.pc = 0x00273260u; return; } if (c.pc != 0x002703F0u) [[unlikely]] return; }
L_002703F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703F8u);  if (depth < kMaxDepth) unit_005C(c, 275u, depth + 1u); else { c.pc = 0x00272E70u; return; } if (c.pc != 0x002703F8u) [[unlikely]] return; }
L_002703F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270400u);  if (depth < kMaxDepth) unit_005C(c, 229u, depth + 1u); else { c.pc = 0x00272510u; return; } if (c.pc != 0x00270400u) [[unlikely]] return; }
L_00270400:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00270414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00270418; } }
L_00270414:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00270418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00270430:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
L_00270450:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00270470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00270608; } }
L_00270470:
    c.r[20].d[0] = c.r[17].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270488u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00270488u) [[unlikely]] return; }
L_00270488:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704A8u); st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 57u, depth + 1u); else { c.pc = 0x00270630u; return; } if (c.pc != 0x002704A8u) [[unlikely]] return; }
L_002704A8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002704C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00270608; } }
    c.budget -= 1;
L_002704C0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704D0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x002704D0u) [[unlikely]] return; }
L_002704D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704E4u); st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 353u, depth + 1u); else { c.pc = 0x00273D10u; return; } if (c.pc != 0x002704E4u) [[unlikely]] return; }
L_002704E4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002704F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00270608; } }
L_002704F8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00270510; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270608; } }
L_00270510:
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 118u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 134u)));
    st32((c.r[29].w[0] + 236u), 0u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 132u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270570; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 22u);
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027055Cu); set32(c.r[7], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_005C(c, 70u, depth + 1u); else { c.pc = 0x002708B0u; return; } if (c.pc != 0x0027055Cu) [[unlikely]] return; }
L_0027055C:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 114u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002705D8; } }
    c.budget -= 1;
L_00270570:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002705A8; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 22u);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270594u); set32(c.r[7], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_005C(c, 70u, depth + 1u); else { c.pc = 0x002708B0u; return; } if (c.pc != 0x00270594u) [[unlikely]] return; }
L_00270594:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 130u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002705D8; } }
    c.budget -= 1;
L_002705A8:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[16].w[0] + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705C0u); set32(c.r[7], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_005C(c, 70u, depth + 1u); else { c.pc = 0x002708B0u; return; } if (c.pc != 0x002705C0u) [[unlikely]] return; }
L_002705C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 22u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705D4u); set32(c.r[7], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_005C(c, 70u, depth + 1u); else { c.pc = 0x002708B0u; return; } if (c.pc != 0x002705D4u) [[unlikely]] return; }
L_002705D4:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002705D8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 130u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 114u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705ECu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 128u)));  if (depth < kMaxDepth) unit_005C(c, 280u, depth + 1u); else { c.pc = 0x00272F10u; return; } if (c.pc != 0x002705ECu) [[unlikely]] return; }
L_002705EC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_00270608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00270630:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 15;
L_0027066C:
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027067Cu); st32((c.r[29].w[0] + 168u), 0u);  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002729D0u; return; } if (c.pc != 0x0027067Cu) [[unlikely]] return; }
L_0027067C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027068Cu); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00272AC0u; return; } if (c.pc != 0x0027068Cu) [[unlikely]] return; }
L_0027068C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002706A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00270878; } }
    c.budget -= 1;
L_002706A0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002706A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706B0u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x002706B0u) [[unlikely]] return; }
L_002706B0:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706C4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 257u, depth + 1u); else { c.pc = 0x00272B10u; return; } if (c.pc != 0x002706C4u) [[unlikely]] return; }
L_002706C4:
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002707F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_002706F8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[16].w[0] + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270714u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 259u, depth + 1u); else { c.pc = 0x00272B80u; return; } if (c.pc != 0x00270714u) [[unlikely]] return; }
L_00270714:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270740; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 4;
L_00270740:
    set32(c.r[4], c.r[16].w[0] + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270750u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00270750u) [[unlikely]] return; }
L_00270750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270788; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00270778; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00270778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270878; } }
L_00270778:
    c.r[20].d[0] = c.r[19].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[16].w[0]);  if (t) { goto L_002707C0; } }
L_00270788:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002707C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[16].w[0] + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x002707A4u) [[unlikely]] return; }
L_002707A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002707F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002707F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270878; } }
    c.budget -= 1;
L_002707C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002706F8u | kUnwind; return; } goto L_002706F8; } }
L_002707F4:
    c.budget -= 1;
L_002707F8:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00270850; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00270828; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[23].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00270878; } }
L_00270828:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270844u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002729D0u; return; } if (c.pc != 0x00270844u) [[unlikely]] return; }
L_00270844:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002706A8u | kUnwind; return; } goto L_002706A8; } }
L_00270850:
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[30].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[23].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[23].w[0] + 4u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[23].w[0] + 6u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[23].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_00270878:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002708B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[20], c.r[5].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[8].w[0] << 8);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[21], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002709C0; } }
    c.budget -= 1;
L_00270920:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_00270950; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00270950:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270970; } }
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_00270978; } }
    c.budget -= 1;
L_00270970:
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00270978:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270988u); st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 75u, depth + 1u); else { c.pc = 0x002709F0u; return; } if (c.pc != 0x00270988u) [[unlikely]] return; }
L_00270988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002709A0; } }
    goto L_00270990;
L_0027098C:
    c.budget -= 1;
L_00270990:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 6u);  if (t) { goto L_002709C0; } }
L_002709A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 77u, depth + 1u); else { c.pc = 0x00270A60u; return; } if (c.pc != 0x002709ACu) [[unlikely]] return; }
L_002709AC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270920u | kUnwind; return; } goto L_00270920; } }
    c.budget -= 1;
L_002709C0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002709F0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270A50; } }
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 1;
L_00270A00:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00270A40; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00270A40; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270A38; } }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00270A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00270A58; } }
L_00270A40:
    set32(c.r[4], c.r[4].w[0] + 6u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270A00u | kUnwind; return; } goto L_00270A00; } }
L_00270A50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00270A58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270A60:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270A98; } }
    c.budget -= 1;
L_00270A70:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00270A98; } }
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270A70u | kUnwind; return; } goto L_00270A70; } }
    c.budget -= 1;
L_00270A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00270AA0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00270AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00270BD8; } }
    c.budget -= 1;
L_00270AD8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AECu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00270AECu) [[unlikely]] return; }
L_00270AEC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B0Cu); st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 86u, depth + 1u); else { c.pc = 0x00270C00u; return; } if (c.pc != 0x00270B0Cu) [[unlikely]] return; }
L_00270B0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B20u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005C(c, 360u, depth + 1u); else { c.pc = 0x00273EC0u; return; } if (c.pc != 0x00270B20u) [[unlikely]] return; }
L_00270B20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00270B38; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270BD8; } }
L_00270B38:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 204u), 0u);  if (t) { goto L_00270B70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[16].w[0] + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B68u); set32(c.r[7], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_005C(c, 70u, depth + 1u); else { c.pc = 0x002708B0u; return; } if (c.pc != 0x00270B68u) [[unlikely]] return; }
L_00270B68:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00270B70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00270B98; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[16].w[0] + 22u);
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B90u); set32(c.r[7], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_005C(c, 70u, depth + 1u); else { c.pc = 0x002708B0u; return; } if (c.pc != 0x00270B90u) [[unlikely]] return; }
L_00270B90:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00270B98:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 98u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 82u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BACu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 96u)));  if (depth < kMaxDepth) unit_005C(c, 280u, depth + 1u); else { c.pc = 0x00272F10u; return; } if (c.pc != 0x00270BACu) [[unlikely]] return; }
L_00270BAC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_00270BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270BD8; } }
    c.budget -= 1;
L_00270BD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00270BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00270C00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00270C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C44u);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272890u; return; } if (c.pc != 0x00270C44u) [[unlikely]] return; }
L_00270C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00270C58; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00270D60; } }
L_00270C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C60u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002729D0u; return; } if (c.pc != 0x00270C60u) [[unlikely]] return; }
L_00270C60:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x00270C6Cu) [[unlikely]] return; }
L_00270C6C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270D20; } }
L_00270C90:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[4], c.r[17].w[0] + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CACu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00270CACu) [[unlikely]] return; }
L_00270CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270CD0; } }
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00270CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270D20; } }
    c.budget -= 1;
L_00270CD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_00270CE8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00270D60; } }
    c.budget -= 1;
L_00270CE8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270C90u | kUnwind; return; } goto L_00270C90; } }
    c.budget -= 1;
L_00270D20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00270D48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00270D60; } }
L_00270D48:
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[3], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 6;
L_00270D60:
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
L_00270D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00270DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00270E80; } }
    c.budget -= 1;
L_00270DC8:
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DD8u); set32(c.r[7], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_005C(c, 282u, depth + 1u); else { c.pc = 0x00272FE0u; return; } if (c.pc != 0x00270DD8u) [[unlikely]] return; }
L_00270DD8:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00270DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270E80; } }
    c.budget -= 1;
L_00270DF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 64u), c.r[4].w[0]);  if (t) { goto L_00270E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x00270E04u) [[unlikely]] return; }
L_00270E04:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E24u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00270EA0u; return; } if (c.pc != 0x00270E24u) [[unlikely]] return; }
L_00270E24:
    c.budget -= 1;
L_00270E28:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00270E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E40u);  if (depth < kMaxDepth) unit_005C(c, 322u, depth + 1u); else { c.pc = 0x002737C0u; return; } if (c.pc != 0x00270E40u) [[unlikely]] return; }
L_00270E40:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E5Cu); c.r[9].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00270EA0u; return; } if (c.pc != 0x00270E5Cu) [[unlikely]] return; }
L_00270E5C:
    c.budget -= 1;
L_00270E60:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270E80; } }
L_00270E78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00270E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00270EA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[16], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00270F90; } }
L_00270F18:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_00270F48; } }
    c.budget -= 1;
L_00270F40:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00270F48:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00270F78; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[5].d[0];  if (t) { goto L_00270F78; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270F78; } }
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00270F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 77u, depth + 1u); else { c.pc = 0x00270A60u; return; } if (c.pc != 0x00270F80u) [[unlikely]] return; }
L_00270F80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00270F18u | kUnwind; return; } goto L_00270F18; } }
L_00270F90:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00270FB8; } }
    set32(c.r[2], c.r[17].w[0] - c.r[22].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FB8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00270FF0u; return; } if (c.pc != 0x00270FB8u) [[unlikely]] return; }
L_00270FB8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00270FF0:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271018; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00271018:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 5u);  [[clang::musttail]] return unit_005D(c, 17u, depth); }
L_00271020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00271060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00271120; } }
    c.budget -= 1;
L_00271060:
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271070u); set32(c.r[7], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_005C(c, 282u, depth + 1u); else { c.pc = 0x00272FE0u; return; } if (c.pc != 0x00271070u) [[unlikely]] return; }
L_00271070:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00271088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271120; } }
    c.budget -= 1;
L_00271088:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002710C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x002710A0u) [[unlikely]] return; }
L_002710A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[7], c.r[29].w[0] + 84u);
    set32(c.r[8], c.r[29].w[0] + 80u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710C4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 109u, depth + 1u); else { c.pc = 0x00271140u; return; } if (c.pc != 0x002710C4u) [[unlikely]] return; }
L_002710C4:
    c.budget -= 1;
L_002710C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00271100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710E0u);  if (depth < kMaxDepth) unit_005C(c, 322u, depth + 1u); else { c.pc = 0x002737C0u; return; } if (c.pc != 0x002710E0u) [[unlikely]] return; }
L_002710E0:
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 84u);
    set32(c.r[8], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271100u); c.r[10].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_005C(c, 109u, depth + 1u); else { c.pc = 0x00271140u; return; } if (c.pc != 0x00271100u) [[unlikely]] return; }
L_00271100:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00271118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271120; } }
    c.budget -= 1;
L_00271118:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00271120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00271140:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 188u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[10].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[19], c.r[3].w[0] + 3u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00271280; } }
    c.budget -= 1;
L_002711B8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002711E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_002711E8; } }
L_002711E0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002711E8:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_00271260; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00271260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271204u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 15u, depth + 1u); else { c.pc = 0x00274220u; return; } if (c.pc != 0x00271204u) [[unlikely]] return; }
L_00271204:
    set32(c.r[16], c.r[2].w[0] + 6u);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271218; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00271218:
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027122Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 115u, depth + 1u); else { c.pc = 0x002712B0u; return; } if (c.pc != 0x0027122Cu) [[unlikely]] return; }
L_0027122C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] - c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271248u); c.r[7].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00270FF0u; return; } if (c.pc != 0x00271248u) [[unlikely]] return; }
L_00271248:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00271260:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027126Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 77u, depth + 1u); else { c.pc = 0x00270A60u; return; } if (c.pc != 0x0027126Cu) [[unlikely]] return; }
L_0027126C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002711B8u | kUnwind; return; } goto L_002711B8; } }
    c.budget -= 1;
L_00271280:
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
L_002712B0:
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271318; } }
L_002712C0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002712C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271318; } }
    set32(c.r[4], c.r[4].w[0] + 5u);
    c.budget -= 2;
L_002712D8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002712D8u | kUnwind; return; } goto L_002712D8; } }
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271308; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00271308:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002712C0u | kUnwind; return; } goto L_002712C0; } }
    c.budget -= 1;
L_00271318:
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 1u);  if (t) { goto L_002713C8; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_002713C8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 8u);  if (t) { goto L_00271398; } }
    c.budget -= 1;
L_00271348:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 1u));
    st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 2u));
    st8((c.r[3].w[0] - 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 3u));
    st8((c.r[3].w[0] - 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 4u));
    st8((c.r[3].w[0] - 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 5u));
    st8((c.r[3].w[0] - 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 6u));
    st8((c.r[3].w[0] - 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] - 7u));
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] - 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271348u | kUnwind; return; } goto L_00271348; } }
L_00271398:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002713C8; } }
    c.budget -= 1;
L_002713A8:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002713A8u | kUnwind; return; } goto L_002713A8; } }
    c.budget -= 1;
L_002713C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002713D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23684u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00271408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002715C0; } }
L_00271408:
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00271420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_002715C0; } }
L_00271420:
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00271468; } }
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_00271468; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271468; } }
    st32((c.r[28].w[0] - 23680u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 138u, depth + 1u); else { c.pc = 0x00271670u; return; } if (c.pc != 0x00271450u) [[unlikely]] return; }
L_00271450:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 285u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x00271460u) [[unlikely]] return; }
L_00271460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002715C0; } }
L_00271468:
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271478u); set32(c.r[7], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_005C(c, 282u, depth + 1u); else { c.pc = 0x00272FE0u; return; } if (c.pc != 0x00271478u) [[unlikely]] return; }
L_00271478:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00271490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002715C0; } }
    c.budget -= 1;
L_00271490:
    c.r[19].d[0] = c.r[18].d[0] & 65535ull;
    c.r[18].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002714C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002714B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002715C0; } }
    c.budget -= 1;
L_002714B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714C0u);  if (depth < kMaxDepth) unit_005C(c, 322u, depth + 1u); else { c.pc = 0x002737C0u; return; } if (c.pc != 0x002714C0u) [[unlikely]] return; }
L_002714C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002714F0; } }
L_002714C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002714E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002715C0; } }
    c.budget -= 1;
L_002714E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x002714E8u) [[unlikely]] return; }
L_002714E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002714F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 283u, depth + 1u); else { c.pc = 0x00273050u; return; } if (c.pc != 0x002714FCu) [[unlikely]] return; }
L_002714FC:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00271550; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00271550; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00271548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027153Cu); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_005C(c, 365u, depth + 1u); else { c.pc = 0x00273FE0u; return; } if (c.pc != 0x0027153Cu) [[unlikely]] return; }
L_0027153C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271544u);  if (depth < kMaxDepth) unit_005D(c, 8u, depth + 1u); else { c.pc = 0x00274110u; return; } if (c.pc != 0x00271544u) [[unlikely]] return; }
L_00271544:
    c.budget -= 1;
L_00271548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002715C0; } }
L_00271550:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00271578; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271570u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 138u, depth + 1u); else { c.pc = 0x00271670u; return; } if (c.pc != 0x00271570u) [[unlikely]] return; }
L_00271570:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_00271578:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002715A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027158Cu); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_005C(c, 365u, depth + 1u); else { c.pc = 0x00273FE0u; return; } if (c.pc != 0x0027158Cu) [[unlikely]] return; }
L_0027158C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271594u);  if (depth < kMaxDepth) unit_005D(c, 8u, depth + 1u); else { c.pc = 0x00274110u; return; } if (c.pc != 0x00271594u) [[unlikely]] return; }
L_00271594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002715A8; } }
    c.budget -= 1;
L_002715A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715A8u);  if (depth < kMaxDepth) unit_005C(c, 274u, depth + 1u); else { c.pc = 0x00272E60u; return; } if (c.pc != 0x002715A8u) [[unlikely]] return; }
L_002715A8:
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 285u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x002715B8u) [[unlikely]] return; }
L_002715B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_002715C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002715E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271658; } }
    c.budget -= 1;
L_00271620:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271640; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00271640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271648u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 77u, depth + 1u); else { c.pc = 0x00270A60u; return; } if (c.pc != 0x00271648u) [[unlikely]] return; }
L_00271648:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271620u | kUnwind; return; } goto L_00271620; } }
L_00271658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00271670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00271718; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00271698:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716ACu); set32(c.r[7], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_005C(c, 282u, depth + 1u); else { c.pc = 0x00272FE0u; return; } if (c.pc != 0x002716ACu) [[unlikely]] return; }
L_002716AC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00271708; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002716E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716CCu);  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x002716CCu) [[unlikely]] return; }
L_002716CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 135u, depth + 1u); else { c.pc = 0x002715E0u; return; } if (c.pc != 0x002716D8u) [[unlikely]] return; }
L_002716D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716E0u);  if (depth < kMaxDepth) unit_005C(c, 274u, depth + 1u); else { c.pc = 0x00272E60u; return; } if (c.pc != 0x002716E0u) [[unlikely]] return; }
L_002716E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00271708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716F8u);  if (depth < kMaxDepth) unit_005C(c, 322u, depth + 1u); else { c.pc = 0x002737C0u; return; } if (c.pc != 0x002716F8u) [[unlikely]] return; }
L_002716F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271700u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 135u, depth + 1u); else { c.pc = 0x002715E0u; return; } if (c.pc != 0x00271700u) [[unlikely]] return; }
L_00271700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271708u);  if (depth < kMaxDepth) unit_005D(c, 8u, depth + 1u); else { c.pc = 0x00274110u; return; } if (c.pc != 0x00271708u) [[unlikely]] return; }
L_00271708:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271698u | kUnwind; return; } goto L_00271698; } }
L_00271718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00271730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002717B8; } }
L_00271770:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271788; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00271788:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002717A0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002717A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 77u, depth + 1u); else { c.pc = 0x00270A60u; return; } if (c.pc != 0x002717A8u) [[unlikely]] return; }
L_002717A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002717AC:
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271770u | kUnwind; return; } goto L_00271770; } }
L_002717B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002717D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00271810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_002719C0; } }
    c.budget -= 1;
L_00271810:
    set32(c.r[3], ld32((c.r[28].w[0] - 30356u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 6u);  if (t) { goto L_00271828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002719C0; } }
L_00271828:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271838u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00271838u) [[unlikely]] return; }
L_00271838:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027184Cu); st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002729D0u; return; } if (c.pc != 0x0027184Cu) [[unlikely]] return; }
L_0027184C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271854u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x00271854u) [[unlikely]] return; }
L_00271854:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271860u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 168u, depth + 1u); else { c.pc = 0x002719F0u; return; } if (c.pc != 0x00271860u) [[unlikely]] return; }
L_00271860:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002718E0; } }
L_00271870:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[4], c.r[20].w[0] + 3u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027188Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x0027188Cu) [[unlikely]] return; }
L_0027188C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002718B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002718B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002718E0; } }
L_002718B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002718E0; } }
L_002718B8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271870u | kUnwind; return; } goto L_00271870; } }
    c.budget -= 1;
L_002718E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002718F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 334u, depth + 1u); else { c.pc = 0x002739C0u; return; } if (c.pc != 0x002718F0u) [[unlikely]] return; }
L_002718F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00271904; } }
L_002718F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271900u);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x00273A30u; return; } if (c.pc != 0x00271900u) [[unlikely]] return; }
L_00271900:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00271904:
    set32(c.r[2], c.r[21].w[0] + 1022u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_002719C0; } }
L_00271920:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] + 2u);  if (t) { goto L_00271968; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271934u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 170u, depth + 1u); else { c.pc = 0x00271A40u; return; } if (c.pc != 0x00271934u) [[unlikely]] return; }
L_00271934:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271948u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 338u, depth + 1u); else { c.pc = 0x00273A90u; return; } if (c.pc != 0x00271948u) [[unlikely]] return; }
L_00271948:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002719A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271960u);  if (depth < kMaxDepth) unit_005C(c, 250u, depth + 1u); else { c.pc = 0x00272940u; return; } if (c.pc != 0x00271960u) [[unlikely]] return; }
L_00271960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002719A8; } }
L_00271968:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[5], c.r[19].w[0] + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027198Cu); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 170u, depth + 1u); else { c.pc = 0x00271A40u; return; } if (c.pc != 0x0027198Cu) [[unlikely]] return; }
L_0027198C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271994u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 147u, depth + 1u); else { c.pc = 0x00271730u; return; } if (c.pc != 0x00271994u) [[unlikely]] return; }
L_00271994:
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 341u, depth + 1u); else { c.pc = 0x00273B60u; return; } if (c.pc != 0x002719A8u) [[unlikely]] return; }
L_002719A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719B0u);  if (depth < kMaxDepth) unit_005C(c, 278u, depth + 1u); else { c.pc = 0x00272EC0u; return; } if (c.pc != 0x002719B0u) [[unlikely]] return; }
L_002719B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719B8u);  if (depth < kMaxDepth) unit_005C(c, 274u, depth + 1u); else { c.pc = 0x00272E60u; return; } if (c.pc != 0x002719B8u) [[unlikely]] return; }
L_002719B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_002719C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002719F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271A30; } }
    c.budget -= 1;
L_00271A10:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271A10u | kUnwind; return; } goto L_00271A10; } }
L_00271A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00271A40:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_00271A80; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271AB0; } }
L_00271A58:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271A58u | kUnwind; return; } goto L_00271A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271AB0; } }
    c.budget -= 1;
L_00271A80:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00271AB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271AB0; } }
L_00271A90:
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271A90u | kUnwind; return; } goto L_00271A90; } }
    c.budget -= 1;
L_00271AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271AC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_00271AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00271C70; } }
L_00271AF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30356u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 6u);  if (t) { goto L_00271B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271C70; } }
L_00271B10:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B20u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00271B20u) [[unlikely]] return; }
L_00271B20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B34u); st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002729D0u; return; } if (c.pc != 0x00271B34u) [[unlikely]] return; }
L_00271B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272DA0u; return; } if (c.pc != 0x00271B3Cu) [[unlikely]] return; }
L_00271B3C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 168u, depth + 1u); else { c.pc = 0x002719F0u; return; } if (c.pc != 0x00271B48u) [[unlikely]] return; }
L_00271B48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271BC8; } }
L_00271B58:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[4], c.r[18].w[0] + 3u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B74u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00271B74u) [[unlikely]] return; }
L_00271B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271B98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
L_00271B88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00271BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00271BC8; } }
L_00271B98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00271BC8; } }
L_00271BA0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271B58u | kUnwind; return; } goto L_00271B58; } }
    c.budget -= 1;
L_00271BC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271C70; } }
L_00271BD8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 187u, depth + 1u); else { c.pc = 0x00271C90u; return; } if (c.pc != 0x00271BE4u) [[unlikely]] return; }
L_00271BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00271BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271C70; } }
    c.budget -= 1;
L_00271BF8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00271C30; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C28u); set32(c.r[6], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 170u, depth + 1u); else { c.pc = 0x00271A40u; return; } if (c.pc != 0x00271C28u) [[unlikely]] return; }
L_00271C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271C58; } }
L_00271C30:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[5], c.r[17].w[0] + 2u);
    set32(c.r[6], 0u - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_00271C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C58u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 170u, depth + 1u); else { c.pc = 0x00271A40u; return; } if (c.pc != 0x00271C58u) [[unlikely]] return; }
L_00271C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C60u);  if (depth < kMaxDepth) unit_005C(c, 278u, depth + 1u); else { c.pc = 0x00272EC0u; return; } if (c.pc != 0x00271C60u) [[unlikely]] return; }
L_00271C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C68u);  if (depth < kMaxDepth) unit_005C(c, 274u, depth + 1u); else { c.pc = 0x00272E60u; return; } if (c.pc != 0x00271C68u) [[unlikely]] return; }
L_00271C68:
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_00271C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00271C90:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CCCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005D(c, 12u, depth + 1u); else { c.pc = 0x00274190u; return; } if (c.pc != 0x00271CCCu) [[unlikely]] return; }
L_00271CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CD4u); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_005D(c, 9u, depth + 1u); else { c.pc = 0x00274120u; return; } if (c.pc != 0x00271CD4u) [[unlikely]] return; }
L_00271CD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[22].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00271D80; } }
    c.budget -= 1;
L_00271D18:
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00271D30; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00271D30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D40u); c.r[18].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 77u, depth + 1u); else { c.pc = 0x00270A60u; return; } if (c.pc != 0x00271D40u) [[unlikely]] return; }
L_00271D40:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[21].w[0] - c.r[18].w[0]);  if (t) { goto L_00271D70; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[16].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00271D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D64u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00271D64u) [[unlikely]] return; }
L_00271D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271D80; } }
    c.budget -= 1;
L_00271D70:
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271D18u | kUnwind; return; } goto L_00271D18; } }
    c.budget -= 1;
L_00271D80:
    set32(c.r[16], c.r[21].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00271DF0; } }
    c.r[2].d[0] = ld8((c.r[23].w[0] + 2u));
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00271DB0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[19].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00271DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271DF8; } }
L_00271DB0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DC0u); set32(c.r[6], 0u - c.r[16].w[0]);  if (depth < kMaxDepth) unit_005C(c, 170u, depth + 1u); else { c.pc = 0x00271A40u; return; } if (c.pc != 0x00271DC0u) [[unlikely]] return; }
L_00271DC0:
    set32(c.r[22], c.r[22].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] >= 0; c.r[2].d[0] = c.r[22].d[0] & 255ull;  if (t) { goto L_00271DD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271DD8; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_00271DD8:
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 8));  if (t) { goto L_00271DEC; } }
    set32(c.r[2], c.r[22].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_00271DEC:
    st8((c.r[23].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00271DF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00271DF8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00271E30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23684u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00271E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00271EB8; } }
L_00271E50:
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 3u);  if (t) { goto L_00271E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271EB8; } }
L_00271E68:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E78u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00271E78u) [[unlikely]] return; }
L_00271E78:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { goto L_00271E90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00271E98; } }
L_00271E90:
    set32(c.r[2], 0u + 39u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00271E98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EB4u); st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 342u, depth + 1u); else { c.pc = 0x00273BF0u; return; } if (c.pc != 0x00271EB4u) [[unlikely]] return; }
L_00271EB4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00271EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00271ED0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23684u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00271F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00271FB0; } }
    c.budget -= 1;
L_00271F08:
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 3u);  if (t) { goto L_00271F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271FB0; } }
L_00271F20:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F30u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00271F30u) [[unlikely]] return; }
L_00271F30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F44u); st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 205u, depth + 1u); else { c.pc = 0x00271FD0u; return; } if (c.pc != 0x00271F44u) [[unlikely]] return; }
L_00271F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271F58; } }
    set32(c.r[2], 0u + 31u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00271F58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 283u, depth + 1u); else { c.pc = 0x00273050u; return; } if (c.pc != 0x00271F64u) [[unlikely]] return; }
L_00271F64:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 255u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00271F88; } }
    goto L_00271F78;
L_00271F74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00271F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 138u, depth + 1u); else { c.pc = 0x00271670u; return; } if (c.pc != 0x00271F80u) [[unlikely]] return; }
L_00271F80:
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_00271F88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F98u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 342u, depth + 1u); else { c.pc = 0x00273BF0u; return; } if (c.pc != 0x00271F98u) [[unlikely]] return; }
L_00271F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FA8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 285u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x00271FA8u) [[unlikely]] return; }
L_00271FA8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_00271FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00271FD0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272010; } }
    c.budget -= 1;
L_00271FE0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00271FF8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00272000; } }
L_00271FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272018; } }
L_00272000:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271FE0u | kUnwind; return; } goto L_00271FE0; } }
L_00272010:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00272018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272030u);  if (depth < kMaxDepth) unit_005C(c, 287u, depth + 1u); else { c.pc = 0x00273120u; return; } if (c.pc != 0x00272030u) [[unlikely]] return; }
L_00272030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 23684u)));  c.pc = t; return; }
L_00272050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00272088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_002720B0; } }
    c.budget -= 1;
L_00272088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272090u); set32(c.r[7], ld32((c.r[28].w[0] - 23680u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x002720D0u; return; } if (c.pc != 0x00272090u) [[unlikely]] return; }
L_00272090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002720A8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x002720D0u; return; } if (c.pc != 0x002720A8u) [[unlikely]] return; }
L_002720A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002720B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002720D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00272100; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002722F0; } }
    c.budget -= 1;
L_00272100:
    c.r[8].d[0] = c.r[5].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[15], c.r[6].w[0] + 5u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002722D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 25144u);
    set32(c.r[9], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
L_00272140:
    set32(c.r[10], c.r[4].w[0] + c.r[13].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[11], c.r[10].w[0] - 48u);  if (t) { goto L_00272180; } }
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[15].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] + 2u);  if (t) { goto L_002722C0; } }
L_00272180:
    set32(c.r[10], c.r[8].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[10].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[12].sd[0] >= 0; c.r[10].d[0] = c.r[12].d[0] & 3ull;  if (t) { goto L_0027219C; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0027219C; } }
    set32(c.r[10], c.r[10].w[0] - 4u);
    c.budget -= 1;
L_0027219C:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00272218; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002721C0; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[2].d[0]; set32(c.r[24], c.r[10].w[0] - 1u);  if (t) { goto L_002721C0; } }
    c.r[1].d[0] = c.r[24].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00272218; } }
L_002721C0:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] <= 0; set32(c.r[24], 0u + 1u);  if (t) { goto L_002721E8; } }
    c.r[1].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[24], c.r[7].w[0] - 1u);  if (t) { goto L_002721DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002721E4; } }
L_002721DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[24].w[0] << 2);  if (t) { goto L_002721EC; } }
L_002721E4:
    set32(c.r[24], 0u + 1u);
    c.budget -= 1;
L_002721E8:
    set32(c.r[24], c.r[24].w[0] << 2);
    c.budget -= 1;
L_002721EC:
    set32(c.r[25], c.r[11].w[0] << 1);
    set32(c.r[16], c.r[5].w[0] + c.r[24].w[0]);
    set32(c.r[24], ld32((c.r[16].w[0])));
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    c.r[24].d[0] = ld8((c.r[24].w[0]));
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[24], ld32((c.r[16].w[0])));
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    c.r[24].d[0] = ld8((c.r[24].w[0] + 1u));
    st8((c.r[15].w[0] + 1u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[15], c.r[15].w[0] + 2u);
    c.budget -= 11;
L_00272218:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002722C0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00272230; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[15].d[0];  if (t) { goto L_002722C0; } }
L_00272230:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_00272240; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002722C0; } }
L_00272240:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 2));  if (t) { goto L_00272260; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0;  if (t) { goto L_00272258; } }
    set32(c.r[11], c.r[12].w[0] + 3u);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 2));
    c.budget -= 2;
L_00272258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 6u);  if (t) { goto L_00272288; } }
L_00272260:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_00272280; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_00272274; } }
    set32(c.r[11], 0u + 4u);
    c.budget -= 1;
L_00272274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272288; } }
    c.budget -= 1;
L_00272280:
    set32(c.r[11], c.r[10].w[0] + 3u);
    c.budget -= 2;
L_00272288:
    set32(c.r[12], c.r[11].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[11], ld32((c.r[1].w[0] - 25136u)));
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[11], ld32((c.r[1].w[0] - 25136u)));
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0] + 1u));
    st8((c.r[15].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 13;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 2u);  if (t) { goto L_002722C0; } }
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_002722C0:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[10].d[0] = c.r[13].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272140u | kUnwind; return; } goto L_00272140; } }
L_002722D0:
    set32(c.r[2], c.r[6].w[0] + 5u);
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002722E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002722F0; } }
    c.budget -= 1;
L_002722E8:
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[15].w[0] + 1u);
    c.budget -= 2;
L_002722F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00272340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_002723B8; } }
L_00272340:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027234Cu); set32(c.r[7], ld32((c.r[28].w[0] - 23680u)));  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x002720D0u; return; } if (c.pc != 0x0027234Cu) [[unlikely]] return; }
L_0027234C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272368; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00272368:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00272370:
    set32(c.r[2], ld32((c.r[28].w[0] - 23680u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002723A8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027238Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x002720D0u; return; } if (c.pc != 0x0027238Cu) [[unlikely]] return; }
L_0027238C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002723A8; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002723A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272370u | kUnwind; return; } goto L_00272370; } }
L_002723B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002723E0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] - 1u);  if (t) { goto L_00272448; } }
    c.budget -= 1;
L_002723F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272450; } }
L_00272418:
    c.r[2].d[0] = c.r[7].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272450; } }
L_00272430:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002723F0u | kUnwind; return; } goto L_002723F0; } }
    c.budget -= 1;
L_00272448:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00272450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272460:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E4A0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 205u, depth); }
L_00272470:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E4E0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 207u, depth); }
L_00272480:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E560u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 209u, depth); }
L_00272490:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E4D0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 206u, depth); }
L_002724A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E5E0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 211u, depth); }
L_002724B0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 18912u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC88u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 122u, depth); }
L_002724C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30356u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724D8u); set32(c.r[4], c.r[4].w[0] + 18912u);  if (depth < kMaxDepth) unit_005C(c, 221u, depth + 1u); else { c.pc = 0x00272460u; return; } if (c.pc != 0x002724D8u) [[unlikely]] return; }
L_002724D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002724F0; } }
    st32((c.r[28].w[0] - 30360u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002724F8; } }
L_002724F0:
    st32((c.r[28].w[0] - 30360u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002724F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272520u); set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));  if (depth < kMaxDepth) unit_005C(c, 224u, depth + 1u); else { c.pc = 0x00272490u; return; } if (c.pc != 0x00272520u) [[unlikely]] return; }
L_00272520:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00272538; } }
    st32((c.r[28].w[0] - 30360u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00272540; } }
L_00272538:
    st32((c.r[28].w[0] - 30360u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00272540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272570u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 225u, depth + 1u); else { c.pc = 0x002724A0u; return; } if (c.pc != 0x00272570u) [[unlikely]] return; }
L_00272570:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002725C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272584u);  if (depth < kMaxDepth) unit_005C(c, 227u, depth + 1u); else { c.pc = 0x002724C0u; return; } if (c.pc != 0x00272584u) [[unlikely]] return; }
L_00272584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002725C8; } }
    c.budget -= 1;
L_00272598:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 225u, depth + 1u); else { c.pc = 0x002724A0u; return; } if (c.pc != 0x002725A8u) [[unlikely]] return; }
L_002725A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002725C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002725C8; } }
    c.budget -= 1;
L_002725C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002725C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002725E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725F0u);  if (depth < kMaxDepth) unit_005C(c, 261u, depth + 1u); else { c.pc = 0x00272BD0u; return; } if (c.pc != 0x002725F0u) [[unlikely]] return; }
L_002725F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725F8u);  if (depth < kMaxDepth) unit_005C(c, 278u, depth + 1u); else { c.pc = 0x00272EC0u; return; } if (c.pc != 0x002725F8u) [[unlikely]] return; }
L_002725F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272624u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x00272624u) [[unlikely]] return; }
L_00272624:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00272638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002726E8; } }
L_00272638:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[6], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027264Cu); set32(c.r[5], c.r[5].w[0] - 31056u);  if (depth < kMaxDepth) unit_005C(c, 222u, depth + 1u); else { c.pc = 0x00272470u; return; } if (c.pc != 0x0027264Cu) [[unlikely]] return; }
L_0027264C:
    set32(c.r[3], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00272660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002726E8; } }
L_00272660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[4], c.r[4].w[0] - 25120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272674u); set32(c.r[16], c.r[16].w[0] - 31056u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00272674u) [[unlikely]] return; }
L_00272674:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272688u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00272688u) [[unlikely]] return; }
L_00272688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002726E8; } }
L_00272698:
    st32((c.r[28].w[0] - 23660u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 46u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 23656u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 49u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 23640u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 23668u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 23676u), 0u);
    st32((c.r[28].w[0] - 23680u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 23672u), c.r[3].w[0]);
    c.budget -= 20;
L_002726E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23640u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23668u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] - 31008u);  if (t) { goto L_00272740; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23680u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23672u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00272740; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23676u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272820; } }
L_00272740:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00272754; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272754; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_00272754:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23640u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_0027276C; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_0027276C:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23684u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0027278C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027278C; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_0027278C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23684u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_002727A4; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_002727A4:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23680u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002727C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002727C4; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_002727C4:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23680u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_002727DC; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_002727DC:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002727E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x002727E8u) [[unlikely]] return; }
L_002727E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00272800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00272820; } }
    c.budget -= 1;
L_00272800:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[6], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272814u); set32(c.r[5], c.r[5].w[0] - 31056u);  if (depth < kMaxDepth) unit_005C(c, 223u, depth + 1u); else { c.pc = 0x00272480u; return; } if (c.pc != 0x00272814u) [[unlikely]] return; }
L_00272814:
    c.r[2].d[0] = c.r[2].d[0] ^ 1024ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
L_00272820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272840u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x00272840u) [[unlikely]] return; }
L_00272840:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00272858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00272878; } }
    c.budget -= 1;
L_00272858:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[6], 0u + 4096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027286Cu); set32(c.r[5], c.r[5].w[0] + 30384u);  if (depth < kMaxDepth) unit_005C(c, 222u, depth + 1u); else { c.pc = 0x00272470u; return; } if (c.pc != 0x0027286Cu) [[unlikely]] return; }
L_0027286C:
    c.r[2].d[0] = c.r[2].d[0] ^ 4096ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
L_00272878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272890:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002728A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272930; } }
L_002728A8:
    set32(c.r[7], c.r[2].w[0] - 161u);
    c.r[3].d[0] = c.r[5].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002728C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002728E8; } }
L_002728C8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002728E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272930; } }
L_002728E0:
    set32(c.r[2], c.r[2].w[0] - 160u);
    c.budget -= 2;
L_002728E8:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30352u)));
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00272930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272930; } }
    c.budget -= 1;
L_00272930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272940:
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002729C8; } }
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[6].w[0] - 161u);  if (t) { goto L_00272970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00272988; } }
    c.budget -= 1;
L_00272970:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = c.r[4].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002729C8; } }
    set32(c.r[4], c.r[4].w[0] - 160u);
    c.budget -= 2;
L_00272988:
    c.r[3].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[3], c.r[8].w[0] << 2);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[28].w[0] - 30352u)));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[28].w[0] - 23676u), c.r[7].w[0]);
    c.budget -= 16;
L_002729C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002729D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 23660u)));
    set32(c.r[17], ld32((c.r[28].w[0] - 23656u)));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00272A68; } }
L_00272A00:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00272A14; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00272A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 30384u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A30u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00272A30u) [[unlikely]] return; }
L_00272A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00272A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00272A98; } }
L_00272A40:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00272A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00272A58; } }
L_00272A50:
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00272A58:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272A00u | kUnwind; return; } goto L_00272A00; } }
L_00272A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 30384u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A84u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00272A84u) [[unlikely]] return; }
L_00272A84:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00272A90; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_00272A90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00272A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00272AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 30384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AECu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005C(c, 259u, depth + 1u); else { c.pc = 0x00272B80u; return; } if (c.pc != 0x00272AECu) [[unlikely]] return; }
L_00272AEC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 30384u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B38u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 259u, depth + 1u); else { c.pc = 0x00272B80u; return; } if (c.pc != 0x00272B38u) [[unlikely]] return; }
L_00272B38:
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272B70; } }
    c.budget -= 1;
L_00272B50:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272B6C; } }
L_00272B68:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00272B6C:
    c.budget -= 1;
L_00272B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272B80:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272BC0; } }
    c.budget -= 1;
L_00272B90:
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00272BC0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00272BC0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272B90u | kUnwind; return; } goto L_00272B90; } }
    c.budget -= 1;
L_00272BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272BD0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[10], c.r[10].w[0] + 20016u);
    set32(c.r[3], c.r[3].w[0] + 29340u);
    c.r[1].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 23664u), c.r[10].w[0]);  if (t) { goto L_00272CB8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[9], c.r[9].w[0] + 21052u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
L_00272BF8:
    st32((c.r[10].w[0]), c.r[8].w[0]);
    st32((c.r[10].w[0] + 4u), 0u);
    set32(c.r[3], c.r[10].w[0] + 1036u);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[10].w[0] + 2072u);
    st32((c.r[10].w[0] + 1036u), c.r[8].w[0]);
    set32(c.r[3], c.r[10].w[0] + 3108u);
    st32((c.r[10].w[0] + 1040u), 0u);
    set32(c.r[7], c.r[10].w[0] + 4144u);
    st32((c.r[10].w[0] + 1044u), c.r[4].w[0]);
    set32(c.r[6], c.r[10].w[0] + 5180u);
    st32((c.r[10].w[0] + 2072u), c.r[8].w[0]);
    set32(c.r[5], c.r[10].w[0] + 6216u);
    st32((c.r[10].w[0] + 2076u), 0u);
    set32(c.r[4], c.r[10].w[0] + 7252u);
    st32((c.r[10].w[0] + 2080u), c.r[3].w[0]);
    st32((c.r[10].w[0] + 3108u), c.r[8].w[0]);
    set32(c.r[3], c.r[10].w[0] + 8288u);
    st32((c.r[10].w[0] + 3112u), 0u);
    st32((c.r[10].w[0] + 3116u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 4144u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 4148u), 0u);
    st32((c.r[10].w[0] + 4152u), c.r[6].w[0]);
    st32((c.r[10].w[0] + 5180u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 5184u), 0u);
    st32((c.r[10].w[0] + 5188u), c.r[5].w[0]);
    st32((c.r[10].w[0] + 6216u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 6220u), 0u);
    st32((c.r[10].w[0] + 6224u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 7252u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 7256u), 0u);
    st32((c.r[10].w[0] + 7260u), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8288u);
    c.r[3].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272BF8u | kUnwind; return; } goto L_00272BF8; } }
    set32(c.r[5], c.r[5].w[0] + 29340u);
    c.r[1].d[0] = c.r[10].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00272CB8; } }
L_00272C98:
    st32((c.r[10].w[0]), c.r[4].w[0]);
    st32((c.r[10].w[0] + 4u), 0u);
    set32(c.r[3], c.r[10].w[0] + 1036u);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1036u);
    c.r[3].d[0] = c.r[10].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272C98u | kUnwind; return; } goto L_00272C98; } }
L_00272CB8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    st32((c.r[10].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[10].w[0] + 8u), 0u);  c.pc = t; return; }
L_00272CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 10;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CF0u); c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(13312ll);  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x00272CF0u) [[unlikely]] return; }
L_00272CF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00272D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00272D28; } }
    c.budget -= 1;
L_00272D08:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D18u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_005C(c, 223u, depth + 1u); else { c.pc = 0x00272480u; return; } if (c.pc != 0x00272D18u) [[unlikely]] return; }
L_00272D18:
    c.r[2].d[0] = c.r[2].d[0] ^ 1024ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
L_00272D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 10;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D60u); c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(13312ll);  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x00272D60u) [[unlikely]] return; }
L_00272D60:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00272D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00272D90; } }
    c.budget -= 1;
L_00272D78:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D88u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_005C(c, 222u, depth + 1u); else { c.pc = 0x00272470u; return; } if (c.pc != 0x00272D88u) [[unlikely]] return; }
L_00272D88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00272D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 23664u)));
    c.budget -= 8;
L_00272DC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00272DF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00272DE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23664u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 23664u), c.r[16].w[0]);
    c.budget -= 5;
L_00272DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 12u);  if (t) { goto L_00272E48; } }
L_00272DF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272E08; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272DC0u | kUnwind; return; } goto L_00272DC0; } }
L_00272E08:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23664u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 23664u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00272E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E30u);  if (depth < kMaxDepth) unit_005C(c, 264u, depth + 1u); else { c.pc = 0x00272CD0u; return; } if (c.pc != 0x00272E30u) [[unlikely]] return; }
L_00272E30:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E40u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_005C(c, 267u, depth + 1u); else { c.pc = 0x00272D40u; return; } if (c.pc != 0x00272E40u) [[unlikely]] return; }
L_00272E40:
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 2;
L_00272E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272E60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23664u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  c.pc = t; return; }
L_00272E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 23664u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00272EB0; } }
L_00272E88:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00272EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EA0u);  if (depth < kMaxDepth) unit_005C(c, 264u, depth + 1u); else { c.pc = 0x00272CD0u; return; } if (c.pc != 0x00272EA0u) [[unlikely]] return; }
L_00272EA0:
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272E88u | kUnwind; return; } goto L_00272E88; } }
    c.budget -= 1;
L_00272EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272EC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18992u);
    c.budget -= 4;
L_00272ED0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272ED0u | kUnwind; return; } goto L_00272ED0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272F10:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], c.r[11].w[0] + 18992u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 6;
L_00272F28:
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00272F48; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_00272F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00272F78; } }
    c.budget -= 1;
L_00272F48:
    c.r[3].d[0] = ld16((c.r[11].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00272F78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00272F78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[9].w[0] + 1u);  if (t) { goto L_00272F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00272FD0; } }
    c.budget -= 1;
L_00272F78:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00272F28u | kUnwind; return; } goto L_00272F28; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_00272FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272FD0; } }
    c.budget -= 1;
L_00272FA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[8], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 18992u);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[8].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 12;
L_00272FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272FE0:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00272FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273048; } }
    c.budget -= 1;
L_00272FF8:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], c.r[2].w[0] + 18992u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00273028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273048; } }
    c.budget -= 1;
L_00273028:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 8;
L_00273048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273050:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002730B8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[6], c.r[6].w[0] + 18992u);
    c.budget -= 2;
L_00273068:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_002730A8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002730A8; } }
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002730A8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002730A8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002730A8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273068u | kUnwind; return; } goto L_00273068; } }
L_002730B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002730C0:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00273118; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] + 18992u);
    c.budget -= 3;
L_002730D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_00273108; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00273108; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00273108; } }
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00273108:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002730D8u | kUnwind; return; } goto L_002730D8; } }
L_00273118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00273120:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00273138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273178; } }
    c.budget -= 1;
L_00273138:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], c.r[2].w[0] + 18992u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00273178; } }
    c.budget -= 1;
L_00273168:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00273178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273180:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 18992u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
L_00273190:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002731B0; } }
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_002731B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273190u | kUnwind; return; } goto L_00273190; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002731D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 18992u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
L_002731E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002731F0; } }
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002731F0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002731E0u | kUnwind; return; } goto L_002731E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273220u);  if (depth < kMaxDepth) unit_005C(c, 299u, depth + 1u); else { c.pc = 0x00273290u; return; } if (c.pc != 0x00273220u) [[unlikely]] return; }
L_00273220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273228u);  if (depth < kMaxDepth) unit_005C(c, 302u, depth + 1u); else { c.pc = 0x00273350u; return; } if (c.pc != 0x00273228u) [[unlikely]] return; }
L_00273228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273230u);  if (depth < kMaxDepth) unit_005C(c, 323u, depth + 1u); else { c.pc = 0x002737F0u; return; } if (c.pc != 0x00273230u) [[unlikely]] return; }
L_00273230:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273244u);  if (depth < kMaxDepth) unit_005C(c, 304u, depth + 1u); else { c.pc = 0x002733A0u; return; } if (c.pc != 0x00273244u) [[unlikely]] return; }
L_00273244:
    c.budget -= 1;
L_00273248:
    st8((c.r[28].w[0] - 23652u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00273260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23652u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00273280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027327Cu);  if (depth < kMaxDepth) unit_005C(c, 331u, depth + 1u); else { c.pc = 0x00273960u; return; } if (c.pc != 0x0027327Cu) [[unlikely]] return; }
L_0027327C:
    c.budget -= 1;
L_00273280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00273290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[5], c.r[5].w[0] - 21520u);
    set32(c.r[3], c.r[3].w[0] - 17432u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00910000u);  if (t) { goto L_00273338; } }
    set32(c.r[4], c.r[4].w[0] - 17496u);
    c.budget -= 1;
L_002732B0:
    set32(c.r[3], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 24u);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 32u);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 40u);
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 48u);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 56u);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 64u);
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002732B0u | kUnwind; return; } goto L_002732B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[4], c.r[4].w[0] - 17432u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00273338; } }
    c.budget -= 1;
L_00273318:
    set32(c.r[3], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273318u | kUnwind; return; } goto L_00273318; } }
    c.budget -= 1;
L_00273338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 21520u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23636u), c.r[3].w[0]);  c.pc = t; return; }
L_00273350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 21840u);
    c.budget -= 4;
L_00273360:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 80ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273360u | kUnwind; return; } goto L_00273360; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002733A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st8((c.r[1].w[0] - 30031u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st8((c.r[1].w[0] - 30032u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] - 29008u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[3], c.r[3].w[0] - 27984u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 26960u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 25936u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[6], c.r[6].w[0] - 24912u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[7], c.r[7].w[0] - 23888u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 22864u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 30032u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 23644u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 23648u), c.r[8].w[0]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23640u), 0u);  c.pc = t; return; }
L_00273440:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;  if (t) { goto L_00273460; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 160u);  if (t) { goto L_00273460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273468; } }
L_00273460:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00273468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23636u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027348Cu);  if (depth < kMaxDepth) unit_005C(c, 315u, depth + 1u); else { c.pc = 0x00273630u; return; } if (c.pc != 0x0027348Cu) [[unlikely]] return; }
L_0027348C:
    c.budget -= 1;
L_00273490:
    set32(c.r[2], ld32((c.r[28].w[0] - 23636u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[28].w[0] - 23636u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002734B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23636u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23636u), c.r[4].w[0]);  c.pc = t; return; }
L_002734C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23648u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23644u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002734F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734F4u);  if (depth < kMaxDepth) unit_005C(c, 315u, depth + 1u); else { c.pc = 0x00273630u; return; } if (c.pc != 0x002734F4u) [[unlikely]] return; }
L_002734F4:
    c.budget -= 1;
L_002734F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23644u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 23644u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23644u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23644u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273568u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x00273440u; return; } if (c.pc != 0x00273568u) [[unlikely]] return; }
L_00273568:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 21840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002735E8; } }
    c.r[16].d[0] = c.r[16].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 2;
L_00273590:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735B0u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x002735B0u) [[unlikely]] return; }
L_002735B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002735D0; } }
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002735D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002735E8; } }
L_002735D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002735E8; } }
L_002735D8:
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273590u | kUnwind; return; } goto L_00273590; } }
L_002735E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_00273604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 21840u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00273608; } }
L_00273604:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_00273608:
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
L_00273630:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23644u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23644u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 23644u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23644u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23640u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_00273678; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273678; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_00273678:
    st32((c.r[28].w[0] - 23640u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 30032u);
    set32(c.r[3], c.r[3].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 23644u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 23644u)));
    set32(c.r[2], c.r[16].w[0] + 1024u);
    st32((c.r[28].w[0] - 23648u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273758; } }
    c.budget -= 1;
L_002736C0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00273720; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736E0u); set32(c.r[5], c.r[16].w[0] + 3u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x002736E0u) [[unlikely]] return; }
L_002736E0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273700u); st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 311u, depth + 1u); else { c.pc = 0x00273530u; return; } if (c.pc != 0x00273700u) [[unlikely]] return; }
L_00273700:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00273720; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273720u); set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  if (depth < kMaxDepth) unit_005C(c, 308u, depth + 1u); else { c.pc = 0x002734B0u; return; } if (c.pc != 0x00273720u) [[unlikely]] return; }
L_00273720:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002736C0u | kUnwind; return; } goto L_002736C0; } }
    c.budget -= 1;
L_00273758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273760u); set32(c.r[4], ld32((c.r[28].w[0] - 23640u)));  if (depth < kMaxDepth) unit_005C(c, 288u, depth + 1u); else { c.pc = 0x00273180u; return; } if (c.pc != 0x00273760u) [[unlikely]] return; }
L_00273760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00273780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 30032u);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 10));  if (t) { goto L_0027379C; } }
    set32(c.r[2], c.r[4].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0027379C:
    set32(c.r[3], c.r[2].w[0] << 12);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] & 1023ull;  if (t) { goto L_002737B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002737B4; } }
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.budget -= 1;
L_002737B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_002737C0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 30032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002737F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[4], 0u + 5120u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273810u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x00273810u) [[unlikely]] return; }
L_00273810:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00273940; } }
    c.budget -= 1;
L_00273828:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[6], 0u + 8192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027383Cu); set32(c.r[5], c.r[5].w[0] - 30032u);  if (depth < kMaxDepth) unit_005C(c, 222u, depth + 1u); else { c.pc = 0x00272470u; return; } if (c.pc != 0x0027383Cu) [[unlikely]] return; }
L_0027383C:
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00273850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00273940; } }
L_00273850:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 30032u);
    c.budget -= 4;
L_00273860:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00273910; } }
    c.budget -= 1;
L_00273880:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002738D8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738A0u); set32(c.r[5], c.r[18].w[0] + 3u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x002738A0u) [[unlikely]] return; }
L_002738A0:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[29].w[0] + 172u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738C0u); st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 311u, depth + 1u); else { c.pc = 0x00273530u; return; } if (c.pc != 0x002738C0u) [[unlikely]] return; }
L_002738C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738C8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 306u, depth + 1u); else { c.pc = 0x00273470u; return; } if (c.pc != 0x002738C8u) [[unlikely]] return; }
L_002738C8:
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002738D8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273880u | kUnwind; return; } goto L_00273880; } }
    c.budget -= 1;
L_00273910:
    set32(c.r[2], ld32((c.r[28].w[0] - 23640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[16].w[0] + 1024u);  if (t) { goto L_00273928; } }
    st32((c.r[28].w[0] - 23644u), c.r[18].w[0]);
    st32((c.r[28].w[0] - 23648u), c.r[2].w[0]);
    c.budget -= 3;
L_00273928:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1024u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273860u | kUnwind; return; } goto L_00273860; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00273940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00273960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273970u); set32(c.r[4], 0u + 5120u);  if (depth < kMaxDepth) unit_005C(c, 231u, depth + 1u); else { c.pc = 0x00272550u; return; } if (c.pc != 0x00273970u) [[unlikely]] return; }
L_00273970:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00273988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002739A8; } }
    c.budget -= 1;
L_00273988:
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[6], 0u + 8192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027399Cu); set32(c.r[5], c.r[5].w[0] - 30032u);  if (depth < kMaxDepth) unit_005C(c, 223u, depth + 1u); else { c.pc = 0x00272480u; return; } if (c.pc != 0x0027399Cu) [[unlikely]] return; }
L_0027399C:
    c.r[2].d[0] = c.r[2].d[0] ^ 8192ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
L_002739A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002739C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002739F0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002739F8; } }
    c.budget -= 1;
L_002739F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_00273A00; } }
L_002739F8:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_00273A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A08u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_005D(c, 9u, depth + 1u); else { c.pc = 0x00274120u; return; } if (c.pc != 0x00273A08u) [[unlikely]] return; }
L_00273A08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] + 3u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00273A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273A58; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273A60; } }
L_00273A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_00273A68; } }
L_00273A60:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_00273A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A70u); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_005D(c, 9u, depth + 1u); else { c.pc = 0x00274120u; return; } if (c.pc != 0x00273A70u) [[unlikely]] return; }
L_00273A70:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00273AC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273AC4; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_00273AC4:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));  if (t) { goto L_00273AD8; } }
    set32(c.r[2], c.r[5].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_00273AD8:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00273AFCu) [[unlikely]] return; }
L_00273AFC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_00273B30; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273B38; } }
    c.budget -= 1;
L_00273B30:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00273B38:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 12u, depth + 1u); else { c.pc = 0x00274190u; return; } if (c.pc != 0x00273B44u) [[unlikely]] return; }
L_00273B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00273B60:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00273B90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00273B90; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_00273B90:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));  if (t) { goto L_00273BA4; } }
    set32(c.r[2], c.r[5].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_00273BA4:
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 7u));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { goto L_00273BD8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273BE0; } }
    c.budget -= 1;
L_00273BD8:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00273BE0:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { c.r[5].d[0] = c.r[8].d[0] + 0ull;  [[clang::musttail]] return unit_005D(c, 12u, depth); }
L_00273BF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[28].w[0] - 23652u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C30u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005C(c, 311u, depth + 1u); else { c.pc = 0x00273530u; return; } if (c.pc != 0x00273C30u) [[unlikely]] return; }
L_00273C30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00273C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C54u); set32(c.r[5], c.r[20].w[0] + 3u);  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00273C54u) [[unlikely]] return; }
L_00273C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273C88; } }
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C78u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005C(c, 321u, depth + 1u); else { c.pc = 0x00273780u; return; } if (c.pc != 0x00273C78u) [[unlikely]] return; }
L_00273C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 290u, depth + 1u); else { c.pc = 0x002731D0u; return; } if (c.pc != 0x00273C80u) [[unlikely]] return; }
L_00273C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C88u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_005C(c, 308u, depth + 1u); else { c.pc = 0x002734B0u; return; } if (c.pc != 0x00273C88u) [[unlikely]] return; }
L_00273C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C90u);  if (depth < kMaxDepth) unit_005C(c, 306u, depth + 1u); else { c.pc = 0x00273470u; return; } if (c.pc != 0x00273C90u) [[unlikely]] return; }
L_00273C90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 334u, depth + 1u); else { c.pc = 0x002739C0u; return; } if (c.pc != 0x00273C9Cu) [[unlikely]] return; }
L_00273C9C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 309u, depth + 1u); else { c.pc = 0x002734C0u; return; } if (c.pc != 0x00273CA8u) [[unlikely]] return; }
L_00273CA8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CC0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 338u, depth + 1u); else { c.pc = 0x00273A90u; return; } if (c.pc != 0x00273CC0u) [[unlikely]] return; }
L_00273CC0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CD0u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005C(c, 311u, depth + 1u); else { c.pc = 0x00273530u; return; } if (c.pc != 0x00273CD0u) [[unlikely]] return; }
L_00273CD0:
    st32((c.r[16].w[0]), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00273D10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull << 48;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D64u); st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x00273440u; return; } if (c.pc != 0x00273D64u) [[unlikely]] return; }
L_00273D64:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 21840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00273E48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00273D88:
    set32(c.r[20], ld32((c.r[23].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[4], c.r[20].w[0] + 3u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 259u, depth + 1u); else { c.pc = 0x00272B80u; return; } if (c.pc != 0x00273DA8u) [[unlikely]] return; }
L_00273DA8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273DD0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_00273DD0:
    set32(c.r[4], c.r[20].w[0] + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DE0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00273DE0u) [[unlikely]] return; }
L_00273DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273E08; } }
    c.r[18].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[16].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00273E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273E88; } }
L_00273E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00273E38; } }
L_00273E08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00273E38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));
    set32(c.r[4], c.r[20].w[0] + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E24u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00273E24u) [[unlikely]] return; }
L_00273E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00273E88; } }
    c.budget -= 1;
L_00273E38:
    set32(c.r[23], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273D88u | kUnwind; return; } goto L_00273D88; } }
    c.budget -= 1;
L_00273E48:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00273E68; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00273E88; } }
    c.budget -= 1;
L_00273E68:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E74u); st16((c.r[22].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 321u, depth + 1u); else { c.pc = 0x00273780u; return; } if (c.pc != 0x00273E74u) [[unlikely]] return; }
L_00273E74:
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[22].w[0] + 4u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[22].w[0] + 6u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st32((c.r[22].w[0] + 12u), c.r[30].w[0]);
    c.budget -= 5;
L_00273E88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00273EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EF4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x00273440u; return; } if (c.pc != 0x00273EF4u) [[unlikely]] return; }
L_00273EF4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 21840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00273F80; } }
    c.r[19].d[0] = c.r[19].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 2;
L_00273F18:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[16].w[0] + 3u);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F38u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x002723E0u; return; } if (c.pc != 0x00273F38u) [[unlikely]] return; }
L_00273F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00273F58; } }
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00273F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00273F80; } }
L_00273F58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_00273F70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00273FB0; } }
    c.budget -= 1;
L_00273F70:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273F18u | kUnwind; return; } goto L_00273F18; } }
    c.budget -= 1;
L_00273F80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00273F98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00273FB0; } }
    c.budget -= 1;
L_00273F98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FA4u); st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_005C(c, 321u, depth + 1u); else { c.pc = 0x00273780u; return; } if (c.pc != 0x00273FA4u) [[unlikely]] return; }
L_00273FA4:
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00273FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00273FE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[3].d[0] << 48;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 8;
    [[clang::musttail]] return unit_005D(c, 1u, depth);
}

}
