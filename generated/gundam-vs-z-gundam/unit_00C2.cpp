#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C2[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241,
    0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 250, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298,
    0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0,
    378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00408000;
    case 2u: goto L_0040801C;
    case 3u: goto L_004080AC;
    case 4u: goto L_004080C8;
    case 5u: goto L_004080D8;
    case 6u: goto L_004080E0;
    case 7u: goto L_004080F8;
    case 8u: goto L_00408118;
    case 9u: goto L_00408130;
    case 10u: goto L_00408140;
    case 11u: goto L_00408158;
    case 12u: goto L_004081CC;
    case 13u: goto L_00408244;
    case 14u: goto L_00408260;
    case 15u: goto L_00408270;
    case 16u: goto L_00408278;
    case 17u: goto L_00408290;
    case 18u: goto L_004082B0;
    case 19u: goto L_004082D0;
    case 20u: goto L_004082D8;
    case 21u: goto L_004082F4;
    case 22u: goto L_00408414;
    case 23u: goto L_0040841C;
    case 24u: goto L_00408438;
    case 25u: goto L_0040844C;
    case 26u: goto L_00408450;
    case 27u: goto L_00408484;
    case 28u: goto L_004084A4;
    case 29u: goto L_004084BC;
    case 30u: goto L_00408500;
    case 31u: goto L_00408534;
    case 32u: goto L_0040853C;
    case 33u: goto L_00408544;
    case 34u: goto L_00408550;
    case 35u: goto L_00408558;
    case 36u: goto L_00408568;
    case 37u: goto L_00408570;
    case 38u: goto L_00408640;
    case 39u: goto L_004086A0;
    case 40u: goto L_004086FC;
    case 41u: goto L_00408710;
    case 42u: goto L_0040871C;
    case 43u: goto L_00408730;
    case 44u: goto L_0040873C;
    case 45u: goto L_00408750;
    case 46u: goto L_00408760;
    case 47u: goto L_00408790;
    case 48u: goto L_004087A8;
    case 49u: goto L_00408840;
    case 50u: goto L_0040884C;
    case 51u: goto L_004088B8;
    case 52u: goto L_00408938;
    case 53u: goto L_004089AC;
    case 54u: goto L_00408A10;
    case 55u: goto L_00408A1C;
    case 56u: goto L_00408A70;
    case 57u: goto L_00408B64;
    case 58u: goto L_00408BB0;
    case 59u: goto L_00408C50;
    case 60u: goto L_00408C60;
    case 61u: goto L_00408CA8;
    case 62u: goto L_00408CC0;
    case 63u: goto L_00408CD8;
    case 64u: goto L_00408D6C;
    case 65u: goto L_00408D84;
    case 66u: goto L_00408D9C;
    case 67u: goto L_00408DB8;
    case 68u: goto L_00408DDC;
    case 69u: goto L_00408E00;
    case 70u: goto L_00408E48;
    case 71u: goto L_00408E6C;
    case 72u: goto L_00408E74;
    case 73u: goto L_00408E80;
    case 74u: goto L_00408EA0;
    case 75u: goto L_00408ED0;
    case 76u: goto L_00408F30;
    case 77u: goto L_00408F4C;
    case 78u: goto L_00408F60;
    case 79u: goto L_00409020;
    case 80u: goto L_00409034;
    case 81u: goto L_00409044;
    case 82u: goto L_00409064;
    case 83u: goto L_00409070;
    case 84u: goto L_00409088;
    case 85u: goto L_00409090;
    case 86u: goto L_00409098;
    case 87u: goto L_004090A0;
    case 88u: goto L_004090BC;
    case 89u: goto L_004090CC;
    case 90u: goto L_004090E0;
    case 91u: goto L_004090F0;
    case 92u: goto L_00409108;
    case 93u: goto L_00409118;
    case 94u: goto L_00409148;
    case 95u: goto L_00409154;
    case 96u: goto L_00409160;
    case 97u: goto L_0040916C;
    case 98u: goto L_004091A0;
    case 99u: goto L_004091F0;
    case 100u: goto L_00409234;
    case 101u: goto L_00409248;
    case 102u: goto L_0040927C;
    case 103u: goto L_00409288;
    case 104u: goto L_00409290;
    case 105u: goto L_00409298;
    case 106u: goto L_004092A4;
    case 107u: goto L_004092C0;
    case 108u: goto L_004092E0;
    case 109u: goto L_00409308;
    case 110u: goto L_00409390;
    case 111u: goto L_004093B0;
    case 112u: goto L_004093E0;
    case 113u: goto L_00409428;
    case 114u: goto L_00409460;
    case 115u: goto L_00409498;
    case 116u: goto L_0040953C;
    case 117u: goto L_00409548;
    case 118u: goto L_0040958C;
    case 119u: goto L_004095A4;
    case 120u: goto L_004095B8;
    case 121u: goto L_004095E8;
    case 122u: goto L_004096A8;
    case 123u: goto L_004096B8;
    case 124u: goto L_004096C8;
    case 125u: goto L_004096D4;
    case 126u: goto L_004096F8;
    case 127u: goto L_00409738;
    case 128u: goto L_00409760;
    case 129u: goto L_00409768;
    case 130u: goto L_004097EC;
    case 131u: goto L_004097F8;
    case 132u: goto L_00409820;
    case 133u: goto L_00409830;
    case 134u: goto L_00409850;
    case 135u: goto L_00409880;
    case 136u: goto L_00409890;
    case 137u: goto L_004098A0;
    case 138u: goto L_004098B0;
    case 139u: goto L_004098C0;
    case 140u: goto L_004098D0;
    case 141u: goto L_004098E0;
    case 142u: goto L_00409914;
    case 143u: goto L_00409924;
    case 144u: goto L_00409950;
    case 145u: goto L_004099A8;
    case 146u: goto L_004099E8;
    case 147u: goto L_004099FC;
    case 148u: goto L_00409A10;
    case 149u: goto L_00409A18;
    case 150u: goto L_00409A4C;
    case 151u: goto L_00409A54;
    case 152u: goto L_00409A88;
    case 153u: goto L_00409A9C;
    case 154u: goto L_00409AD0;
    case 155u: goto L_00409AE8;
    case 156u: goto L_00409B14;
    case 157u: goto L_00409B20;
    case 158u: goto L_00409B50;
    case 159u: goto L_00409B58;
    case 160u: goto L_00409B60;
    case 161u: goto L_00409BB8;
    case 162u: goto L_00409BC8;
    case 163u: goto L_00409BDC;
    case 164u: goto L_00409BF8;
    case 165u: goto L_00409C0C;
    case 166u: goto L_00409C18;
    case 167u: goto L_00409C70;
    case 168u: goto L_00409C80;
    case 169u: goto L_00409C94;
    case 170u: goto L_00409CD0;
    case 171u: goto L_00409CE0;
    case 172u: goto L_00409CF0;
    case 173u: goto L_00409D18;
    case 174u: goto L_00409D70;
    case 175u: goto L_00409D90;
    case 176u: goto L_00409DA0;
    case 177u: goto L_00409DB0;
    case 178u: goto L_00409DD0;
    case 179u: goto L_00409DF0;
    case 180u: goto L_00409E00;
    case 181u: goto L_00409E38;
    case 182u: goto L_00409E48;
    case 183u: goto L_00409E58;
    case 184u: goto L_00409E68;
    case 185u: goto L_00409E84;
    case 186u: goto L_00409ED4;
    case 187u: goto L_00409EE4;
    case 188u: goto L_00409EF4;
    case 189u: goto L_00409EFC;
    case 190u: goto L_00409F34;
    case 191u: goto L_00409F48;
    case 192u: goto L_00409F58;
    case 193u: goto L_00409F6C;
    case 194u: goto L_00409F80;
    case 195u: goto L_00409F90;
    case 196u: goto L_00409FA4;
    case 197u: goto L_00409FB0;
    case 198u: goto L_00409FC0;
    case 199u: goto L_00409FE0;
    case 200u: goto L_00409FF0;
    case 201u: goto L_0040A000;
    case 202u: goto L_0040A010;
    case 203u: goto L_0040A030;
    case 204u: goto L_0040A07C;
    case 205u: goto L_0040A088;
    case 206u: goto L_0040A0A8;
    case 207u: goto L_0040A180;
    case 208u: goto L_0040A1D0;
    case 209u: goto L_0040A2A0;
    case 210u: goto L_0040A2A8;
    case 211u: goto L_0040A2E0;
    case 212u: goto L_0040A330;
    case 213u: goto L_0040A33C;
    case 214u: goto L_0040A350;
    case 215u: goto L_0040A37C;
    case 216u: goto L_0040A398;
    case 217u: goto L_0040A3B8;
    case 218u: goto L_0040A3E8;
    case 219u: goto L_0040A46C;
    case 220u: goto L_0040A47C;
    case 221u: goto L_0040A498;
    case 222u: goto L_0040A4AC;
    case 223u: goto L_0040A4D8;
    case 224u: goto L_0040A54C;
    case 225u: goto L_0040A55C;
    case 226u: goto L_0040A5AC;
    case 227u: goto L_0040A5C8;
    case 228u: goto L_0040A5F4;
    case 229u: goto L_0040A604;
    case 230u: goto L_0040A62C;
    case 231u: goto L_0040A650;
    case 232u: goto L_0040A678;
    case 233u: goto L_0040A680;
    case 234u: goto L_0040A6F4;
    case 235u: goto L_0040A700;
    case 236u: goto L_0040A708;
    case 237u: goto L_0040A750;
    case 238u: goto L_0040A7BC;
    case 239u: goto L_0040A7CC;
    case 240u: goto L_0040A7E8;
    case 241u: goto L_0040A7FC;
    case 242u: goto L_0040A808;
    case 243u: goto L_0040A814;
    case 244u: goto L_0040A824;
    case 245u: goto L_0040A838;
    case 246u: goto L_0040A850;
    case 247u: goto L_0040A858;
    case 248u: goto L_0040A868;
    case 249u: goto L_0040A880;
    case 250u: goto L_0040A894;
    case 251u: goto L_0040A898;
    case 252u: goto L_0040A8A4;
    case 253u: goto L_0040A8B4;
    case 254u: goto L_0040A8C8;
    case 255u: goto L_0040A8E0;
    case 256u: goto L_0040A900;
    case 257u: goto L_0040A914;
    case 258u: goto L_0040A924;
    case 259u: goto L_0040A92C;
    case 260u: goto L_0040A950;
    case 261u: goto L_0040A960;
    case 262u: goto L_0040A970;
    case 263u: goto L_0040A990;
    case 264u: goto L_0040A9A0;
    case 265u: goto L_0040A9B0;
    case 266u: goto L_0040A9D0;
    case 267u: goto L_0040AA40;
    case 268u: goto L_0040AA90;
    case 269u: goto L_0040AAF0;
    case 270u: goto L_0040AB40;
    case 271u: goto L_0040AC68;
    case 272u: goto L_0040AC74;
    case 273u: goto L_0040AC90;
    case 274u: goto L_0040ACEC;
    case 275u: goto L_0040ACFC;
    case 276u: goto L_0040AD04;
    case 277u: goto L_0040AD24;
    case 278u: goto L_0040AD34;
    case 279u: goto L_0040AD64;
    case 280u: goto L_0040AD74;
    case 281u: goto L_0040ADAC;
    case 282u: goto L_0040ADD8;
    case 283u: goto L_0040ADF8;
    case 284u: goto L_0040AE08;
    case 285u: goto L_0040AE3C;
    case 286u: goto L_0040AE5C;
    case 287u: goto L_0040AE64;
    case 288u: goto L_0040AE74;
    case 289u: goto L_0040AFA0;
    case 290u: goto L_0040AFC8;
    case 291u: goto L_0040B044;
    case 292u: goto L_0040B080;
    case 293u: goto L_0040B090;
    case 294u: goto L_0040B0A0;
    case 295u: goto L_0040B0A8;
    case 296u: goto L_0040B0CC;
    case 297u: goto L_0040B0EC;
    case 298u: goto L_0040B0FC;
    case 299u: goto L_0040B110;
    case 300u: goto L_0040B11C;
    case 301u: goto L_0040B12C;
    case 302u: goto L_0040B13C;
    case 303u: goto L_0040B144;
    case 304u: goto L_0040B180;
    case 305u: goto L_0040B194;
    case 306u: goto L_0040B1A4;
    case 307u: goto L_0040B1BC;
    case 308u: goto L_0040B1C8;
    case 309u: goto L_0040B1D8;
    case 310u: goto L_0040B1E0;
    case 311u: goto L_0040B208;
    case 312u: goto L_0040B21C;
    case 313u: goto L_0040B238;
    case 314u: goto L_0040B260;
    case 315u: goto L_0040B270;
    case 316u: goto L_0040B294;
    case 317u: goto L_0040B29C;
    case 318u: goto L_0040B2B4;
    case 319u: goto L_0040B2C4;
    case 320u: goto L_0040B2D8;
    case 321u: goto L_0040B2F0;
    case 322u: goto L_0040B300;
    case 323u: goto L_0040B32C;
    case 324u: goto L_0040B3A8;
    case 325u: goto L_0040B3B4;
    case 326u: goto L_0040B3D0;
    case 327u: goto L_0040B3DC;
    case 328u: goto L_0040B40C;
    case 329u: goto L_0040B418;
    case 330u: goto L_0040B420;
    case 331u: goto L_0040B444;
    case 332u: goto L_0040B454;
    case 333u: goto L_0040B478;
    case 334u: goto L_0040B480;
    case 335u: goto L_0040B4B0;
    case 336u: goto L_0040B4BC;
    case 337u: goto L_0040B4CC;
    case 338u: goto L_0040B4EC;
    case 339u: goto L_0040B508;
    case 340u: goto L_0040B510;
    case 341u: goto L_0040B538;
    case 342u: goto L_0040B544;
    case 343u: goto L_0040B554;
    case 344u: goto L_0040B56C;
    case 345u: goto L_0040B588;
    case 346u: goto L_0040B598;
    case 347u: goto L_0040B5A0;
    case 348u: goto L_0040B5F0;
    case 349u: goto L_0040B688;
    case 350u: goto L_0040B6C0;
    case 351u: goto L_0040B6D0;
    case 352u: goto L_0040B6F0;
    case 353u: goto L_0040B730;
    case 354u: goto L_0040B780;
    case 355u: goto L_0040B950;
    case 356u: goto L_0040B9C0;
    case 357u: goto L_0040B9C8;
    case 358u: goto L_0040B9F8;
    case 359u: goto L_0040BA04;
    case 360u: goto L_0040BA60;
    case 361u: goto L_0040BA88;
    case 362u: goto L_0040BAA4;
    case 363u: goto L_0040BAB8;
    case 364u: goto L_0040BACC;
    case 365u: goto L_0040BAD4;
    case 366u: goto L_0040BAE8;
    case 367u: goto L_0040BB50;
    case 368u: goto L_0040BB84;
    case 369u: goto L_0040BB94;
    case 370u: goto L_0040BBF0;
    case 371u: goto L_0040BC00;
    case 372u: goto L_0040BC10;
    case 373u: goto L_0040BC34;
    case 374u: goto L_0040BC64;
    case 375u: goto L_0040BD54;
    case 376u: goto L_0040BD64;
    case 377u: goto L_0040BD74;
    case 378u: goto L_0040BD80;
    case 379u: goto L_0040BD88;
    case 380u: goto L_0040BD98;
    case 381u: goto L_0040BDA8;
    case 382u: goto L_0040BDB0;
    case 383u: goto L_0040BDC4;
    case 384u: goto L_0040BDD4;
    case 385u: goto L_0040BE38;
    case 386u: goto L_0040BE44;
    case 387u: goto L_0040BE74;
    case 388u: goto L_0040BEC4;
    case 389u: goto L_0040BF04;
    case 390u: goto L_0040BF3C;
    case 391u: goto L_0040BFBC;
    default: bad_entry(c, 0x00408000u); return;
    }
