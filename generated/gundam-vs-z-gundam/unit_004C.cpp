#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004C[4096] = {
    1, 2, 0, 0, 3, 4, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0,
    31, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0,
    0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216,
    0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0,
    0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0,
    0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0,
    0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00230000;
    case 2u: goto L_00230004;
    case 3u: goto L_00230010;
    case 4u: goto L_00230014;
    case 5u: goto L_00230018;
    case 6u: goto L_00230020;
    case 7u: goto L_00230028;
    case 8u: goto L_00230064;
    case 9u: goto L_0023010C;
    case 10u: goto L_00230124;
    case 11u: goto L_00230160;
    case 12u: goto L_002301AC;
    case 13u: goto L_002301C8;
    case 14u: goto L_002301E0;
    case 15u: goto L_00230244;
    case 16u: goto L_002302C4;
    case 17u: goto L_002302DC;
    case 18u: goto L_0023031C;
    case 19u: goto L_0023032C;
    case 20u: goto L_00230334;
    case 21u: goto L_00230360;
    case 22u: goto L_0023036C;
    case 23u: goto L_0023039C;
    case 24u: goto L_002303B0;
    case 25u: goto L_002303FC;
    case 26u: goto L_00230458;
    case 27u: goto L_002304C0;
    case 28u: goto L_002304D8;
    case 29u: goto L_002304E0;
    case 30u: goto L_002304F4;
    case 31u: goto L_00230500;
    case 32u: goto L_00230510;
    case 33u: goto L_00230514;
    case 34u: goto L_0023052C;
    case 35u: goto L_00230544;
    case 36u: goto L_0023054C;
    case 37u: goto L_00230560;
    case 38u: goto L_00230580;
    case 39u: goto L_002305A0;
    case 40u: goto L_002305E0;
    case 41u: goto L_00230654;
    case 42u: goto L_002306F0;
    case 43u: goto L_00230704;
    case 44u: goto L_0023070C;
    case 45u: goto L_0023072C;
    case 46u: goto L_0023073C;
    case 47u: goto L_00230748;
    case 48u: goto L_0023075C;
    case 49u: goto L_0023076C;
    case 50u: goto L_00230774;
    case 51u: goto L_0023078C;
    case 52u: goto L_00230794;
    case 53u: goto L_0023083C;
    case 54u: goto L_00230844;
    case 55u: goto L_00230864;
    case 56u: goto L_00230874;
    case 57u: goto L_00230880;
    case 58u: goto L_00230894;
    case 59u: goto L_002308A4;
    case 60u: goto L_002308AC;
    case 61u: goto L_002308C4;
    case 62u: goto L_002308CC;
    case 63u: goto L_00230974;
    case 64u: goto L_0023097C;
    case 65u: goto L_0023099C;
    case 66u: goto L_002309AC;
    case 67u: goto L_002309B8;
    case 68u: goto L_002309CC;
    case 69u: goto L_002309DC;
    case 70u: goto L_002309E4;
    case 71u: goto L_002309FC;
    case 72u: goto L_00230A04;
    case 73u: goto L_00230A30;
    case 74u: goto L_00230A6C;
    case 75u: goto L_00230AB0;
    case 76u: goto L_00230ACC;
    case 77u: goto L_00230B24;
    case 78u: goto L_00230B84;
    case 79u: goto L_00230B98;
    case 80u: goto L_00230BBC;
    case 81u: goto L_00230BCC;
    case 82u: goto L_00230C04;
    case 83u: goto L_00230CDC;
    case 84u: goto L_00230D60;
    case 85u: goto L_00230DFC;
    case 86u: goto L_00230E14;
    case 87u: goto L_00230E2C;
    case 88u: goto L_00230E34;
    case 89u: goto L_00230E48;
    case 90u: goto L_00230E58;
    case 91u: goto L_00230E70;
    case 92u: goto L_00230E78;
    case 93u: goto L_00230E90;
    case 94u: goto L_00230EA0;
    case 95u: goto L_00230EB8;
    case 96u: goto L_00230EC0;
    case 97u: goto L_00230ED8;
    case 98u: goto L_00230EE8;
    case 99u: goto L_00230F00;
    case 100u: goto L_00230F10;
    case 101u: goto L_00230F18;
    case 102u: goto L_00230F28;
    case 103u: goto L_00230F48;
    case 104u: goto L_00230F68;
    case 105u: goto L_00230F80;
    case 106u: goto L_00230FB4;
    case 107u: goto L_00230FCC;
    case 108u: goto L_00231004;
    case 109u: goto L_0023101C;
    case 110u: goto L_00231038;
    case 111u: goto L_00231080;
    case 112u: goto L_00231094;
    case 113u: goto L_002310C4;
    case 114u: goto L_002310F8;
    case 115u: goto L_00231100;
    case 116u: goto L_00231114;
    case 117u: goto L_0023112C;
    case 118u: goto L_00231158;
    case 119u: goto L_00231168;
    case 120u: goto L_002311E8;
    case 121u: goto L_002311FC;
    case 122u: goto L_0023120C;
    case 123u: goto L_00231268;
    case 124u: goto L_002312B0;
    case 125u: goto L_002312DC;
    case 126u: goto L_002312EC;
    case 127u: goto L_00231304;
    case 128u: goto L_0023132C;
    case 129u: goto L_00231344;
    case 130u: goto L_0023135C;
    case 131u: goto L_00231374;
    case 132u: goto L_00231390;
    case 133u: goto L_002313D0;
    case 134u: goto L_002313E0;
    case 135u: goto L_00231470;
    case 136u: goto L_00231480;
    case 137u: goto L_00231498;
    case 138u: goto L_002314B0;
    case 139u: goto L_002314C0;
    case 140u: goto L_00231544;
    case 141u: goto L_002315A0;
    case 142u: goto L_002315B0;
    case 143u: goto L_00231660;
    case 144u: goto L_00231710;
    case 145u: goto L_0023174C;
    case 146u: goto L_002317E8;
    case 147u: goto L_002317F8;
    case 148u: goto L_00231804;
    case 149u: goto L_00231814;
    case 150u: goto L_00231840;
    case 151u: goto L_00231848;
    case 152u: goto L_00231850;
    case 153u: goto L_0023186C;
    case 154u: goto L_00231898;
    case 155u: goto L_002318B8;
    case 156u: goto L_002318D0;
    case 157u: goto L_002318D8;
    case 158u: goto L_00231910;
    case 159u: goto L_0023194C;
    case 160u: goto L_00231960;
    case 161u: goto L_002319A4;
    case 162u: goto L_002319DC;
    case 163u: goto L_00231A08;
    case 164u: goto L_00231A34;
    case 165u: goto L_00231A4C;
    case 166u: goto L_00231A74;
    case 167u: goto L_00231AF0;
    case 168u: goto L_00231B00;
    case 169u: goto L_00231B1C;
    case 170u: goto L_00231B2C;
    case 171u: goto L_00231B40;
    case 172u: goto L_00231B70;
    case 173u: goto L_00231B84;
    case 174u: goto L_00231BF0;
    case 175u: goto L_00231C30;
    case 176u: goto L_00231C4C;
    case 177u: goto L_00231C50;
    case 178u: goto L_00231C70;
    case 179u: goto L_00231C80;
    case 180u: goto L_00231C90;
    case 181u: goto L_00231CDC;
    case 182u: goto L_00231D00;
    case 183u: goto L_00231D20;
    case 184u: goto L_00231D70;
    case 185u: goto L_00231E00;
    case 186u: goto L_00231E20;
    case 187u: goto L_00231E30;
    case 188u: goto L_00231E40;
    case 189u: goto L_00231E60;
    case 190u: goto L_00231F00;
    case 191u: goto L_00231F70;
    case 192u: goto L_00231FB0;
    case 193u: goto L_00231FF8;
    case 194u: goto L_00232000;
    case 195u: goto L_0023202C;
    case 196u: goto L_00232050;
    case 197u: goto L_00232068;
    case 198u: goto L_00232078;
    case 199u: goto L_0023209C;
    case 200u: goto L_002320FC;
    case 201u: goto L_0023210C;
    case 202u: goto L_00232120;
    case 203u: goto L_00232140;
    case 204u: goto L_00232174;
    case 205u: goto L_00232190;
    case 206u: goto L_00232210;
    case 207u: goto L_0023226C;
    case 208u: goto L_002322DC;
    case 209u: goto L_00232304;
    case 210u: goto L_00232388;
    case 211u: goto L_00232394;
    case 212u: goto L_002323AC;
    case 213u: goto L_00232414;
    case 214u: goto L_00232460;
    case 215u: goto L_00232474;
    case 216u: goto L_0023247C;
    case 217u: goto L_0023248C;
    case 218u: goto L_002324A0;
    case 219u: goto L_002324F0;
    case 220u: goto L_00232570;
    case 221u: goto L_00232710;
    case 222u: goto L_002327C0;
    case 223u: goto L_002327C8;
    case 224u: goto L_00232800;
    case 225u: goto L_00232814;
    case 226u: goto L_00232824;
    case 227u: goto L_00232844;
    case 228u: goto L_00232860;
    case 229u: goto L_00232888;
    case 230u: goto L_00232898;
    case 231u: goto L_002328D0;
    case 232u: goto L_00232940;
    case 233u: goto L_0023295C;
    case 234u: goto L_00232970;
    case 235u: goto L_002329B0;
    case 236u: goto L_002329D4;
    case 237u: goto L_002329EC;
    case 238u: goto L_00232A30;
    case 239u: goto L_00232A38;
    case 240u: goto L_00232A60;
    case 241u: goto L_00232AAC;
    case 242u: goto L_00232B08;
    case 243u: goto L_00232B14;
    case 244u: goto L_00232B20;
    case 245u: goto L_00232B28;
    case 246u: goto L_00232B30;
    case 247u: goto L_00232B60;
    case 248u: goto L_00232BA0;
    case 249u: goto L_00232BA8;
    case 250u: goto L_00232BD8;
    case 251u: goto L_00232C24;
    case 252u: goto L_00232C30;
    case 253u: goto L_00232C50;
    case 254u: goto L_00232C64;
    case 255u: goto L_00232C6C;
    case 256u: goto L_00232C78;
    case 257u: goto L_00232C90;
    case 258u: goto L_00232D00;
    case 259u: goto L_00232E40;
    case 260u: goto L_00232EA0;
    case 261u: goto L_00232ED0;
    case 262u: goto L_00232EE8;
    case 263u: goto L_00232F1C;
    case 264u: goto L_00232F34;
    case 265u: goto L_00232F80;
    case 266u: goto L_00232F8C;
    case 267u: goto L_00232FA8;
    case 268u: goto L_00232FBC;
    case 269u: goto L_00232FC8;
    case 270u: goto L_00232FD0;
    case 271u: goto L_00233058;
    case 272u: goto L_00233064;
    case 273u: goto L_00233078;
    case 274u: goto L_00233084;
    case 275u: goto L_00233090;
    case 276u: goto L_00233098;
    case 277u: goto L_00233120;
    case 278u: goto L_0023314C;
    case 279u: goto L_002331D4;
    case 280u: goto L_002331E4;
    case 281u: goto L_002331EC;
    case 282u: goto L_002331FC;
    case 283u: goto L_00233234;
    case 284u: goto L_00233260;
    case 285u: goto L_002332A0;
    case 286u: goto L_002332C0;
    case 287u: goto L_00233378;
    case 288u: goto L_002333B0;
    case 289u: goto L_002333E4;
    case 290u: goto L_00233428;
    case 291u: goto L_00233430;
    case 292u: goto L_00233440;
    case 293u: goto L_002334AC;
    case 294u: goto L_002334D8;
    case 295u: goto L_00233500;
    case 296u: goto L_00233514;
    case 297u: goto L_0023351C;
    case 298u: goto L_00233528;
    case 299u: goto L_00233540;
    case 300u: goto L_00233550;
    case 301u: goto L_00233560;
    case 302u: goto L_00233570;
    case 303u: goto L_00233580;
    case 304u: goto L_00233590;
    case 305u: goto L_002335A0;
    case 306u: goto L_002335B0;
    case 307u: goto L_00233620;
    case 308u: goto L_00233630;
    case 309u: goto L_002336A0;
    case 310u: goto L_002337E0;
    case 311u: goto L_0023384C;
    case 312u: goto L_002338BC;
    case 313u: goto L_002338C8;
    case 314u: goto L_002338E4;
    case 315u: goto L_00233928;
    case 316u: goto L_00233958;
    case 317u: goto L_00233960;
    case 318u: goto L_002339C4;
    case 319u: goto L_002339E4;
    case 320u: goto L_00233A04;
    case 321u: goto L_00233A10;
    case 322u: goto L_00233A20;
    case 323u: goto L_00233A30;
    case 324u: goto L_00233A38;
    case 325u: goto L_00233A48;
    case 326u: goto L_00233A80;
    case 327u: goto L_00233AB0;
    case 328u: goto L_00233B00;
    case 329u: goto L_00233B74;
    case 330u: goto L_00233B84;
    case 331u: goto L_00233B8C;
    case 332u: goto L_00233B94;
    case 333u: goto L_00233BA0;
    case 334u: goto L_00233BAC;
    case 335u: goto L_00233BB4;
    case 336u: goto L_00233BC0;
    case 337u: goto L_00233BD0;
    case 338u: goto L_00233BE8;
    case 339u: goto L_00233BF8;
    case 340u: goto L_00233C08;
    case 341u: goto L_00233C10;
    case 342u: goto L_00233C1C;
    case 343u: goto L_00233C38;
    case 344u: goto L_00233C40;
    case 345u: goto L_00233C50;
    case 346u: goto L_00233C58;
    case 347u: goto L_00233C60;
    case 348u: goto L_00233C90;
    case 349u: goto L_00233DA8;
    case 350u: goto L_00233DBC;
    case 351u: goto L_00233DDC;
    case 352u: goto L_00233E7C;
    case 353u: goto L_00233FB8;
    default: bad_entry(c, 0x00230000u); return;
    }
