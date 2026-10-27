#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0072[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0,
    0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0,
    0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0,
    355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0,
    388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0,
    0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429,
};

void unit_0072(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C8000;
    case 2u: goto L_002C8004;
    case 3u: goto L_002C8010;
    case 4u: goto L_002C8020;
    case 5u: goto L_002C8034;
    case 6u: goto L_002C8040;
    case 7u: goto L_002C8060;
    case 8u: goto L_002C8078;
    case 9u: goto L_002C8084;
    case 10u: goto L_002C80A8;
    case 11u: goto L_002C80D0;
    case 12u: goto L_002C8114;
    case 13u: goto L_002C8140;
    case 14u: goto L_002C8158;
    case 15u: goto L_002C8168;
    case 16u: goto L_002C81C0;
    case 17u: goto L_002C8200;
    case 18u: goto L_002C820C;
    case 19u: goto L_002C8220;
    case 20u: goto L_002C8260;
    case 21u: goto L_002C8278;
    case 22u: goto L_002C8298;
    case 23u: goto L_002C82E0;
    case 24u: goto L_002C8308;
    case 25u: goto L_002C8420;
    case 26u: goto L_002C8460;
    case 27u: goto L_002C8470;
    case 28u: goto L_002C8480;
    case 29u: goto L_002C8490;
    case 30u: goto L_002C84B8;
    case 31u: goto L_002C8510;
    case 32u: goto L_002C8590;
    case 33u: goto L_002C85F0;
    case 34u: goto L_002C8650;
    case 35u: goto L_002C8760;
    case 36u: goto L_002C87E0;
    case 37u: goto L_002C87F8;
    case 38u: goto L_002C8820;
    case 39u: goto L_002C88A0;
    case 40u: goto L_002C88F0;
    case 41u: goto L_002C8930;
    case 42u: goto L_002C8990;
    case 43u: goto L_002C89A8;
    case 44u: goto L_002C89C0;
    case 45u: goto L_002C89D8;
    case 46u: goto L_002C8A00;
    case 47u: goto L_002C8A60;
    case 48u: goto L_002C8A70;
    case 49u: goto L_002C8A88;
    case 50u: goto L_002C8A98;
    case 51u: goto L_002C8AB0;
    case 52u: goto L_002C8AC0;
    case 53u: goto L_002C8AD8;
    case 54u: goto L_002C8AE8;
    case 55u: goto L_002C8B10;
    case 56u: goto L_002C8B38;
    case 57u: goto L_002C8BA0;
    case 58u: goto L_002C8C00;
    case 59u: goto L_002C8CB0;
    case 60u: goto L_002C8CC0;
    case 61u: goto L_002C8CC8;
    case 62u: goto L_002C8CD0;
    case 63u: goto L_002C8CD8;
    case 64u: goto L_002C8CE0;
    case 65u: goto L_002C8CE8;
    case 66u: goto L_002C8CF0;
    case 67u: goto L_002C8CF8;
    case 68u: goto L_002C8D00;
    case 69u: goto L_002C8D08;
    case 70u: goto L_002C8D10;
    case 71u: goto L_002C8D18;
    case 72u: goto L_002C8D20;
    case 73u: goto L_002C8D30;
    case 74u: goto L_002C8D40;
    case 75u: goto L_002C8D8C;
    case 76u: goto L_002C8DA0;
    case 77u: goto L_002C8DB0;
    case 78u: goto L_002C8DC0;
    case 79u: goto L_002C8DD4;
    case 80u: goto L_002C8E14;
    case 81u: goto L_002C8E54;
    case 82u: goto L_002C8E94;
    case 83u: goto L_002C8EA8;
    case 84u: goto L_002C8EBC;
    case 85u: goto L_002C8EC4;
    case 86u: goto L_002C8ED8;
    case 87u: goto L_002C8F0C;
    case 88u: goto L_002C8F28;
    case 89u: goto L_002C8F40;
    case 90u: goto L_002C8F5C;
    case 91u: goto L_002C8F74;
    case 92u: goto L_002C8F7C;
    case 93u: goto L_002C8F98;
    case 94u: goto L_002C8FB0;
    case 95u: goto L_002C8FB8;
    case 96u: goto L_002C8FD4;
    case 97u: goto L_002C8FEC;
    case 98u: goto L_002C8FF4;
    case 99u: goto L_002C9010;
    case 100u: goto L_002C9028;
    case 101u: goto L_002C9030;
    case 102u: goto L_002C904C;
    case 103u: goto L_002C9064;
    case 104u: goto L_002C906C;
    case 105u: goto L_002C9088;
    case 106u: goto L_002C90A0;
    case 107u: goto L_002C90BC;
    case 108u: goto L_002C90D8;
    case 109u: goto L_002C90F0;
    case 110u: goto L_002C90F8;
    case 111u: goto L_002C9114;
    case 112u: goto L_002C912C;
    case 113u: goto L_002C9134;
    case 114u: goto L_002C9150;
    case 115u: goto L_002C9158;
    case 116u: goto L_002C9170;
    case 117u: goto L_002C9178;
    case 118u: goto L_002C9194;
    case 119u: goto L_002C91AC;
    case 120u: goto L_002C91B8;
    case 121u: goto L_002C91D0;
    case 122u: goto L_002C91D8;
    case 123u: goto L_002C91F4;
    case 124u: goto L_002C920C;
    case 125u: goto L_002C9224;
    case 126u: goto L_002C9240;
    case 127u: goto L_002C9320;
    case 128u: goto L_002C93F0;
    case 129u: goto L_002C9410;
    case 130u: goto L_002C941C;
    case 131u: goto L_002C9440;
    case 132u: goto L_002C9468;
    case 133u: goto L_002C94A4;
    case 134u: goto L_002C94E4;
    case 135u: goto L_002C94F8;
    case 136u: goto L_002C9500;
    case 137u: goto L_002C952C;
    case 138u: goto L_002C9560;
    case 139u: goto L_002C95A4;
    case 140u: goto L_002C95AC;
    case 141u: goto L_002C9630;
    case 142u: goto L_002C9638;
    case 143u: goto L_002C9654;
    case 144u: goto L_002C9690;
    case 145u: goto L_002C96E4;
    case 146u: goto L_002C9700;
    case 147u: goto L_002C970C;
    case 148u: goto L_002C974C;
    case 149u: goto L_002C9760;
    case 150u: goto L_002C9780;
    case 151u: goto L_002C97B0;
    case 152u: goto L_002C97D8;
    case 153u: goto L_002C97F0;
    case 154u: goto L_002C9840;
    case 155u: goto L_002C9848;
    case 156u: goto L_002C9880;
    case 157u: goto L_002C98A0;
    case 158u: goto L_002C98AC;
    case 159u: goto L_002C98D0;
    case 160u: goto L_002C98F8;
    case 161u: goto L_002C9914;
    case 162u: goto L_002C9958;
    case 163u: goto L_002C996C;
    case 164u: goto L_002C99A4;
    case 165u: goto L_002C99D4;
    case 166u: goto L_002C9A00;
    case 167u: goto L_002C9A20;
    case 168u: goto L_002C9AC4;
    case 169u: goto L_002C9AEC;
    case 170u: goto L_002C9B14;
    case 171u: goto L_002C9B34;
    case 172u: goto L_002C9B48;
    case 173u: goto L_002C9B50;
    case 174u: goto L_002C9B8C;
    case 175u: goto L_002C9BB0;
    case 176u: goto L_002C9C10;
    case 177u: goto L_002C9C30;
    case 178u: goto L_002C9C3C;
    case 179u: goto L_002C9C64;
    case 180u: goto L_002C9C78;
    case 181u: goto L_002C9CFC;
    case 182u: goto L_002C9D10;
    case 183u: goto L_002C9D1C;
    case 184u: goto L_002C9D30;
    case 185u: goto L_002C9D44;
    case 186u: goto L_002C9D54;
    case 187u: goto L_002C9D68;
    case 188u: goto L_002C9D70;
    case 189u: goto L_002C9D84;
    case 190u: goto L_002C9DA0;
    case 191u: goto L_002C9DD0;
    case 192u: goto L_002C9E08;
    case 193u: goto L_002C9E2C;
    case 194u: goto L_002C9E60;
    case 195u: goto L_002C9E70;
    case 196u: goto L_002C9E88;
    case 197u: goto L_002C9E9C;
    case 198u: goto L_002C9EB0;
    case 199u: goto L_002C9ED0;
    case 200u: goto L_002C9EDC;
    case 201u: goto L_002C9F00;
    case 202u: goto L_002C9F28;
    case 203u: goto L_002CA008;
    case 204u: goto L_002CA048;
    case 205u: goto L_002CA05C;
    case 206u: goto L_002CA064;
    case 207u: goto L_002CA094;
    case 208u: goto L_002CA0C0;
    case 209u: goto L_002CA164;
    case 210u: goto L_002CA184;
    case 211u: goto L_002CA198;
    case 212u: goto L_002CA1A0;
    case 213u: goto L_002CA1A8;
    case 214u: goto L_002CA240;
    case 215u: goto L_002CA254;
    case 216u: goto L_002CA26C;
    case 217u: goto L_002CA274;
    case 218u: goto L_002CA290;
    case 219u: goto L_002CA2C0;
    case 220u: goto L_002CA2E0;
    case 221u: goto L_002CA350;
    case 222u: goto L_002CA380;
    case 223u: goto L_002CA388;
    case 224u: goto L_002CA39C;
    case 225u: goto L_002CA3A4;
    case 226u: goto L_002CA3D0;
    case 227u: goto L_002CA44C;
    case 228u: goto L_002CA454;
    case 229u: goto L_002CA4A8;
    case 230u: goto L_002CA4D8;
    case 231u: goto L_002CA4EC;
    case 232u: goto L_002CA500;
    case 233u: goto L_002CA514;
    case 234u: goto L_002CA53C;
    case 235u: goto L_002CA558;
    case 236u: goto L_002CA56C;
    case 237u: goto L_002CA588;
    case 238u: goto L_002CA59C;
    case 239u: goto L_002CA5C0;
    case 240u: goto L_002CA5D0;
    case 241u: goto L_002CA5E4;
    case 242u: goto L_002CA5FC;
    case 243u: goto L_002CA610;
    case 244u: goto L_002CA630;
    case 245u: goto L_002CA64C;
    case 246u: goto L_002CA668;
    case 247u: goto L_002CA680;
    case 248u: goto L_002CA688;
    case 249u: goto L_002CA6A4;
    case 250u: goto L_002CA6C0;
    case 251u: goto L_002CA6D8;
    case 252u: goto L_002CA6E0;
    case 253u: goto L_002CA6FC;
    case 254u: goto L_002CA718;
    case 255u: goto L_002CA730;
    case 256u: goto L_002CA738;
    case 257u: goto L_002CA754;
    case 258u: goto L_002CA770;
    case 259u: goto L_002CA788;
    case 260u: goto L_002CA790;
    case 261u: goto L_002CA7AC;
    case 262u: goto L_002CA7C4;
    case 263u: goto L_002CA7E0;
    case 264u: goto L_002CAAA8;
    case 265u: goto L_002CAAD0;
    case 266u: goto L_002CAAE0;
    case 267u: goto L_002CAB84;
    case 268u: goto L_002CABA0;
    case 269u: goto L_002CABF0;
    case 270u: goto L_002CAC08;
    case 271u: goto L_002CAC14;
    case 272u: goto L_002CAC20;
    case 273u: goto L_002CAC3C;
    case 274u: goto L_002CAC70;
    case 275u: goto L_002CAC84;
    case 276u: goto L_002CAC8C;
    case 277u: goto L_002CAC98;
    case 278u: goto L_002CACA8;
    case 279u: goto L_002CACD0;
    case 280u: goto L_002CACF4;
    case 281u: goto L_002CAD8C;
    case 282u: goto L_002CADE4;
    case 283u: goto L_002CAE10;
    case 284u: goto L_002CAE24;
    case 285u: goto L_002CAE40;
    case 286u: goto L_002CAEB4;
    case 287u: goto L_002CAEC8;
    case 288u: goto L_002CAEE0;
    case 289u: goto L_002CAEE8;
    case 290u: goto L_002CAF14;
    case 291u: goto L_002CAF3C;
    case 292u: goto L_002CAF64;
    case 293u: goto L_002CAF90;
    case 294u: goto L_002CAFAC;
    case 295u: goto L_002CAFBC;
    case 296u: goto L_002CAFDC;
    case 297u: goto L_002CAFEC;
    case 298u: goto L_002CAFF4;
    case 299u: goto L_002CB008;
    case 300u: goto L_002CB010;
    case 301u: goto L_002CB024;
    case 302u: goto L_002CB02C;
    case 303u: goto L_002CB040;
    case 304u: goto L_002CB048;
    case 305u: goto L_002CB05C;
    case 306u: goto L_002CB064;
    case 307u: goto L_002CB070;
    case 308u: goto L_002CB078;
    case 309u: goto L_002CB084;
    case 310u: goto L_002CB08C;
    case 311u: goto L_002CB098;
    case 312u: goto L_002CB0A0;
    case 313u: goto L_002CB0AC;
    case 314u: goto L_002CB0C0;
    case 315u: goto L_002CB110;
    case 316u: goto L_002CB148;
    case 317u: goto L_002CB160;
    case 318u: goto L_002CB180;
    case 319u: goto L_002CB1BC;
    case 320u: goto L_002CB1E4;
    case 321u: goto L_002CB200;
    case 322u: goto L_002CB210;
    case 323u: goto L_002CB228;
    case 324u: goto L_002CB240;
    case 325u: goto L_002CB250;
    case 326u: goto L_002CB270;
    case 327u: goto L_002CB27C;
    case 328u: goto L_002CB2A0;
    case 329u: goto L_002CB2C8;
    case 330u: goto L_002CB398;
    case 331u: goto L_002CB3D8;
    case 332u: goto L_002CB3EC;
    case 333u: goto L_002CB424;
    case 334u: goto L_002CB438;
    case 335u: goto L_002CB464;
    case 336u: goto L_002CB490;
    case 337u: goto L_002CB4F0;
    case 338u: goto L_002CB558;
    case 339u: goto L_002CB598;
    case 340u: goto L_002CB5B0;
    case 341u: goto L_002CB5B8;
    case 342u: goto L_002CB5DC;
    case 343u: goto L_002CB634;
    case 344u: goto L_002CB748;
    case 345u: goto L_002CB75C;
    case 346u: goto L_002CB764;
    case 347u: goto L_002CB79C;
    case 348u: goto L_002CB7A8;
    case 349u: goto L_002CB7B0;
    case 350u: goto L_002CB7F0;
    case 351u: goto L_002CB818;
    case 352u: goto L_002CB820;
    case 353u: goto L_002CB860;
    case 354u: goto L_002CB874;
    case 355u: goto L_002CB880;
    case 356u: goto L_002CB890;
    case 357u: goto L_002CB8B4;
    case 358u: goto L_002CB900;
    case 359u: goto L_002CB910;
    case 360u: goto L_002CB928;
    case 361u: goto L_002CB938;
    case 362u: goto L_002CB940;
    case 363u: goto L_002CB948;
    case 364u: goto L_002CB950;
    case 365u: goto L_002CB960;
    case 366u: goto L_002CB970;
    case 367u: goto L_002CB978;
    case 368u: goto L_002CB994;
    case 369u: goto L_002CB9A8;
    case 370u: goto L_002CB9B0;
    case 371u: goto L_002CB9CC;
    case 372u: goto L_002CB9E0;
    case 373u: goto L_002CB9E8;
    case 374u: goto L_002CBA04;
    case 375u: goto L_002CBA18;
    case 376u: goto L_002CBA20;
    case 377u: goto L_002CBA3C;
    case 378u: goto L_002CBA50;
    case 379u: goto L_002CBA58;
    case 380u: goto L_002CBA74;
    case 381u: goto L_002CBA88;
    case 382u: goto L_002CBA90;
    case 383u: goto L_002CBAAC;
    case 384u: goto L_002CBAC0;
    case 385u: goto L_002CBAC8;
    case 386u: goto L_002CBAE4;
    case 387u: goto L_002CBAF8;
    case 388u: goto L_002CBB00;
    case 389u: goto L_002CBB1C;
    case 390u: goto L_002CBB30;
    case 391u: goto L_002CBB38;
    case 392u: goto L_002CBB54;
    case 393u: goto L_002CBB68;
    case 394u: goto L_002CBB70;
    case 395u: goto L_002CBB84;
    case 396u: goto L_002CBB8C;
    case 397u: goto L_002CBBA0;
    case 398u: goto L_002CBBB4;
    case 399u: goto L_002CBBC0;
    case 400u: goto L_002CBBF0;
    case 401u: goto L_002CBC00;
    case 402u: goto L_002CBC20;
    case 403u: goto L_002CBC30;
    case 404u: goto L_002CBC38;
    case 405u: goto L_002CBC64;
    case 406u: goto L_002CBC74;
    case 407u: goto L_002CBC7C;
    case 408u: goto L_002CBCA0;
    case 409u: goto L_002CBCC8;
    case 410u: goto L_002CBCE0;
    case 411u: goto L_002CBCF4;
    case 412u: goto L_002CBD14;
    case 413u: goto L_002CBD2C;
    case 414u: goto L_002CBD48;
    case 415u: goto L_002CBD50;
    case 416u: goto L_002CBD7C;
    case 417u: goto L_002CBD94;
    case 418u: goto L_002CBDB0;
    case 419u: goto L_002CBDBC;
    case 420u: goto L_002CBDFC;
    case 421u: goto L_002CBE18;
    case 422u: goto L_002CBE5C;
    case 423u: goto L_002CBE80;
    case 424u: goto L_002CBE9C;
    case 425u: goto L_002CBEA4;
    case 426u: goto L_002CBEE8;
    case 427u: goto L_002CBF10;
    case 428u: goto L_002CBFD0;
    case 429u: goto L_002CBFFC;
    default: bad_entry(c, 0x002C8000u); return;
    }
