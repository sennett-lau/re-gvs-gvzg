#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002E[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0,
    104, 0, 105, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 199,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0,
    0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369,
    0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 0,
    0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0,
    408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0,
    0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0,
    0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 436, 0, 437, 0,
    0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 447, 0, 0, 0,
    448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0,
    458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0,
    467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476,
    0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0,
};

void unit_002E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B8000;
    case 2u: goto L_001B8018;
    case 3u: goto L_001B8020;
    case 4u: goto L_001B8028;
    case 5u: goto L_001B8058;
    case 6u: goto L_001B8118;
    case 7u: goto L_001B8130;
    case 8u: goto L_001B81C0;
    case 9u: goto L_001B81FC;
    case 10u: goto L_001B8254;
    case 11u: goto L_001B82D0;
    case 12u: goto L_001B8330;
    case 13u: goto L_001B833C;
    case 14u: goto L_001B8350;
    case 15u: goto L_001B8390;
    case 16u: goto L_001B83B0;
    case 17u: goto L_001B8408;
    case 18u: goto L_001B8420;
    case 19u: goto L_001B84B8;
    case 20u: goto L_001B84D0;
    case 21u: goto L_001B8578;
    case 22u: goto L_001B8590;
    case 23u: goto L_001B8610;
    case 24u: goto L_001B8630;
    case 25u: goto L_001B8678;
    case 26u: goto L_001B8684;
    case 27u: goto L_001B86A0;
    case 28u: goto L_001B8708;
    case 29u: goto L_001B8714;
    case 30u: goto L_001B8730;
    case 31u: goto L_001B8770;
    case 32u: goto L_001B8780;
    case 33u: goto L_001B87F8;
    case 34u: goto L_001B8810;
    case 35u: goto L_001B886C;
    case 36u: goto L_001B8878;
    case 37u: goto L_001B8890;
    case 38u: goto L_001B88E0;
    case 39u: goto L_001B8900;
    case 40u: goto L_001B8950;
    case 41u: goto L_001B8970;
    case 42u: goto L_001B8998;
    case 43u: goto L_001B89E8;
    case 44u: goto L_001B89F0;
    case 45u: goto L_001B8A14;
    case 46u: goto L_001B8A38;
    case 47u: goto L_001B8A6C;
    case 48u: goto L_001B8A9C;
    case 49u: goto L_001B8AAC;
    case 50u: goto L_001B8ABC;
    case 51u: goto L_001B8AC4;
    case 52u: goto L_001B8AF0;
    case 53u: goto L_001B8B70;
    case 54u: goto L_001B8B8C;
    case 55u: goto L_001B8BA0;
    case 56u: goto L_001B8BF8;
    case 57u: goto L_001B8C10;
    case 58u: goto L_001B8CA8;
    case 59u: goto L_001B8CE8;
    case 60u: goto L_001B8D40;
    case 61u: goto L_001B8DB8;
    case 62u: goto L_001B8DD0;
    case 63u: goto L_001B8E18;
    case 64u: goto L_001B8E24;
    case 65u: goto L_001B8E44;
    case 66u: goto L_001B8E60;
    case 67u: goto L_001B8F60;
    case 68u: goto L_001B9070;
    case 69u: goto L_001B9098;
    case 70u: goto L_001B90D8;
    case 71u: goto L_001B9100;
    case 72u: goto L_001B910C;
    case 73u: goto L_001B9144;
    case 74u: goto L_001B9158;
    case 75u: goto L_001B9194;
    case 76u: goto L_001B91B8;
    case 77u: goto L_001B91D4;
    case 78u: goto L_001B91E4;
    case 79u: goto L_001B9200;
    case 80u: goto L_001B9220;
    case 81u: goto L_001B9260;
    case 82u: goto L_001B926C;
    case 83u: goto L_001B9280;
    case 84u: goto L_001B92A8;
    case 85u: goto L_001B92D4;
    case 86u: goto L_001B931C;
    case 87u: goto L_001B9330;
    case 88u: goto L_001B936C;
    case 89u: goto L_001B9390;
    case 90u: goto L_001B93AC;
    case 91u: goto L_001B93BC;
    case 92u: goto L_001B93E0;
    case 93u: goto L_001B9458;
    case 94u: goto L_001B9480;
    case 95u: goto L_001B94B4;
    case 96u: goto L_001B94CC;
    case 97u: goto L_001B94E4;
    case 98u: goto L_001B9500;
    case 99u: goto L_001B954C;
    case 100u: goto L_001B9554;
    case 101u: goto L_001B9560;
    case 102u: goto L_001B956C;
    case 103u: goto L_001B9574;
    case 104u: goto L_001B9580;
    case 105u: goto L_001B9588;
    case 106u: goto L_001B9594;
    case 107u: goto L_001B95A0;
    case 108u: goto L_001B95A8;
    case 109u: goto L_001B95B4;
    case 110u: goto L_001B95D0;
    case 111u: goto L_001B964C;
    case 112u: goto L_001B9660;
    case 113u: goto L_001B9890;
    case 114u: goto L_001B990C;
    case 115u: goto L_001B9920;
    case 116u: goto L_001B9A60;
    case 117u: goto L_001B9AF0;
    case 118u: goto L_001B9B14;
    case 119u: goto L_001B9B1C;
    case 120u: goto L_001B9B2C;
    case 121u: goto L_001B9B34;
    case 122u: goto L_001B9B3C;
    case 123u: goto L_001B9B4C;
    case 124u: goto L_001B9B58;
    case 125u: goto L_001B9B60;
    case 126u: goto L_001B9B80;
    case 127u: goto L_001B9BA8;
    case 128u: goto L_001B9BB0;
    case 129u: goto L_001B9BB8;
    case 130u: goto L_001B9BC8;
    case 131u: goto L_001B9BD4;
    case 132u: goto L_001B9BDC;
    case 133u: goto L_001B9C00;
    case 134u: goto L_001B9C34;
    case 135u: goto L_001B9C40;
    case 136u: goto L_001B9C58;
    case 137u: goto L_001B9C80;
    case 138u: goto L_001B9CB4;
    case 139u: goto L_001B9CC0;
    case 140u: goto L_001B9CD8;
    case 141u: goto L_001B9D00;
    case 142u: goto L_001B9D44;
    case 143u: goto L_001B9D50;
    case 144u: goto L_001B9D98;
    case 145u: goto L_001B9DC4;
    case 146u: goto L_001B9E04;
    case 147u: goto L_001B9E20;
    case 148u: goto L_001B9EA0;
    case 149u: goto L_001B9EC8;
    case 150u: goto L_001B9ED0;
    case 151u: goto L_001B9EDC;
    case 152u: goto L_001B9EE4;
    case 153u: goto L_001B9F00;
    case 154u: goto L_001B9F28;
    case 155u: goto L_001B9F34;
    case 156u: goto L_001B9F78;
    case 157u: goto L_001B9FA4;
    case 158u: goto L_001B9FE4;
    case 159u: goto L_001BA000;
    case 160u: goto L_001BA024;
    case 161u: goto L_001BA02C;
    case 162u: goto L_001BA038;
    case 163u: goto L_001BA044;
    case 164u: goto L_001BA054;
    case 165u: goto L_001BA098;
    case 166u: goto L_001BA0A0;
    case 167u: goto L_001BA0A8;
    case 168u: goto L_001BA0B0;
    case 169u: goto L_001BA120;
    case 170u: goto L_001BA144;
    case 171u: goto L_001BA14C;
    case 172u: goto L_001BA158;
    case 173u: goto L_001BA164;
    case 174u: goto L_001BA174;
    case 175u: goto L_001BA1B8;
    case 176u: goto L_001BA1C0;
    case 177u: goto L_001BA1C8;
    case 178u: goto L_001BA1D0;
    case 179u: goto L_001BA240;
    case 180u: goto L_001BA274;
    case 181u: goto L_001BA2A0;
    case 182u: goto L_001BA2AC;
    case 183u: goto L_001BA2BC;
    case 184u: goto L_001BA2D0;
    case 185u: goto L_001BA308;
    case 186u: goto L_001BA318;
    case 187u: goto L_001BA324;
    case 188u: goto L_001BA338;
    case 189u: goto L_001BA340;
    case 190u: goto L_001BA34C;
    case 191u: goto L_001BA35C;
    case 192u: goto L_001BA370;
    case 193u: goto L_001BA3A8;
    case 194u: goto L_001BA3B8;
    case 195u: goto L_001BA3C4;
    case 196u: goto L_001BA3D8;
    case 197u: goto L_001BA3E0;
    case 198u: goto L_001BA3F0;
    case 199u: goto L_001BA3FC;
    case 200u: goto L_001BA410;
    case 201u: goto L_001BA448;
    case 202u: goto L_001BA458;
    case 203u: goto L_001BA464;
    case 204u: goto L_001BA478;
    case 205u: goto L_001BA480;
    case 206u: goto L_001BA490;
    case 207u: goto L_001BA4A0;
    case 208u: goto L_001BA4B0;
    case 209u: goto L_001BA4E8;
    case 210u: goto L_001BA4F8;
    case 211u: goto L_001BA504;
    case 212u: goto L_001BA518;
    case 213u: goto L_001BA520;
    case 214u: goto L_001BA530;
    case 215u: goto L_001BA53C;
    case 216u: goto L_001BA550;
    case 217u: goto L_001BA588;
    case 218u: goto L_001BA598;
    case 219u: goto L_001BA5A4;
    case 220u: goto L_001BA5B8;
    case 221u: goto L_001BA5C0;
    case 222u: goto L_001BA5D0;
    case 223u: goto L_001BA5E0;
    case 224u: goto L_001BA5F0;
    case 225u: goto L_001BA628;
    case 226u: goto L_001BA638;
    case 227u: goto L_001BA644;
    case 228u: goto L_001BA658;
    case 229u: goto L_001BA66C;
    case 230u: goto L_001BA690;
    case 231u: goto L_001BA6D4;
    case 232u: goto L_001BA6E0;
    case 233u: goto L_001BA738;
    case 234u: goto L_001BA788;
    case 235u: goto L_001BA798;
    case 236u: goto L_001BA7A0;
    case 237u: goto L_001BA7AC;
    case 238u: goto L_001BA7B4;
    case 239u: goto L_001BA7D0;
    case 240u: goto L_001BA814;
    case 241u: goto L_001BA820;
    case 242u: goto L_001BA878;
    case 243u: goto L_001BA8C8;
    case 244u: goto L_001BA8D8;
    case 245u: goto L_001BA8E0;
    case 246u: goto L_001BA8EC;
    case 247u: goto L_001BA8F4;
    case 248u: goto L_001BA910;
    case 249u: goto L_001BA958;
    case 250u: goto L_001BA9A4;
    case 251u: goto L_001BA9AC;
    case 252u: goto L_001BA9B8;
    case 253u: goto L_001BA9C0;
    case 254u: goto L_001BA9D4;
    case 255u: goto L_001BAA20;
    case 256u: goto L_001BAA40;
    case 257u: goto L_001BAA4C;
    case 258u: goto L_001BAA54;
    case 259u: goto L_001BAA8C;
    case 260u: goto L_001BAA94;
    case 261u: goto L_001BAAA0;
    case 262u: goto L_001BAAA8;
    case 263u: goto L_001BAAC0;
    case 264u: goto L_001BAB10;
    case 265u: goto L_001BAB5C;
    case 266u: goto L_001BAB68;
    case 267u: goto L_001BAB74;
    case 268u: goto L_001BAB7C;
    case 269u: goto L_001BAB84;
    case 270u: goto L_001BABC0;
    case 271u: goto L_001BAC08;
    case 272u: goto L_001BAC54;
    case 273u: goto L_001BAC5C;
    case 274u: goto L_001BAC68;
    case 275u: goto L_001BAC70;
    case 276u: goto L_001BAC84;
    case 277u: goto L_001BACD0;
    case 278u: goto L_001BACF0;
    case 279u: goto L_001BACFC;
    case 280u: goto L_001BAD04;
    case 281u: goto L_001BAD44;
    case 282u: goto L_001BAD4C;
    case 283u: goto L_001BAD58;
    case 284u: goto L_001BAD60;
    case 285u: goto L_001BAD78;
    case 286u: goto L_001BADC8;
    case 287u: goto L_001BAE18;
    case 288u: goto L_001BAE24;
    case 289u: goto L_001BAE30;
    case 290u: goto L_001BAE38;
    case 291u: goto L_001BAE40;
    case 292u: goto L_001BAE80;
    case 293u: goto L_001BAF24;
    case 294u: goto L_001BAF74;
    case 295u: goto L_001BAFB8;
    case 296u: goto L_001BAFFC;
    case 297u: goto L_001BB004;
    case 298u: goto L_001BB00C;
    case 299u: goto L_001BB014;
    case 300u: goto L_001BB01C;
    case 301u: goto L_001BB02C;
    case 302u: goto L_001BB034;
    case 303u: goto L_001BB040;
    case 304u: goto L_001BB050;
    case 305u: goto L_001BB05C;
    case 306u: goto L_001BB090;
    case 307u: goto L_001BB140;
    case 308u: goto L_001BB184;
    case 309u: goto L_001BB18C;
    case 310u: goto L_001BB194;
    case 311u: goto L_001BB1A4;
    case 312u: goto L_001BB1AC;
    case 313u: goto L_001BB1BC;
    case 314u: goto L_001BB1C4;
    case 315u: goto L_001BB1D0;
    case 316u: goto L_001BB1E0;
    case 317u: goto L_001BB1EC;
    case 318u: goto L_001BB220;
    case 319u: goto L_001BB244;
    case 320u: goto L_001BB254;
    case 321u: goto L_001BB268;
    case 322u: goto L_001BB280;
    case 323u: goto L_001BB2AC;
    case 324u: goto L_001BB2B8;
    case 325u: goto L_001BB2C8;
    case 326u: goto L_001BB318;
    case 327u: goto L_001BB32C;
    case 328u: goto L_001BB3A0;
    case 329u: goto L_001BB3D0;
    case 330u: goto L_001BB3DC;
    case 331u: goto L_001BB3EC;
    case 332u: goto L_001BB43C;
    case 333u: goto L_001BB468;
    case 334u: goto L_001BB4B8;
    case 335u: goto L_001BB4C4;
    case 336u: goto L_001BB4D0;
    case 337u: goto L_001BB500;
    case 338u: goto L_001BB528;
    case 339u: goto L_001BB534;
    case 340u: goto L_001BB544;
    case 341u: goto L_001BB594;
    case 342u: goto L_001BB5B8;
    case 343u: goto L_001BB608;
    case 344u: goto L_001BB614;
    case 345u: goto L_001BB620;
    case 346u: goto L_001BB640;
    case 347u: goto L_001BB698;
    case 348u: goto L_001BB7A0;
    case 349u: goto L_001BB7D0;
    case 350u: goto L_001BB7F4;
    case 351u: goto L_001BB7FC;
    case 352u: goto L_001BB820;
    case 353u: goto L_001BB880;
    case 354u: goto L_001BB8A0;
    case 355u: goto L_001BB8D0;
    case 356u: goto L_001BB904;
    case 357u: goto L_001BB92C;
    case 358u: goto L_001BB940;
    case 359u: goto L_001BB94C;
    case 360u: goto L_001BB958;
    case 361u: goto L_001BB964;
    case 362u: goto L_001BB97C;
    case 363u: goto L_001BB9A0;
    case 364u: goto L_001BB9B8;
    case 365u: goto L_001BB9D0;
    case 366u: goto L_001BB9E0;
    case 367u: goto L_001BB9EC;
    case 368u: goto L_001BB9F4;
    case 369u: goto L_001BB9FC;
    case 370u: goto L_001BBA0C;
    case 371u: goto L_001BBA14;
    case 372u: goto L_001BBA20;
    case 373u: goto L_001BBA2C;
    case 374u: goto L_001BBA38;
    case 375u: goto L_001BBA48;
    case 376u: goto L_001BBA58;
    case 377u: goto L_001BBA64;
    case 378u: goto L_001BBA6C;
    case 379u: goto L_001BBA74;
    case 380u: goto L_001BBA84;
    case 381u: goto L_001BBA90;
    case 382u: goto L_001BBA9C;
    case 383u: goto L_001BBAA8;
    case 384u: goto L_001BBAB8;
    case 385u: goto L_001BBAC4;
    case 386u: goto L_001BBACC;
    case 387u: goto L_001BBADC;
    case 388u: goto L_001BBAE8;
    case 389u: goto L_001BBAF4;
    case 390u: goto L_001BBB00;
    case 391u: goto L_001BBB10;
    case 392u: goto L_001BBB20;
    case 393u: goto L_001BBB34;
    case 394u: goto L_001BBB40;
    case 395u: goto L_001BBB4C;
    case 396u: goto L_001BBB58;
    case 397u: goto L_001BBB68;
    case 398u: goto L_001BBB74;
    case 399u: goto L_001BBB84;
    case 400u: goto L_001BBB90;
    case 401u: goto L_001BBB9C;
    case 402u: goto L_001BBBA8;
    case 403u: goto L_001BBBB8;
    case 404u: goto L_001BBBC8;
    case 405u: goto L_001BBBDC;
    case 406u: goto L_001BBBE8;
    case 407u: goto L_001BBBF4;
    case 408u: goto L_001BBC00;
    case 409u: goto L_001BBC08;
    case 410u: goto L_001BBC10;
    case 411u: goto L_001BBC20;
    case 412u: goto L_001BBC2C;
    case 413u: goto L_001BBC34;
    case 414u: goto L_001BBC44;
    case 415u: goto L_001BBC50;
    case 416u: goto L_001BBC5C;
    case 417u: goto L_001BBC68;
    case 418u: goto L_001BBC78;
    case 419u: goto L_001BBC88;
    case 420u: goto L_001BBC9C;
    case 421u: goto L_001BBCA8;
    case 422u: goto L_001BBCB4;
    case 423u: goto L_001BBCC0;
    case 424u: goto L_001BBCD0;
    case 425u: goto L_001BBCDC;
    case 426u: goto L_001BBCEC;
    case 427u: goto L_001BBCF8;
    case 428u: goto L_001BBD04;
    case 429u: goto L_001BBD10;
    case 430u: goto L_001BBD20;
    case 431u: goto L_001BBD30;
    case 432u: goto L_001BBD44;
    case 433u: goto L_001BBD50;
    case 434u: goto L_001BBD5C;
    case 435u: goto L_001BBD68;
    case 436u: goto L_001BBD70;
    case 437u: goto L_001BBD78;
    case 438u: goto L_001BBD88;
    case 439u: goto L_001BBD94;
    case 440u: goto L_001BBD9C;
    case 441u: goto L_001BBDAC;
    case 442u: goto L_001BBDB8;
    case 443u: goto L_001BBDC4;
    case 444u: goto L_001BBDD0;
    case 445u: goto L_001BBDD8;
    case 446u: goto L_001BBDE0;
    case 447u: goto L_001BBDF0;
    case 448u: goto L_001BBE00;
    case 449u: goto L_001BBE0C;
    case 450u: goto L_001BBE1C;
    case 451u: goto L_001BBE28;
    case 452u: goto L_001BBE34;
    case 453u: goto L_001BBE40;
    case 454u: goto L_001BBE50;
    case 455u: goto L_001BBE5C;
    case 456u: goto L_001BBE64;
    case 457u: goto L_001BBE74;
    case 458u: goto L_001BBE80;
    case 459u: goto L_001BBE8C;
    case 460u: goto L_001BBE98;
    case 461u: goto L_001BBEA8;
    case 462u: goto L_001BBEB8;
    case 463u: goto L_001BBECC;
    case 464u: goto L_001BBED8;
    case 465u: goto L_001BBEE4;
    case 466u: goto L_001BBEF0;
    case 467u: goto L_001BBF00;
    case 468u: goto L_001BBF0C;
    case 469u: goto L_001BBF1C;
    case 470u: goto L_001BBF28;
    case 471u: goto L_001BBF34;
    case 472u: goto L_001BBF40;
    case 473u: goto L_001BBF50;
    case 474u: goto L_001BBF60;
    case 475u: goto L_001BBF6C;
    case 476u: goto L_001BBF7C;
    case 477u: goto L_001BBF88;
    case 478u: goto L_001BBF94;
    case 479u: goto L_001BBFA0;
    case 480u: goto L_001BBFB0;
    case 481u: goto L_001BBFBC;
    case 482u: goto L_001BBFCC;
    case 483u: goto L_001BBFD8;
    case 484u: goto L_001BBFE4;
    case 485u: goto L_001BBFF0;
    default: bad_entry(c, 0x001B8000u); return;
    }