L_00408000:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0040801C:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00408038; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00408050; } }
L_00408038:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00408050:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040806C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00408084; } }
L_0040806C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00408084:
    st32((c.r[30].w[0]), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080ACu); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x004080ACu) [[unlikely]] return; }
L_004080AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004080C8; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2940000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080C8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004080C8u) [[unlikely]] return; }
L_004080C8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x004080D8u) [[unlikely]] return; }
L_004080D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x004080E0u) [[unlikely]] return; }
L_004080E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407F98u | kUnwind; return; } [[clang::musttail]] return unit_00C1(c, 475u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004080F8u) [[unlikely]] return; }
L_004080F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00408120; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408118u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00408118u) [[unlikely]] return; }
L_00408118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00408128; } }
L_00408120:
    set32(c.r[21], 0u + 4u);
    c.budget -= 2;
L_00408128:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[28].w[0] - 25004u);
    c.budget -= 2;
L_00408130:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00408150; } }
    goto L_00408144;
L_00408140:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_00408144:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00408150:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00408168; } }
    goto L_0040815C;
L_00408158:
    set32(c.r[2], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_0040815C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00408168:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00408198; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004081B4; } }
L_00408198:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004081B4:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_004081D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004081E8; } }
    goto L_004081D0;
L_004081CC:
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 1;
L_004081D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004081E8:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00408204; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040821C; } }
L_00408204:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040821C:
    st32((c.r[30].w[0]), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408244u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00408244u) [[unlikely]] return; }
