#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_016C[4096] = {
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    4, 5, 6, 7, 0, 0, 0, 0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
    55, 56, 57, 58, 59, 60, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 81, 82, 83, 84, 85, 86, 0, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 0, 0, 105, 106, 107, 108, 109, 0, 110, 0, 0, 0, 0, 0, 111, 112, 0, 0,
    0, 0, 0, 0, 113, 114, 115, 0, 0, 0, 0, 0, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 0, 0, 0, 0, 0, 0, 142, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 146, 147, 148, 149, 0, 0, 0,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 0, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
    181, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
    200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 0, 0, 0, 0, 0, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 0, 0, 0, 0, 0, 234, 235, 236, 237,
    238, 239, 240, 241, 242, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_016C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_006B0710;
    case 2u: goto L_006B14C8;
    case 3u: goto L_006B14E0;
    case 4u: goto L_006B1500;
    case 5u: goto L_006B1504;
    case 6u: goto L_006B1508;
    case 7u: goto L_006B150C;
    case 8u: goto L_006B1520;
    case 9u: goto L_006B1524;
    case 10u: goto L_006B1528;
    case 11u: goto L_006B152C;
    case 12u: goto L_006B1530;
    case 13u: goto L_006B1534;
    case 14u: goto L_006B1538;
    case 15u: goto L_006B153C;
    case 16u: goto L_006B1540;
    case 17u: goto L_006B1544;
    case 18u: goto L_006B1548;
    case 19u: goto L_006B154C;
    case 20u: goto L_006B1550;
    case 21u: goto L_006B1554;
    case 22u: goto L_006B1558;
    case 23u: goto L_006B155C;
    case 24u: goto L_006B1560;
    case 25u: goto L_006B1564;
    case 26u: goto L_006B1568;
    case 27u: goto L_006B156C;
    case 28u: goto L_006B1570;
    case 29u: goto L_006B1574;
    case 30u: goto L_006B1578;
    case 31u: goto L_006B157C;
    case 32u: goto L_006B1580;
    case 33u: goto L_006B1584;
    case 34u: goto L_006B1588;
    case 35u: goto L_006B158C;
    case 36u: goto L_006B1590;
    case 37u: goto L_006B1594;
    case 38u: goto L_006B1598;
    case 39u: goto L_006B159C;
    case 40u: goto L_006B15A0;
    case 41u: goto L_006B15A4;
    case 42u: goto L_006B15A8;
    case 43u: goto L_006B15D0;
    case 44u: goto L_006B15D4;
    case 45u: goto L_006B15D8;
    case 46u: goto L_006B15DC;
    case 47u: goto L_006B15E0;
    case 48u: goto L_006B15E4;
    case 49u: goto L_006B15E8;
    case 50u: goto L_006B15EC;
    case 51u: goto L_006B15F0;
    case 52u: goto L_006B15F4;
    case 53u: goto L_006B15F8;
    case 54u: goto L_006B15FC;
    case 55u: goto L_006B1600;
    case 56u: goto L_006B1604;
    case 57u: goto L_006B1608;
    case 58u: goto L_006B160C;
    case 59u: goto L_006B1610;
    case 60u: goto L_006B1614;
    case 61u: goto L_006B1618;
    case 62u: goto L_006B161C;
    case 63u: goto L_006B1660;
    case 64u: goto L_006B1664;
    case 65u: goto L_006B1668;
    case 66u: goto L_006B166C;
    case 67u: goto L_006B1670;
    case 68u: goto L_006B1674;
    case 69u: goto L_006B1678;
    case 70u: goto L_006B167C;
    case 71u: goto L_006B1680;
    case 72u: goto L_006B1684;
    case 73u: goto L_006B1688;
    case 74u: goto L_006B16E0;
    case 75u: goto L_006B16E4;
    case 76u: goto L_006B16E8;
    case 77u: goto L_006B1B00;
    case 78u: goto L_006B1B20;
    case 79u: goto L_006B1C40;
    case 80u: goto L_006B1C50;
    case 81u: goto L_006B1C54;
    case 82u: goto L_006B1C58;
    case 83u: goto L_006B1C5C;
    case 84u: goto L_006B1C60;
    case 85u: goto L_006B1C64;
    case 86u: goto L_006B1C68;
    case 87u: goto L_006B1C70;
    case 88u: goto L_006B1C74;
    case 89u: goto L_006B1C78;
    case 90u: goto L_006B1C7C;
    case 91u: goto L_006B1C80;
    case 92u: goto L_006B1C84;
    case 93u: goto L_006B1C88;
    case 94u: goto L_006B1C8C;
    case 95u: goto L_006B1C90;
    case 96u: goto L_006B1C94;
    case 97u: goto L_006B1C98;
    case 98u: goto L_006B1C9C;
    case 99u: goto L_006B1CA0;
    case 100u: goto L_006B1CA4;
    case 101u: goto L_006B1CA8;
    case 102u: goto L_006B1CAC;
    case 103u: goto L_006B1CB0;
    case 104u: goto L_006B1CB4;
    case 105u: goto L_006B1CC0;
    case 106u: goto L_006B1CC4;
    case 107u: goto L_006B1CC8;
    case 108u: goto L_006B1CCC;
    case 109u: goto L_006B1CD0;
    case 110u: goto L_006B1CD8;
    case 111u: goto L_006B1CF0;
    case 112u: goto L_006B1CF4;
    case 113u: goto L_006B1D10;
    case 114u: goto L_006B1D14;
    case 115u: goto L_006B1D18;
    case 116u: goto L_006B1D30;
    case 117u: goto L_006B1D34;
    case 118u: goto L_006B1D38;
    case 119u: goto L_006B1D3C;
    case 120u: goto L_006B1D40;
    case 121u: goto L_006B1D44;
    case 122u: goto L_006B1D48;
    case 123u: goto L_006B1D4C;
    case 124u: goto L_006B1D50;
    case 125u: goto L_006B1D54;
    case 126u: goto L_006B1D58;
    case 127u: goto L_006B1D5C;
    case 128u: goto L_006B1D60;
    case 129u: goto L_006B1D64;
    case 130u: goto L_006B1D68;
    case 131u: goto L_006B1D6C;
    case 132u: goto L_006B1D70;
    case 133u: goto L_006B1D74;
    case 134u: goto L_006B1D78;
    case 135u: goto L_006B1D7C;
    case 136u: goto L_006B1D80;
    case 137u: goto L_006B1D84;
    case 138u: goto L_006B1D88;
    case 139u: goto L_006B1D8C;
    case 140u: goto L_006B1D90;
    case 141u: goto L_006B1D94;
    case 142u: goto L_006B1DB0;
    case 143u: goto L_006B1DB4;
    case 144u: goto L_006B1DB8;
    case 145u: goto L_006B1DE0;
    case 146u: goto L_006B1DE4;
    case 147u: goto L_006B1DE8;
    case 148u: goto L_006B1DEC;
    case 149u: goto L_006B1DF0;
    case 150u: goto L_006B1E00;
    case 151u: goto L_006B1E04;
    case 152u: goto L_006B1E08;
    case 153u: goto L_006B1E0C;
    case 154u: goto L_006B1E10;
    case 155u: goto L_006B1E14;
    case 156u: goto L_006B1E18;
    case 157u: goto L_006B1E1C;
    case 158u: goto L_006B1E20;
    case 159u: goto L_006B1E24;
    case 160u: goto L_006B1E28;
    case 161u: goto L_006B1E2C;
    case 162u: goto L_006B1E30;
    case 163u: goto L_006B1E34;
    case 164u: goto L_006B1E38;
    case 165u: goto L_006B1E3C;
    case 166u: goto L_006B1E40;
    case 167u: goto L_006B1E44;
    case 168u: goto L_006B1E48;
    case 169u: goto L_006B1E50;
    case 170u: goto L_006B1E54;
    case 171u: goto L_006B1E58;
    case 172u: goto L_006B1E5C;
    case 173u: goto L_006B1E60;
    case 174u: goto L_006B1E64;
    case 175u: goto L_006B1E68;
    case 176u: goto L_006B1E6C;
    case 177u: goto L_006B1E70;
    case 178u: goto L_006B1E74;
    case 179u: goto L_006B1E78;
    case 180u: goto L_006B1E7C;
    case 181u: goto L_006B1E80;
    case 182u: goto L_006B1E84;
    case 183u: goto L_006B1E90;
    case 184u: goto L_006B23C0;
    case 185u: goto L_006B23C4;
    case 186u: goto L_006B23C8;
    case 187u: goto L_006B23CC;
    case 188u: goto L_006B23D0;
    case 189u: goto L_006B23D4;
    case 190u: goto L_006B23D8;
    case 191u: goto L_006B23DC;
    case 192u: goto L_006B23E0;
    case 193u: goto L_006B23E4;
    case 194u: goto L_006B23E8;
    case 195u: goto L_006B23EC;
    case 196u: goto L_006B23F0;
    case 197u: goto L_006B23F4;
    case 198u: goto L_006B23F8;
    case 199u: goto L_006B23FC;
    case 200u: goto L_006B2400;
    case 201u: goto L_006B2404;
    case 202u: goto L_006B2408;
    case 203u: goto L_006B240C;
    case 204u: goto L_006B2410;
    case 205u: goto L_006B2414;
    case 206u: goto L_006B2418;
    case 207u: goto L_006B241C;
    case 208u: goto L_006B2420;
    case 209u: goto L_006B2424;
    case 210u: goto L_006B2428;
    case 211u: goto L_006B2440;
    case 212u: goto L_006B2444;
    case 213u: goto L_006B2448;
    case 214u: goto L_006B244C;
    case 215u: goto L_006B2450;
    case 216u: goto L_006B2454;
    case 217u: goto L_006B2458;
    case 218u: goto L_006B245C;
    case 219u: goto L_006B2460;
    case 220u: goto L_006B2464;
    case 221u: goto L_006B2468;
    case 222u: goto L_006B2480;
    case 223u: goto L_006B24B0;
    case 224u: goto L_006B24B4;
    case 225u: goto L_006B24B8;
    case 226u: goto L_006B24BC;
    case 227u: goto L_006B24C0;
    case 228u: goto L_006B24C4;
    case 229u: goto L_006B24C8;
    case 230u: goto L_006B24CC;
    case 231u: goto L_006B24D0;
    case 232u: goto L_006B24D4;
    case 233u: goto L_006B24D8;
    case 234u: goto L_006B24F0;
    case 235u: goto L_006B24F4;
    case 236u: goto L_006B24F8;
    case 237u: goto L_006B24FC;
    case 238u: goto L_006B2500;
    case 239u: goto L_006B2504;
    case 240u: goto L_006B2508;
    case 241u: goto L_006B250C;
    case 242u: goto L_006B2510;
    case 243u: goto L_006B2514;
    case 244u: goto L_006B2518;
    default: bad_entry(c, 0x006B0000u); return;
    }