L_001B8000:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B8118; } }
L_001B8018:
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B8020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8028u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 7u, depth + 1u); else { c.pc = 0x001B8130u; return; } if (c.pc != 0x001B8028u) [[unlikely]] return; }
L_001B8028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B8038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B8118; } }
L_001B8038:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8058u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B8058u) [[unlikely]] return; }
L_001B8058:
    set32(c.r[3], ld32((c.r[17].w[0] + 1252u)));
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_001B8080; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B8090; } }
    c.budget -= 1;
L_001B8080:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B80B8; } }
L_001B8090:
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_001B80B8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B80B8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001B80B8:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_001B80E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B80E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001B8108; } }
    c.budget -= 1;
L_001B80E0:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001B8108; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B8108; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_001B8108:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001B8118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B8130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8158; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B81B8; } }
    c.budget -= 1;
L_001B8158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001B81B0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B81B0; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B81B0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B81B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B81B8; } }
    c.budget -= 1;
L_001B81B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001B81B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B81C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 520u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B81F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 604u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B81F0; } }
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 604u), 0u);
    c.budget -= 2;
L_001B81F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B81FCu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B81FCu) [[unlikely]] return; }
L_001B81FC:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 8536u));
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B8260; } }
    st32((c.r[16].w[0] + 36u), c.f[2]);
    set32(c.r[2], 0u + 70u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_001B8240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B8248; } }
    c.budget -= 1;