L_00408244:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00408260; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2DE0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408260u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00408260u) [[unlikely]] return; }
L_00408260:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408270u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00408270u) [[unlikely]] return; }
L_00408270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408278u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00408278u) [[unlikely]] return; }
L_00408278:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408130u | kUnwind; return; } goto L_00408130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408290u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00408290u) [[unlikely]] return; }
L_00408290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004082B8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082B0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004082B0u) [[unlikely]] return; }
L_004082B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004082C0; } }
L_004082B8:
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004082C0:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[28].w[0] - 24996u);
    set32(c.r[21], c.r[28].w[0] - 25000u);
    c.budget -= 4;
L_004082D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x004082D8u) [[unlikely]] return; }
L_004082D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082F4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004082F4u) [[unlikely]] return; }
L_004082F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 15u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00408318; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00408318:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00408330; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00408330:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00408360; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040837C; } }
L_00408360:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0040837C:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00408398; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004083B0; } }
L_00408398:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004083B0:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_004083CC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004083E4; } }
L_004083CC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004083E4:
    st32((c.r[30].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408414u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00408414u) [[unlikely]] return; }
L_00408414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040841Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040841Cu) [[unlikely]] return; }
L_0040841C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004082D0u | kUnwind; return; } goto L_004082D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408438u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00408438u) [[unlikely]] return; }
L_00408438:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040844Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040844Cu) [[unlikely]] return; }
L_0040844C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00408450:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00408470; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00408490; } }
L_00408470:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408484u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00408484u) [[unlikely]] return; }
L_00408484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084A8; } }
    c.budget -= 1;
L_00408490:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084A4u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004084A4u) [[unlikely]] return; }
L_004084A4:
    c.budget -= 1;
L_004084A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084BCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004084BCu) [[unlikely]] return; }
L_004084BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408450u | kUnwind; return; } goto L_00408450; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00408500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[7].w[0] - 8752u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 196u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] - 8832u);  if (t) { goto L_00408578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408534u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AC(c, 42u, depth + 1u); else { c.pc = 0x003B0450u; return; } if (c.pc != 0x00408534u) [[unlikely]] return; }
L_00408534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040853Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_00AC(c, 43u, depth + 1u); else { c.pc = 0x003B0490u; return; } if (c.pc != 0x0040853Cu) [[unlikely]] return; }
L_0040853C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408544u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (depth < kMaxDepth) unit_00AC(c, 40u, depth + 1u); else { c.pc = 0x003B03E0u; return; } if (c.pc != 0x00408544u) [[unlikely]] return; }
L_00408544:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408550u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (depth < kMaxDepth) unit_00AC(c, 41u, depth + 1u); else { c.pc = 0x003B0430u; return; } if (c.pc != 0x00408550u) [[unlikely]] return; }
L_00408550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408558u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x00408558u) [[unlikely]] return; }
L_00408558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004085E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408568u);  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x00408568u) [[unlikely]] return; }
L_00408568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408570u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x00408570u) [[unlikely]] return; }
L_00408570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004085E8; } }
L_00408578:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004085E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12144u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[1].w[0] - 8942u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    st8((c.r[1].w[0] - 8928u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8921u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 22u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8936u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 23u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8935u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 25;
L_004085E8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 11832u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 31u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[1].w[0] - 8932u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[1].w[0] - 8934u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00408640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8064u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8065u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8066u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8067u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8096u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8084u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8080u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8100u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8104u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 8108u), 0u);  c.pc = t; return; }
L_004086A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[18].w[0] - 10u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004086F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14448u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004086F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x004086FCu) [[unlikely]] return; }
L_004086FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408A48; } }
    c.budget -= 1;
L_00408710:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040871Cu); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0040871Cu) [[unlikely]] return; }
L_0040871C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408A48; } }
    c.budget -= 1;
L_00408730:
    set32(c.r[5], c.r[18].w[0] - 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040873Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0040873Cu) [[unlikely]] return; }
L_0040873C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408A48; } }
    c.budget -= 1;
L_00408750:
    set32(c.r[16], c.r[18].w[0] + 19u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408760u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x00408760u) [[unlikely]] return; }
L_00408760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] - 37u);  if (t) { goto L_00408A48; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8112u)));
    set32(c.r[18], 0u + 18u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8112u), c.r[3].w[0]);  if (t) { goto L_00408A28; } }
    c.budget -= 1;
L_00408790:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00408A48; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004087A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004089F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0; c.r[1].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_004089F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004089F0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00408810; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] - 8672u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[3].w[0])));  if (t) { goto L_00408890; } }
    c.budget -= 1;
L_00408810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 8800u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] - 8672u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[3].w[0])));  if (t) { goto L_00408890; } }
    c.budget -= 1;
L_00408840:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040884Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0040884Cu) [[unlikely]] return; }
L_0040884C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] & 31ull;  if (t) { goto L_00408890; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 5));  if (t) { goto L_0040886C; } }
    set32(c.r[3], c.r[19].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0040886C:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[20], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 9;
L_00408890:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408840u | kUnwind; return; } goto L_00408840; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00408948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088B8u);  if (depth < kMaxDepth) unit_0071(c, 201u, depth + 1u); else { c.pc = 0x002C7130u; return; } if (c.pc != 0x004088B8u) [[unlikely]] return; }
L_004088B8:
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00408918; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_00408910; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00408908; } }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_00408900; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004088F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408920; } }
    c.budget -= 1;
L_004088F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 69u);  if (t) { goto L_00408928; } }
L_00408900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 70u);  if (t) { goto L_00408928; } }
L_00408908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 71u);  if (t) { goto L_00408928; } }
L_00408910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 72u);  if (t) { goto L_004089A0; } }
L_00408918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 73u);  if (t) { goto L_004089A0; } }
L_00408920:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00408928:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00408948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408938u);  if (depth < kMaxDepth) unit_0072(c, 41u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x00408938u) [[unlikely]] return; }
L_00408938:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00408948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004089A0; } }
L_00408948:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 8800u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] < 0; set32(c.r[3], 0u + 11u);  if (t) { goto L_004089F0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_00408980; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[19], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_00408980:
    set32(c.r[3], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_004089A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[19], 0u + 65u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_004089A0:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x004089ACu) [[unlikely]] return; }
L_004089AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] & 31ull;  if (t) { goto L_004089F0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 5));  if (t) { goto L_004089CC; } }
    set32(c.r[3], c.r[19].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_004089CC:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[20], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 9;
L_004089F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004087A8u | kUnwind; return; } goto L_004087A8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00408A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408A48; } }
L_00408A10:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A1Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x00408A1Cu) [[unlikely]] return; }
L_00408A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408A48; } }
    c.budget -= 1;
L_00408A28:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8096u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8096u), c.r[3].w[0]);
    c.budget -= 8;
L_00408A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00408A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], ld32((c.r[1].w[0] + 8080u)));
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8080u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00408B70; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[1].w[0] + 10848u));
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[8], c.r[8].w[0] << 9);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 1556u)));
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 27;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00408B38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = ld32((c.r[1].w[0] + 10852u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00408BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00408BD8; } }
L_00408B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = ld32((c.r[1].w[0] + 10856u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00408BD8; } }
    goto L_00408B68;
L_00408B64:
    c.budget -= 1;
L_00408B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00408BD8; } }
L_00408B70:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00408B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408BD8; } }
    c.budget -= 1;
L_00408B88:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00408BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408BD8; } }
    c.budget -= 1;
L_00408BA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 4;
L_00408BB0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00408BC8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 1556u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_00408BC8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408BB0u | kUnwind; return; } goto L_00408BB0; } }
L_00408BD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34465ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00408BF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 34464ull;
    c.budget -= 3;
L_00408BF8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 322u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00408C10; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00408C10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[5].w[0] + 8084u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[1].d[0] | 57600ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00408C48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[3].d[0] = c.r[3].d[0] | 57599ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00408C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00408C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x00408C60u) [[unlikely]] return; }
L_00408C60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8180u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8084u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 57600ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x05F50000u);  if (t) { goto L_00408CA0; } }
    c.r[2].d[0] = c.r[2].d[0] | 57599ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00408CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CA8u);  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x00408CA8u) [[unlikely]] return; }
L_00408CA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00408CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x00408CD8u) [[unlikely]] return; }
L_00408CD8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408E60; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408DF8; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408DA8; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D90; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00408D78; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D6Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x00408D6Cu) [[unlikely]] return; }
L_00408D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E78; } }
    c.budget -= 1;
L_00408D78:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D84u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x00408D84u) [[unlikely]] return; }
L_00408D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E78; } }
    c.budget -= 1;
L_00408D90:
    set32(c.r[5], c.r[16].w[0] - 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D9Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x00408D9Cu) [[unlikely]] return; }
L_00408D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E78; } }
    c.budget -= 1;