L_006B0710:
    (void)ld8((c.r[17].w[0] + 8224u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] - 32057u)));
    c.r[27].sd[0] = static_cast<std::int8_t>(ld8((c.r[26].w[0] - 32410u)));
    set32(c.r[16], ld32((c.r[23].w[0] - 32162u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 26777u)));
    c.r[28].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] - 32075u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] - 32073u)));
    c.budget -= 11;
    { const std::uint32_t t = 0u;  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B14C8:
    vu::msubbc(c.vu0, 10u, 29u, 9u, c.vu0.vf[3].w[0]);
    vu::maxbc(c.vu0, 10u, 29u, 9u, c.vu0.vf[3].w[2]);
    c.budget -= 6;
L_006B14E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[12].d[0] = c.sa;  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1500:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1504:
    c.r[16].d[0] = c.sa;
    c.budget -= 1;
L_006B1508:
    c.r[16].d[0] = c.r[20].d[0] << 30;
    c.budget -= 1;
L_006B150C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]); c.r[16].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1520:
    c.r[20].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1524:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1528:
    c.r[20].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B152C:
    c.r[20].d[0] = c.r[20].d[0] << 4;
    c.budget -= 1;
L_006B1530:
    if (c.r[1].sd[0] >= c.r[20].sd[0]) trap(c, 0x006B1530u);
    c.budget -= 1;