L_00230000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00230018; } }
    goto L_00230008;
L_00230004:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_00230008:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_00230010:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_00230014:
    c.budget -= 1;
L_00230018:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00230030; } }
    goto L_00230024;
L_00230020:
    set32(c.r[2], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_00230024:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 1;
L_00230028:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 2;
L_00230030:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00230060; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023007C; } }
L_00230060:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00230064:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0023007C:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00230098; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002300B0; } }
L_00230098:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002300B0:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002300CC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002300E4; } }
L_002300CC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002300E4:
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[3], c.r[20].w[0] + 9120u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023010Cu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0023010Cu) [[unlikely]] return; }
L_0023010C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FFF8u | kUnwind; return; } [[clang::musttail]] return unit_004B(c, 347u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230124u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00230124u) [[unlikely]] return; }
L_00230124:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00230160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 11728u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 369u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 370u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002301ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002301ACu) [[unlikely]] return; }
L_002301AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[4], c.r[3].w[0] + 700u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002301C8u); set32(c.r[6], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002301C8u) [[unlikely]] return; }
L_002301C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002301E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 369u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[17].w[0] + 369u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 368u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[17].w[0] + 368u);  if (t) { goto L_00230248; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[2].w[0] - 11724u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230244u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00230244u) [[unlikely]] return; }
L_00230244:
    c.budget -= 1;