L_00408DA8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 8112u);
    c.budget -= 4;
L_00408DB8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408DE0; } }
    set32(c.r[5], c.r[17].w[0] + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DDCu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x00408DDCu) [[unlikely]] return; }
L_00408DDC:
    c.budget -= 1;
L_00408DE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408DB8u | kUnwind; return; } goto L_00408DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E78; } }
L_00408DF8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00408E00:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 5));  if (t) { goto L_00408E10; } }
    set32(c.r[2], c.r[16].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00408E10:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408E48; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x00408E48u) [[unlikely]] return; }
L_00408E48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408E00u | kUnwind; return; } goto L_00408E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E78; } }
L_00408E60:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E6Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00408E6Cu) [[unlikely]] return; }
L_00408E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E74u);  if (depth < kMaxDepth) unit_00AF(c, 213u, depth + 1u); else { c.pc = 0x003BDAD0u; return; } if (c.pc != 0x00408E74u) [[unlikely]] return; }
L_00408E74:
    c.budget -= 1;
L_00408E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E80u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x00408E80u) [[unlikely]] return; }
L_00408E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00408EA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8064u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] - 8656u);
    set32(c.r[4], c.r[4].w[0] + 8064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00408ED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[19].w[0] + 2132u);  if (t) { goto L_00409110; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004090E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409068; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00408F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409170; } }
L_00408F20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F30u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00408F30u) [[unlikely]] return; }
L_00408F30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00408F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F4Cu);  if (depth < kMaxDepth) unit_00C4(c, 108u, depth + 1u); else { c.pc = 0x00411100u; return; } if (c.pc != 0x00408F4Cu) [[unlikely]] return; }
L_00408F4C:
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 30u);  if (t) { goto L_00408F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F60u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x00408F60u) [[unlikely]] return; }
L_00408F60:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8080u);
    set32(c.r[17], c.r[17].w[0] + 8084u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[18].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00408F98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8096u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408FA0; } }
    c.budget -= 1;
L_00408F98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_00408FA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00408FC0; } }
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00409178; } }
L_00408FC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00408FE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00409018; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00409018; } }
    c.budget -= 1;
L_00408FE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 34465ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00409018; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00409018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409020u);  if (depth < kMaxDepth) unit_00C2(c, 59u, depth + 1u); else { c.pc = 0x00408C50u; return; } if (c.pc != 0x00409020u) [[unlikely]] return; }
L_00409020:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409034u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x00409034u) [[unlikely]] return; }
L_00409034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 46u);  if (t) { goto L_00409048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409044u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x00409044u) [[unlikely]] return; }
L_00409044:
    c.budget -= 1;
L_00409048:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00409068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409064u);  if (depth < kMaxDepth) unit_00AA(c, 15u, depth + 1u); else { c.pc = 0x003A8150u; return; } if (c.pc != 0x00409064u) [[unlikely]] return; }
L_00409064:
    c.budget -= 1;
L_00409068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409070u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00409070u) [[unlikely]] return; }
L_00409070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409170; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409088u); st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00409088u) [[unlikely]] return; }
L_00409088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409090u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00409090u) [[unlikely]] return; }
L_00409090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409098u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00409098u) [[unlikely]] return; }
L_00409098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090A0u);  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x004090A0u) [[unlikely]] return; }
L_004090A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090BCu);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x004090BCu) [[unlikely]] return; }
L_004090BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090CCu); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x004090CCu) [[unlikely]] return; }
L_004090CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090E0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x004090E0u) [[unlikely]] return; }
L_004090E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409170; } }
L_004090E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090F0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x004090F0u) [[unlikely]] return; }
L_004090F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409170; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409108u); st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BE(c, 186u, depth + 1u); else { c.pc = 0x003FA670u; return; } if (c.pc != 0x00409108u) [[unlikely]] return; }
L_00409108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409170; } }
L_00409110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409118u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x00409118u) [[unlikely]] return; }
L_00409118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409170; } }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409148u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x00409148u) [[unlikely]] return; }
L_00409148:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x00409154u) [[unlikely]] return; }
L_00409154:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409160u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C2(c, 108u, depth + 1u); else { c.pc = 0x004092E0u; return; } if (c.pc != 0x00409160u) [[unlikely]] return; }
L_00409160:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040916Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0040916Cu) [[unlikely]] return; }
L_0040916C:
    c.budget -= 1;
L_00409170:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00409178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004091A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 2132u);  if (t) { goto L_00409240; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00409220; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409208; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004091E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409260; } }
    c.budget -= 1;
L_004091E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x004091F0u) [[unlikely]] return; }
L_004091F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409260; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00409260; } }
L_00409208:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00409260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00409260; } }
    c.budget -= 1;
L_00409220:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409234u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00409234u) [[unlikely]] return; }
L_00409234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409260; } }
    c.budget -= 1;
L_00409240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409248u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00409248u) [[unlikely]] return; }
L_00409248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409260; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00409260:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00409280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040927Cu);  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x0040927Cu) [[unlikely]] return; }
L_0040927C:
    c.budget -= 1;
L_00409280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409288u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x00409288u) [[unlikely]] return; }
L_00409288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409290u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x00409290u) [[unlikely]] return; }
L_00409290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409298u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00409298u) [[unlikely]] return; }
L_00409298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004092A4u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x004092A4u) [[unlikely]] return; }
L_004092A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004092C0:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004092E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409308u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00409308u) [[unlikely]] return; }
L_00409308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00409378; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], 0u + 20u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 27760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] | 24759ull;
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] >> 31);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 308u), c.r[17].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[2].w[0] + 304u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 312u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[7], c.r[2].w[0] + 304u);  if (t) { goto L_00409378; } }
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 2;
L_00409378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004093B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], 0u + 300u);
    set32(c.r[2], c.r[2].w[0] - 26544u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  goto L_004093E0; }
L_004093E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[17], c.r[17].w[0] + 10196u);
    set32(c.r[16], c.r[18].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00409420; } }
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 2;
L_00409420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409428u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00409428u) [[unlikely]] return; }
L_00409428:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00409830; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14544u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409460:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00409488; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_00409488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00409830; } }
L_00409498:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004094A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_004094A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004094D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 600u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
L_004094D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[1].d[0] = c.r[1].d[0] | 57600ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x05F50000u);  if (t) { goto L_00409510; } }
    c.r[3].d[0] = c.r[3].d[0] | 57599ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00409510:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00409830; } }
    set32(c.r[5], 0u + 170u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040953Cu); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0040953Cu) [[unlikely]] return; }
L_0040953C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_00409548:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 99u);  if (t) { goto L_00409570; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_00409570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8096u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004095B0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040958Cu); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0040958Cu) [[unlikely]] return; }
L_0040958C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[5], 0u + 190u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095A4u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x004095A4u) [[unlikely]] return; }
L_004095A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_004095B0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004095B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[6].w[0] + 8096u);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], 0u + 99u);  if (t) { goto L_004095E0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_004095E0:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_004095E8:
    set32(c.r[4], c.r[5].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004096E0; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[2], 0u + 30u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_00409698; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00409638; } }
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_004096C0; } }
L_00409638:
    c.r[1].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00409650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004096C0; } }
    c.budget -= 1;
L_00409650:
    c.r[1].d[0] = c.r[17].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00409670; } }
    set32(c.r[2], c.r[17].w[0] - 9u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004096C0; } }
    c.budget -= 1;
L_00409670:
    c.r[1].d[0] = c.r[17].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00409688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004096C0; } }
    c.budget -= 1;
L_00409688:
    set32(c.r[2], c.r[17].w[0] - 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004096C0; } }
    c.budget -= 1;
L_00409698:
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096A8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00BE(c, 146u, depth + 1u); else { c.pc = 0x003FA130u; return; } if (c.pc != 0x004096A8u) [[unlikely]] return; }
L_004096A8:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x004096B8u) [[unlikely]] return; }
L_004096B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004096C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 62u, depth + 1u); else { c.pc = 0x00408CC0u; return; } if (c.pc != 0x004096C8u) [[unlikely]] return; }
L_004096C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096D4u); set32(c.r[5], 0u + 190u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x004096D4u) [[unlikely]] return; }
L_004096D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_004096E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004095E8u | kUnwind; return; } goto L_004095E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409830; } }
L_004096F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00409830; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], 0u + 600u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00409830; } }
L_00409738:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 4u);  if (t) { goto L_00409830; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00409830; } }
L_00409760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409768u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00409768u) [[unlikely]] return; }
L_00409768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409830; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6800u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004097D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004097C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004097B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004097E0; } }
L_004097B0:
    set32(c.r[2], 0u + 63u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8069u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004097E0; } }
L_004097C0:
    set32(c.r[2], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8069u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004097E0; } }
L_004097D0:
    set32(c.r[2], 0u + 77u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8069u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004097E0:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004097ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x004097ECu) [[unlikely]] return; }