L_001B8240:
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B8248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8254u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 92u, depth + 1u); else { c.pc = 0x001B93E0u; return; } if (c.pc != 0x001B8254u) [[unlikely]] return; }
L_001B8254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B82C0; } }
    c.budget -= 1;
L_001B8260:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B82B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B8298; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B82B8; } }
    c.budget -= 1;
L_001B8298:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001B82B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001B82C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B82D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B82F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8340; } }
    c.budget -= 1;
L_001B82F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8340; } }
L_001B8310:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[5].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8340; } }
L_001B8328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8330u);  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B8330u) [[unlikely]] return; }
L_001B8330:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B833Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B833Cu) [[unlikely]] return; }
L_001B833C:
    c.budget -= 1;
L_001B8340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B8350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8398; } }
L_001B8370:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8398; } }
L_001B8388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 83u, depth + 1u); else { c.pc = 0x001B9280u; return; } if (c.pc != 0x001B8390u) [[unlikely]] return; }
L_001B8390:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001B8398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B83B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B83D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8408; } }
L_001B83D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B83E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8408; } }
L_001B83E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001B8400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8408; } }
L_001B8400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8408u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8408u) [[unlikely]] return; }
L_001B8408:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B84B8; } }
L_001B8440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B84B8; } }
L_001B8458:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B84B8; } }
L_001B8470:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 74u);  if (t) { goto L_001B8498; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B8498; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B84B0; } }
    c.budget -= 1;
L_001B8498:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 684u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B84B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B84B8; } }
L_001B84B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B84B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B84B8u) [[unlikely]] return; }
L_001B84B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B84D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B84F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8578; } }
L_001B84F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8558; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 74u);  if (t) { goto L_001B8540; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B8540; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B8540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8578; } }
    c.budget -= 1;
L_001B8540:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8578; } }
L_001B8558:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8578; } }
    c.budget -= 1;
L_001B8570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8578u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8578u) [[unlikely]] return; }
L_001B8578:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B85B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8618; } }
L_001B85B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B85C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8618; } }
L_001B85C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B85E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8618; } }
    c.budget -= 1;
L_001B85E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B85F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8618; } }
L_001B85F8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 684u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8610u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8610u) [[unlikely]] return; }
L_001B8610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8618; } }
L_001B8618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B8670; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8668; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8670; } }
    c.budget -= 1;
L_001B8668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8688; } }
L_001B8670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x001B8678u) [[unlikely]] return; }
L_001B8678:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8684u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8684u) [[unlikely]] return; }
L_001B8684:
    c.budget -= 1;
L_001B8688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B86A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B86C8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B86D0; } }
L_001B86C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8718; } }
L_001B86D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B86E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8718; } }
L_001B86E8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[5].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8718; } }
L_001B8700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8708u);  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B8708u) [[unlikely]] return; }
L_001B8708:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8714u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8714u) [[unlikely]] return; }
L_001B8714:
    c.budget -= 1;
L_001B8718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B8730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8770; } }
L_001B8750:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_001B8768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8770; } }
L_001B8768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8770u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8770u) [[unlikely]] return; }
L_001B8770:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B87A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B87F8; } }
L_001B87A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B87C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B87C8; } }
    c.budget -= 1;
L_001B87C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B87F8; } }
L_001B87C8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B87E8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B87F0; } }
    c.budget -= 1;
L_001B87E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B87F8; } }
L_001B87F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87F8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B87F8u) [[unlikely]] return; }
L_001B87F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B8838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8878; } }
    c.budget -= 1;
L_001B8838:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8860; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8878; } }
    c.budget -= 1;
L_001B8860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B886Cu); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x001B886Cu) [[unlikely]] return; }
L_001B886C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8878u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8878u) [[unlikely]] return; }
L_001B8878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B8890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B88B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B88E8; } }
    c.budget -= 1;
L_001B88B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B88C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B88E8; } }
L_001B88C8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 684u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B88E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B88E0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B88E0u) [[unlikely]] return; }
L_001B88E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B88E8; } }
L_001B88E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8958; } }
    c.budget -= 1;
L_001B8920:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8958; } }
L_001B8938:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8950u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8950u) [[unlikely]] return; }
L_001B8950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8958; } }
L_001B8958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8970:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8998u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001B8998u) [[unlikely]] return; }
L_001B8998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B89A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8AC8; } }
L_001B89A8:
    st8((c.r[21].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8682u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B8AB0; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B8A90; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[17], c.r[29].w[0] + 120u);
    set32(c.r[16], c.r[29].w[0] + 124u);
    set32(c.r[20], c.r[2].w[0] + 8192u);
    c.budget -= 7;
L_001B89E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B89F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001B89F0u) [[unlikely]] return; }
L_001B89F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A14u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001B8A14u) [[unlikely]] return; }
L_001B8A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A38u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001B8A38u) [[unlikely]] return; }
L_001B8A38:
    st32((c.r[18].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001B8A78; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A6Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B8A6Cu) [[unlikely]] return; }
L_001B8A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001B8A78:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B89E8u | kUnwind; return; } goto L_001B89E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8AA0; } }
L_001B8A90:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A9Cu); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001B8A9Cu) [[unlikely]] return; }
L_001B8A9C:
    c.budget -= 1;
L_001B8AA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AACu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001B8AACu) [[unlikely]] return; }
L_001B8AAC:
    c.budget -= 1;
L_001B8AB0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8ABCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8ABCu) [[unlikely]] return; }
L_001B8ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AC4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001B8AC4u) [[unlikely]] return; }
L_001B8AC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B8AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B8AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B8B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8B90; } }
L_001B8B10:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8B90; } }
    c.budget -= 1;