L_00230248:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00230260; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00230260:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002303F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002303D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00230378; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002302F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002302A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230418; } }
    c.budget -= 1;
L_002302A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_002302D0; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002302C4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002302C4u) [[unlikely]] return; }
L_002302C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230418; } }
    c.budget -= 1;
L_002302D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002302DCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x002302DCu) [[unlikely]] return; }
L_002302DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002302F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002302F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00230418; } }
L_002302F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230328; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023031Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0023031Cu) [[unlikely]] return; }
L_0023031C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230418; } }
    c.budget -= 1;
L_00230328:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 1;
L_0023032C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230334u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00230334u) [[unlikely]] return; }
L_00230334:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 610u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00230418; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230360u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00230360u) [[unlikely]] return; }
L_00230360:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023036Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x0023036Cu) [[unlikely]] return; }
L_0023036C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230418; } }
    c.budget -= 1;
L_00230378:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 610u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_002303A8; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023039Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0023039Cu) [[unlikely]] return; }
L_0023039C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230418; } }
    c.budget -= 1;
L_002303A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002303B0u); set32(c.r[4], c.r[3].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002303B0u) [[unlikely]] return; }
L_002303B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230418; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 610u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00230418; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00230418; } }
L_002303D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 610u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 2u);  if (t) { goto L_00230418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00230418; } }
L_002303F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002303FCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x002303FCu) [[unlikely]] return; }
L_002303FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230410; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00230410:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00230418:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 370u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 370u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 370u)));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + 370u);  if (t) { goto L_00230438; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00230438:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00230450; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00230450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230458u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00230458u) [[unlikely]] return; }
L_00230458:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_002304A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002304A8; } }
L_002304A0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002304A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002304C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002304D8u) [[unlikely]] return; }
L_002304D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304E0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002304E0u) [[unlikely]] return; }
L_002304E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 369u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00230550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002304F4u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002304F4u) [[unlikely]] return; }
L_002304F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230500u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00230500u) [[unlikely]] return; }
L_00230500:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230510u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230510u) [[unlikely]] return; }
L_00230510:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 1;
L_00230514:
    c.f[12] = ld32((c.r[17].w[0] + 372u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[16], c.r[17].w[0] + 372u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023052Cu); set32(c.r[4], c.r[2].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023052Cu) [[unlikely]] return; }
L_0023052C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230544u); set32(c.r[4], c.r[2].w[0] + 4080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230544u) [[unlikely]] return; }
L_00230544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023054Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0023054Cu) [[unlikely]] return; }
L_0023054C:
    c.budget -= 1;
L_00230550:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230560u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00230560u) [[unlikely]] return; }
L_00230560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00230580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { set32(c.r[4], c.r[4].w[0] + 368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_002305A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_002305C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002305D0; } }
L_002305C8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002305D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002305E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] - 8624u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8619u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + 10320u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 373u)));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[21], c.r[20].w[0] + 368u);  if (t) { goto L_00230690; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 1;
L_00230654:
    set32(c.r[18], c.r[29].w[0] + 168u);
    c.f[0] = ld32((c.r[1].w[0] - 11388u));
    set32(c.r[17], c.r[29].w[0] + 172u);
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11384u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002306D0; } }
L_00230690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[1].w[0] - 11372u));
    set32(c.r[18], c.r[29].w[0] + 168u);
    set32(c.r[17], c.r[29].w[0] + 172u);
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11368u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11364u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 16;
L_002306D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002306F0u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002306F0u) [[unlikely]] return; }
L_002306F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230704u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230704u) [[unlikely]] return; }
L_00230704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023070Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0023070Cu) [[unlikely]] return; }
L_0023070C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00230740; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023072Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0023072Cu) [[unlikely]] return; }
L_0023072C:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023073Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0023073Cu) [[unlikely]] return; }
L_0023073C:
    c.budget -= 1;
L_00230740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230748u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00230748u) [[unlikely]] return; }
L_00230748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023075Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0023075Cu) [[unlikely]] return; }
L_0023075C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023076Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0023076Cu) [[unlikely]] return; }
L_0023076C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230774u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00230774u) [[unlikely]] return; }
L_00230774:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023078Cu); set32(c.r[4], c.r[2].w[0] + 10080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023078Cu) [[unlikely]] return; }
L_0023078C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230794u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00230794u) [[unlikely]] return; }
L_00230794:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002307D8; } }
    c.f[0] = ld32((c.r[1].w[0] - 11388u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11384u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00230808; } }
    c.budget -= 1;
L_002307D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[1].w[0] - 11372u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11368u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11364u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 12;
L_00230808:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[12] = 0u;
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023083Cu); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0023083Cu) [[unlikely]] return; }
L_0023083C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230844u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00230844u) [[unlikely]] return; }
L_00230844:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00230878; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230864u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00230864u) [[unlikely]] return; }
L_00230864:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230874u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230874u) [[unlikely]] return; }
L_00230874:
    c.budget -= 1;
L_00230878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230880u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00230880u) [[unlikely]] return; }
L_00230880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230894u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00230894u) [[unlikely]] return; }
L_00230894:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002308A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002308A4u) [[unlikely]] return; }
L_002308A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002308ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002308ACu) [[unlikely]] return; }
L_002308AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002308C4u); set32(c.r[4], c.r[2].w[0] + 10080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002308C4u) [[unlikely]] return; }
L_002308C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002308CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002308CCu) [[unlikely]] return; }
L_002308CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_00230910; } }
    c.f[0] = ld32((c.r[1].w[0] - 11388u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11384u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11380u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00230940; } }
    c.budget -= 1;
L_00230910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[1].w[0] - 11372u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11368u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 11364u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 12;
L_00230940:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[12] = 0u;
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230974u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230974u) [[unlikely]] return; }
L_00230974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023097Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0023097Cu) [[unlikely]] return; }
L_0023097C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002309B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023099Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0023099Cu) [[unlikely]] return; }
L_0023099C:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002309ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002309ACu) [[unlikely]] return; }
L_002309AC:
    c.budget -= 1;
L_002309B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002309B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002309B8u) [[unlikely]] return; }
L_002309B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002309CCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002309CCu) [[unlikely]] return; }
L_002309CC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002309DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002309DCu) [[unlikely]] return; }
L_002309DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002309E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002309E4u) [[unlikely]] return; }
L_002309E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002309FCu); set32(c.r[4], c.r[2].w[0] + 10080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002309FCu) [[unlikely]] return; }
L_002309FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230A04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00230A04u) [[unlikely]] return; }
L_00230A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00230A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230A6Cu); set32(c.r[6], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00230A6Cu) [[unlikely]] return; }
L_00230A6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8608u)));
    st8((c.r[16].w[0] + 371u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8606u)));
    st8((c.r[16].w[0] + 372u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00230AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
L_00230ACC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[16].w[0] - 8624u);
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00230AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00230AF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00230CD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00230B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00230B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D40; } }
L_00230B18:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230B24u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x00230B24u) [[unlikely]] return; }
L_00230B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230B58; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00230D40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00230D40; } }
L_00230B58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00230D40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230B84u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00230B84u) [[unlikely]] return; }
L_00230B84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00230D40; } }
    c.budget -= 1;