L_004097EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409830; } }
    c.budget -= 1;
L_004097F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00409830; } }
    set32(c.r[2], 0u + 99u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409820u); st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x00409820u) [[unlikely]] return; }
L_00409820:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00409830:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00409850:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409880u); set32(c.r[17], c.r[4].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00409880u) [[unlikely]] return; }
L_00409880:
    set32(c.r[4], c.r[16].w[0] + 6720u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409890u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00409890u) [[unlikely]] return; }
L_00409890:
    set32(c.r[4], c.r[16].w[0] + 4320u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004098A0u) [[unlikely]] return; }
L_004098A0:
    set32(c.r[4], c.r[16].w[0] + 6960u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004098B0u) [[unlikely]] return; }
L_004098B0:
    set32(c.r[4], c.r[16].w[0] + 7200u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004098C0u) [[unlikely]] return; }
L_004098C0:
    set32(c.r[4], c.r[16].w[0] + 7680u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004098D0u) [[unlikely]] return; }
L_004098D0:
    set32(c.r[4], c.r[16].w[0] + 7920u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004098E0u) [[unlikely]] return; }
L_004098E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409B18; } }
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409914u); fpu_div(c, 20u, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409914u) [[unlikely]] return; }
L_00409914:
    set32(c.r[4], c.r[16].w[0] + 7440u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409924u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00409924u) [[unlikely]] return; }
L_00409924:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 7344u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], 0u + 40u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409950u); set32(c.r[18], 0u + 294u);  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x00409950u) [[unlikely]] return; }
L_00409950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00409984; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_004099A0; } }
L_00409984:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_004099A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099A8u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x004099A8u) [[unlikely]] return; }
L_004099A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00409AA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004099D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409AC8; } }
L_004099D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18064u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_004099E8:
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[4], 0u + 40u);
    set32(c.r[5], 0u + 294u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x004099FCu) [[unlikely]] return; }
L_004099FC:
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 40u);
    set32(c.r[5], 0u + 318u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00409A10u) [[unlikely]] return; }
L_00409A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A18u); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00409A18u) [[unlikely]] return; }
L_00409A18:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 318u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00409A4Cu) [[unlikely]] return; }
L_00409A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00409A54u) [[unlikely]] return; }
L_00409A54:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 318u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A88u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00409A88u) [[unlikely]] return; }
L_00409A88:
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], 0u + 40u);
    set32(c.r[5], 0u + 342u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00409A9Cu) [[unlikely]] return; }
L_00409A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409B08; } }
    c.budget -= 1;
L_00409AA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18096u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004099E8u | kUnwind; return; } goto L_004099E8; } }
    c.budget -= 1;
L_00409AC8:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00409AD0:
    set32(c.r[7], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_00409B08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409AE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00409AE8u) [[unlikely]] return; }
L_00409AE8:
    set32(c.r[2], c.r[18].w[0] + 24u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409AD0u | kUnwind; return; } goto L_00409AD0; } }
    c.budget -= 1;
L_00409B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B14u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00409B14u) [[unlikely]] return; }
L_00409B14:
    c.budget -= 1;
L_00409B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B20u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00409B20u) [[unlikely]] return; }
L_00409B20:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[16].w[0] + 2640u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B50u); st32((c.r[29].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409B50u) [[unlikely]] return; }
L_00409B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B58u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00409B58u) [[unlikely]] return; }
L_00409B58:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00409B60:
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00409BB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00409BB0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_00409BF0; } }
    c.budget -= 1;
L_00409BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BB8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00409BB8u) [[unlikely]] return; }
L_00409BB8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00409BC8u) [[unlikely]] return; }
L_00409BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BDCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409BDCu) [[unlikely]] return; }
L_00409BDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409B60u | kUnwind; return; } goto L_00409B60; } }
    c.budget -= 1;
L_00409BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BF8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00409BF8u) [[unlikely]] return; }
L_00409BF8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC29A0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C0Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409C0Cu) [[unlikely]] return; }
L_00409C0C:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00409C18:
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00409C68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00409C68; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_00409CA8; } }
    c.budget -= 1;
L_00409C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C70u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00409C70u) [[unlikely]] return; }
L_00409C70:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00409C80u) [[unlikely]] return; }
L_00409C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C94u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409C94u) [[unlikely]] return; }
L_00409C94:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409C18u | kUnwind; return; } goto L_00409C18; } }
    c.budget -= 1;
L_00409CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00409CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00409CE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00409CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D18u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00409D18u) [[unlikely]] return; }
L_00409D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00409D50; } }
    set32(c.r[4], 0u + 20u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 25232u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00409D58; } }
    c.budget -= 1;
L_00409D50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00409D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409D70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409D90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00409DA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00409DB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409DD0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] - 24608u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_00409DF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00409E00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] + 8880u)));
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(101ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_00409E30; } }
    set32(c.r[17], 0u + 100u);
    c.budget -= 1;
L_00409E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00409E38u) [[unlikely]] return; }
L_00409E38:
    set32(c.r[4], c.r[16].w[0] + 5760u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E48u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00409E48u) [[unlikely]] return; }
L_00409E48:
    set32(c.r[4], c.r[16].w[0] + 6240u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E58u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00409E58u) [[unlikely]] return; }
L_00409E58:
    set32(c.r[4], c.r[16].w[0] + 6480u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E68u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00409E68u) [[unlikely]] return; }
L_00409E68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E84u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409E84u) [[unlikely]] return; }
L_00409E84:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[3], c.r[17].w[0] >> 1);  if (t) { goto L_00409E98; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00409EB0; } }
L_00409E98:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00409EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409ED4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00409ED4u) [[unlikely]] return; }
L_00409ED4:
    set32(c.r[4], c.r[16].w[0] + 6000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409EE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00409EE4u) [[unlikely]] return; }
L_00409EE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409EF4u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x00409EF4u) [[unlikely]] return; }
L_00409EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409EFCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00409EFCu) [[unlikely]] return; }
L_00409EFC:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[16].w[0] + 3120u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.f[14] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433D0000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F34u); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409F34u) [[unlikely]] return; }
L_00409F34:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00409F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F48u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00409F48u) [[unlikely]] return; }
L_00409F48:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00409F58u) [[unlikely]] return; }
L_00409F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F6Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409F6Cu) [[unlikely]] return; }
L_00409F6C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 125u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00409F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F80u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00409F80u) [[unlikely]] return; }
L_00409F80:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F90u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00409F90u) [[unlikely]] return; }
L_00409F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409FA4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00409FA4u) [[unlikely]] return; }
L_00409FA4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 126u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409FB0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00409FB0u) [[unlikely]] return; }
L_00409FB0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409FC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00409FC0u) [[unlikely]] return; }
L_00409FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00409FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409FF0u);  if (depth < kMaxDepth) unit_00AF(c, 221u, depth + 1u); else { c.pc = 0x003BDBE0u; return; } if (c.pc != 0x00409FF0u) [[unlikely]] return; }
L_00409FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A000u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 180u, depth + 1u); else { c.pc = 0x00409E00u; return; } if (c.pc != 0x0040A000u) [[unlikely]] return; }
L_0040A000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040A030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 23840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 8964u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A07Cu); set32(c.r[6], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0040A07Cu) [[unlikely]] return; }
L_0040A07C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0040A088u) [[unlikely]] return; }
L_0040A088:
    set32(c.r[3], 0u + 11u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[8].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] - 8480u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = 0u;
    c.budget -= 8;
L_0040A0A8:
    set32(c.r[5], c.r[16].w[0] + c.r[8].w[0]);
    st8((c.r[5].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.r[3].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 79u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 24u), 0u);
    st8((c.r[5].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 80u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 28u), 0u);
    st8((c.r[5].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 32u), 0u);
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 36u), 0u);
    st8((c.r[5].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 10u);
    st8((c.r[5].w[0] + 83u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 40u), 0u);
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A0A8u | kUnwind; return; } goto L_0040A0A8; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[8].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 8479u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] << 3);
    st8((c.r[6].w[0] + 79u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8072u)));
    st16((c.r[4].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0040A298; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    set32(c.r[7], 0u + 8u);
    c.f[1] = c.r[6].w[0];
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
L_0040A1D0:
    set32(c.r[11], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[10], c.r[11].w[0] + 68u);  if (t) { goto L_0040A220; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040A1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A280; } }
L_0040A1F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 79u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[11].w[0] + 79u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[9], c.r[11].w[0] + 79u);  if (t) { goto L_0040A280; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0040A280; } }
L_0040A220:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 79u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[11].w[0] + 79u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[9], c.r[11].w[0] + 79u);  if (t) { goto L_0040A260; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[6].w[0]);  if (t) { goto L_0040A280; } }
    c.budget -= 1;