L_001B8B28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8B90; } }
L_001B8B40:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8B90; } }
    c.budget -= 1;
L_001B8B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B70u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8B70u) [[unlikely]] return; }
L_001B8B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8B90; } }
L_001B8B80:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B8B8Cu) [[unlikely]] return; }
L_001B8B8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B8B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B8BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8BF8; } }
L_001B8BC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8BF0; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8BE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8BF0; } }
L_001B8BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8BF8; } }
L_001B8BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BF8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8BF8u) [[unlikely]] return; }
L_001B8BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B8C40; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B8C48; } }
    c.budget -= 1;
L_001B8C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8D20; } }
L_001B8C48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8D20; } }
L_001B8C60:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8D20; } }
    c.budget -= 1;
L_001B8C78:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8D20; } }
    c.budget -= 1;
L_001B8CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CA8u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8CA8u) [[unlikely]] return; }
L_001B8CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8D20; } }
L_001B8CB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8688u);
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[2].w[0] << 10);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CE8u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001B8CE8u) [[unlikely]] return; }
L_001B8CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8D00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[16].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 4;
L_001B8D00:
    st16((c.r[16].w[0] + 858u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 8;
L_001B8D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B8D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8676u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8DB8; } }
L_001B8D60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8DB8; } }
L_001B8D78:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 682u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8DB8; } }
L_001B8D98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 20u);  if (t) { goto L_001B8DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8DB8; } }
L_001B8DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DB8u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8DB8u) [[unlikely]] return; }
L_001B8DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B8DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B8DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8E48; } }
    c.budget -= 1;
L_001B8DF8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E48; } }
L_001B8E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E18u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001B8E18u) [[unlikely]] return; }
L_001B8E18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E24u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B8E24u) [[unlikely]] return; }
L_001B8E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8E48; } }
    c.budget -= 1;
L_001B8E38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E44u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001B8E44u) [[unlikely]] return; }
L_001B8E44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B8E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B8E60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_001B8EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9728u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001B8EA8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001B8EB0; } }
L_001B8EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001B8F08; } }
L_001B8EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001B8F08; } }
L_001B8EB8:
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 9872u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[6].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001B8EF8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001B8F00; } }
L_001B8EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001B8F08; } }
L_001B8F00:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001B8F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B8F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8F50; } }
L_001B8F20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B8F40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B8F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8F50; } }
    c.budget -= 1;
L_001B8F40:
    st8((c.r[4].w[0] + 820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 704u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001B8F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8F60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_001B8FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9728u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 32u);
    set32(c.r[6], c.r[6].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[9], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001B8FA8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001B8FB0; } }
L_001B8FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001B9008; } }
L_001B8FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001B9008; } }
L_001B8FB8:
    c.r[8].d[0] = c.r[5].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 9872u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[7].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 13;
    { const bool t = c.r[8].d[0] == c.r[2].d[0]; set32(c.r[9], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001B8FF8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_001B9000; } }
L_001B8FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001B9008; } }
L_001B9000:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_001B9008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9060; } }
L_001B9020:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 821u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B9050; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B9050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9060; } }
    c.budget -= 1;
L_001B9050:
    st8((c.r[4].w[0] + 821u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 708u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 786u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001B9060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B90A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9098u);  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0025BC70u; return; } if (c.pc != 0x001B9098u) [[unlikely]] return; }
L_001B9098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B91E8; } }
L_001B90A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B90D0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 792u));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B90D0; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B90D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B90D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001B90D8u) [[unlikely]] return; }
L_001B90D8:
    st32((c.r[17].w[0] + 1264u), 0u);
    set32(c.r[2], 0u - 31229u);
    st32((c.r[17].w[0] + 1260u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9100u); st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B9100u) [[unlikely]] return; }
L_001B9100:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B910Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001B910Cu) [[unlikely]] return; }
L_001B910C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9150; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_001B9130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B9138; } }
L_001B9130:
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B9138:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9144u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 92u, depth + 1u); else { c.pc = 0x001B93E0u; return; } if (c.pc != 0x001B9144u) [[unlikely]] return; }
L_001B9144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B91E8; } }
    c.budget -= 1;
L_001B9150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001B9158u) [[unlikely]] return; }
L_001B9158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B91E8; } }
    st32((c.r[17].w[0] + 108u), 0u);
    c.f[12] = 0u;
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 70u);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001B91A0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9194u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B9194u) [[unlikely]] return; }
L_001B9194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B91B8; } }
    c.budget -= 1;
L_001B91A0:
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B91B8u) [[unlikely]] return; }
L_001B91B8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B91D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91D4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B91D4u) [[unlikely]] return; }
L_001B91D4:
    c.budget -= 1;
L_001B91D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B91E4u) [[unlikely]] return; }
L_001B91E4:
    c.budget -= 1;
L_001B91E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B9228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9220u);  if (depth < kMaxDepth) unit_0056(c, 322u, depth + 1u); else { c.pc = 0x0025BDC0u; return; } if (c.pc != 0x001B9220u) [[unlikely]] return; }
L_001B9220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9270; } }
L_001B9228:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9258; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B9258; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B9258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001B9260u) [[unlikely]] return; }
L_001B9260:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B926Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001B926Cu) [[unlikely]] return; }
L_001B926C:
    c.budget -= 1;
L_001B9270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B9280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B92B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B92A8u);  if (depth < kMaxDepth) unit_0056(c, 325u, depth + 1u); else { c.pc = 0x0025BE30u; return; } if (c.pc != 0x001B92A8u) [[unlikely]] return; }
L_001B92A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B93C0; } }
L_001B92B0:
    st32((c.r[17].w[0] + 1264u), 0u);
    st32((c.r[17].w[0] + 1260u), 0u);
    set32(c.r[2], 0u - 31229u);
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B92D4u); st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B92D4u) [[unlikely]] return; }
L_001B92D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9328; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9328; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_001B9308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B9310; } }
L_001B9308:
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B9310:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B931Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 92u, depth + 1u); else { c.pc = 0x001B93E0u; return; } if (c.pc != 0x001B931Cu) [[unlikely]] return; }
L_001B931C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B93C0; } }
    c.budget -= 1;
L_001B9328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001B9330u) [[unlikely]] return; }
L_001B9330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B93C0; } }
    st32((c.r[17].w[0] + 108u), 0u);
    c.f[12] = 0u;
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 70u);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001B9378; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B936Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B936Cu) [[unlikely]] return; }
L_001B936C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9390; } }
    c.budget -= 1;
L_001B9378:
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9390u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x001B9390u) [[unlikely]] return; }
L_001B9390:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B93B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B93ACu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001B93ACu) [[unlikely]] return; }
L_001B93AC:
    c.budget -= 1;
L_001B93B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B93BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B93BCu) [[unlikely]] return; }
L_001B93BC:
    c.budget -= 1;
L_001B93C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B93E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B9488; } }
    set32(c.r[3], 0u - 31232u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B9438; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001B9438:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B9458u) [[unlikely]] return; }
L_001B9458:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001B9498; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9480u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001B9480u) [[unlikely]] return; }
L_001B9480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9498; } }
L_001B9488:
    set32(c.r[2], 0u - 31231u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B9498:
    st32((c.r[17].w[0] + 1264u), 0u);
    st32((c.r[17].w[0] + 1260u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94B4u); st16((c.r[17].w[0] + 858u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001B94B4u) [[unlikely]] return; }
L_001B94B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8682u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B94D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94CCu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B94CCu) [[unlikely]] return; }
L_001B94CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B94E8; } }
    c.budget -= 1;
L_001B94D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001B94E4u) [[unlikely]] return; }
L_001B94E4:
    c.budget -= 1;
L_001B94E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8592u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[4].w[0] + 8560u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 8672u);
    st8((c.r[4].w[0] + 8561u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B954Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B954Cu) [[unlikely]] return; }
L_001B954C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9554u); set32(c.r[17], c.r[16].w[0] + 5092u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001B9554u) [[unlikely]] return; }
L_001B9554:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9560u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001B9560u) [[unlikely]] return; }
L_001B9560:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B956Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001B956Cu) [[unlikely]] return; }
L_001B956C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9574u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001B9574u) [[unlikely]] return; }
L_001B9574:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9580u); set32(c.r[5], c.r[16].w[0] + 5680u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001B9580u) [[unlikely]] return; }
L_001B9580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9588u); set32(c.r[17], c.r[16].w[0] + 5128u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001B9588u) [[unlikely]] return; }
L_001B9588:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9594u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001B9594u) [[unlikely]] return; }
L_001B9594:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95A0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001B95A0u) [[unlikely]] return; }
L_001B95A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95A8u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001B95A8u) [[unlikely]] return; }
L_001B95A8:
    set32(c.r[5], c.r[16].w[0] + 5664u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95B4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001B95B4u) [[unlikely]] return; }
L_001B95B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B95D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 4052u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 2352u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2356u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2360u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2544u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8532u));
    c.f[0] = ld32((c.r[4].w[0] + 8528u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B964Cu); c.f[21] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001B964Cu) [[unlikely]] return; }
L_001B964C:
    c.f[1] = ld32((c.r[19].w[0] + 8532u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9660u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001B9660u) [[unlikely]] return; }