L_00230B98:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 368u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 368u);  if (t) { goto L_00230BC0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230BBCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00230BBCu) [[unlikely]] return; }
L_00230BBC:
    c.budget -= 1;
L_00230BC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230BCCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00230BCCu) [[unlikely]] return; }
L_00230BCC:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00230C10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230C04u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00230C04u) [[unlikely]] return; }
L_00230C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230D40; } }
    c.budget -= 1;
L_00230C10:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 628u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00230C48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 632u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00230C48; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00230C58; } }
    c.budget -= 1;
L_00230C48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00230D48; } }
L_00230C58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00230CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00230CC0; } }
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 369u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[17].w[0] + 369u);  if (t) { goto L_00230CA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 370u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00230D40; } }
    c.budget -= 1;
L_00230CA8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00230D40; } }
    c.budget -= 1;
L_00230CC0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00230D40; } }
    c.budget -= 1;
L_00230CD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230CDCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00230CDCu) [[unlikely]] return; }
L_00230CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230CF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00230D48; } }
    c.budget -= 1;
L_00230CF8:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 628u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00230D30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 632u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00230D30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00230D40; } }
    c.budget -= 1;
L_00230D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00230D48; } }
L_00230D40:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00230D48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00230D60:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 368u)));
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 18;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 8624u);  if (t) { goto L_00230DC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00230DC0; } }
    set32(c.r[19], 0u + 4u);
    c.budget -= 1;
L_00230DC0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[23], c.r[29].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00230F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230DFCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00230DFCu) [[unlikely]] return; }
L_00230DFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E14u); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230E14u) [[unlikely]] return; }
L_00230E14:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E2Cu); set32(c.r[4], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230E2Cu) [[unlikely]] return; }
L_00230E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E34u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00230E34u) [[unlikely]] return; }
L_00230E34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00230E58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E48u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00230E48u) [[unlikely]] return; }
L_00230E48:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E58u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230E58u) [[unlikely]] return; }
L_00230E58:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E70u); set32(c.r[4], c.r[2].w[0] + 1440u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230E70u) [[unlikely]] return; }
L_00230E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E78u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00230E78u) [[unlikely]] return; }
L_00230E78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00230EA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230E90u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00230E90u) [[unlikely]] return; }
L_00230E90:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EA0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230EA0u) [[unlikely]] return; }
L_00230EA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EB8u); set32(c.r[4], c.r[2].w[0] + 1680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230EB8u) [[unlikely]] return; }
L_00230EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EC0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00230EC0u) [[unlikely]] return; }
L_00230EC0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00230EE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230ED8u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00230ED8u) [[unlikely]] return; }
L_00230ED8:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230EE8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230EE8u) [[unlikely]] return; }
L_00230EE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F00u); set32(c.r[4], c.r[2].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230F00u) [[unlikely]] return; }
L_00230F00:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11360u);
    c.budget -= 4;
L_00230F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F18u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00230F18u) [[unlikely]] return; }
L_00230F18:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F28u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230F28u) [[unlikely]] return; }
L_00230F28:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[17].d[0];  if (t) { goto L_00230F50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F48u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230F48u) [[unlikely]] return; }
L_00230F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00230F68; } }
L_00230F50:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F68u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00230F68u) [[unlikely]] return; }
L_00230F68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00230F10u | kUnwind; return; } goto L_00230F10; } }
L_00230F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230F80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00230F80u) [[unlikely]] return; }
L_00230F80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    c.f[20] = 0u;
    st16((c.r[29].w[0] + 220u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    st16((c.r[29].w[0] + 222u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_00230FB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230FB4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00230FB4u) [[unlikely]] return; }
L_00230FB4:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00230FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00230FCCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00230FCCu) [[unlikely]] return; }
L_00230FCC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 11360u);
    set32(c.r[17], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11356u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[14] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231004u); c.f[13] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00231004u) [[unlikely]] return; }
L_00231004:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023101Cu); set32(c.r[4], c.r[2].w[0] + 2160u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023101Cu) [[unlikely]] return; }
L_0023101C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11360u);
    set32(c.r[18], c.r[29].w[0] + 220u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[22], c.r[29].w[0] + 212u);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 7;
L_00231038:
    set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 371u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00231058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), 0u);  if (t) { goto L_00231060; } }
    c.budget -= 1;
L_00231058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00231060:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], 0u + 20u);  if (t) { goto L_002310F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00231078; } }
    set32(c.r[21], 0u + 21u);
    c.budget -= 1;
L_00231078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231080u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231080u) [[unlikely]] return; }
L_00231080:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231094u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00231094u) [[unlikely]] return; }
L_00231094:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11296u);
    c.f[14] = 0u;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002310C4u); c.f[13] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002310C4u) [[unlikely]] return; }
L_002310C4:
    set32(c.r[7], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002310F8u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002310F8u) [[unlikely]] return; }
L_002310F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231100u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231100u) [[unlikely]] return; }
L_00231100:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231114u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00231114u) [[unlikely]] return; }
L_00231114:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023112Cu); c.f[13] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0023112Cu) [[unlikely]] return; }
L_0023112C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[13] = 0u;
    set32(c.r[2], c.r[2].w[0] - 11312u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231158u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00231158u) [[unlikely]] return; }
L_00231158:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231168u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00231168u) [[unlikely]] return; }
L_00231168:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002311E8; } }
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[2].w[0] + 10u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002311E8u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002311E8u) [[unlikely]] return; }
L_002311E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002311FCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002311FCu) [[unlikely]] return; }
L_002311FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023120Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0023120Cu) [[unlikely]] return; }
L_0023120C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::div(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[7], c.r[3].w[0] + 10u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231268u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00231268u) [[unlikely]] return; }
L_00231268:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00231038u | kUnwind; return; } goto L_00231038; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002312F0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002312A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002312A8; } }
    set32(c.r[19], 0u + 4u);
    c.budget -= 2;
L_002312A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312B0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002312B0u) [[unlikely]] return; }
L_002312B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 11360u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11356u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312DCu); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002312DCu) [[unlikely]] return; }
L_002312DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002312ECu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x002312ECu) [[unlikely]] return; }
L_002312EC:
    c.budget -= 1;
L_002312F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00231390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231304u) [[unlikely]] return; }
L_00231304:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00231378; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023132Cu); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023132Cu) [[unlikely]] return; }
L_0023132C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231344u); set32(c.r[4], c.r[2].w[0] + 5520u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231344u) [[unlikely]] return; }
L_00231344:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023135Cu); set32(c.r[4], c.r[2].w[0] + 5760u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023135Cu) [[unlikely]] return; }
L_0023135C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231374u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231374u) [[unlikely]] return; }
L_00231374:
    c.budget -= 1;