L_0040A260:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.budget -= 8;
L_0040A280:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A1D0u | kUnwind; return; } goto L_0040A1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A2C0; } }
L_0040A298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A2A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0040A2A0u) [[unlikely]] return; }
L_0040A2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A2A8u); st32((c.r[17].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_00AF(c, 221u, depth + 1u); else { c.pc = 0x003BDBE0u; return; } if (c.pc != 0x0040A2A8u) [[unlikely]] return; }
L_0040A2A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040A2C0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_0040A2C0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A2E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[1].w[0] + 8964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[23], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A330u); c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x0040A330u) [[unlikely]] return; }
L_0040A330:
    set32(c.r[21], c.r[22].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A33Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0040A33Cu) [[unlikely]] return; }
L_0040A33C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = c.f[0];
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 8496u);
    c.budget -= 5;
L_0040A350:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040A370; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[22].w[0] + 104u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0040A374; } }
L_0040A370:
    c.f[21] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0040A374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A37Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040A37Cu) [[unlikely]] return; }
L_0040A37C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0040A398; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A398u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A398u) [[unlikely]] return; }
L_0040A398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[12] = c.f[21];
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A3B8u); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040A3B8u) [[unlikely]] return; }
L_0040A3B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A350u | kUnwind; return; } goto L_0040A350; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 20824u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 8480u);
    c.budget -= 7;
L_0040A3E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040A4B0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040A414; } }
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[22].w[0] + 104u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0040A418; } }
L_0040A414:
    c.f[21] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 1;
L_0040A418:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.f[23] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A46Cu); c.f[22] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040A46Cu) [[unlikely]] return; }
L_0040A46C:
    c.f[14] = 0u;
    c.f[12] = c.f[23];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A47Cu); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A47Cu) [[unlikely]] return; }
L_0040A47C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0040A498; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A498u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A498u) [[unlikely]] return; }
L_0040A498:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.f[12] = c.f[21];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4ACu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 237u, depth + 1u); else { c.pc = 0x0040A750u; return; } if (c.pc != 0x0040A4ACu) [[unlikely]] return; }
L_0040A4AC:
    c.budget -= 1;
L_0040A4B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A3E8u | kUnwind; return; } goto L_0040A3E8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 8480u);
    c.budget -= 4;
L_0040A4D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040A4F8; } }
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[22].w[0] + 104u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[23] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0040A4FC; } }
L_0040A4F8:
    c.f[23] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 1;
L_0040A4FC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 158u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A54Cu); c.f[21] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040A54Cu) [[unlikely]] return; }
L_0040A54C:
    c.f[14] = 0u;
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A55Cu); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A55Cu) [[unlikely]] return; }
L_0040A55C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0040A588; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_0040A588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A590; } }
    c.budget -= 1;
L_0040A588:
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_0040A590:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[12] = c.f[23];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5ACu); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040A5ACu) [[unlikely]] return; }
L_0040A5AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A4D8u | kUnwind; return; } goto L_0040A4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5C8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040A5C8u) [[unlikely]] return; }
L_0040A5C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040A5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[22].w[0] + 104u));  if (t) { goto L_0040A5E4; } }
L_0040A5E0:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_0040A5E4:
    set32(c.r[4], c.r[20].w[0] + 960u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5F4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040A5F4u) [[unlikely]] return; }
L_0040A5F4:
    set32(c.r[4], c.r[23].w[0] + 4320u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A604u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040A604u) [[unlikely]] return; }
L_0040A604:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040A61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[22].w[0] + 104u));  if (t) { goto L_0040A620; } }
L_0040A61C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 1;
L_0040A620:
    set32(c.r[4], c.r[20].w[0] + 7440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A62Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040A62Cu) [[unlikely]] return; }
L_0040A62C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040A644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[22].w[0] + 104u));  if (t) { goto L_0040A648; } }
L_0040A644:
    c.f[12] = c.r[2].w[0];
    c.budget -= 1;
L_0040A648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A650u);  if (depth < kMaxDepth) unit_00C4(c, 18u, depth + 1u); else { c.pc = 0x004102E0u; return; } if (c.pc != 0x0040A650u) [[unlikely]] return; }
L_0040A650:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 92u)));  if (t) { goto L_0040A668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[22].w[0] + 104u));  if (t) { goto L_0040A670; } }
L_0040A668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_0040A670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A678u);  if (depth < kMaxDepth) unit_00C2(c, 180u, depth + 1u); else { c.pc = 0x00409E00u; return; } if (c.pc != 0x0040A678u) [[unlikely]] return; }
L_0040A678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A680u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040A680u) [[unlikely]] return; }
L_0040A680:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] - 8480u);
    set32(c.r[2], c.r[2].w[0] - 8479u);
    c.f[14] = 0u;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 158u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A6F4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A6F4u) [[unlikely]] return; }
L_0040A6F4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A700u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0040A700u) [[unlikely]] return; }
L_0040A700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A708u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x0040A708u) [[unlikely]] return; }
L_0040A708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0040A750:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 164u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[20], ld32((c.r[1].w[0] + 8880u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + 3360u);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A7BCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 334u, depth + 1u); else { c.pc = 0x003AFB40u; return; } if (c.pc != 0x0040A7BCu) [[unlikely]] return; }
L_0040A7BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A7CCu); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040A7CCu) [[unlikely]] return; }
L_0040A7CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040A7E0; } }
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0040A7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A7E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040A7E8u) [[unlikely]] return; }
L_0040A7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A7FCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A7FCu) [[unlikely]] return; }
L_0040A7FC:
    set32(c.r[19], c.r[29].w[0] + 172u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_0040A808:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A814u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040A814u) [[unlikely]] return; }
L_0040A814:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040A824u) [[unlikely]] return; }
L_0040A824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A838u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A838u) [[unlikely]] return; }
L_0040A838:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A808u | kUnwind; return; } goto L_0040A808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A850u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040A850u) [[unlikely]] return; }
L_0040A850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A858u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 341u, depth + 1u); else { c.pc = 0x003AFC50u; return; } if (c.pc != 0x0040A858u) [[unlikely]] return; }
L_0040A858:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A868u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040A868u) [[unlikely]] return; }
L_0040A868:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040A878; } }
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040A878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A880u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040A880u) [[unlikely]] return; }
L_0040A880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A894u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A894u) [[unlikely]] return; }
L_0040A894:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040A898:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8A4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040A8A4u) [[unlikely]] return; }
L_0040A8A4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040A8B4u) [[unlikely]] return; }
L_0040A8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8C8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A8C8u) [[unlikely]] return; }
L_0040A8C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A898u | kUnwind; return; } goto L_0040A898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A8E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040A8E0u) [[unlikely]] return; }
L_0040A8E0:
    set32(c.r[3], c.r[20].w[0] + 3840u);
    set32(c.r[2], 0u - 5u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A900u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040A900u) [[unlikely]] return; }
L_0040A900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A914u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040A914u) [[unlikely]] return; }
L_0040A914:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A924u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040A924u) [[unlikely]] return; }
L_0040A924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A92Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040A92Cu) [[unlikely]] return; }
L_0040A92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0040A950:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040A960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A970u); set32(c.r[4], c.r[4].w[0] + 304u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0040A970u) [[unlikely]] return; }
L_0040A970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040A990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 304u);  c.pc = t; return; }
L_0040A9A0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 324u), c.r[3].w[0]);  c.pc = t; return; }
L_0040A9B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040A9D0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[7], c.r[7].w[0] - 21360u);
    set32(c.r[6], c.r[6].w[0] - 8434u);
    set32(c.r[3], c.r[3].w[0] - 8416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[9], c.r[4].w[0] + 304u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 9048u)));
    c.budget -= 26;
    { set32(c.r[4], c.r[9].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0700u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 54u, depth); }
L_0040AA40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040AA78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040AA78; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040AA78:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0040AA90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 18064u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0040AAE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 18016u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
L_0040AAE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040AAF0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_0040AB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040AB38; } }
    c.budget -= 1;
L_0040AB08:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);  if (t) { goto L_0040AB30; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
L_0040AB30:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0040AB38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040AB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[4].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 9468u)));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 26;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_0040ABB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_0040ABB8; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0040ABB4:
    set32(c.r[3], c.r[2].w[0] << 6);
    c.budget -= 1;
L_0040ABB8:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 63u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_0040AC08; } }
    set32(c.r[2], c.r[4].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0040AC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 84u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC68u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040AC68u) [[unlikely]] return; }
L_0040AC68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 159u, depth + 1u); else { c.pc = 0x003FA370u; return; } if (c.pc != 0x0040AC74u) [[unlikely]] return; }
L_0040AC74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040AC90:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
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
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[23], ld32((c.r[1].w[0] + 8880u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 9048u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ACECu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x0040ACECu) [[unlikely]] return; }
L_0040ACEC:
    c.f[21] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[20], c.r[17].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ACFCu); set32(c.r[4], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0040ACFCu) [[unlikely]] return; }