L_002C8000:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_002C8004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8048; } }
    c.budget -= 1;
L_002C8010:
    set32(c.r[4], c.r[4].w[0] + 30u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7FF0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 243u, depth); } }
L_002C8020:
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8034u); set32(c.r[8], c.r[8].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C8034u) [[unlikely]] return; }
L_002C8034:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7FC8u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 242u, depth); } }
L_002C8040:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_002C8048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8078u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C8078u) [[unlikely]] return; }
L_002C8078:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8084u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C8084u) [[unlikely]] return; }
L_002C8084:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C8120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002C80A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8100; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C8100; } }
L_002C80D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[10].d[0];  if (t) { goto L_002C80F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_002C80F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8128; } }
    c.budget -= 1;
L_002C80F0:
    set32(c.r[2], c.r[2].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C80D0u | kUnwind; return; } goto L_002C80D0; } }
L_002C8100:
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8114u); set32(c.r[8], c.r[8].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C8114u) [[unlikely]] return; }
L_002C8114:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C80A8u | kUnwind; return; } goto L_002C80A8; } }
L_002C8120:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C8128:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8140:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 11984u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
L_002C8158:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002C8188; } }
L_002C8168:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002C8178; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002C8178:
    set32(c.r[4], c.r[4].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8168u | kUnwind; return; } goto L_002C8168; } }