L_006B1534:
    c.r[20].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1538:
    c.r[20].d[0] = c.r[20].d[0] << 11;
    c.budget -= 1;
L_006B153C:
    c.budget -= 1;
L_006B1540:
    if (c.r[1].sd[0] >= c.r[20].sd[0]) trap(c, 0x006B1540u);
    c.budget -= 1;
L_006B1544:
    c.r[20].d[0] = c.r[20].d[0] << 18;
    c.budget -= 1;
L_006B1548:
    if (c.r[1].sd[0] >= c.r[20].sd[0]) trap(c, 0x006B1548u);
    c.budget -= 1;
L_006B154C:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1550:
    c.r[20].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1554:
    if (c.r[1].sd[0] >= c.r[20].sd[0]) trap(c, 0x006B1554u);
    c.budget -= 1;
L_006B1558:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B155C:
    c.budget -= 1;
L_006B1560:
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1564:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1568:
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B156C:
    c.r[21].d[0] = c.r[20].d[0] << 5;
    c.budget -= 1;
L_006B1570:
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1574:
    if (c.r[1].sd[0] >= c.r[20].sd[0]) trap(c, 0x006B1574u);
    c.budget -= 1;
L_006B1578:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B157C:
    c.budget -= 1;
L_006B1580:
    set32(c.r[21], c.r[20].w[0] << 19);
    c.budget -= 1;