L_001B9660:
    c.f[1] = ld32((c.r[19].w[0] + 8532u));
    c.f[2] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_001B9710; } }
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 2u);  if (t) { goto L_001B9710; } }
    st8((c.r[19].w[0] + 8560u), static_cast<std::uint8_t>(c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[19].w[0] + 8561u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B96B8; } }
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8536u));
    c.f[5] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B96D8; } }
    c.f[5] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 8561u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B96D8; } }
L_001B96B8:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8536u));
    c.f[5] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B96D8; } }
    c.f[5] = 0u;
    st8((c.r[19].w[0] + 8560u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B96D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 8576u));
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[16].w[0]), c.f[20]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001B9818; } }
L_001B9710:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 2u);  if (t) { goto L_001B9790; } }
    st8((c.r[19].w[0] + 8560u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8536u));
    c.f[2] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9740; } }
    c.f[2] = 0u;
    st8((c.r[19].w[0] + 8560u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B9740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 8576u));
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[16].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::sub(c.f[5], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0]), c.f[1]);  if (t) { goto L_001B9818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001B9818; } }
L_001B9790:
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 2u);  if (t) { goto L_001B9818; } }
    st8((c.r[19].w[0] + 8561u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8536u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B97C8; } }
    c.f[2] = 0u;
    st8((c.r[19].w[0] + 8561u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001B97C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 8576u));
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::sub(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001B9818; } }
    st32((c.r[16].w[0]), c.f[20]);
    c.budget -= 2;
L_001B9818:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[19].w[0] + 5600u), c.f[3]);
    st32((c.r[19].w[0] + 5604u), c.f[2]);
    st32((c.r[19].w[0] + 5608u), c.f[1]);
    st32((c.r[19].w[0] + 5612u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 5616u), c.f[3]);
    st32((c.r[19].w[0] + 5620u), c.f[2]);
    st32((c.r[19].w[0] + 5624u), c.f[1]);
    st32((c.r[19].w[0] + 5628u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B9890:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 4052u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 2352u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2356u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2360u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2544u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8532u));
    c.f[0] = ld32((c.r[4].w[0] + 8528u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B990Cu); c.f[21] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001B990Cu) [[unlikely]] return; }
L_001B990C:
    c.f[1] = ld32((c.r[19].w[0] + 8532u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9920u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 222u, depth + 1u); else { c.pc = 0x00146F90u; return; } if (c.pc != 0x001B9920u) [[unlikely]] return; }
L_001B9920:
    c.f[1] = ld32((c.r[19].w[0] + 8532u));
    c.f[2] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_001B9950; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9950; } }
    st32((c.r[16].w[0]), c.f[20]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 8560u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B9950:
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9978; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9978; } }
    st32((c.r[17].w[0]), c.f[4]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 8561u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001B9978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[1] = ld32((c.r[19].w[0] + 8576u));
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B99D8; } }
    st32((c.r[16].w[0]), c.f[20]);
    c.budget -= 2;
L_001B99D8:
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B99F0; } }
    st32((c.r[17].w[0]), c.f[4]);
    c.budget -= 2;
L_001B99F0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[19].w[0] + 5600u), c.f[3]);
    st32((c.r[19].w[0] + 5604u), c.f[2]);
    st32((c.r[19].w[0] + 5608u), c.f[1]);
    st32((c.r[19].w[0] + 5612u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 5616u), c.f[3]);
    st32((c.r[19].w[0] + 5620u), c.f[2]);
    st32((c.r[19].w[0] + 5624u), c.f[1]);
    st32((c.r[19].w[0] + 5628u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B9A60:
    c.f[0] = ld32((c.r[4].w[0] + 2352u));
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2356u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2360u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2544u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 5600u), c.f[3]);
    st32((c.r[4].w[0] + 5604u), c.f[2]);
    st32((c.r[4].w[0] + 5608u), c.f[1]);
    st32((c.r[4].w[0] + 5612u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 5616u), c.f[3]);
    st32((c.r[4].w[0] + 5620u), c.f[2]);
    st32((c.r[4].w[0] + 5624u), c.f[1]);
    st32((c.r[4].w[0] + 5628u), c.f[0]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B9AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B14u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001B9B14u) [[unlikely]] return; }
L_001B9B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B1Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001B9B1Cu) [[unlikely]] return; }
L_001B9B1C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B2Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001B9B2Cu) [[unlikely]] return; }
L_001B9B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B34u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001B9B34u) [[unlikely]] return; }
L_001B9B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001B9B3Cu) [[unlikely]] return; }
L_001B9B3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B4Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001B9B4Cu) [[unlikely]] return; }
L_001B9B4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B58u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001B9B58u) [[unlikely]] return; }
L_001B9B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9B60u) [[unlikely]] return; }
L_001B9B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B9B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001B9BA8u) [[unlikely]] return; }
L_001B9BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BB0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001B9BB0u) [[unlikely]] return; }
L_001B9BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001B9BB8u) [[unlikely]] return; }
L_001B9BB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001B9BC8u) [[unlikely]] return; }
L_001B9BC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001B9BD4u) [[unlikely]] return; }
L_001B9BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BDCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9BDCu) [[unlikely]] return; }
L_001B9BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B9C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C34u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001B9C34u) [[unlikely]] return; }
L_001B9C34:
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C40u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B9C40u) [[unlikely]] return; }
L_001B9C40:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C58u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B9C58u) [[unlikely]] return; }
L_001B9C58:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B9C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CB4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001B9CB4u) [[unlikely]] return; }
L_001B9CB4:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CC0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B9CC0u) [[unlikely]] return; }
L_001B9CC0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CD8u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001B9CD8u) [[unlikely]] return; }
L_001B9CD8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B9D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.f[20] = c.f[12];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D44u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001B9D44u) [[unlikely]] return; }
L_001B9D44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001B9D50u) [[unlikely]] return; }
L_001B9D50:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9D90; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9D90; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9D90; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9DA0; } }
    c.budget -= 1;
L_001B9D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9D98u) [[unlikely]] return; }
L_001B9D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9E08; } }
L_001B9DA0:
    fpu_div(c, 0u, c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_001B9DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DC4u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9DC4u) [[unlikely]] return; }
L_001B9DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9E08; } }
    c.budget -= 1;
L_001B9DD0:
    set32(c.r[4], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E04u); st32((c.r[16].w[0] + 8u), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9E04u) [[unlikely]] return; }
L_001B9E04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B9E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B9E20:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B9E48; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9E50; } }
L_001B9E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9EE8; } }
L_001B9E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 29104u);
    c.f[1] = fp::add(c.f[12], c.f[13]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 8u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[13]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[13]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[12]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
L_001B9EA0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9EA0u | kUnwind; return; } goto L_001B9EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EC8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 201u, depth + 1u); else { c.pc = 0x00127240u; return; } if (c.pc != 0x001B9EC8u) [[unlikely]] return; }
L_001B9EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9ED0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001B9ED0u) [[unlikely]] return; }
L_001B9ED0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001B9EDCu) [[unlikely]] return; }
L_001B9EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9EE4u) [[unlikely]] return; }
L_001B9EE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B9EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B9F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] + 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F28u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001B9F28u) [[unlikely]] return; }
L_001B9F28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001B9F34u) [[unlikely]] return; }
L_001B9F34:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9F70; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9F70; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9F70; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9F80; } }
L_001B9F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F78u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9F78u) [[unlikely]] return; }
L_001B9F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9FE8; } }
L_001B9F80:
    fpu_div(c, 0u, c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_001B9FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FA4u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9FA4u) [[unlikely]] return; }
L_001B9FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9FE8; } }
    c.budget -= 1;
L_001B9FB0:
    set32(c.r[4], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FE4u); st32((c.r[16].w[0] + 8u), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001B9FE4u) [[unlikely]] return; }
L_001B9FE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B9FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BA000:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA024u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BA024u) [[unlikely]] return; }
L_001BA024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA02Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BA02Cu) [[unlikely]] return; }
L_001BA02C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA038u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001BA038u) [[unlikely]] return; }
L_001BA038:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA044u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001BA044u) [[unlikely]] return; }
L_001BA044:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA054u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA054u) [[unlikely]] return; }
L_001BA054:
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001BA108; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA098u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA098u) [[unlikely]] return; }
L_001BA098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0A0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA0A0u) [[unlikely]] return; }
L_001BA0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0A8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA0A8u) [[unlikely]] return; }
L_001BA0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0B0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA0B0u) [[unlikely]] return; }
L_001BA0B0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 22;
L_001BA108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BA120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA144u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BA144u) [[unlikely]] return; }
L_001BA144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA14Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BA14Cu) [[unlikely]] return; }
L_001BA14C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA158u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001BA158u) [[unlikely]] return; }
L_001BA158:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA164u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001BA164u) [[unlikely]] return; }
L_001BA164:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA174u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA174u) [[unlikely]] return; }
L_001BA174:
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001BA228; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1B8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA1B8u) [[unlikely]] return; }
L_001BA1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1C0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA1C0u) [[unlikely]] return; }
L_001BA1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1C8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA1C8u) [[unlikely]] return; }
L_001BA1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1D0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA1D0u) [[unlikely]] return; }
L_001BA1D0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 22;
L_001BA228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BA240:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA274u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA274u) [[unlikely]] return; }
L_001BA274:
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BA660; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_002E[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001BA2A0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2ACu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA2ACu) [[unlikely]] return; }
L_001BA2AC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA2BCu) [[unlikely]] return; }
L_001BA2BC:
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2D0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA2D0u) [[unlikely]] return; }
L_001BA2D0:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BA330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA308u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA308u) [[unlikely]] return; }
L_001BA308:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA318u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA318u) [[unlikely]] return; }
L_001BA318:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA324u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA324u) [[unlikely]] return; }
L_001BA324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA660; } }
    c.budget -= 1;