L_00231378:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = c.f[21];
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231390u); set32(c.r[4], c.r[2].w[0] + 6240u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231390u) [[unlikely]] return; }
L_00231390:
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
L_002313D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002313E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 628u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00231430; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 632u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00231430; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00231430; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00231430; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00231440; } }
L_00231430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00231468; } }
L_00231440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00231458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00231460; } }
    c.budget -= 1;
L_00231458:
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00231460:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00231468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00231470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231480u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231480u) [[unlikely]] return; }
L_00231480:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231498u); set32(c.r[4], c.r[2].w[0] + 6480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00231498u) [[unlikely]] return; }
L_00231498:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002314B0u); set32(c.r[4], c.r[2].w[0] + 6720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002314B0u) [[unlikely]] return; }
L_002314B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002314C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[4].w[0] + 368u);  if (t) { goto L_00231550; } }
    c.r[2].d[0] = c.r[3].d[0] & 127ull;
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11280u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231544u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00231544u) [[unlikely]] return; }
L_00231544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002315A0; } }
    c.budget -= 1;
L_00231550:
    set32(c.r[2], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 11280u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002315A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002315A0u) [[unlikely]] return; }
L_002315A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002315B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_002316A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00231688; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00231648; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00231610; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002315F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002316A8; } }
    c.budget -= 1;
L_002315F0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] > 0; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002316A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002316A8; } }
L_00231610:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_002316A8; } }
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002316A8; } }
    c.budget -= 1;
L_00231648:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 6;
L_00231660:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002316A8; } }
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002316A8; } }
    c.budget -= 1;
L_00231688:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 629u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002316A8:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002316F0; } }
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[1] = ld32((c.r[3].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_002316F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00231700; } }
    c.budget -= 1;
L_002316F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_00231700; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00231700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00231710:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023174Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0023174Cu) [[unlikely]] return; }
L_0023174C:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00231770; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 629u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002317F0; } }
L_00231770:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 368u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_002317A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002317B8; } }
    c.budget -= 1;
L_002317A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 6;
L_002317B8:
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002317E8u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002317E8u) [[unlikely]] return; }
L_002317E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231848; } }
L_002317F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002317F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002317F8u) [[unlikely]] return; }
L_002317F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231804u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00231804u) [[unlikely]] return; }
L_00231804:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231814u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00231814u) [[unlikely]] return; }
L_00231814:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231840u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231840u) [[unlikely]] return; }
L_00231840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231848u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00231848u) [[unlikely]] return; }
L_00231848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231850u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00231850u) [[unlikely]] return; }
L_00231850:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002318A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023186Cu); set32(c.r[4], c.r[4].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0023186Cu) [[unlikely]] return; }
L_0023186C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002318A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231898u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231898u) [[unlikely]] return; }
L_00231898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002318B8; } }
L_002318A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002318B8u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002318B8u) [[unlikely]] return; }
L_002318B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002318D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_002318D8:
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    c.budget -= 13;
    { set32(c.r[6], c.r[5].w[0] + 240u);  [[clang::musttail]] return unit_00AC(c, 54u, depth); }
L_00231910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 368u);  if (t) { goto L_00231960; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023194Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0023194Cu) [[unlikely]] return; }
L_0023194C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00231960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231960u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00231960u) [[unlikely]] return; }
L_00231960:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00231A68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00231A40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002319D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00231998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231A80; } }
    c.budget -= 1;
L_00231998:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002319A4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x002319A4u) [[unlikely]] return; }
L_002319A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00231A80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u - 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00231A80; } }
L_002319D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002319DCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002319DCu) [[unlikely]] return; }
L_002319DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00231A10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A08u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00231A08u) [[unlikely]] return; }
L_00231A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231A80; } }
L_00231A10:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00231A80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A34u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00231A34u) [[unlikely]] return; }
L_00231A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231A80; } }
    c.budget -= 1;
L_00231A40:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A4Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00231A4Cu) [[unlikely]] return; }
L_00231A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00231A80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00231A80; } }
    c.budget -= 1;
L_00231A68:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231A74u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00231A74u) [[unlikely]] return; }
L_00231A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00231A80; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00231A80:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00231AA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00231AC8; } }
    c.budget -= 1;
L_00231AA8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00231AD0; } }
    c.budget -= 1;
L_00231AC8:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00231AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00231AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231B00u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231B00u) [[unlikely]] return; }
L_00231B00:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11280u);
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231B1Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00231B1Cu) [[unlikely]] return; }
L_00231B1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231B2Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00231B2Cu) [[unlikely]] return; }
L_00231B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00231B40:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231B70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00231B70u) [[unlikely]] return; }
L_00231B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00231BD0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
L_00231B84:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 11184u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 7152u);
    set32(c.r[4], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 628u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 19;
L_00231BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00231BF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 601u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00231C08; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00231C08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00230000u < 16384u) { entry = entries_004C[(t - 0x00230000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00231C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00230000u < 16384u) { entry = entries_004C[(t - 0x00230000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00231C4C:
    c.budget -= 1;
L_00231C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 11040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00230000u < 16384u) { entry = entries_004C[(t - 0x00230000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00231C70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00231C80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00231C90:
    c.f[1] = c.r[5].w[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = c.r[6].w[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.f[20]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00231CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_00231CD4; } }
L_00231CD0:
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_00231CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231CDCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231CDCu) [[unlikely]] return; }
L_00231CDC:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[5], 0u + 13u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 20464u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231D00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231D00u) [[unlikely]] return; }
L_00231D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00231D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00231D50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00231D60; } }
    c.budget -= 1;
L_00231D50:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00231D60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00231D70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00231DE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00231D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231DE8; } }
L_00231D90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00231DC0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 5;
L_00231DC0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], 0u + 10u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_00231DE8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00231E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231E20u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231E20u) [[unlikely]] return; }
L_00231E20:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231E30u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231E30u) [[unlikely]] return; }
L_00231E30:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231E40u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00231E40u) [[unlikely]] return; }
L_00231E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00231E60:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[8].w[0] - 10952u);
    set32(c.r[7], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[5], c.r[5].w[0] - 10976u);
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0] + 372u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 372u)));
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] << 3);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 372u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 372u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_00231F00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00231FA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00231F58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00231F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00231FA0; } }
L_00231F28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00231FA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00231FA0; } }
    c.budget -= 1;
L_00231F58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 6;
L_00231F70:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00231FA0; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 629u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00231FA0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00231FB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[19].w[0] + 372u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 372u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00231FF8u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00231FF8u) [[unlikely]] return; }
L_00231FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232000u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00232000u) [[unlikely]] return; }
L_00232000:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 631u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002320A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002320A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023202Cu); set32(c.r[4], c.r[4].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0023202Cu) [[unlikely]] return; }
L_0023202C:
    c.f[20] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 1200u);  if (t) { goto L_00232058; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232050u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00232050u) [[unlikely]] return; }
L_00232050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232068; } }
L_00232058:
    set32(c.r[4], c.r[17].w[0] + 960u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232068u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00232068u) [[unlikely]] return; }
L_00232068:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232078u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00232078u) [[unlikely]] return; }
L_00232078:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[5], 0u + 11u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023209Cu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023209Cu) [[unlikely]] return; }
L_0023209C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232110; } }
    c.budget -= 1;
L_002320A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], 0u + 2u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[2], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    set32(c.r[5], 0u + 11u);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002320FCu); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002320FCu) [[unlikely]] return; }
L_002320FC:
    set32(c.r[4], c.r[17].w[0] + 960u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023210Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0023210Cu) [[unlikely]] return; }