L_006B1584:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1588:
    c.r[21].d[0] = c.sa;
    c.budget -= 1;
L_006B158C:
    c.r[21].d[0] = c.r[20].d[0] << 21;
    c.budget -= 1;
L_006B1590:
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1594:
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1598:
    c.r[22].d[0] = c.r[20].d[0] << 0;
    c.budget -= 1;
L_006B159C:
    c.r[22].d[0] = c.r[20].d[0] << 1;
    c.budget -= 1;
L_006B15A0:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B15A4:
    c.r[22].d[0] = c.r[20].d[0] << 3;
    c.budget -= 1;
L_006B15A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[22].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B15D0:
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B15D4:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B15D8:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B15DC:
    mmi::mult(c, 0, c.r[1].w[0], c.r[20].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B15E0:
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B15E4:
    if (c.r[1].sd[0] >= c.r[20].sd[0]) trap(c, 0x006B15E4u);
    c.budget -= 1;
L_006B15E8:
    c.r[10].d[0] = c.r[17].sd[0] < 10794ll ? 1ull : 0ull;
    c.budget -= 1;
L_006B15EC:
    c.r[5].d[0] = 0ll < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_006B15F0:
    if (0ll >= 0ll) trap(c, 0x006B15F0u);
    c.budget -= 1;
L_006B15F4:
    c.budget -= 1;
L_006B15F8:
    c.budget -= 1;
L_006B15FC:
    c.budget -= 1;
L_006B1600:
    c.r[3].d[0] = c.sa;
    c.budget -= 1;
L_006B1604:
    c.r[3].d[0] = c.r[21].d[0] << 10;
    c.budget -= 1;
L_006B1608:
    c.r[3].d[0] = c.sa;
    c.budget -= 1;
L_006B160C:
    c.r[3].d[0] = c.r[21].d[0] << 14;
    c.budget -= 1;
L_006B1610:
    c.r[3].d[0] = c.r[21].d[0] << 15;
    c.budget -= 1;
L_006B1614:
    c.r[3].d[0] = c.sa;
    c.budget -= 1;
L_006B1618:
    c.r[3].d[0] = c.sa;
    c.budget -= 1;
L_006B161C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[3].d[0] = c.sa;  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1660:
    c.r[4].d[0] = c.sa;
    c.budget -= 1;
L_006B1664:
    c.r[4].d[0] = c.sa;
    c.budget -= 1;
L_006B1668:
    c.r[4].d[0] = c.sa;
    c.budget -= 1;
L_006B166C:
    set32(c.r[4], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1670:
    c.r[4].d[0] = c.sa;
    c.budget -= 1;
L_006B1674:
    c.r[4].d[0] = c.r[21].d[0] << 10;
    c.budget -= 1;
L_006B1678:
    c.budget -= 1;
L_006B167C:
    c.budget -= 1;
L_006B1680:
    c.r[4].d[0] = c.sa;
    c.budget -= 1;
L_006B1684:
    mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]); c.r[4].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B16E0:
    c.r[4].d[0] = c.sa;
    c.budget -= 1;