L_001BA330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA338u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA338u) [[unlikely]] return; }
L_001BA338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001BA660; } }
L_001BA340:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA34Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA34Cu) [[unlikely]] return; }
L_001BA34C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA35Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA35Cu) [[unlikely]] return; }
L_001BA35C:
    set32(c.r[19], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA370u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA370u) [[unlikely]] return; }
L_001BA370:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BA3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3A8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA3A8u) [[unlikely]] return; }
L_001BA3A8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3B8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA3B8u) [[unlikely]] return; }
L_001BA3B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA3C4u) [[unlikely]] return; }
L_001BA3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA660; } }
    c.budget -= 1;
L_001BA3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3D8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA3D8u) [[unlikely]] return; }
L_001BA3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001BA660; } }
L_001BA3E0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA3F0u) [[unlikely]] return; }
L_001BA3F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3FCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA3FCu) [[unlikely]] return; }
L_001BA3FC:
    set32(c.r[18], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA410u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA410u) [[unlikely]] return; }
L_001BA410:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA448u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA448u) [[unlikely]] return; }
L_001BA448:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA458u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA458u) [[unlikely]] return; }
L_001BA458:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA464u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA464u) [[unlikely]] return; }
L_001BA464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA660; } }
    c.budget -= 1;
L_001BA470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA478u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA478u) [[unlikely]] return; }
L_001BA478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001BA660; } }
L_001BA480:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA490u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA490u) [[unlikely]] return; }
L_001BA490:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA4A0u) [[unlikely]] return; }
L_001BA4A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4B0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA4B0u) [[unlikely]] return; }
L_001BA4B0:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001BA510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA4E8u) [[unlikely]] return; }
L_001BA4E8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4F8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA4F8u) [[unlikely]] return; }
L_001BA4F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA504u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA504u) [[unlikely]] return; }
L_001BA504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA660; } }
    c.budget -= 1;
L_001BA510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA518u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA518u) [[unlikely]] return; }
L_001BA518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001BA660; } }
L_001BA520:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA530u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA530u) [[unlikely]] return; }
L_001BA530:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA53Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA53Cu) [[unlikely]] return; }
L_001BA53C:
    set32(c.r[18], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA550u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA550u) [[unlikely]] return; }
L_001BA550:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA588u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA588u) [[unlikely]] return; }
L_001BA588:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA598u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA598u) [[unlikely]] return; }
L_001BA598:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA5A4u) [[unlikely]] return; }
L_001BA5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA660; } }
    c.budget -= 1;
L_001BA5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5B8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA5B8u) [[unlikely]] return; }
L_001BA5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001BA660; } }
L_001BA5C0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA5D0u) [[unlikely]] return; }
L_001BA5D0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA5E0u) [[unlikely]] return; }
L_001BA5E0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5F0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA5F0u) [[unlikely]] return; }
L_001BA5F0:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001BA650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA628u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA628u) [[unlikely]] return; }
L_001BA628:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA638u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x001BA638u) [[unlikely]] return; }
L_001BA638:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA644u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x001BA644u) [[unlikely]] return; }
L_001BA644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA660; } }
    c.budget -= 1;
L_001BA650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA658u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x001BA658u) [[unlikely]] return; }
L_001BA658:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001BA660:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA66Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x001BA66Cu) [[unlikely]] return; }
L_001BA66C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BA690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6D4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BA6D4u) [[unlikely]] return; }
L_001BA6D4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BA6E0u) [[unlikely]] return; }
L_001BA6E0:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001BA70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001BA728; } }
L_001BA70C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BA728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001BA728; } }
L_001BA728:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA738u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA738u) [[unlikely]] return; }
L_001BA738:
    set32(c.r[3], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BA780; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BA780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA788u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BA788u) [[unlikely]] return; }
L_001BA788:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA798u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001BA798u) [[unlikely]] return; }
L_001BA798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BA7A0u) [[unlikely]] return; }
L_001BA7A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7ACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BA7ACu) [[unlikely]] return; }
L_001BA7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BA7B4u) [[unlikely]] return; }
L_001BA7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BA7D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA814u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BA814u) [[unlikely]] return; }
L_001BA814:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA820u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BA820u) [[unlikely]] return; }
L_001BA820:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001BA84C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001BA868; } }
L_001BA84C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BA868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001BA868; } }
L_001BA868:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA878u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA878u) [[unlikely]] return; }
L_001BA878:
    set32(c.r[3], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BA8C0; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BA8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BA8C8u) [[unlikely]] return; }
L_001BA8C8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8D8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001BA8D8u) [[unlikely]] return; }
L_001BA8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8E0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BA8E0u) [[unlikely]] return; }
L_001BA8E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8ECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BA8ECu) [[unlikely]] return; }
L_001BA8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BA8F4u) [[unlikely]] return; }
L_001BA8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BA910:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA958u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BA958u) [[unlikely]] return; }
L_001BA958:
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[17], c.r[29].w[0] + 276u);
    set32(c.r[22], c.r[29].w[0] + 280u);
    set32(c.r[16], c.r[29].w[0] + 288u);
    set32(c.r[23], c.r[29].w[0] + 292u);
    set32(c.r[30], c.r[29].w[0] + 296u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9A4u); st32((c.r[30].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA9A4u) [[unlikely]] return; }
L_001BA9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BA9ACu) [[unlikely]] return; }
L_001BA9AC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001BA9B8u) [[unlikely]] return; }
L_001BA9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9C0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BA9C0u) [[unlikely]] return; }
L_001BA9C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9D4u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BA9D4u) [[unlikely]] return; }
L_001BA9D4:
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[3], c.r[29].w[0] + 248u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[29].w[0] + 240u);  if (t) { goto L_001BAA28; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA20u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001BAA20u) [[unlikely]] return; }
L_001BAA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BAA38; } }
L_001BAA28:
    st32((c.r[29].w[0] + 240u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 4;
L_001BAA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA40u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BAA40u) [[unlikely]] return; }
L_001BAA40:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BAA4Cu) [[unlikely]] return; }
L_001BAA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA54u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BAA54u) [[unlikely]] return; }
L_001BAA54:
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[29].w[0] + 272u), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA8Cu); st32((c.r[30].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BAA8Cu) [[unlikely]] return; }
L_001BAA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BAA94u) [[unlikely]] return; }
L_001BAA94:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001BAAA0u) [[unlikely]] return; }
L_001BAAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAA8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BAAA8u) [[unlikely]] return; }
L_001BAAA8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 256u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAC0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BAAC0u) [[unlikely]] return; }
L_001BAAC0:
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BAB18; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB10u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001BAB10u) [[unlikely]] return; }
L_001BAB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BAB28; } }
L_001BAB18:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BAB28:
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB5Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BAB5Cu) [[unlikely]] return; }
L_001BAB5C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB68u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BAB68u) [[unlikely]] return; }
L_001BAB68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BAB74u) [[unlikely]] return; }
L_001BAB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BAB7Cu) [[unlikely]] return; }
L_001BAB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BAB84u) [[unlikely]] return; }
L_001BAB84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001BABC0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC08u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BAC08u) [[unlikely]] return; }
L_001BAC08:
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[23], c.r[29].w[0] + 260u);
    set32(c.r[30], c.r[29].w[0] + 264u);
    set32(c.r[21], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 276u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC54u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BAC54u) [[unlikely]] return; }