L_0023210C:
    c.budget -= 1;
L_00232110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.budget -= 4;
L_00232120:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00232140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[3].w[0] + 480u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_00232174:
    set32(c.r[6], c.r[3].w[0] + 720u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232190u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00232190u) [[unlikely]] return; }
L_00232190:
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[6].w[0] - 10952u);
    set32(c.r[5], c.r[5].w[0] - 10976u);
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[4], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 14u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 369u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 369u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[3].w[0] + 631u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00232210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00232408; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002323E8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002323A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002322B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00232260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_00232260:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023226Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0023226Cu) [[unlikely]] return; }
L_0023226C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232448; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u - 128u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002322A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_002322A8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_002322B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_002322E8; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002322DCu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002322DCu) [[unlikely]] return; }
L_002322DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_002322E8:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232310; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232304u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232304u) [[unlikely]] return; }
L_00232304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_00232310:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 368u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 368u);  if (t) { goto L_00232388; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] - 10952u);
    set32(c.r[3], c.r[3].w[0] - 10976u);
    set32(c.r[2], c.r[2].w[0] - 10972u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 369u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 369u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232388u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232388u) [[unlikely]] return; }
L_00232388:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232394u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00232394u) [[unlikely]] return; }
L_00232394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_002323A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002323ACu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002323ACu) [[unlikely]] return; }
L_002323AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232448; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 630u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st8((c.r[6].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 631u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_002323E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 631u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00232448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232448; } }
    c.budget -= 1;
L_00232408:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232414u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00232414u) [[unlikely]] return; }
L_00232414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232448; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 631u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00232450; } }
L_00232448:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00232450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00232460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232474u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00232474u) [[unlikely]] return; }
L_00232474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023247Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0023247Cu) [[unlikely]] return; }
L_0023247C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023248Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0023248Cu) [[unlikely]] return; }
L_0023248C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002324A0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 5u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002324E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002324E0; } }
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 7;
L_002324E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002324F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], c.r[5].w[0] - 10928u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 10924u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 31;
    { st32((c.r[4].w[0] + 40u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002324A0u | kUnwind; return; } goto L_002324A0; }
L_00232570:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00232698; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00232668; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00232638; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002325A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232700; } }
    c.budget -= 1;
L_002325A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00232708; } }
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002325F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00232700; } }
L_002325F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_00232610; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00232700; } }
L_00232610:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_00232700; } }
    c.budget -= 1;
L_00232638:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00232700; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_00232700; } }
    c.budget -= 1;
L_00232668:
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00232700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232708; } }
L_00232698:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002326B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232708; } }
L_002326B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6208u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002326F8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 13;
L_002326F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232708; } }
L_00232700:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00232708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00232710:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[29].w[0] + 172u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 31044u)));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 31042u));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[19], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[18], ld32((c.r[4].w[0] + 464u)));
    st32((c.r[29].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 19u)));
    c.budget -= 36;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002327B8; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 25u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002327B8; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 2;
L_002327B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327C0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002327C0u) [[unlikely]] return; }
L_002327C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002327C8u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002327C8u) [[unlikely]] return; }
L_002327C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 188u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 44u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00232868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232800u); set32(c.r[4], ld32((c.r[28].w[0] - 23976u)));  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00232800u) [[unlikely]] return; }
L_00232800:
    c.f[12] = 0u;
    c.f[20] = c.f[0];
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232814u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00232814u) [[unlikely]] return; }
L_00232814:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00232824u) [[unlikely]] return; }
L_00232824:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 2160u);  if (t) { goto L_00232850; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232844u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00232844u) [[unlikely]] return; }
L_00232844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232898; } }
    c.budget -= 1;
L_00232850:
    set32(c.r[4], c.r[18].w[0] + 1920u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232860u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00232860u) [[unlikely]] return; }
L_00232860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232898; } }
L_00232868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232888u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00232888u) [[unlikely]] return; }
L_00232888:
    set32(c.r[4], c.r[18].w[0] + 1920u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232898u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00232898u) [[unlikely]] return; }
L_00232898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002328D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 10928u);
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], c.r[2].w[0] - 10924u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 44u)));
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 384u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232940u); st32((c.r[4].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_004C(c, 218u, depth + 1u); else { c.pc = 0x002324A0u; return; } if (c.pc != 0x00232940u) [[unlikely]] return; }
L_00232940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[4].w[0] + 368u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[7].w[0] + 1440u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023295Cu); set32(c.r[6], c.r[7].w[0] + 1680u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0023295Cu) [[unlikely]] return; }
L_0023295C:
    st32((c.r[28].w[0] - 23976u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00232970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00232C30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 17712u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00230000u < 16384u) { entry = entries_004C[(t - 0x00230000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002329B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00232C38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002329E0; } }
    set32(c.r[4], c.r[16].w[0] + 368u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002329D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002329D4u) [[unlikely]] return; }
L_002329D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232C30; } }
    c.budget -= 1;
L_002329E0:
    set32(c.r[17], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002329ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x002329ECu) [[unlikely]] return; }
L_002329EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232A08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232C30; } }
    c.budget -= 1;
L_00232A08:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00232C30; } }
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232A30u) [[unlikely]] return; }
L_00232A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232C30; } }
L_00232A38:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    set32(c.r[7], c.r[2].w[0] + 630u);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00232A68; } }
    set32(c.r[4], c.r[16].w[0] + 368u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232A60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232A60u) [[unlikely]] return; }
L_00232A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232C30; } }
L_00232A68:
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00232AB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00232A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00232AA0; } }
    c.budget -= 1;
L_00232A90:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00232AA0:
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232AACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232AACu) [[unlikely]] return; }
L_00232AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232C30; } }
    c.budget -= 1;
L_00232AB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 384u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[16].w[0] + 384u);  if (t) { goto L_00232B18; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 10928u);
    set32(c.r[2], c.r[2].w[0] - 10924u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B08u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_004C(c, 218u, depth + 1u); else { c.pc = 0x002324A0u; return; } if (c.pc != 0x00232B08u) [[unlikely]] return; }
L_00232B08:
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232B14u) [[unlikely]] return; }
L_00232B14:
    c.budget -= 1;
L_00232B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B20u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00232B20u) [[unlikely]] return; }
L_00232B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232C30; } }
L_00232B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232B30u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00232B30u) [[unlikely]] return; }
L_00232B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232C30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232C30; } }
    c.budget -= 1;
L_00232B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00232B88; } }
    set32(c.r[3], 0u - 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232C30; } }
L_00232B88:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00232C30; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232C30; } }
    c.budget -= 1;
L_00232BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232BA8u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00232BA8u) [[unlikely]] return; }
L_00232BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00232C30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232C38; } }
    c.budget -= 1;
L_00232BD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00232BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232C28; } }
L_00232BF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00232C28; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 4u);
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C24u); st8((c.r[6].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00232C24u) [[unlikely]] return; }
L_00232C24:
    c.budget -= 1;
L_00232C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232C38; } }
L_00232C30:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00232C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00232C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00232C64u) [[unlikely]] return; }
L_00232C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C6Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00232C6Cu) [[unlikely]] return; }
L_00232C6C:
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232C78u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00232C78u) [[unlikely]] return; }
L_00232C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00232C90:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 10904u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_00232D00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[7], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00232DC8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00232DA0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00232D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00232E28; } }
    c.budget -= 1;