L_006B16E4:
    mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B16E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]); c.r[4].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1B00:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] - 32224u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[27].w[0] - 31796u)));
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] - 31912u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 31909u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] - 32059u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] - 32094u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] - 32073u)));
    c.budget -= 9;
    { const std::uint32_t t = 0u; c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] - 32224u)));  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1B20:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] - 32224u)));
    c.budget -= 1;
    c.pc = 0x006B1B24u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_006B1C40:
    c.r[14].d[0] = 0ull | 0ull;
    c.budget -= 4;
L_006B1C50:
    set32(c.r[28], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1C54:
    set32(c.r[28], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1C58:
    set32(c.r[28], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1C5C:
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1C60:
    if (c.r[1].sd[0] >= c.r[21].sd[0]) trap(c, 0x006B1C60u);
    c.budget -= 1;
L_006B1C64:
    mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]);
    c.r[28].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1C70:
    if (c.r[1].sd[0] >= c.r[21].sd[0]) trap(c, 0x006B1C70u);
    c.budget -= 1;
L_006B1C74:
    c.r[29].d[0] = c.sa;
    c.budget -= 1;
L_006B1C78:
    c.r[29].d[0] = c.sa;
    c.budget -= 1;
L_006B1C7C:
    set32(c.r[30], c.r[21].w[0] << 0);
    c.budget -= 1;
L_006B1C80:
    set32(c.r[30], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1C84:
    if (c.r[1].sd[0] >= c.r[21].sd[0]) trap(c, 0x006B1C84u);
    c.budget -= 1;
L_006B1C88:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1C8C:
    c.budget -= 1;
L_006B1C90:
    if (c.r[1].sd[0] >= c.r[21].sd[0]) trap(c, 0x006B1C90u);
    c.budget -= 1;
L_006B1C94:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_006B1C98:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_006B1C9C:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1CA0:
    set32(c.r[30], c.r[21].w[0] << 15);
    c.budget -= 1;
L_006B1CA4:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_006B1CA8:
    if (c.r[1].sd[0] >= c.r[21].sd[0]) trap(c, 0x006B1CA8u);
    c.budget -= 1;
L_006B1CAC:
    mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1CB0:
    set32(c.r[30], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1CB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1CC0:
    c.r[30].d[0] = c.sa;
    c.budget -= 1;
L_006B1CC4:
    set32(c.r[30], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1CC8:
    set32(c.r[30], c.r[21].w[0] << 21);
    c.budget -= 1;
L_006B1CCC:
    set32(c.r[30], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; if (c.r[1].sd[0] >= c.r[21].sd[0]) trap(c, 0x006B1CD4u);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1CD8:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 6;
L_006B1CF0:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1CF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[30].d[0] = c.sa;  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1D10:
    set32(c.r[31], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1D14:
    mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]);
    c.r[31].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1D18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1D30:
    set32(c.r[31], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1D34:
    mmi::mult(c, 0, c.r[1].w[0], c.r[21].w[0]);
    c.r[31].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006B1D38:
    set32(c.r[31], c.r[21].w[0] << 23);
    c.budget -= 1;
L_006B1D3C:
    set32(c.r[31], c.r[1].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_006B1D40:
    c.budget -= 1;
L_006B1D44:
    c.budget -= 1;
L_006B1D48:
    c.budget -= 1;
L_006B1D4C:
    mmi::mult(c, 0, c.r[1].w[0], c.r[22].w[0]);
    c.budget -= 1;
L_006B1D50:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1D50u);
    c.budget -= 1;
L_006B1D54:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1D54u);
    c.budget -= 1;
L_006B1D58:
    c.budget -= 1;
L_006B1D5C:
    c.budget -= 1;
L_006B1D60:
    c.budget -= 1;
L_006B1D64:
    c.budget -= 1;
L_006B1D68:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.budget -= 1;
L_006B1D6C:
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.budget -= 1;
L_006B1D70:
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 1;
L_006B1D74:
    c.budget -= 1;
L_006B1D78:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.budget -= 1;
L_006B1D7C:
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.budget -= 1;
L_006B1D80:
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 1;
L_006B1D84:
    c.budget -= 1;
L_006B1D88:
    c.budget -= 1;
L_006B1D8C:
    c.budget -= 1;
L_006B1D90:
    c.budget -= 1;
L_006B1D94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[22].w[0]);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1DB0:
    c.budget -= 1;
L_006B1DB4:
    c.budget -= 1;
L_006B1DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[22].w[0]);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1DE0:
    set32(c.r[1], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B1DE4:
    set32(c.r[1], c.r[22].w[0] << 12);
    c.budget -= 1;
L_006B1DE8:
    set32(c.r[1], c.r[22].w[0] << 14);
    c.budget -= 1;
L_006B1DEC:
    set32(c.r[1], c.r[22].w[0] << 19);
    c.budget -= 1;
L_006B1DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1DF4u);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1E00:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E00u);
    c.budget -= 1;
L_006B1E04:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E04u);
    c.budget -= 1;