L_001BAC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC5Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BAC5Cu) [[unlikely]] return; }
L_001BAC5C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC68u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001BAC68u) [[unlikely]] return; }
L_001BAC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC70u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BAC70u) [[unlikely]] return; }
L_001BAC70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC84u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BAC84u) [[unlikely]] return; }
L_001BAC84:
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[3], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[29].w[0] + 224u);  if (t) { goto L_001BACD8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACD0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001BACD0u) [[unlikely]] return; }
L_001BACD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BACE8; } }
L_001BACD8:
    st32((c.r[29].w[0] + 224u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 4;
L_001BACE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACF0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BACF0u) [[unlikely]] return; }
L_001BACF0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BACFCu) [[unlikely]] return; }
L_001BACFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD04u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BAD04u) [[unlikely]] return; }
L_001BAD04:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD44u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BAD44u) [[unlikely]] return; }
L_001BAD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD4Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BAD4Cu) [[unlikely]] return; }
L_001BAD4C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD58u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001BAD58u) [[unlikely]] return; }
L_001BAD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD60u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BAD60u) [[unlikely]] return; }
L_001BAD60:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD78u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BAD78u) [[unlikely]] return; }
L_001BAD78:
    c.f[1] = ld32((c.r[21].w[0]));
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[3], c.r[29].w[0] + 248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BADD0; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADC8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001BADC8u) [[unlikely]] return; }
L_001BADC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BADE0; } }
L_001BADD0:
    st32((c.r[21].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BADE0:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BADF8; } }
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001BADF8:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BAE10; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001BAE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001BAE18u) [[unlikely]] return; }
L_001BAE18:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE24u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BAE24u) [[unlikely]] return; }
L_001BAE24:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BAE30u) [[unlikely]] return; }
L_001BAE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE38u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BAE38u) [[unlikely]] return; }
L_001BAE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE40u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BAE40u) [[unlikely]] return; }
L_001BAE40:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001BAE80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].d[0] = c.r[6].d[0] << 56;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] << 6);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[29].w[0] + 228u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], c.r[29].w[0] + 212u);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    set32(c.r[16], c.r[29].w[0] + 216u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2000u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2004u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2008u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF24u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001BAF24u) [[unlikely]] return; }
L_001BAF24:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[18], c.r[2].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[2].w[0] + 1984u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1988u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1992u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF74u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001BAF74u) [[unlikely]] return; }
L_001BAF74:
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[2].w[0] + 2000u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2004u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2008u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFB8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001BAFB8u) [[unlikely]] return; }
L_001BAFB8:
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[2].w[0] + 2016u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 2020u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2024u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFFCu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001BAFFCu) [[unlikely]] return; }
L_001BAFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB004u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB004u) [[unlikely]] return; }
L_001BB004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB00Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB00Cu) [[unlikely]] return; }
L_001BB00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB014u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB014u) [[unlikely]] return; }
L_001BB014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB01Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB01Cu) [[unlikely]] return; }
L_001BB01C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB02Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BB02Cu) [[unlikely]] return; }
L_001BB02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB034u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB034u) [[unlikely]] return; }
L_001BB034:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB040u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB040u) [[unlikely]] return; }
L_001BB040:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB050u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB050u) [[unlikely]] return; }
L_001BB050:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB05Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001BB05Cu) [[unlikely]] return; }
L_001BB05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001BB090:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].d[0] = c.r[6].d[0] << 56;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[2].w[0] << 6);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2032u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[29].w[0] + 212u);
    set32(c.r[18], c.r[29].w[0] + 216u);
    set32(c.r[17], c.r[29].w[0] + 196u);
    set32(c.r[16], c.r[29].w[0] + 200u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2036u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2040u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1984u));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1988u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1992u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB140u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001BB140u) [[unlikely]] return; }
L_001BB140:
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[2].w[0] + 2000u));
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 2004u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2008u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB184u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001BB184u) [[unlikely]] return; }
L_001BB184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB18Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB18Cu) [[unlikely]] return; }
L_001BB18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB194u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB194u) [[unlikely]] return; }
L_001BB194:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1A4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BB1A4u) [[unlikely]] return; }
L_001BB1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1ACu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB1ACu) [[unlikely]] return; }
L_001BB1AC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1BCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BB1BCu) [[unlikely]] return; }
L_001BB1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1C4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001BB1C4u) [[unlikely]] return; }
L_001BB1C4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1D0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB1D0u) [[unlikely]] return; }
L_001BB1D0:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1E0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB1E0u) [[unlikely]] return; }
L_001BB1E0:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1ECu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001BB1ECu) [[unlikely]] return; }
L_001BB1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001BB220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[4].w[0] + 4u));
    c.f[13] = ld32((c.r[4].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB244u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001BB244u) [[unlikely]] return; }
L_001BB244:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB254u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x00125F30u; return; } if (c.pc != 0x001BB254u) [[unlikely]] return; }
L_001BB254:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.f[13] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB268u); set32(c.r[16], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001BB268u) [[unlikely]] return; }
L_001BB268:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BB280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2ACu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BB2ACu) [[unlikely]] return; }
L_001BB2AC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BB2B8u) [[unlikely]] return; }
L_001BB2B8:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB2C8u) [[unlikely]] return; }
L_001BB2C8:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001BB2F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001BB310; } }
L_001BB2F4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001BB310; } }
L_001BB310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB318u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BB318u) [[unlikely]] return; }
L_001BB318:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB32Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BB32Cu) [[unlikely]] return; }
L_001BB32C:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB370; } }
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_001BB370:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BB3A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB3D0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BB3D0u) [[unlikely]] return; }
L_001BB3D0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB3DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BB3DCu) [[unlikely]] return; }
L_001BB3DC:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB3ECu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB3ECu) [[unlikely]] return; }
L_001BB3EC:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001BB418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001BB434; } }
L_001BB418:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001BB434; } }
L_001BB434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB43Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BB43Cu) [[unlikely]] return; }
L_001BB43C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001BB458; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001BB458:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB468u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BB468u) [[unlikely]] return; }
L_001BB468:
    set32(c.r[3], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[29].w[0] + 120u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB4B0; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BB4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB4B8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BB4B8u) [[unlikely]] return; }
L_001BB4B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB4C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BB4C4u) [[unlikely]] return; }
L_001BB4C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB4D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001BB4D0u) [[unlikely]] return; }
L_001BB4D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BB500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[21] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB528u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BB528u) [[unlikely]] return; }
L_001BB528:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001BB534u) [[unlikely]] return; }
L_001BB534:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB544u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001BB544u) [[unlikely]] return; }
L_001BB544:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001BB570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001BB58C; } }
L_001BB570:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001BB58C; } }
L_001BB58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB594u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001BB594u) [[unlikely]] return; }
L_001BB594:
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB5B8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001BB5B8u) [[unlikely]] return; }
L_001BB5B8:
    set32(c.r[3], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB600; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BB600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB608u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BB608u) [[unlikely]] return; }
L_001BB608:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB614u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001BB614u) [[unlikely]] return; }
L_001BB614:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB620u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001BB620u) [[unlikely]] return; }
L_001BB620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BB640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 256u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 318u, depth + 1u); else { c.pc = 0x001035A8u; return; } if (c.pc != 0x001BB698u) [[unlikely]] return; }
L_001BB698:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[1].w[0] + 19704u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001BB6B8; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 2;
L_001BB6B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[1].w[0] + 19700u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB6D8; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 2;
L_001BB6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BB6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BB788; } }
L_001BB6E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 12u, 4u, 4u, 5u);
    vu::mul(c.vu0, 12u, 4u, 4u, 6u);
    vu::move(c.vu0, 3u, 4u, 6u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_001BB778; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB778; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD970000u);
    c.r[2].d[0] = c.r[2].d[0] | 36176ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3D970000u);  if (t) { goto L_001BB778; } }
    c.r[2].d[0] = c.r[2].d[0] | 36176ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BB780; } }
L_001BB778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BB788; } }
L_001BB780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001BB788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BB7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45BE0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 31208ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7D0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x001BB7D0u) [[unlikely]] return; }
L_001BB7D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40B70000u);
    c.r[3].d[0] = 0ull | 54908ull;
    c.r[4].d[0] = c.r[4].d[0] | 42509ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 35425ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x001BB7F4u) [[unlikely]] return; }
L_001BB7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x001BB7FCu) [[unlikely]] return; }
L_001BB7FC:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BB820:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 850u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[6], c.r[4].w[0] + 4032u);
    set32(c.r[7], c.r[4].w[0] + 5056u);
    set32(c.r[8], c.r[4].w[0] + 4544u);
    c.r[10].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_002E[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001BB880:
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[6], c.r[4].w[0] + 4032u);
    set32(c.r[7], c.r[4].w[0] + 5056u);
    c.budget -= 5;
    { set32(c.r[8], c.r[4].w[0] + 4544u);  [[clang::musttail]] return unit_002F(c, 664u, depth); }
L_001BB8A0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 7936u);
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[6], c.r[4].w[0] + 4032u);
    set32(c.r[7], c.r[4].w[0] + 5056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_002E[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001BB8D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB904u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001BB904u) [[unlikely]] return; }
L_001BB904:
    c.f[5] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB92Cu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BB92Cu) [[unlikely]] return; }
L_001BB92C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 8592u);  if (t) { goto L_001BB988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB940u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001BB940u) [[unlikely]] return; }
L_001BB940:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB94Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BB94Cu) [[unlikely]] return; }
L_001BB94C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB958u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BB958u) [[unlikely]] return; }
L_001BB958:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB964u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BB964u) [[unlikely]] return; }
L_001BB964:
    c.f[0] = ld32((c.r[20].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB97Cu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BB97Cu) [[unlikely]] return; }
L_001BB97C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB9D0; } }
    c.budget -= 1;