L_0040ACFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD04u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040AD04u) [[unlikely]] return; }
L_0040AD04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[5], 0u + 15u);
    c.f[12] = c.f[21];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD24u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040AD24u) [[unlikely]] return; }
L_0040AD24:
    set32(c.r[4], c.r[23].w[0] + 4320u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD34u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040AD34u) [[unlikely]] return; }
L_0040AD34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_0040AD48; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
L_0040AD48:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD64u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040AD64u) [[unlikely]] return; }
L_0040AD64:
    set32(c.r[4], c.r[16].w[0] + 3120u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD74u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040AD74u) [[unlikely]] return; }
L_0040AD74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0040ADACu) [[unlikely]] return; }
L_0040ADAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] <= 0; c.f[20] = fp::mul(c.f[21], c.f[0]);  if (t) { goto L_0040AE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADD8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040ADD8u) [[unlikely]] return; }
L_0040ADD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADF8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040ADF8u) [[unlikely]] return; }
L_0040ADF8:
    set32(c.r[4], c.r[23].w[0] + 5280u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE08u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040AE08u) [[unlikely]] return; }
L_0040AE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[5], c.r[30].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] | 43691ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    set32(c.r[2], c.r[17].w[0] + 2u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040AE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE3Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040AE3Cu) [[unlikely]] return; }
L_0040AE3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3280000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE5Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040AE5Cu) [[unlikely]] return; }
L_0040AE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE64u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040AE64u) [[unlikely]] return; }
L_0040AE64:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[23].w[0] + 5280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE74u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040AE74u) [[unlikely]] return; }
L_0040AE74:
    c.budget -= 1;
L_0040AE78:
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], c.r[23].w[0] + 3600u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] - 8400u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 372u);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 23;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040AEE0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040AEF8; } }
L_0040AEE0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040AEF8:
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040AF14; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040AF2C; } }
L_0040AF14:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040AF2C:
    st32((c.r[29].w[0] + 300u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040AF4C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040AF64; } }
L_0040AF4C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040AF64:
    set32(c.r[2], c.r[16].w[0] + 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 3360u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[18], c.r[2].w[0] << 1);
    set32(c.r[22], c.r[29].w[0] + 381u);
    c.budget -= 15;
L_0040AFA0:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040B310; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040AFC8u) [[unlikely]] return; }
L_0040AFC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2D00000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[19].w[0] >> 31);
    mmi::div(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[5].d[0] = c.r[2].d[0] | 43691ull;
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.f[24] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 26;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.f[23] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0040B038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[22];  if (t) { goto L_0040B03C; } }
L_0040B038:
    c.f[20] = 0u;
    c.budget -= 1;
L_0040B03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B044u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B044u) [[unlikely]] return; }
L_0040B044:
    c.f[20] = fp::add(c.f[23], c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[25] = fp::add(c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[0] = fp::sub(c.f[24], c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B080u); c.f[13] = c.f[25];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B080u) [[unlikely]] return; }
L_0040B080:
    set32(c.r[4], c.r[16].w[0] + 2640u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B090u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040B090u) [[unlikely]] return; }
L_0040B090:
    set32(c.r[4], c.r[18].w[0] + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0A0u); set32(c.r[6], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040B0A0u) [[unlikely]] return; }
L_0040B0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0A8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B0A8u) [[unlikely]] return; }
L_0040B0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437B0000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[25];
    c.f[0] = fp::sub(c.f[24], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0CCu); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B0CCu) [[unlikely]] return; }
L_0040B0CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040B0E0; } }
    st8((c.r[29].w[0] + 380u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0040B0E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0ECu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040B0ECu) [[unlikely]] return; }
L_0040B0EC:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B0FCu) [[unlikely]] return; }
L_0040B0FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B110u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B110u) [[unlikely]] return; }
L_0040B110:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B11Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040B11Cu) [[unlikely]] return; }
L_0040B11C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B12Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B12Cu) [[unlikely]] return; }
L_0040B12C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B13Cu); set32(c.r[6], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040B13Cu) [[unlikely]] return; }
L_0040B13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B144u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B144u) [[unlikely]] return; }
L_0040B144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43750000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[24], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = fp::add(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[14] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B180u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B180u) [[unlikely]] return; }
L_0040B180:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_0040B1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B194u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040B194u) [[unlikely]] return; }
L_0040B194:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B1A4u) [[unlikely]] return; }
L_0040B1A4:
    c.budget -= 1;
L_0040B1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1BCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B1BCu) [[unlikely]] return; }
L_0040B1BC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1C8u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040B1C8u) [[unlikely]] return; }
L_0040B1C8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B1D8u) [[unlikely]] return; }
L_0040B1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B1E0u) [[unlikely]] return; }
L_0040B1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::add(c.f[1], c.f[23]);
    c.f[12] = fp::sub(c.f[24], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B208u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B208u) [[unlikely]] return; }
L_0040B208:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[20].w[0] + 12u);  if (t) { goto L_0040B228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B21Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0040B21Cu) [[unlikely]] return; }
L_0040B21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[29].w[0] + 192u);  if (t) { goto L_0040B230; } }
    c.budget -= 1;
L_0040B228:
    set32(c.r[21], c.r[29].w[0] + 256u);
    c.budget -= 2;
L_0040B230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B238u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B238u) [[unlikely]] return; }
L_0040B238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[1], c.f[20]);
    c.f[12] = fp::sub(c.f[24], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B260u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B260u) [[unlikely]] return; }
L_0040B260:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B270u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B270u) [[unlikely]] return; }
L_0040B270:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040B294; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B294u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 269u, depth + 1u); else { c.pc = 0x0040AAF0u; return; } if (c.pc != 0x0040B294u) [[unlikely]] return; }
L_0040B294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B29Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B29Cu) [[unlikely]] return; }
L_0040B29C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[12] = fp::sub(c.f[24], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2B4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B2B4u) [[unlikely]] return; }
L_0040B2B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2C4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00C2(c, 270u, depth + 1u); else { c.pc = 0x0040AB40u; return; } if (c.pc != 0x0040B2C4u) [[unlikely]] return; }
L_0040B2C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0040B300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2D8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B2D8u) [[unlikely]] return; }
L_0040B2D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[12] = fp::sub(c.f[24], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2F0u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B2F0u) [[unlikely]] return; }
L_0040B2F0:
    set32(c.r[4], c.r[16].w[0] + 480u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B300u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040B300u) [[unlikely]] return; }
L_0040B300:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AFA0u | kUnwind; return; } goto L_0040AFA0; } }
L_0040B310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B32Cu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040B32Cu) [[unlikely]] return; }
L_0040B32C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_0040B418; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[2] = c.f[21];  if (t) { goto L_0040B350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
L_0040B350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040B384; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_0040B3A0; } }
L_0040B384:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_0040B3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B3A8u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040B3A8u) [[unlikely]] return; }
L_0040B3A8:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B3B4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x0040B3B4u) [[unlikely]] return; }
L_0040B3B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 20792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B3D0u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 268u, depth + 1u); else { c.pc = 0x0040AA90u; return; } if (c.pc != 0x0040B3D0u) [[unlikely]] return; }
L_0040B3D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B3DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0040B3DCu) [[unlikely]] return; }
L_0040B3DC:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 61u);
    set32(c.r[2], 0u + 640u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B40Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040B40Cu) [[unlikely]] return; }
L_0040B40C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B418u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040B418u) [[unlikely]] return; }
L_0040B418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B420u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B420u) [[unlikely]] return; }
L_0040B420:
    set32(c.r[4], c.r[23].w[0] + 3120u);
    set32(c.r[2], c.r[29].w[0] + 372u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 8624u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B444u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 334u, depth + 1u); else { c.pc = 0x003AFB40u; return; } if (c.pc != 0x0040B444u) [[unlikely]] return; }
L_0040B444:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B454u); set32(c.r[6], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040B454u) [[unlikely]] return; }
L_0040B454:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040B468; } }
    st8((c.r[29].w[0] + 380u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0040B468:
    set32(c.r[18], c.r[29].w[0] + 380u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0040B478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B480u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B480u) [[unlikely]] return; }
L_0040B480:
    c.f[1] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4B0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B4B0u) [[unlikely]] return; }
L_0040B4B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4BCu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040B4BCu) [[unlikely]] return; }
L_0040B4BC:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B4CCu) [[unlikely]] return; }
L_0040B4CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B478u | kUnwind; return; } goto L_0040B478; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4ECu); set32(c.r[6], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040B4ECu) [[unlikely]] return; }
L_0040B4EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040B500; } }
    st8((c.r[29].w[0] + 380u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0040B500:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040B508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B510u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B510u) [[unlikely]] return; }