L_002C8188:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[9].sd[0] < 61ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 14183u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 14184u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8158u | kUnwind; return; } goto L_002C8158; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C81C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8200u); c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));  if (depth < kMaxDepth) unit_0071(c, 201u, depth + 1u); else { c.pc = 0x002C7130u; return; } if (c.pc != 0x002C8200u) [[unlikely]] return; }
L_002C8200:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C820Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C820Cu) [[unlikely]] return; }
L_002C820C:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C8238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8220u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C8220u) [[unlikely]] return; }
L_002C8220:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C8238; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 476u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002C8248; } }
L_002C8238:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 476u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002C8248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8278u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));  if (depth < kMaxDepth) unit_0072(c, 7u, depth + 1u); else { c.pc = 0x002C8060u; return; } if (c.pc != 0x002C8278u) [[unlikely]] return; }
L_002C8278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002C82D0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 23424u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] - 23424u);  if (t) { goto L_002C82B8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_002C8298:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C82B8; } }
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8298u | kUnwind; return; } goto L_002C8298; } }
    c.budget -= 1;
L_002C82B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[3].w[0] + 478u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 480u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_002C82D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C82E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C8318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8308u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C8308u) [[unlikely]] return; }
L_002C8308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8318; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C8318:
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002C8368; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002C8368; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8368; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u + 21u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 61u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C8368; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002C8368:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002C83B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002C83B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C83B8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u + 21u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 61u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C83B8; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_002C83B8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002C8400; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C8400; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8400; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 61u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C8400; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002C8400:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C8478; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C8468; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C8458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8480; } }
    c.budget -= 1;
L_002C8458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8460u); set32(c.r[4], 0u + 63u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002C8460u) [[unlikely]] return; }
L_002C8460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8480; } }
L_002C8468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8470u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002C8470u) [[unlikely]] return; }
L_002C8470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8480; } }
L_002C8478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8480u); set32(c.r[4], 0u + 77u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002C8480u) [[unlikely]] return; }
L_002C8480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 14432u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[7], c.r[7].w[0] - 14432u);  if (t) { goto L_002C84F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 4;
L_002C84B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C84E8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C84E8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 4u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 482u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[7].w[0] + 4u));  if (t) { goto L_002C8500; } }
    c.budget -= 1;
L_002C84E8:
    set32(c.r[7], c.r[7].w[0] + 6u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C84B8u | kUnwind; return; } goto L_002C84B8; } }
L_002C84F8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_002C8500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = fp::sub(c.f[12], c.f[0]);  if (t) { goto L_002C8580; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C8560; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002C8560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C8588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_002C8588; } }
L_002C8580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_002C8588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8590:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.f[0] = ld32((c.r[1].w[0] - 23344u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 492u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[1].w[0] - 23340u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[3].w[0] + 496u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[1].w[0] - 23336u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[3].w[0] + 500u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 485u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 486u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 487u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002C85F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 483u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 483u);  if (t) { goto L_002C8698; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C8630; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C8620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8758; } }
L_002C8620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002C8758; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C8630:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 488u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 483u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 483u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002C8650:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 485u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 485u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 485u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 485u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C8688; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C8688:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8650u | kUnwind; return; } goto L_002C8650; } }
L_002C8698:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] - 23344u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 485u)));
    c.f[1] = ld32((c.r[5].w[0] + 492u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 492u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 486u)));
    c.f[1] = ld32((c.r[5].w[0] + 496u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 496u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 487u)));
    c.f[1] = ld32((c.r[5].w[0] + 500u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 500u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 488u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 488u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 43;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8758; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 483u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 484u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002C8758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8760:
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 51712ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[3].w[0] + 100u);
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);  if (t) { goto L_002C87A8; } }
    c.r[3].d[0] = c.r[3].d[0] | 51711ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C87A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 51712ull;
    set32(c.r[4], c.r[3].w[0] + 16u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);  if (t) { goto L_002C87D0; } }
    c.r[3].d[0] = c.r[3].d[0] | 51711ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C87D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C87E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87F8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));  if (depth < kMaxDepth) unit_0072(c, 7u, depth + 1u); else { c.pc = 0x002C8060u; return; } if (c.pc != 0x002C87F8u) [[unlikely]] return; }
L_002C87F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C880C; } }
L_002C8808:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 1;
L_002C880C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8820:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C8890; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002C8890; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 19195u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8661u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002C8890; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 191u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 191u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
L_002C8890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C88A0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 886u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 69u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C88E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[5], c.r[6].w[0] + 191u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002C88E8; } }
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 191u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
L_002C88E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C88F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002C8930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 28u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { goto L_002C89D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C89B8; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 58u);  if (t) { goto L_002C89A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C8988; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002C8988; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C8988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C89E8; } }
    c.budget -= 1;
L_002C8988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8990u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C8990u) [[unlikely]] return; }
L_002C8990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C89E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 61u);  if (t) { goto L_002C89F0; } }
L_002C89A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C89A8u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C89A8u) [[unlikely]] return; }
L_002C89A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C89E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 67u);  if (t) { goto L_002C89F0; } }
L_002C89B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C89C0u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C89C0u) [[unlikely]] return; }
L_002C89C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C89E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 68u);  if (t) { goto L_002C89F0; } }
L_002C89D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C89D8u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C89D8u) [[unlikely]] return; }
L_002C89D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C89E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 69u);  if (t) { goto L_002C89F0; } }
L_002C89E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002C89F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 28u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { goto L_002C8AD0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C8AA8; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 58u);  if (t) { goto L_002C8A80; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C8A58; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002C8A58; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C8A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8AF8; } }
    c.budget -= 1;
L_002C8A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A60u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C8A60u) [[unlikely]] return; }
L_002C8A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C8A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A70u);  if (depth < kMaxDepth) unit_0072(c, 55u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002C8A70u) [[unlikely]] return; }
L_002C8A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8AF8; } }
L_002C8A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 61u);  if (t) { goto L_002C8B00; } }
L_002C8A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A88u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C8A88u) [[unlikely]] return; }
L_002C8A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C8AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A98u);  if (depth < kMaxDepth) unit_0072(c, 55u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002C8A98u) [[unlikely]] return; }
L_002C8A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8AF8; } }
L_002C8AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 67u);  if (t) { goto L_002C8B00; } }
L_002C8AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AB0u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C8AB0u) [[unlikely]] return; }
L_002C8AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C8AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AC0u);  if (depth < kMaxDepth) unit_0072(c, 55u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002C8AC0u) [[unlikely]] return; }
L_002C8AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8AF8; } }
L_002C8AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 68u);  if (t) { goto L_002C8B00; } }
L_002C8AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AD8u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C8AD8u) [[unlikely]] return; }
L_002C8AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C8AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AE8u);  if (depth < kMaxDepth) unit_0072(c, 55u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002C8AE8u) [[unlikely]] return; }
L_002C8AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8AF8; } }
L_002C8AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 69u);  if (t) { goto L_002C8B00; } }
L_002C8AF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002C8B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8B10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002C8B88; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 1;
L_002C8B38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8B78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1324u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C8B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8B90; } }
L_002C8B78:
    set32(c.r[7], c.r[7].w[0] + 30u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B38u | kUnwind; return; } goto L_002C8B38; } }
L_002C8B88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C8B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8BA0:
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 24030u);
    set32(c.r[4], c.r[4].w[0] - 24028u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));  if (t) { goto L_002C8BF0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C8BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8BF8; } }
L_002C8BF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002C8BF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8C00:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 74u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 74u);  if (t) { goto L_002C8C58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C8C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8CA0; } }
    c.budget -= 1;
L_002C8C28:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002C8CA0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 120u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 61u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C8CA0; } }
    c.budget -= 1;