L_001BB988:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9A0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BB9A0u) [[unlikely]] return; }
L_001BB9A0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9B8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BB9B8u) [[unlikely]] return; }
L_001BB9B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9D0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BB9D0u) [[unlikely]] return; }
L_001BB9D0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9E0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BB9E0u) [[unlikely]] return; }
L_001BB9E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9ECu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BB9ECu) [[unlikely]] return; }
L_001BB9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9F4u); c.r[4].d[0] = ld16((c.r[20].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BB9F4u) [[unlikely]] return; }
L_001BB9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9FCu); c.r[4].d[0] = ld16((c.r[20].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BB9FCu) [[unlikely]] return; }
L_001BB9FC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA0Cu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBA0Cu) [[unlikely]] return; }
L_001BBA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA14u); c.r[4].d[0] = ld16((c.r[20].w[0] + 852u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBA14u) [[unlikely]] return; }
L_001BBA14:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA20u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBA20u) [[unlikely]] return; }
L_001BBA20:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA2Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBA2Cu) [[unlikely]] return; }
L_001BBA2C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA38u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBA38u) [[unlikely]] return; }
L_001BBA38:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA48u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBA48u) [[unlikely]] return; }
L_001BBA48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA58u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBA58u) [[unlikely]] return; }
L_001BBA58:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA64u); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BBA64u) [[unlikely]] return; }
L_001BBA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA6Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBA6Cu) [[unlikely]] return; }
L_001BBA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA74u); c.r[4].d[0] = ld16((c.r[20].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBA74u) [[unlikely]] return; }
L_001BBA74:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA84u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBA84u) [[unlikely]] return; }
L_001BBA84:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA90u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBA90u) [[unlikely]] return; }
L_001BBA90:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA9Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBA9Cu) [[unlikely]] return; }
L_001BBA9C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAA8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBAA8u) [[unlikely]] return; }
L_001BBAA8:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAB8u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBAB8u) [[unlikely]] return; }
L_001BBAB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAC4u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBAC4u) [[unlikely]] return; }
L_001BBAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBACCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BBACCu) [[unlikely]] return; }
L_001BBACC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBADCu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBADCu) [[unlikely]] return; }
L_001BBADC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAE8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBAE8u) [[unlikely]] return; }
L_001BBAE8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAF4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBAF4u) [[unlikely]] return; }
L_001BBAF4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB00u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBB00u) [[unlikely]] return; }
L_001BBB00:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB10u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBB10u) [[unlikely]] return; }
L_001BBB10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB20u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBB20u) [[unlikely]] return; }
L_001BBB20:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB34u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBB34u) [[unlikely]] return; }
L_001BBB34:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB40u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBB40u) [[unlikely]] return; }
L_001BBB40:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB4Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBB4Cu) [[unlikely]] return; }
L_001BBB4C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB58u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBB58u) [[unlikely]] return; }
L_001BBB58:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB68u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBB68u) [[unlikely]] return; }
L_001BBB68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB74u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBB74u) [[unlikely]] return; }
L_001BBB74:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB84u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBB84u) [[unlikely]] return; }
L_001BBB84:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB90u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBB90u) [[unlikely]] return; }
L_001BBB90:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB9Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBB9Cu) [[unlikely]] return; }
L_001BBB9C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBA8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBBA8u) [[unlikely]] return; }
L_001BBBA8:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBB8u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBBB8u) [[unlikely]] return; }
L_001BBBB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBC8u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBBC8u) [[unlikely]] return; }
L_001BBBC8:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBDCu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBBDCu) [[unlikely]] return; }
L_001BBBDC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBE8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBBE8u) [[unlikely]] return; }
L_001BBBE8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBF4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBBF4u) [[unlikely]] return; }
L_001BBBF4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC00u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBC00u) [[unlikely]] return; }
L_001BBC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC08u); set32(c.r[4], ld32((c.r[20].w[0] + 8400u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBC08u) [[unlikely]] return; }
L_001BBC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC10u); set32(c.r[4], ld32((c.r[20].w[0] + 8404u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBC10u) [[unlikely]] return; }
L_001BBC10:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC20u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBC20u) [[unlikely]] return; }
L_001BBC20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC2Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBC2Cu) [[unlikely]] return; }
L_001BBC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 173u, depth + 1u); else { c.pc = 0x00126440u; return; } if (c.pc != 0x001BBC34u) [[unlikely]] return; }
L_001BBC34:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC44u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBC44u) [[unlikely]] return; }
L_001BBC44:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC50u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBC50u) [[unlikely]] return; }
L_001BBC50:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC5Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBC5Cu) [[unlikely]] return; }
L_001BBC5C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC68u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBC68u) [[unlikely]] return; }
L_001BBC68:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC78u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBC78u) [[unlikely]] return; }
L_001BBC78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC88u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBC88u) [[unlikely]] return; }
L_001BBC88:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC9Cu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBC9Cu) [[unlikely]] return; }
L_001BBC9C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCA8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBCA8u) [[unlikely]] return; }
L_001BBCA8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCB4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBCB4u) [[unlikely]] return; }
L_001BBCB4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCC0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBCC0u) [[unlikely]] return; }
L_001BBCC0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCD0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBCD0u) [[unlikely]] return; }
L_001BBCD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCDCu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBCDCu) [[unlikely]] return; }
L_001BBCDC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCECu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBCECu) [[unlikely]] return; }
L_001BBCEC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCF8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBCF8u) [[unlikely]] return; }
L_001BBCF8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD04u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBD04u) [[unlikely]] return; }
L_001BBD04:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD10u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBD10u) [[unlikely]] return; }
L_001BBD10:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD20u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBD20u) [[unlikely]] return; }
L_001BBD20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD30u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBD30u) [[unlikely]] return; }
L_001BBD30:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD44u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBD44u) [[unlikely]] return; }
L_001BBD44:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD50u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBD50u) [[unlikely]] return; }
L_001BBD50:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD5Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBD5Cu) [[unlikely]] return; }
L_001BBD5C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD68u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBD68u) [[unlikely]] return; }
L_001BBD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD70u); set32(c.r[4], ld32((c.r[20].w[0] + 8408u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBD70u) [[unlikely]] return; }
L_001BBD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD78u); set32(c.r[4], ld32((c.r[20].w[0] + 8412u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBD78u) [[unlikely]] return; }
L_001BBD78:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD88u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBD88u) [[unlikely]] return; }
L_001BBD88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD94u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBD94u) [[unlikely]] return; }
L_001BBD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BBD9Cu) [[unlikely]] return; }
L_001BBD9C:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDACu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBDACu) [[unlikely]] return; }
L_001BBDAC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDB8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBDB8u) [[unlikely]] return; }
L_001BBDB8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDC4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBDC4u) [[unlikely]] return; }
L_001BBDC4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDD0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBDD0u) [[unlikely]] return; }
L_001BBDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDD8u); set32(c.r[4], ld32((c.r[20].w[0] + 8420u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBDD8u) [[unlikely]] return; }
L_001BBDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDE0u); set32(c.r[4], ld32((c.r[20].w[0] + 8416u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBDE0u) [[unlikely]] return; }
L_001BBDE0:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDF0u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBDF0u) [[unlikely]] return; }
L_001BBDF0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE00u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBE00u) [[unlikely]] return; }
L_001BBE00:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE0Cu); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BBE0Cu) [[unlikely]] return; }
L_001BBE0C:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE1Cu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBE1Cu) [[unlikely]] return; }
L_001BBE1C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE28u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBE28u) [[unlikely]] return; }
L_001BBE28:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE34u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBE34u) [[unlikely]] return; }
L_001BBE34:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE40u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBE40u) [[unlikely]] return; }
L_001BBE40:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE50u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBE50u) [[unlikely]] return; }
L_001BBE50:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE5Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBE5Cu) [[unlikely]] return; }
L_001BBE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE64u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001BBE64u) [[unlikely]] return; }
L_001BBE64:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE74u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBE74u) [[unlikely]] return; }
L_001BBE74:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE80u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBE80u) [[unlikely]] return; }
L_001BBE80:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE8Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBE8Cu) [[unlikely]] return; }
L_001BBE8C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE98u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBE98u) [[unlikely]] return; }
L_001BBE98:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBEA8u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBEA8u) [[unlikely]] return; }
L_001BBEA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBEB8u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBEB8u) [[unlikely]] return; }
L_001BBEB8:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBECCu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBECCu) [[unlikely]] return; }
L_001BBECC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBED8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBED8u) [[unlikely]] return; }
L_001BBED8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBEE4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBEE4u) [[unlikely]] return; }
L_001BBEE4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBEF0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBEF0u) [[unlikely]] return; }
L_001BBEF0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF00u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBF00u) [[unlikely]] return; }
L_001BBF00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF0Cu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBF0Cu) [[unlikely]] return; }
L_001BBF0C:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF1Cu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBF1Cu) [[unlikely]] return; }
L_001BBF1C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF28u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBF28u) [[unlikely]] return; }
L_001BBF28:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF34u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBF34u) [[unlikely]] return; }
L_001BBF34:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF40u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBF40u) [[unlikely]] return; }
L_001BBF40:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF50u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBF50u) [[unlikely]] return; }
L_001BBF50:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF60u); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBF60u) [[unlikely]] return; }
L_001BBF60:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF6Cu); set32(c.r[18], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001BBF6Cu) [[unlikely]] return; }
L_001BBF6C:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF7Cu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBF7Cu) [[unlikely]] return; }
L_001BBF7C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF88u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBF88u) [[unlikely]] return; }
L_001BBF88:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF94u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBF94u) [[unlikely]] return; }
L_001BBF94:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFA0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBFA0u) [[unlikely]] return; }
L_001BBFA0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFB0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BBFB0u) [[unlikely]] return; }
L_001BBFB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFBCu); set32(c.r[19], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001BBFBCu) [[unlikely]] return; }
L_001BBFBC:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFCCu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001BBFCCu) [[unlikely]] return; }
L_001BBFCC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFD8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001BBFD8u) [[unlikely]] return; }
L_001BBFD8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFE4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001BBFE4u) [[unlikely]] return; }
L_001BBFE4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFF0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001BBFF0u) [[unlikely]] return; }
L_001BBFF0:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC000u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001BC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_002F(c, 1u, depth);
}

}