L_006B1E08:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E08u);
    c.budget -= 1;
L_006B1E0C:
    c.r[2].d[0] = c.sa;
    c.budget -= 1;
L_006B1E10:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1E14:
    c.r[2].d[0] = c.r[22].d[0] << 25;
    c.budget -= 1;
L_006B1E18:
    set32(c.r[2], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B1E1C:
    c.r[2].d[0] = c.sa;
    c.budget -= 1;
L_006B1E20:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1E24:
    c.r[2].d[0] = c.r[22].d[0] << 29;
    c.budget -= 1;
L_006B1E28:
    c.budget -= 1;
L_006B1E2C:
    c.budget -= 1;
L_006B1E30:
    set32(c.r[2], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B1E34:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E34u);
    c.budget -= 1;
L_006B1E38:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E38u);
    c.budget -= 1;
L_006B1E3C:
    set32(c.r[3], c.r[22].w[0] << 3);
    c.budget -= 1;
L_006B1E40:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1E44:
    set32(c.r[3], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B1E48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E4Cu);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1E50:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1E54:
    set32(c.r[3], c.r[22].w[0] << 11);
    c.budget -= 1;
L_006B1E58:
    set32(c.r[3], c.r[22].w[0] << 12);
    c.budget -= 1;
L_006B1E5C:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1E60:
    set32(c.r[3], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B1E64:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E64u);
    c.budget -= 1;
L_006B1E68:
    set32(c.r[3], c.r[22].w[0] << 16);
    c.budget -= 1;
L_006B1E6C:
    c.r[3].d[0] = c.sa;
    c.budget -= 1;
L_006B1E70:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E70u);
    c.budget -= 1;
L_006B1E74:
    c.r[3].d[0] = c.r[22].d[0] << 22;
    c.budget -= 1;
L_006B1E78:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B1E7C:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E7Cu);
    c.budget -= 1;
L_006B1E80:
    c.r[3].d[0] = c.r[22].d[0] << 31;
    c.budget -= 1;
L_006B1E84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[4].d[0] = c.r[22].d[0] << 7;  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B1E90:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B1E90u);
    c.r[4].d[0] = c.r[22].d[0] << 11;
    c.budget -= 4;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[4], c.r[22].w[0] << 18);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B23C0:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B23C0u);
    c.budget -= 1;
L_006B23C4:
    set32(c.r[9], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B23C8:
    set32(c.r[9], c.r[22].w[0] << 2);
    c.budget -= 1;
L_006B23CC:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B23CCu);
    c.budget -= 1;
L_006B23D0:
    set32(c.r[9], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B23D4:
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B23D8:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B23D8u);
    c.budget -= 1;
L_006B23DC:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B23DCu);
    c.budget -= 1;
L_006B23E0:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B23E0u);
    c.budget -= 1;
L_006B23E4:
    set32(c.r[9], c.r[1].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_006B23E8:
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B23EC:
    set32(c.r[9], c.r[22].w[0] << 10);
    c.budget -= 1;
L_006B23F0:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B23F0u);
    c.budget -= 1;
L_006B23F4:
    c.budget -= 1;
L_006B23F8:
    c.budget -= 1;
L_006B23FC:
    c.budget -= 1;