L_002C8C58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 75u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[5].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C8C90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8C90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 77u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C8CA0; } }
L_002C8C90:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002C8CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CC0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8CC0u) [[unlikely]] return; }
L_002C8CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CC8u);  if (depth < kMaxDepth) unit_0072(c, 128u, depth + 1u); else { c.pc = 0x002C93F0u; return; } if (c.pc != 0x002C8CC8u) [[unlikely]] return; }
L_002C8CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CD0u);  if (depth < kMaxDepth) unit_0072(c, 198u, depth + 1u); else { c.pc = 0x002C9EB0u; return; } if (c.pc != 0x002C8CD0u) [[unlikely]] return; }
L_002C8CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CD8u);  if (depth < kMaxDepth) unit_0072(c, 350u, depth + 1u); else { c.pc = 0x002CB7F0u; return; } if (c.pc != 0x002C8CD8u) [[unlikely]] return; }
L_002C8CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CE0u);  if (depth < kMaxDepth) unit_0072(c, 325u, depth + 1u); else { c.pc = 0x002CB250u; return; } if (c.pc != 0x002C8CE0u) [[unlikely]] return; }
L_002C8CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CE8u);  if (depth < kMaxDepth) unit_0072(c, 150u, depth + 1u); else { c.pc = 0x002C9780u; return; } if (c.pc != 0x002C8CE8u) [[unlikely]] return; }
L_002C8CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CF0u);  if (depth < kMaxDepth) unit_0072(c, 269u, depth + 1u); else { c.pc = 0x002CABF0u; return; } if (c.pc != 0x002C8CF0u) [[unlikely]] return; }
L_002C8CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CF8u);  if (depth < kMaxDepth) unit_0072(c, 221u, depth + 1u); else { c.pc = 0x002CA350u; return; } if (c.pc != 0x002C8CF8u) [[unlikely]] return; }
L_002C8CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D00u);  if (depth < kMaxDepth) unit_0072(c, 239u, depth + 1u); else { c.pc = 0x002CA5C0u; return; } if (c.pc != 0x002C8D00u) [[unlikely]] return; }
L_002C8D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D08u);  if (depth < kMaxDepth) unit_0072(c, 73u, depth + 1u); else { c.pc = 0x002C8D30u; return; } if (c.pc != 0x002C8D08u) [[unlikely]] return; }
L_002C8D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D10u);  if (depth < kMaxDepth) unit_0072(c, 77u, depth + 1u); else { c.pc = 0x002C8DB0u; return; } if (c.pc != 0x002C8D10u) [[unlikely]] return; }
L_002C8D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D18u);  if (depth < kMaxDepth) unit_0072(c, 243u, depth + 1u); else { c.pc = 0x002CA610u; return; } if (c.pc != 0x002C8D18u) [[unlikely]] return; }
L_002C8D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D20u);  if (depth < kMaxDepth) unit_0072(c, 176u, depth + 1u); else { c.pc = 0x002C9C10u; return; } if (c.pc != 0x002C8D20u) [[unlikely]] return; }
L_002C8D20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D40u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8D40u) [[unlikely]] return; }
L_002C8D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[3] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4A50000u);
    c.f[2] = c.r[2].w[0];
    c.f[4] = ld32((c.r[3].w[0] + 14172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC39B0000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[13] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D8Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C8D8Cu) [[unlikely]] return; }
L_002C8D8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 13920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C8DA0u) [[unlikely]] return; }
L_002C8DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C8DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DC0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8DC0u) [[unlikely]] return; }
L_002C8DC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 14160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C8DD4u) [[unlikely]] return; }
L_002C8DD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 14400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 15u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 492u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E14u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C8E14u) [[unlikely]] return; }
L_002C8E14:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 13680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 15u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 496u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E54u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C8E54u) [[unlikely]] return; }
L_002C8E54:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 13440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 15u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 500u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E94u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C8E94u) [[unlikely]] return; }
L_002C8E94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 20880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C8EA8u) [[unlikely]] return; }
L_002C8EA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] - 21120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EBCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C8EBCu) [[unlikely]] return; }
L_002C8EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EC4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8EC4u) [[unlikely]] return; }
L_002C8EC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], c.r[4].w[0] - 30480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8ED8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C8ED8u) [[unlikely]] return; }
L_002C8ED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    set32(c.r[3], c.r[3].w[0] - 30240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 17u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C8F0Cu) [[unlikely]] return; }
L_002C8F0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 30720u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F28u); st32((c.r[1].w[0] - 7504u), 0u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C8F28u) [[unlikely]] return; }
L_002C8F28:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14180u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F40u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8F40u) [[unlikely]] return; }
L_002C8F40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2E40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F5Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C8F5Cu) [[unlikely]] return; }
L_002C8F5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 29760u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F74u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C8F74u) [[unlikely]] return; }
L_002C8F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F7Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8F7Cu) [[unlikely]] return; }
L_002C8F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F98u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C8F98u) [[unlikely]] return; }
L_002C8F98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FB0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C8FB0u) [[unlikely]] return; }
L_002C8FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FB8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8FB8u) [[unlikely]] return; }
L_002C8FB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC29A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FD4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C8FD4u) [[unlikely]] return; }
L_002C8FD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 27360u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FECu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C8FECu) [[unlikely]] return; }
L_002C8FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FF4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C8FF4u) [[unlikely]] return; }
L_002C8FF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9010u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9010u) [[unlikely]] return; }
L_002C9010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 28800u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9028u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C9028u) [[unlikely]] return; }
L_002C9028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9030u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9030u) [[unlikely]] return; }
L_002C9030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C904Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C904Cu) [[unlikely]] return; }
L_002C904C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9064u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C9064u) [[unlikely]] return; }
L_002C9064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C906Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C906Cu) [[unlikely]] return; }
L_002C906C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9088u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9088u) [[unlikely]] return; }
L_002C9088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 26640u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90A0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C90A0u) [[unlikely]] return; }
L_002C90A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14181u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C91B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90BCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C90BCu) [[unlikely]] return; }
L_002C90BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90D8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C90D8u) [[unlikely]] return; }
L_002C90D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 28320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90F0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C90F0u) [[unlikely]] return; }
L_002C90F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C90F8u) [[unlikely]] return; }
L_002C90F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9114u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9114u) [[unlikely]] return; }
L_002C9114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 28080u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C912Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C912Cu) [[unlikely]] return; }
L_002C912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9134u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9134u) [[unlikely]] return; }
L_002C9134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3910000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9150u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9150u) [[unlikely]] return; }
L_002C9150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9158u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002C9158u) [[unlikely]] return; }
L_002C9158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14640u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9170u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C9170u) [[unlikely]] return; }
L_002C9170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9178u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9178u) [[unlikely]] return; }
L_002C9178:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9194u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9194u) [[unlikely]] return; }
L_002C9194:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14640u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91ACu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C91ACu) [[unlikely]] return; }
L_002C91AC:
    c.budget -= 1;
L_002C91B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91B8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C91B8u) [[unlikely]] return; }
L_002C91B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 30000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91D0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C91D0u) [[unlikely]] return; }
L_002C91D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91D8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C91D8u) [[unlikely]] return; }
L_002C91D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43770000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91F4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C91F4u) [[unlikely]] return; }
L_002C91F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 15840u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C920Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C920Cu) [[unlikely]] return; }
L_002C920C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 20160u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9224u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002C9224u) [[unlikely]] return; }
L_002C9224:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.budget -= 3;
L_002C9230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C9240:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 23328u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] - 7504u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002C9278; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C9294; } }
L_002C9278:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002C9294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7464u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_002C92B4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C92CC; } }
L_002C92B4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002C92CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[1].w[0] - 7460u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_002C92F0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C9308; } }
L_002C92F0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002C9308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7456u), c.f[0]);  c.pc = t; return; }
L_002C9320:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 23328u);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002C9358; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C9374; } }
L_002C9358:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002C9374:
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] >> 1);  if (t) { goto L_002C9390; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C93A8; } }
L_002C9390:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002C93A8:
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] >> 1);  if (t) { goto L_002C93C8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C93E0; } }
L_002C93C8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002C93E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.f[0]);  c.pc = t; return; }
L_002C93F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9410u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C9410u) [[unlikely]] return; }
L_002C9410:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C941Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C941Cu) [[unlikely]] return; }
L_002C941C:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C9538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002C9440:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9518; } }
    set32(c.r[19], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C9518; } }
L_002C9468:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1324u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94A4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C94A4u) [[unlikely]] return; }
L_002C94A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13680u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13682u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94E4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C94E4u) [[unlikely]] return; }
L_002C94E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 14176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94F8u); c.f[12] = ld32((c.r[2].w[0] + 14172u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C94F8u) [[unlikely]] return; }
L_002C94F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9500u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 138u, depth + 1u); else { c.pc = 0x002C9560u; return; } if (c.pc != 0x002C9500u) [[unlikely]] return; }
L_002C9500:
    set32(c.r[19], c.r[19].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9468u | kUnwind; return; } goto L_002C9468; } }
    c.budget -= 1;
L_002C9518:
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C952Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C952Cu) [[unlikely]] return; }
L_002C952C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9440u | kUnwind; return; } goto L_002C9440; } }
L_002C9538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C9560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[14] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95A4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C95A4u) [[unlikely]] return; }
L_002C95A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95ACu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x002C95ACu) [[unlikely]] return; }
L_002C95AC:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3AA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43AA0000u);  if (t) { goto L_002C9768; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[29].w[0] + 52u);  if (t) { goto L_002C9768; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);  if (t) { goto L_002C9768; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C9768; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 17520u);
    set32(c.r[2], c.r[28].w[0] - 30296u);
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9630u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002C9630u) [[unlikely]] return; }
L_002C9630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9638u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002C9638u) [[unlikely]] return; }
L_002C9638:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9654u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C9654u) [[unlikely]] return; }
L_002C9654:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 452u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C9690; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 454u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002C9690; } }
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 17040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9690u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C9690u) [[unlikely]] return; }
L_002C9690:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1324u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9768; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C9768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 16800u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C96E4u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002C96E4u) [[unlikely]] return; }
L_002C96E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9700u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C9700u) [[unlikely]] return; }
L_002C9700:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C970Cu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002C970Cu) [[unlikely]] return; }
L_002C970C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 17280u);
    c.f[1] = ld32((c.r[4].w[0] + 472u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    c.f[12] = ld32((c.r[4].w[0] + 468u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C974Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002C974Cu) [[unlikely]] return; }
L_002C974C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9760u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C9760u) [[unlikely]] return; }
L_002C9760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.budget -= 2;
L_002C9768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u - 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 27664u)));
    set32(c.r[17], c.r[17].w[0] + 27664u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C9860; } }