L_00232D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00232D50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00232E30; } }
    c.budget -= 1;
L_00232D50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00232E30; } }
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00232E28; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00232E28; } }
L_00232DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_00232E28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_00232E28; } }
L_00232DC8:
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00232E28; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_00232E30; } }
    c.budget -= 1;
L_00232E28:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00232E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00232E40:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[4].w[0] + 28u)));
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.f[20] = 0u;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 52u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 464u)));
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[4].w[0] + 6016u);  if (t) { goto L_00232EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232EA0u); set32(c.r[4], ld32((c.r[28].w[0] - 23980u)));  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00232EA0u) [[unlikely]] return; }
L_00232EA0:
    c.f[20] = c.f[0];
    c.budget -= 2;
L_00232EA8:
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.f[22] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232ED0u); st32((c.r[29].w[0] + 148u), c.f[22]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00232ED0u) [[unlikely]] return; }
L_00232ED0:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232EE8u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00232EE8u) [[unlikely]] return; }
L_00232EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43680000u);
    c.f[13] = c.r[2].w[0];
    c.f[15] = c.f[14];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F1Cu); c.f[12] = fp::mul(c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00232F1Cu) [[unlikely]] return; }
L_00232F1C:
    set32(c.r[2], c.r[18].w[0] + 6240u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00232F34u) [[unlikely]] return; }
L_00232F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00232F5C; } }
    c.f[22] = fp::cvt_w_s(c.f[22]);
    set32(c.r[3], c.f[22]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_00232F78; } }
L_00232F5C:
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[22] = fp::cvt_w_s(c.f[22]);
    set32(c.r[3], c.f[22]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_00232F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F80u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00232F80u) [[unlikely]] return; }
L_00232F80:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232F8Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x00232F8Cu) [[unlikely]] return; }
L_00232F8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[1].w[0] + 17700u)));  if (t) { goto L_00233128; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232FA8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00232FA8u) [[unlikely]] return; }
L_00232FA8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232FBCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 89u, depth + 1u); else { c.pc = 0x0033D4A0u; return; } if (c.pc != 0x00232FBCu) [[unlikely]] return; }
L_00232FBC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232FC8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00232FC8u) [[unlikely]] return; }
L_00232FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00232FD0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00232FD0u) [[unlikely]] return; }
L_00232FD0:
    set32(c.r[3], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00233000; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00233018; } }
L_00233000:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00233018:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 81u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233058u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00233058u) [[unlikely]] return; }
L_00233058:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233064u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00233064u) [[unlikely]] return; }
L_00233064:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233078u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 89u, depth + 1u); else { c.pc = 0x0033D4A0u; return; } if (c.pc != 0x00233078u) [[unlikely]] return; }
L_00233078:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233084u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00233084u) [[unlikely]] return; }
L_00233084:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233090u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00233090u) [[unlikely]] return; }
L_00233090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233098u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00233098u) [[unlikely]] return; }
L_00233098:
    set32(c.r[3], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002330C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002330E0; } }
L_002330C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002330E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 107u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233120u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00233120u) [[unlikely]] return; }
L_00233120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002331D8; } }
L_00233128:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 19u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00233140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 31052u)));  if (t) { goto L_00233144; } }
L_00233140:
    set32(c.r[17], ld32((c.r[28].w[0] - 31048u)));
    c.budget -= 1;
L_00233144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023314Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0023314Cu) [[unlikely]] return; }
L_0023314C:
    set32(c.r[3], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0023317C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00233194; } }
L_0023317C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00233194:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 93u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002331D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002331D4u) [[unlikely]] return; }
L_002331D4:
    c.budget -= 1;
L_002331D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002331E4u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002331E4u) [[unlikely]] return; }
L_002331E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002331ECu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002331ECu) [[unlikely]] return; }
L_002331EC:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002331FCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002331FCu) [[unlikely]] return; }
L_002331FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 25u);  if (t) { goto L_00233218; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 1;
L_00233218:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233234u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00233234u) [[unlikely]] return; }
L_00233234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00233260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], c.r[4].w[0] + 368u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 464u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[6].w[0] + 5280u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 5520u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002332A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002332A0u) [[unlikely]] return; }
L_002332A0:
    st32((c.r[28].w[0] - 23980u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002332C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002334A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00233470; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00233438; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00233390; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00233318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002334D8; } }
    c.budget -= 1;
L_00233318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00233338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002334E0; } }
    c.budget -= 1;
L_00233338:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002334E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10904u);
    set32(c.r[4], c.r[16].w[0] + 368u);
    st8((c.r[16].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233378u); st32((c.r[16].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x00233378u) [[unlikely]] return; }
L_00233378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002334D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002334D8; } }
L_00233390:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_002333B8; } }
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002333B0u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002333B0u) [[unlikely]] return; }
L_002333B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002334D8; } }
L_002333B8:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002333D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002333F0; } }
L_002333D0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002333E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002333E4u) [[unlikely]] return; }
L_002333E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002334D8; } }
    c.budget -= 1;
L_002333F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 384u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 384u);  if (t) { goto L_00233428; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 10904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + 368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233428u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00233428u) [[unlikely]] return; }
L_00233428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233430u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00233430u) [[unlikely]] return; }
L_00233430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002334D8; } }
L_00233438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233440u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00233440u) [[unlikely]] return; }
L_00233440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002334D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002334D8; } }
    c.budget -= 1;
L_00233470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00233488; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002334D8; } }
L_00233488:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002334D8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002334D8; } }
    c.budget -= 1;
L_002334A0:
    set32(c.r[17], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002334ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x002334ACu) [[unlikely]] return; }
L_002334AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002334D8; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 3u);
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002334D8u); st8((c.r[6].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002334D8u) [[unlikely]] return; }
L_002334D8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002334E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00233500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233514u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00233514u) [[unlikely]] return; }
L_00233514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023351Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0023351Cu) [[unlikely]] return; }
L_0023351C:
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233528u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00233528u) [[unlikely]] return; }
L_00233528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00233540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00233550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00233560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00233570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00233580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00233590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002335A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002335B0:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002335D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00233618; } }
    c.budget -= 1;
L_002335D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    set32(c.r[5], c.r[3].w[0] + 630u);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_00233600; } }
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00233618; } }
    c.budget -= 1;
L_00233600:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 3u);  if (t) { goto L_00233618; } }
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00233618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00233620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00233630:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 10880u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_002336A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[7], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00233768; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00233740; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002336D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002337C8; } }
    c.budget -= 1;
L_002336D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002336F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002337D0; } }
    c.budget -= 1;
L_002336F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002337D0; } }
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002337C8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_002337C8; } }
L_00233740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_002337C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_002337C8; } }
L_00233768:
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_002337C8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_002337D0; } }
    c.budget -= 1;
L_002337C8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002337D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002337E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 50u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[6].w[0] + 464u)));  if (t) { goto L_00233A80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 11052u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[19].d[0] = ld8((c.r[3].w[0] + 60u));  if (t) { goto L_00233858; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023384Cu); set32(c.r[4], ld32((c.r[1].w[0] + 11048u)));  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0023384Cu) [[unlikely]] return; }
L_0023384C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00233860; } }
L_00233858:
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = 0u;
    c.budget -= 2;