L_006B2400:
    c.r[14].d[0] = c.r[22].d[0] << 22;
    c.budget -= 1;
L_006B2404:
    set32(c.r[14], c.r[22].w[0] << 24);
    c.budget -= 1;
L_006B2408:
    c.r[14].d[0] = c.sa;
    c.budget -= 1;
L_006B240C:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B240Cu);
    c.budget -= 1;
L_006B2410:
    c.r[14].d[0] = c.r[22].d[0] << 28;
    c.budget -= 1;
L_006B2414:
    set32(c.r[14], c.r[22].w[0] << 30);
    c.budget -= 1;
L_006B2418:
    c.r[15].d[0] = c.sa;
    c.budget -= 1;
L_006B241C:
    c.r[15].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B2420:
    c.r[15].d[0] = c.r[22].d[0] << 3;
    c.budget -= 1;
L_006B2424:
    set32(c.r[15], c.r[22].w[0] << 5);
    c.budget -= 1;
L_006B2428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[15].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B2440:
    c.r[14].d[0] = c.r[22].d[0] << 0;
    c.budget -= 1;
L_006B2444:
    set32(c.r[14], c.r[22].w[0] << 2);
    c.budget -= 1;
L_006B2448:
    c.r[14].d[0] = c.sa;
    c.budget -= 1;
L_006B244C:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B244Cu);
    c.budget -= 1;
L_006B2450:
    c.r[14].d[0] = c.r[22].d[0] << 6;
    c.budget -= 1;
L_006B2454:
    set32(c.r[14], c.r[22].w[0] << 8);
    c.budget -= 1;
L_006B2458:
    c.r[14].d[0] = c.sa;
    c.budget -= 1;
L_006B245C:
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B2460:
    c.r[14].d[0] = c.r[22].d[0] << 13;
    c.budget -= 1;
L_006B2464:
    set32(c.r[14], c.r[22].w[0] << 15);
    c.budget -= 1;
L_006B2468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[14].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B2480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[13], c.r[22].w[0] << 2);  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B24B0:
    c.r[11].d[0] = c.r[22].d[0] << 7;
    c.budget -= 1;
L_006B24B4:
    set32(c.r[11], c.r[22].w[0] << 9);
    c.budget -= 1;
L_006B24B8:
    c.r[11].d[0] = c.sa;
    c.budget -= 1;
L_006B24BC:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B24BCu);
    c.budget -= 1;
L_006B24C0:
    c.r[11].d[0] = c.r[22].d[0] << 13;
    c.budget -= 1;
L_006B24C4:
    set32(c.r[11], c.r[22].w[0] << 15);
    c.budget -= 1;
L_006B24C8:
    c.r[11].d[0] = c.sa;
    c.budget -= 1;
L_006B24CC:
    c.r[11].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B24D0:
    c.r[11].d[0] = c.r[22].d[0] << 20;
    c.budget -= 1;
L_006B24D4:
    set32(c.r[11], c.r[22].w[0] << 22);
    c.budget -= 1;
L_006B24D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[11].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006B24F0:
    c.r[10].d[0] = c.r[22].d[0] << 17;
    c.budget -= 1;
L_006B24F4:
    set32(c.r[10], c.r[22].w[0] << 19);
    c.budget -= 1;
L_006B24F8:
    c.r[10].d[0] = c.sa;
    c.budget -= 1;
L_006B24FC:
    if (c.r[1].sd[0] >= c.r[22].sd[0]) trap(c, 0x006B24FCu);
    c.budget -= 1;
L_006B2500:
    c.r[10].d[0] = c.r[22].d[0] << 23;
    c.budget -= 1;
L_006B2504:
    set32(c.r[10], c.r[22].w[0] << 25);
    c.budget -= 1;
L_006B2508:
    c.r[10].d[0] = c.sa;
    c.budget -= 1;
L_006B250C:
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006B2510:
    c.r[10].d[0] = c.r[22].d[0] << 30;
    c.budget -= 1;
L_006B2514:
    set32(c.r[11], c.r[22].w[0] << 0);
    c.budget -= 1;
L_006B2518:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[11].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006B0000u < 16384u) { entry = entries_016C[(t - 0x006B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