L_002C97B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C9848; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13324u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9848; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 19u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C97D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C97D8u) [[unlikely]] return; }
L_002C97D8:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C9848; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 19u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C97F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C97F0u) [[unlikely]] return; }
L_002C97F0:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C9848; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17u)));  if (t) { goto L_002C9818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));  if (t) { goto L_002C9838; } }
    c.budget -= 1;
L_002C9818:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C9830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));  if (t) { goto L_002C9838; } }
    c.budget -= 1;
L_002C9830:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_002C9838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9840u);  if (depth < kMaxDepth) unit_0072(c, 156u, depth + 1u); else { c.pc = 0x002C9880u; return; } if (c.pc != 0x002C9840u) [[unlikely]] return; }
L_002C9840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9848u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 166u, depth + 1u); else { c.pc = 0x002C9A00u; return; } if (c.pc != 0x002C9848u) [[unlikely]] return; }
L_002C9848:
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u - 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C97B0u | kUnwind; return; } goto L_002C97B0; } }
    c.budget -= 1;
L_002C9860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C98A0u) [[unlikely]] return; }
L_002C98A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C98ACu) [[unlikely]] return; }
L_002C98AC:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C99E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    set32(c.r[7], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002C98D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C99C0; } }
    set32(c.r[17], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C99C0; } }
L_002C98F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_002C99B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_002C99B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9914u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9914u) [[unlikely]] return; }
L_002C9914:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] << 3);
    c.f[14] = 0u;
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13680u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13682u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9958u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9958u) [[unlikely]] return; }
L_002C9958:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 14176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C996Cu); c.f[12] = ld32((c.r[2].w[0] + 14172u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C996Cu) [[unlikely]] return; }
L_002C996C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C99A4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C99A4u) [[unlikely]] return; }
L_002C99A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C99E0; } }
    c.budget -= 1;
L_002C99B0:
    set32(c.r[17], c.r[17].w[0] + 30u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C98F8u | kUnwind; return; } goto L_002C98F8; } }
L_002C99C0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C99D4u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C99D4u) [[unlikely]] return; }
L_002C99D4:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C98D0u | kUnwind; return; } goto L_002C98D0; } }
L_002C99E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A20u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x002C9A20u) [[unlikely]] return; }
L_002C9A20:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3AA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43AA0000u);  if (t) { goto L_002C9B90; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[29].w[0] + 68u);  if (t) { goto L_002C9B90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3910000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);  if (t) { goto L_002C9B90; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C9B90; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 22093u);
    set32(c.r[3], c.r[3].w[0] - 22091u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AC4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002C9AC4u) [[unlikely]] return; }
L_002C9AC4:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 5296u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AECu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002C9AECu) [[unlikely]] return; }
L_002C9AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 13u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B14u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C9B14u) [[unlikely]] return; }
L_002C9B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B34u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002C9B34u) [[unlikely]] return; }
L_002C9B34:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B48u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9B48u) [[unlikely]] return; }
L_002C9B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B50u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002C9B50u) [[unlikely]] return; }
L_002C9B50:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 19696u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 12u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C9B8Cu) [[unlikely]] return; }
L_002C9B8C:
    c.budget -= 1;
L_002C9B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C9BB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 462u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 452u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C9BD8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 454u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C9BE0; } }
L_002C9BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9C00; } }
L_002C9BE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 450u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002C9C00; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C9C00; } }
    st8((c.r[5].w[0] + 462u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C9C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C9C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 462u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C30u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9C30u) [[unlikely]] return; }
L_002C9C30:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C3Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 450u)));  if (depth < kMaxDepth) unit_0072(c, 190u, depth + 1u); else { c.pc = 0x002C9DA0u; return; } if (c.pc != 0x002C9C3Cu) [[unlikely]] return; }
L_002C9C3C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 452u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C9D68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 456u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C9D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C64u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9C64u) [[unlikely]] return; }
L_002C9C64:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2860000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C78u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002C9C78u) [[unlikely]] return; }
L_002C9C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[9], ld32((c.r[28].w[0] - 30304u)));
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[8], c.r[8].w[0] - 18480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], c.r[6].w[0] - 20992u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 13674u)));
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - 20991u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 7504u), c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::mul(c.f[14], c.f[1]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9CFCu); c.f[13] = fp::mul(c.f[15], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002C9CFCu) [[unlikely]] return; }
L_002C9CFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002C9D10u) [[unlikely]] return; }
L_002C9D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D1Cu); st32((c.r[1].w[0] - 7504u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9D1Cu) [[unlikely]] return; }
L_002C9D1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C9D30u) [[unlikely]] return; }
L_002C9D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 19680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C9D44u) [[unlikely]] return; }
L_002C9D44:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 449u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D54u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0071(c, 149u, depth + 1u); else { c.pc = 0x002C5DE0u; return; } if (c.pc != 0x002C9D54u) [[unlikely]] return; }
L_002C9D54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 15120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C9D68u) [[unlikely]] return; }
L_002C9D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D70u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9D70u) [[unlikely]] return; }
L_002C9D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 19920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C9D84u) [[unlikely]] return; }
L_002C9D84:
    c.budget -= 1;
L_002C9D88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C9DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 4400u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 294u);
    c.budget -= 12;
L_002C9DD0:
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C9E48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 456u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002C9E10; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 170u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E08u); set32(c.r[7], c.r[7].w[0] - 21624u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002C9E08u) [[unlikely]] return; }
L_002C9E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9E30; } }
L_002C9E10:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 30u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E2Cu); set32(c.r[7], c.r[7].w[0] - 21624u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002C9E2Cu) [[unlikely]] return; }
L_002C9E2C:
    c.budget -= 1;
L_002C9E30:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9DD0u | kUnwind; return; } goto L_002C9DD0; } }
    c.budget -= 1;
L_002C9E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E70u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002C9E70u) [[unlikely]] return; }
L_002C9E70:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E88u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002C9E88u) [[unlikely]] return; }
L_002C9E88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 19920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E9Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C9E9Cu) [[unlikely]] return; }
L_002C9E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C9EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9ED0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C9ED0u) [[unlikely]] return; }
L_002C9ED0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9EDCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002C9EDCu) [[unlikely]] return; }
L_002C9EDC:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CA0A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27408u);
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002C9F00:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA080; } }
    set32(c.r[19], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002CA080; } }
L_002C9F28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C9F98; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[7], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1325u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C9FF8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1325u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C9FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C9FF8; } }
L_002C9F98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9FF8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9FF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002C9FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA008u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA008u) [[unlikely]] return; }
L_002CA008:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13680u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13682u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA048u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA048u) [[unlikely]] return; }
L_002CA048:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 14176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA05Cu); c.f[12] = ld32((c.r[2].w[0] + 14172u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA05Cu) [[unlikely]] return; }
L_002CA05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA064u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 208u, depth + 1u); else { c.pc = 0x002CA0C0u; return; } if (c.pc != 0x002CA064u) [[unlikely]] return; }
L_002CA064:
    c.budget -= 1;
L_002CA068:
    set32(c.r[19], c.r[19].w[0] + 18u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9F28u | kUnwind; return; } goto L_002C9F28; } }
    c.budget -= 1;
L_002CA080:
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA094u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CA094u) [[unlikely]] return; }
L_002CA094:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9F00u | kUnwind; return; } goto L_002C9F00; } }
L_002CA0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CA0C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 104u), 0u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA164u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002CA164u) [[unlikely]] return; }
L_002CA164:
    c.f[20] = c.f[0];
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA184u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002CA184u) [[unlikely]] return; }
L_002CA184:
    c.f[13] = ld32((c.r[17].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA198u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA198u) [[unlikely]] return; }
L_002CA198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1A0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x002CA1A0u) [[unlikely]] return; }
L_002CA1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 219u, depth + 1u); else { c.pc = 0x002CA2C0u; return; } if (c.pc != 0x002CA1A8u) [[unlikely]] return; }
L_002CA1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA238; } }
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4160000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43AA0000u);  if (t) { goto L_002CA298; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA298; } }
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);  if (t) { goto L_002CA298; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_002CA298; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CA298; } }
L_002CA238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA240u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002CA240u) [[unlikely]] return; }
L_002CA240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA254u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA254u) [[unlikely]] return; }
L_002CA254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 18000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA26Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CA26Cu) [[unlikely]] return; }
L_002CA26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA274u); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002CA274u) [[unlikely]] return; }
L_002CA274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA290u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CA290u) [[unlikely]] return; }
L_002CA290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.budget -= 2;
L_002CA298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CA2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 23280u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002CA338; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[7].w[0] - 23280u);
    c.budget -= 3;