L_00233860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00233898; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_002338B4; } }
L_00233898:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_002338B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002338BCu);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002338BCu) [[unlikely]] return; }
L_002338BC:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002338C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x002338C8u) [[unlikely]] return; }
L_002338C8:
    c.r[1].d[0] = c.r[19].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_002339F0; } }
    set32(c.r[6], c.r[19].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002338E4u); set32(c.r[5], c.r[5].w[0] + 17744u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x002338E4u) [[unlikely]] return; }
L_002338E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[4], 0u + 310u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 87u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233928u); set32(c.r[7], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00233928u) [[unlikely]] return; }
L_00233928:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 80u));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002339D0; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 31056u)));
    c.budget -= 1;
L_00233958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00233960u) [[unlikely]] return; }
L_00233960:
    set32(c.r[3], 0u + 32u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 87u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002339C4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002339C4u) [[unlikely]] return; }
L_002339C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002339F8; } }
    c.budget -= 1;
L_002339D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002339E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00233AB0u; return; } if (c.pc != 0x002339E4u) [[unlikely]] return; }
L_002339E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002339F8; } }
    c.budget -= 1;
L_002339F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 31052u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00233958u | kUnwind; return; } goto L_00233958; } }
L_002339F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A04u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00233A04u) [[unlikely]] return; }
L_00233A04:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A10u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x00233A10u) [[unlikely]] return; }
L_00233A10:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00233A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A20u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00233A20u) [[unlikely]] return; }
L_00233A20:
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 6240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A30u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00233A30u) [[unlikely]] return; }
L_00233A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00233A38u) [[unlikely]] return; }
L_00233A38:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A48u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00233A48u) [[unlikely]] return; }
L_00233A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 19u);  if (t) { goto L_00233A64; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
L_00233A64:
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233A80u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00233A80u) [[unlikely]] return; }
L_00233A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00233AB0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B00u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_006B(c, 47u, depth + 1u); else { c.pc = 0x002ACA00u; return; } if (c.pc != 0x00233B00u) [[unlikely]] return; }
L_00233B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_004D(c, 6u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_004D(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00233C30; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] - 11216u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[10].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[11].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B74u); set32(c.r[5], c.r[5].w[0] + 17760u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00233B74u) [[unlikely]] return; }
L_00233B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B84u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00233B84u) [[unlikely]] return; }
L_00233B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B8Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 49u, depth + 1u); else { c.pc = 0x003A8780u; return; } if (c.pc != 0x00233B8Cu) [[unlikely]] return; }
L_00233B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233B94u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x00233B94u) [[unlikely]] return; }
L_00233B94:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x00233BA0u) [[unlikely]] return; }
L_00233BA0:
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BACu); set32(c.r[5], 0u + 84u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00233BACu) [[unlikely]] return; }
L_00233BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BB4u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00233BB4u) [[unlikely]] return; }
L_00233BB4:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BC0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x00233BC0u) [[unlikely]] return; }
L_00233BC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[20], c.r[2].w[0] + 85u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BD0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00233BD0u) [[unlikely]] return; }
L_00233BD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[29].w[0] + 248u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], 0u + 108u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00233C30; } }
    c.budget -= 1;
L_00233BE8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233BF8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00233BF8u) [[unlikely]] return; }
L_00233BF8:
    c.r[5].d[0] = c.r[18].d[0] << 48;
    set32(c.r[4], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C08u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00233C08u) [[unlikely]] return; }
L_00233C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C10u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00233C10u) [[unlikely]] return; }
L_00233C10:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C1Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00233C1Cu) [[unlikely]] return; }
L_00233C1C:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[18], c.r[18].w[0] + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00233BE8u | kUnwind; return; } goto L_00233BE8; } }
    c.budget -= 1;
L_00233C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 67u, depth + 1u); else { c.pc = 0x003A8B70u; return; } if (c.pc != 0x00233C38u) [[unlikely]] return; }
L_00233C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C40u);  if (depth < kMaxDepth) unit_008B(c, 87u, depth + 1u); else { c.pc = 0x0032C7C0u; return; } if (c.pc != 0x00233C40u) [[unlikely]] return; }
L_00233C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C50u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00233C50u) [[unlikely]] return; }
L_00233C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C58u);  if (depth < kMaxDepth) unit_00A2(c, 329u, depth + 1u); else { c.pc = 0x0038AD70u; return; } if (c.pc != 0x00233C58u) [[unlikely]] return; }
L_00233C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233C60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 67u, depth + 1u); else { c.pc = 0x003A8B70u; return; } if (c.pc != 0x00233C60u) [[unlikely]] return; }
L_00233C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 204u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 332u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 292u);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[29].w[0] + 328u), 0u);
    c.budget -= 12;
L_00233C90:
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00233CB8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 328u), c.r[2].w[0]);
    c.budget -= 7;
L_00233CB8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00233C90u | kUnwind; return; } goto L_00233C90; } }
    set32(c.r[4], 0u + 32u);
    set32(c.r[2], 0u + 256u);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[4].w[0]);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00233D40; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00233D10; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[22], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_00233D88; } }
    c.budget -= 1;
L_00233D10:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00233D30; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[22], c.r[29].w[0] + 320u);
    set32(c.r[2], 0u - 16u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00233D88; } }
L_00233D30:
    set32(c.r[22], c.r[29].w[0] + 320u);
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00233D88; } }
L_00233D40:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00233D80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00233D70; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[22], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_00233D88; } }
    c.budget -= 1;
L_00233D70:
    set32(c.r[22], c.r[29].w[0] + 320u);
    set32(c.r[2], 0u - 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00233D88; } }
L_00233D80:
    set32(c.r[22], c.r[29].w[0] + 320u);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_00233D88:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 204u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0] + 296u);
    set32(c.r[30], c.r[29].w[0] + 300u);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.budget -= 8;
L_00233DA8:
    set32(c.r[20], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] < 0; set32(c.r[21], ld32((c.r[18].w[0] + 32u)));  if (t) { goto L_00233FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233DBCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00233DBCu) [[unlikely]] return; }
L_00233DBC:
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 312u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[14] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233DDCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00233DDCu) [[unlikely]] return; }
L_00233DDC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00233DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 32u);  if (t) { goto L_00233DF8; } }
    c.budget -= 1;
L_00233DF0:
    set32(c.r[10], 0u - 32u);
    c.budget -= 2;
L_00233DF8:
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[7], 0u + 2u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] - 10864u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[19].w[0] + 5040u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[30].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 304u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233E7Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00233E7Cu) [[unlikely]] return; }
L_00233E7C:
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(70ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00233E90; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00233E90:
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], c.r[29].w[0] + 304u);
    set32(c.r[3], c.r[19].w[0] + 4800u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], 0u + 9u);
    st32((c.r[30].w[0]), c.r[4].w[0]);
    mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[3], c.r[20].w[0] >> 31);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = c.r[7].w[0];
    set32(c.r[8], c.r[2].w[0] - 1u);
    c.f[1] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = c.r[7].w[0];
    set32(c.r[2], c.r[29].w[0] + 284u);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    fpu_div(c, 1u, c.f[0], c.f[2]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[2].w[0]), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 288u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.budget -= 74;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00233FB8u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00233FB8u) [[unlikely]] return; }
L_00233FB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00233DA8u | kUnwind; return; } goto L_00233DA8; } }
    set32(c.r[2], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.f[2] = c.r[6].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[5], c.r[19].w[0] + 5280u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 292u);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 14;
    [[clang::musttail]] return unit_004D(c, 1u, depth);
}

}