L_0040B510:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B538u); c.f[12] = fp::add(c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B538u) [[unlikely]] return; }
L_0040B538:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B544u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040B544u) [[unlikely]] return; }
L_0040B544:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B554u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040B554u) [[unlikely]] return; }
L_0040B554:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B508u | kUnwind; return; } goto L_0040B508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B56Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B56Cu) [[unlikely]] return; }
L_0040B56C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43250000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B588u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B588u) [[unlikely]] return; }
L_0040B588:
    set32(c.r[4], c.r[23].w[0] + 3840u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B598u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040B598u) [[unlikely]] return; }
L_0040B598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B5A0u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x0040B5A0u) [[unlikely]] return; }
L_0040B5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0040B5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 8434u);
    set32(c.r[6], c.r[6].w[0] + 20792u);
    set32(c.r[2], c.r[2].w[0] + 18064u);
    set32(c.r[16], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] << 2);
    st32((c.r[4].w[0] + 332u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 332u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B688u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0040B688u) [[unlikely]] return; }
L_0040B688:
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], 0u + 320u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 316u);  c.pc = t; return; }
L_0040B6D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040B6F0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] - 18096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 9132u)));
    c.budget -= 13;
    { set32(c.r[4], c.r[4].w[0] + 324u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0700u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 54u, depth); }
L_0040B730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040B768; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040B768; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040B768:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0040B780:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0040B898; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0040B820; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040B7F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040B7D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040B7C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B948; } }
    c.budget -= 1;
L_0040B7C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], c.r[28].w[0] - 24988u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_0040B948; } }
    c.budget -= 1;
L_0040B7D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8383u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0040B948; } }
    c.budget -= 1;
L_0040B7F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 19u);  if (t) { goto L_0040B948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0040B948; } }
L_0040B820:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0040B848; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_0040B848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B880; } }
L_0040B848:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_0040B860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B880; } }
    c.budget -= 1;
L_0040B860:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 8256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
L_0040B880:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040B890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0040B948; } }
L_0040B890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 64u);  if (t) { goto L_0040B948; } }
L_0040B898:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0040B8C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040B8C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_0040B8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B930; } }
L_0040B8C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { goto L_0040B8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B930; } }
L_0040B8E0:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0040B908; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 58u);  if (t) { goto L_0040B908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B930; } }
    c.budget -= 1;
L_0040B908:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] - 8255u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
L_0040B930:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040B940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0040B948; } }
L_0040B940:
    set32(c.r[2], c.r[2].w[0] + 119u);
    c.budget -= 2;
L_0040B948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040B950:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
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
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    set32(c.r[21], c.r[17].w[0] + 304u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[1].w[0] + 8880u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[1].w[0] + 9132u)));
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 9468u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9C0u); set32(c.r[4], c.r[21].w[0] + 20u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0040B9C0u) [[unlikely]] return; }
L_0040B9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9C8u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040B9C8u) [[unlikely]] return; }
L_0040B9C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    set32(c.r[2], 0u - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9F8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040B9F8u) [[unlikely]] return; }
L_0040B9F8:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA04u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0040BA04u) [[unlikely]] return; }
L_0040BA04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040BAE8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA60u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0040BA60u) [[unlikely]] return; }
L_0040BA60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA88u); c.f[20] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0040BA88u) [[unlikely]] return; }
L_0040BA88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAA4u); c.f[20] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040BAA4u) [[unlikely]] return; }
L_0040BAA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAB8u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040BAB8u) [[unlikely]] return; }
L_0040BAB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3260000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BACCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040BACCu) [[unlikely]] return; }
L_0040BACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAD4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040BAD4u) [[unlikely]] return; }
L_0040BAD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAE8u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040BAE8u) [[unlikely]] return; }
L_0040BAE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.f[20] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[2], c.r[19].w[0] + 240u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 260u), c.r[16].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 384u), 0u);
    set32(c.r[17], 0u + 124u);
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    set32(c.r[16], 0u + 92u);
    st32((c.r[29].w[0] + 380u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 372u), c.f[20]);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 308u), c.f[20]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), c.f[20]);
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[23], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 316u);
    c.budget -= 26;
L_0040BB50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0040BB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0040BB70; } }
    c.budget -= 1;
L_0040BB68:
    st32((c.r[29].w[0] + 336u), 0u);
    c.budget -= 2;
L_0040BB70:
    set32(c.r[2], c.r[18].w[0] + 960u);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 388u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB84u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040BB84u) [[unlikely]] return; }
L_0040BB84:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040BB94u) [[unlikely]] return; }
L_0040BB94:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.f[24] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.f[23] = c.f[24];  if (t) { goto L_0040BBD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.f[23] = fp::add(c.f[24], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0040BBE8; } }
    c.budget -= 1;
L_0040BBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
L_0040BBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBF0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040BBF0u) [[unlikely]] return; }
L_0040BBF0:
    c.f[12] = 0u;
    c.f[13] = c.f[23];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC00u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040BC00u) [[unlikely]] return; }
L_0040BC00:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040BC10u) [[unlikely]] return; }
L_0040BC10:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 7u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[20].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 2880u);  if (t) { goto L_0040BC38; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC34u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040BC34u) [[unlikely]] return; }
L_0040BC34:
    c.budget -= 1;
L_0040BC38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0040BD80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC64u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 354u, depth + 1u); else { c.pc = 0x0040B780u; return; } if (c.pc != 0x0040BC64u) [[unlikely]] return; }
L_0040BC64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_0040BD80; } }
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[4], c.r[2].w[0] >> 31);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], c.r[3].w[0] + 127u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 236u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 228u);
    st32((c.r[3].w[0]), c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[3], c.r[29].w[0] + 220u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0040BCF4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0040BCF4:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[3].w[0] + 47u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[2].w[0]), c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 240u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD54u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040BD54u) [[unlikely]] return; }
L_0040BD54:
    c.f[12] = 0u;
    c.f[13] = c.f[23];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD64u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040BD64u) [[unlikely]] return; }
L_0040BD64:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040BD74u) [[unlikely]] return; }
L_0040BD74:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD80u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00BE(c, 159u, depth + 1u); else { c.pc = 0x003FA370u; return; } if (c.pc != 0x0040BD80u) [[unlikely]] return; }
L_0040BD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD88u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040BD88u) [[unlikely]] return; }
L_0040BD88:
    c.f[12] = 0u;
    c.f[13] = c.f[24];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD98u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040BD98u) [[unlikely]] return; }
L_0040BD98:
    set32(c.r[4], c.r[19].w[0] + 480u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDA8u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040BDA8u) [[unlikely]] return; }
L_0040BDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDB0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040BDB0u) [[unlikely]] return; }
L_0040BDB0:
    c.f[0] = c.r[16].w[0];
    c.f[12] = 0u;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDC4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040BDC4u) [[unlikely]] return; }
L_0040BDC4:
    set32(c.r[4], c.r[19].w[0] + 2160u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDD4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040BDD4u) [[unlikely]] return; }
L_0040BDD4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 240u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] - 66u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 66u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BB50u | kUnwind; return; } goto L_0040BB50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040BE14; } }
    c.f[20] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_0040BE30; } }
L_0040BE14:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[20] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[20]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_0040BE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE38u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040BE38u) [[unlikely]] return; }
L_0040BE38:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE44u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x0040BE44u) [[unlikely]] return; }
L_0040BE44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[2].w[0] + 18160u);
    set32(c.r[4], 0u + 408u);
    set32(c.r[5], 0u + 105u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE74u); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040BE74u) [[unlikely]] return; }
L_0040BE74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BEC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[4], 0u + 408u);
    set32(c.r[5], 0u + 171u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEC4u); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040BEC4u) [[unlikely]] return; }
L_0040BEC4:
    c.budget -= 1;
L_0040BEC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040BF10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[2].w[0] + 18208u);
    set32(c.r[4], 0u + 408u);
    set32(c.r[5], 0u + 237u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF04u); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040BF04u) [[unlikely]] return; }
L_0040BF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BF40; } }
    c.budget -= 1;
L_0040BF10:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[4], 0u + 408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 237u);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF3Cu); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040BF3Cu) [[unlikely]] return; }
L_0040BF3C:
    c.budget -= 1;
L_0040BF40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 11u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00C3(c, 6u, depth); } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0040BF88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 63u);  if (t) { goto L_0040BF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BF90; } }
L_0040BF88:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 2;
L_0040BF90:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], c.r[2].w[0] + 23856u);
    set32(c.r[4], 0u + 408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 303u);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFBCu); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040BFBCu) [[unlikely]] return; }
L_0040BFBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));  if (t) { goto L_0040BFE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040BFE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0040BFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00C3(c, 3u, depth); } }
L_0040BFE8:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 52u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00C3(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_00C3(c, 1u, depth);
}

}