L_002CA2E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002CA328; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CA328; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CA328; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CA328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA340; } }
    c.budget -= 1;
L_002CA328:
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA2E0u | kUnwind; return; } goto L_002CA2E0; } }
L_002CA338:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002CA340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 23200u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CA3B8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23200u);
    c.budget -= 3;
L_002CA380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA388u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA388u) [[unlikely]] return; }
L_002CA388:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[13] = 0u;
    c.f[12] = ld32((c.r[2].w[0] + 14172u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA39Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA39Cu) [[unlikely]] return; }
L_002CA39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA3A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 226u, depth + 1u); else { c.pc = 0x002CA3D0u; return; } if (c.pc != 0x002CA3A4u) [[unlikely]] return; }
L_002CA3A4:
    set32(c.r[16], c.r[16].w[0] + 6u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA380u | kUnwind; return; } goto L_002CA380; } }
L_002CA3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 23200u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 23198u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23196u);
    c.f[13] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[14] = c.f[13];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[2] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA44Cu); c.f[12] = fp::mul(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA44Cu) [[unlikely]] return; }
L_002CA44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA454u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x002CA454u) [[unlikely]] return; }
L_002CA454:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3BE0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43BE0000u);  if (t) { goto L_002CA5A0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA5A0; } }
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21120u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CA4A8u) [[unlikely]] return; }
L_002CA4A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002CA5A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0xC19C0000u);  if (t) { goto L_002CA520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430F0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4D8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA4D8u) [[unlikely]] return; }
L_002CA4D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CA4ECu) [[unlikely]] return; }
L_002CA4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA500u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA500u) [[unlikely]] return; }
L_002CA500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA514u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CA514u) [[unlikely]] return; }
L_002CA514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA5A0; } }
    c.budget -= 1;
L_002CA520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC19C0000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430F0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA53Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA53Cu) [[unlikely]] return; }
L_002CA53C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA558u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA558u) [[unlikely]] return; }
L_002CA558:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA56Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CA56Cu) [[unlikely]] return; }
L_002CA56C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA588u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA588u) [[unlikely]] return; }
L_002CA588:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] - 14880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA59Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CA59Cu) [[unlikely]] return; }
L_002CA59C:
    c.budget -= 1;
L_002CA5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5D0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA5D0u) [[unlikely]] return; }
L_002CA5D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 14168u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5E4u); c.f[12] = ld32((c.r[2].w[0] + 14164u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA5E4u) [[unlikely]] return; }
L_002CA5E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16320u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5FCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CA5FCu) [[unlikely]] return; }
L_002CA5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CA610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14180u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CA7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA630u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA630u) [[unlikely]] return; }
L_002CA630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3790000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA64Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA64Cu) [[unlikely]] return; }
L_002CA64C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA668u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA668u) [[unlikely]] return; }
L_002CA668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 21840u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA680u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CA680u) [[unlikely]] return; }
L_002CA680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA688u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA688u) [[unlikely]] return; }
L_002CA688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6A4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA6A4u) [[unlikely]] return; }
L_002CA6A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6C0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA6C0u) [[unlikely]] return; }
L_002CA6C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6D8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CA6D8u) [[unlikely]] return; }
L_002CA6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA6E0u) [[unlikely]] return; }
L_002CA6E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6FCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA6FCu) [[unlikely]] return; }
L_002CA6FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA718u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA718u) [[unlikely]] return; }
L_002CA718:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 21600u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA730u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CA730u) [[unlikely]] return; }
L_002CA730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA738u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA738u) [[unlikely]] return; }
L_002CA738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA754u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA754u) [[unlikely]] return; }
L_002CA754:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA770u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CA770u) [[unlikely]] return; }
L_002CA770:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA788u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CA788u) [[unlikely]] return; }
L_002CA788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA790u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CA790u) [[unlikely]] return; }
L_002CA790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3260000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7ACu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CA7ACu) [[unlikely]] return; }
L_002CA7AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 22080u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7C4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CA7C4u) [[unlikely]] return; }
L_002CA7C4:
    c.budget -= 1;
L_002CA7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CA7E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12E00000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[2].d[0] = c.r[2].d[0] | 48771ull;
    set32(c.r[29], c.r[29].w[0] - 176u);
    mmi::multu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[15].d[0] = c.r[11].d[0] | 19923ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[10].d[0] = c.r[3].d[0] | 51712ull;
    c.r[13].d[0] = c.hi.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[14].d[0] = c.r[11].d[0] | 34079ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    set32(c.r[11], c.r[5].w[0] - c.r[13].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[12], c.r[11].w[0] >> 1);
    c.r[9].d[0] = c.r[2].d[0] | 57600ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[13].d[0] = c.r[11].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55E60000u);
    set32(c.r[11], c.r[12].w[0] >> 29);
    c.r[8].d[0] = c.r[2].d[0] | 15241ull;
    mmi::mult(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[1].w[0] - 7504u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6B5F0000u);
    st32((c.r[29].w[0] + 128u), c.r[11].w[0]);
    c.r[7].d[0] = c.r[2].d[0] | 51819ull;
    set32(c.r[5], c.r[5].w[0] - c.r[21].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x43000000u);
    mmi::multu(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 56963ull;
    set32(c.r[3], 0u + 10000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F8B0000u);
    st32((c.r[1].w[0] - 7468u), c.r[11].w[0]);
    c.r[8].d[0] = c.r[12].d[0] | 8ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].d[0] = c.r[2].d[0] | 22671ull;
    st32((c.r[1].w[0] - 7504u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xD1B70000u);
    c.r[8].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 5977ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], c.r[8].w[0] >> 25);
    mmi::mult(c, 0, c.r[11].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 132u), c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    mmi::multu(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[7].w[0] >> 22);
    set32(c.r[7], c.r[9].w[0] << 6);
    st32((c.r[29].w[0] + 136u), c.r[9].w[0]);
    set32(c.r[8], c.r[7].w[0] - c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[8], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    mmi::multu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[6].w[0] >> 18);
    set32(c.r[6], c.r[8].w[0] << 6);
    st32((c.r[29].w[0] + 140u), c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::multu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[4].w[0] >> 16);
    set32(c.r[4], c.r[6].w[0] << 5);
    st32((c.r[29].w[0] + 144u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    mmi::multu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] >> 13);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 148u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[15].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 6);
    set32(c.r[2], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[14].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 5);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[13].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 3);
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 152;
    { const bool t = c.r[20].d[0] == c.r[10].d[0]; st32((c.r[29].w[0] + 164u), c.r[5].w[0]);  if (t) { goto L_002CAA78; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002CAA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAA98; } }
L_002CAA50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.f[20] = c.r[3].w[0];
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 7u);  if (t) { goto L_002CAA98; } }
    c.budget -= 1;
L_002CAA78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[17], 0u + 11u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 8;
L_002CAA98:
    c.f[13] = 0u;
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAAA8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAAA8u) [[unlikely]] return; }
L_002CAAA8:
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[21], c.r[3].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[21].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] ^ 1ull;  if (t) { goto L_002CABB8; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 128u);
    c.budget -= 4;
L_002CAAD0:
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAAE0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAAE0u) [[unlikely]] return; }
L_002CAAE0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002CAB00; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_002CAB00; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CAB00; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002CAB00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CABA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002CAB28; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002CAB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CAB88; } }
    c.budget -= 1;
L_002CAB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] >> 1);  if (t) { goto L_002CAB44; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CAB5C; } }
L_002CAB44:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002CAB5C:
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], 0u + 1u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB84u); set32(c.r[5], c.r[5].w[0] - 7504u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002CAB84u) [[unlikely]] return; }
L_002CAB84:
    c.budget -= 1;
L_002CAB88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABA0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002CABA0u) [[unlikely]] return; }
L_002CABA0:
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_002CABA8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CAAD0u | kUnwind; return; } goto L_002CAAD0; } }
L_002CABB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002CABF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CAC08u) [[unlikely]] return; }
L_002CAC08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC14u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CAC14u) [[unlikely]] return; }
L_002CAC14:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] << 3);  if (t) { goto L_002CACB8; } }
L_002CAC20:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC3Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CAC3Cu) [[unlikely]] return; }
L_002CAC3C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13682u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC70u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAC70u) [[unlikely]] return; }
L_002CAC70:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[12] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 14176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC84u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAC84u) [[unlikely]] return; }
L_002CAC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 46u, depth + 1u); else { c.pc = 0x002C8A00u; return; } if (c.pc != 0x002CAC8Cu) [[unlikely]] return; }
L_002CAC8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 279u, depth + 1u); else { c.pc = 0x002CACD0u; return; } if (c.pc != 0x002CAC98u) [[unlikely]] return; }
L_002CAC98:
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACA8u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CACA8u) [[unlikely]] return; }
L_002CACA8:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CAC20u | kUnwind; return; } goto L_002CAC20; } }
    c.budget -= 1;
L_002CACB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CACD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACF4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x002CACF4u) [[unlikely]] return; }
L_002CACF4:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);  if (t) { goto L_002CAF70; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CAF70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002CAD78; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 4096ull;  if (t) { goto L_002CAD58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAD78; } }
L_002CAD58:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[0] = ld32((c.r[3].w[0] + 512u));
    c.f[1] = ld32((c.r[2].w[0] + 14176u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CAD78; } }
    st8((c.r[3].w[0] + 484u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002CAD78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD8Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAD8Cu) [[unlikely]] return; }
L_002CAD8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20990u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 20989u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 18240u);
    c.f[1] = c.r[5].w[0];
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    c.f[0] = c.r[4].w[0];
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), c.r[2].w[0]);
    c.f[4] = fp::cvt_s_w(c.f[1]);
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADE4u); c.f[3] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002CADE4u) [[unlikely]] return; }
L_002CADE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[14] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    set32(c.r[4], 0u + 1u);
    c.f[12] = fp::mul(c.f[14], c.f[4]);
    set32(c.r[5], c.r[5].w[0] - 7504u);
    c.f[13] = fp::mul(c.f[14], c.f[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE10u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002CAE10u) [[unlikely]] return; }
L_002CAE10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CAE24u) [[unlikely]] return; }
L_002CAE24:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[13] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[14] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE40u); st32((c.r[1].w[0] - 7504u), 0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAE40u) [[unlikely]] return; }
L_002CAE40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 18480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 20992u);
    st32((c.r[1].w[0] - 7504u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] - 7504u);
    c.f[0] = c.r[6].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 20991u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[12] = fp::mul(c.f[14], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEB4u); c.f[13] = fp::mul(c.f[15], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002CAEB4u) [[unlikely]] return; }
L_002CAEB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CAEC8u) [[unlikely]] return; }
L_002CAEC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEE0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0071(c, 151u, depth + 1u); else { c.pc = 0x002C5E60u; return; } if (c.pc != 0x002CAEE0u) [[unlikely]] return; }
L_002CAEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEE8u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002CAEE8u) [[unlikely]] return; }
L_002CAEE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 19200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CAF14u) [[unlikely]] return; }
L_002CAF14:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13674u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002CAF40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = ld32((c.r[3].w[0] + 464u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF3Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CAF3Cu) [[unlikely]] return; }
L_002CAF3C:
    c.budget -= 1;
L_002CAF40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 18720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAF64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CAF64u) [[unlikely]] return; }
L_002CAF64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.budget -= 3;
L_002CAF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CAF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFACu); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x002CAFACu) [[unlikely]] return; }
L_002CAFAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 55u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFBCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CAFBCu) [[unlikely]] return; }
L_002CAFBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFDCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CAFDCu) [[unlikely]] return; }
L_002CAFDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFECu); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x002CAFECu) [[unlikely]] return; }
L_002CAFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFF4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CAFF4u) [[unlikely]] return; }
L_002CAFF4:
    set32(c.r[4], 0u + 27u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB008u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 314u, depth + 1u); else { c.pc = 0x002CB0C0u; return; } if (c.pc != 0x002CB008u) [[unlikely]] return; }
L_002CB008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB010u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB010u) [[unlikely]] return; }
L_002CB010:
    set32(c.r[4], 0u + 28u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB024u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 314u, depth + 1u); else { c.pc = 0x002CB0C0u; return; } if (c.pc != 0x002CB024u) [[unlikely]] return; }
L_002CB024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB02Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB02Cu) [[unlikely]] return; }
L_002CB02C:
    set32(c.r[4], 0u + 29u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB040u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 314u, depth + 1u); else { c.pc = 0x002CB0C0u; return; } if (c.pc != 0x002CB040u) [[unlikely]] return; }
L_002CB040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB048u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB048u) [[unlikely]] return; }
L_002CB048:
    c.f[12] = c.f[20];
    set32(c.r[4], 0u + 30u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB05Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 314u, depth + 1u); else { c.pc = 0x002CB0C0u; return; } if (c.pc != 0x002CB05Cu) [[unlikely]] return; }
L_002CB05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB064u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB064u) [[unlikely]] return; }
L_002CB064:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB070u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 318u, depth + 1u); else { c.pc = 0x002CB180u; return; } if (c.pc != 0x002CB070u) [[unlikely]] return; }
L_002CB070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB078u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB078u) [[unlikely]] return; }
L_002CB078:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB084u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 318u, depth + 1u); else { c.pc = 0x002CB180u; return; } if (c.pc != 0x002CB084u) [[unlikely]] return; }
L_002CB084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB08Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB08Cu) [[unlikely]] return; }
L_002CB08C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB098u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 318u, depth + 1u); else { c.pc = 0x002CB180u; return; } if (c.pc != 0x002CB098u) [[unlikely]] return; }
L_002CB098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0A0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB0A0u) [[unlikely]] return; }
L_002CB0A0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0ACu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0072(c, 318u, depth + 1u); else { c.pc = 0x002CB180u; return; } if (c.pc != 0x002CB0ACu) [[unlikely]] return; }
L_002CB0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB0C0:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30720u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[13] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[16].d[0]; st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);  if (t) { goto L_002CB118; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB110u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB110u) [[unlikely]] return; }
L_002CB110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB128; } }
L_002CB118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 4;
L_002CB128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB148u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB148u) [[unlikely]] return; }
L_002CB148:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB160u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002CB160u) [[unlikely]] return; }
L_002CB160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CB198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 26u);  if (t) { goto L_002CB19C; } }
L_002CB198:
    set32(c.r[16], 0u + 25u);
    c.budget -= 1;
L_002CB19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB1BCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB1BCu) [[unlikely]] return; }
L_002CB1BC:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 30720u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB1E4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CB1E4u) [[unlikely]] return; }
L_002CB1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB210u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB210u) [[unlikely]] return; }
L_002CB210:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB228u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CB228u) [[unlikely]] return; }
L_002CB228:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25440u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB240u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002CB240u) [[unlikely]] return; }
L_002CB240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB270u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CB270u) [[unlikely]] return; }
L_002CB270:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB27Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CB27Cu) [[unlikely]] return; }
L_002CB27C:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CB470; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24928u);
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002CB2A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13676u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB450; } }
    set32(c.r[19], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CB450; } }
L_002CB2C8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CB308; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CB308; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CB308:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_002CB348; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1325u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB348; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CB348:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_002CB388; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 22u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1324u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CB388; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002CB388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB398u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB398u) [[unlikely]] return; }
L_002CB398:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13680u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 13682u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3D8u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB3D8u) [[unlikely]] return; }
L_002CB3D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 14176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3ECu); c.f[12] = ld32((c.r[2].w[0] + 14172u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB3ECu) [[unlikely]] return; }
L_002CB3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB424u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB424u) [[unlikely]] return; }
L_002CB424:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 24u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB438u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 336u, depth + 1u); else { c.pc = 0x002CB490u; return; } if (c.pc != 0x002CB438u) [[unlikely]] return; }
L_002CB438:
    set32(c.r[19], c.r[19].w[0] + 26u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB2C8u | kUnwind; return; } goto L_002CB2C8; } }
    c.budget -= 1;
L_002CB450:
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB464u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0071(c, 215u, depth + 1u); else { c.pc = 0x002C75C0u; return; } if (c.pc != 0x002CB464u) [[unlikely]] return; }
L_002CB464:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB2A0u | kUnwind; return; } goto L_002CB2A0; } }
L_002CB470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CB490:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CB4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1328u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_002CB4E8; } }
L_002CB4D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 464u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_002CB4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x002CB4F0u) [[unlikely]] return; }
L_002CB4F0:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3D20000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43D20000u);  if (t) { goto L_002CB7C8; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[29].w[0] + 116u);  if (t) { goto L_002CB7C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);  if (t) { goto L_002CB7C8; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002CB7C8; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002CB558:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB578; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB558u | kUnwind; return; } goto L_002CB558; } }
    c.budget -= 1;
L_002CB578:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002CB598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB598u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CB598u) [[unlikely]] return; }
L_002CB598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 16080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], 0u + 13u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5B0u); st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CB5B0u) [[unlikely]] return; }
L_002CB5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5B8u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002CB5B8u) [[unlikely]] return; }
L_002CB5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] - 7468u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5DCu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0072(c, 31u, depth + 1u); else { c.pc = 0x002C8510u; return; } if (c.pc != 0x002CB5DCu) [[unlikely]] return; }
L_002CB5DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CB604; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB61C; } }
L_002CB604:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_002CB61C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[21].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB634u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CB634u) [[unlikely]] return; }
L_002CB634:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 462u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CB668; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CB7C8; } }
L_002CB668:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 50u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CB698; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CB7C8; } }
    c.budget -= 1;
L_002CB698:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002CB6C0; } }
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32A0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CB7C8; } }
    c.budget -= 1;
L_002CB6C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002CB708; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43580000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002CB720; } }
L_002CB708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_002CB720:
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] - 7468u), c.r[3].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[19].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 10;
L_002CB748:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 13u);  if (t) { goto L_002CB7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB75Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x002CB75Cu) [[unlikely]] return; }
L_002CB75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB764u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002CB764u) [[unlikely]] return; }
L_002CB764:
    c.f[0] = c.r[21].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB79Cu); set32(c.r[7], c.r[7].w[0] - 21624u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002CB79Cu) [[unlikely]] return; }
L_002CB79C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x002CB7A8u) [[unlikely]] return; }
L_002CB7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7B0u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002CB7B0u) [[unlikely]] return; }
L_002CB7B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB748u | kUnwind; return; } goto L_002CB748; } }
    c.budget -= 1;
L_002CB7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CB7F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_002CB818:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002CB820:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1325u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002CB840; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002CB840:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB850; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002CB850:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002CB8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB860u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 156u, depth + 1u); else { c.pc = 0x002C9880u; return; } if (c.pc != 0x002CB860u) [[unlikely]] return; }
L_002CB860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB874u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB874u) [[unlikely]] return; }
L_002CB874:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB880u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 239u, depth + 1u); else { c.pc = 0x002C7F80u; return; } if (c.pc != 0x002CB880u) [[unlikely]] return; }
L_002CB880:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB890u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 7u, depth + 1u); else { c.pc = 0x002C8060u; return; } if (c.pc != 0x002CB890u) [[unlikely]] return; }
L_002CB890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB8B8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    set32(c.r[3], c.r[11].w[0] << 1);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8B4u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0072(c, 336u, depth + 1u); else { c.pc = 0x002CB490u; return; } if (c.pc != 0x002CB8B4u) [[unlikely]] return; }
L_002CB8B4:
    c.budget -= 1;
L_002CB8B8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB820u | kUnwind; return; } goto L_002CB820; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CB818u | kUnwind; return; } goto L_002CB818; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CB900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB910u);  if (depth < kMaxDepth) unit_0072(c, 365u, depth + 1u); else { c.pc = 0x002CB960u; return; } if (c.pc != 0x002CB910u) [[unlikely]] return; }
L_002CB910:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 432u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB928u);  if (depth < kMaxDepth) unit_0072(c, 399u, depth + 1u); else { c.pc = 0x002CBBC0u; return; } if (c.pc != 0x002CB928u) [[unlikely]] return; }
L_002CB928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB938; } }
L_002CB930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB938u);  if (depth < kMaxDepth) unit_0073(c, 5u, depth + 1u); else { c.pc = 0x002CC080u; return; } if (c.pc != 0x002CB938u) [[unlikely]] return; }
L_002CB938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB940u);  if (depth < kMaxDepth) unit_0073(c, 95u, depth + 1u); else { c.pc = 0x002CC970u; return; } if (c.pc != 0x002CB940u) [[unlikely]] return; }
L_002CB940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB948u);  if (depth < kMaxDepth) unit_0073(c, 101u, depth + 1u); else { c.pc = 0x002CCA10u; return; } if (c.pc != 0x002CB948u) [[unlikely]] return; }
L_002CB948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB950u);  if (depth < kMaxDepth) unit_0073(c, 205u, depth + 1u); else { c.pc = 0x002CD4D0u; return; } if (c.pc != 0x002CB950u) [[unlikely]] return; }
L_002CB950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB970u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB970u) [[unlikely]] return; }
L_002CB970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB978u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB978u) [[unlikely]] return; }
L_002CB978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3450000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB994u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB994u) [[unlikely]] return; }
L_002CB994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 29760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CB9A8u) [[unlikely]] return; }
L_002CB9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9B0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB9B0u) [[unlikely]] return; }
L_002CB9B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3360000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9CCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CB9CCu) [[unlikely]] return; }
L_002CB9CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CB9E0u) [[unlikely]] return; }
L_002CB9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9E8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CB9E8u) [[unlikely]] return; }
L_002CB9E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA04u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBA04u) [[unlikely]] return; }
L_002CBA04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 27360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBA18u) [[unlikely]] return; }
L_002CBA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA20u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBA20u) [[unlikely]] return; }
L_002CBA20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2B00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA3Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBA3Cu) [[unlikely]] return; }
L_002CBA3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 29520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBA50u) [[unlikely]] return; }
L_002CBA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA58u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBA58u) [[unlikely]] return; }
L_002CBA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2920000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA74u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBA74u) [[unlikely]] return; }
L_002CBA74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBA88u) [[unlikely]] return; }
L_002CBA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA90u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBA90u) [[unlikely]] return; }
L_002CBA90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAACu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBAACu) [[unlikely]] return; }
L_002CBAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 27120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBAC0u) [[unlikely]] return; }
L_002CBAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAC8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBAC8u) [[unlikely]] return; }
L_002CBAC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAE4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBAE4u) [[unlikely]] return; }
L_002CBAE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 29280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBAF8u) [[unlikely]] return; }
L_002CBAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB00u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBB00u) [[unlikely]] return; }
L_002CBB00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB1Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBB1Cu) [[unlikely]] return; }
L_002CBB1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBB30u) [[unlikely]] return; }
L_002CBB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBB38u) [[unlikely]] return; }
L_002CBB38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB54u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBB54u) [[unlikely]] return; }
L_002CBB54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 26880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBB68u) [[unlikely]] return; }
L_002CBB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB70u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBB70u) [[unlikely]] return; }
L_002CBB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 30000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBB84u) [[unlikely]] return; }
L_002CBB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB8Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBB8Cu) [[unlikely]] return; }
L_002CBB8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], c.r[4].w[0] - 30480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBBA0u) [[unlikely]] return; }
L_002CBBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], c.r[4].w[0] - 30720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CBBB4u) [[unlikely]] return; }
L_002CBBB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CBBC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBF0u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x002CBBF0u) [[unlikely]] return; }
L_002CBBF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 57u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC00u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBC00u) [[unlikely]] return; }
L_002CBC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC20u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBC20u) [[unlikely]] return; }
L_002CBC20:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC30u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x002CBC30u) [[unlikely]] return; }
L_002CBC30:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002CBC38:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 59u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 63u)));
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC64u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));  if (depth < kMaxDepth) unit_0071(c, 236u, depth + 1u); else { c.pc = 0x002C7D70u; return; } if (c.pc != 0x002CBC64u) [[unlikely]] return; }
L_002CBC64:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC74u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0071(c, 237u, depth + 1u); else { c.pc = 0x002C7DC0u; return; } if (c.pc != 0x002CBC74u) [[unlikely]] return; }
L_002CBC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC7Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBC7Cu) [[unlikely]] return; }
L_002CBC7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    set32(c.r[19], c.r[17].w[0] << 2);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCA0u); c.f[13] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBCA0u) [[unlikely]] return; }
L_002CBCA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[4].d[0] = c.r[3].d[0] | 13107ull;
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[4].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCC8u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CBCC8u) [[unlikely]] return; }
L_002CBCC8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 427u, depth + 1u); else { c.pc = 0x002CBF10u; return; } if (c.pc != 0x002CBCE0u) [[unlikely]] return; }
L_002CBCE0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002CBD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCF4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBCF4u) [[unlikely]] return; }
L_002CBCF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[2], c.r[2].w[0] - 23024u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD14u); c.f[13] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBD14u) [[unlikely]] return; }
L_002CBD14:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD2Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 427u, depth + 1u); else { c.pc = 0x002CBF10u; return; } if (c.pc != 0x002CBD2Cu) [[unlikely]] return; }
L_002CBD2C:
    c.budget -= 1;
L_002CBD30:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002CBDA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 23008u);
    set32(c.r[19], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
L_002CBD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD50u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBD50u) [[unlikely]] return; }
L_002CBD50:
    c.f[1] = c.r[20].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43210000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[13] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD7Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBD7Cu) [[unlikely]] return; }
L_002CBD7C:
    set32(c.r[4], 0u + 15u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD94u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 427u, depth + 1u); else { c.pc = 0x002CBF10u; return; } if (c.pc != 0x002CBD94u) [[unlikely]] return; }
L_002CBD94:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CBD48u | kUnwind; return; } goto L_002CBD48; } }
    c.budget -= 1;
L_002CBDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBDB0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBDB0u) [[unlikely]] return; }
L_002CBDB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBDBCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 2u, depth + 1u); else { c.pc = 0x002CC010u; return; } if (c.pc != 0x002CBDBCu) [[unlikely]] return; }
L_002CBDBC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CBDD8; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 1;
L_002CBDD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CBC38u | kUnwind; return; } goto L_002CBC38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 59u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CBE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBDFCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBDFCu) [[unlikely]] return; }
L_002CBDFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBE18u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBE18u) [[unlikely]] return; }
L_002CBE18:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 11504u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 376u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBE5Cu); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CBE5Cu) [[unlikely]] return; }
L_002CBE5C:
    c.budget -= 1;
L_002CBE60:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CBEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBE80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CBE80u) [[unlikely]] return; }
L_002CBE80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3190000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBE9Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBE9Cu) [[unlikely]] return; }
L_002CBE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBEA4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002CBEA4u) [[unlikely]] return; }
L_002CBEA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 11504u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 376u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBEE8u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CBEE8u) [[unlikely]] return; }
L_002CBEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CBF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.f[13] = c.f[12];  if (t) { goto L_002CBF90; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_002CBF68; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002CBF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBFB0; } }
L_002CBF40:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 19696u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);  if (t) { goto L_002CBFB0; } }
    c.budget -= 1;
L_002CBF68:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 29744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);  if (t) { goto L_002CBFB0; } }
    c.budget -= 1;
L_002CBF90:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 8;
L_002CBFB0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002CBFD8; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBFD0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CBFD0u) [[unlikely]] return; }
L_002CBFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CBFE8; } }
L_002CBFD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 4;
L_002CBFE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBFFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CBFFCu) [[unlikely]] return; }
L_002CBFFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0073(c, 1u, depth);
}

}
