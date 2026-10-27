#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0080[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 0, 22, 23, 24, 25, 26, 27, 28, 0, 0, 0,
    29, 0, 0, 30, 31, 32, 33, 34, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 40, 41, 42, 0, 0, 0,
    43, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0080(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00300000;
    case 2u: goto L_00300004;
    case 3u: goto L_00300008;
    case 4u: goto L_0030000C;
    case 5u: goto L_00300010;
    case 6u: goto L_00300014;
    case 7u: goto L_00300018;
    case 8u: goto L_0030001C;
    case 9u: goto L_00300020;
    case 10u: goto L_00300024;
    case 11u: goto L_00300028;
    case 12u: goto L_0030002C;
    case 13u: goto L_00300030;
    case 14u: goto L_00300034;
    case 15u: goto L_00300038;
    case 16u: goto L_0030003C;
    case 17u: goto L_00300040;
    case 18u: goto L_00300044;
    case 19u: goto L_00300048;
    case 20u: goto L_0030004C;
    case 21u: goto L_00300050;
    case 22u: goto L_00300058;
    case 23u: goto L_0030005C;
    case 24u: goto L_00300060;
    case 25u: goto L_00300064;
    case 26u: goto L_00300068;
    case 27u: goto L_0030006C;
    case 28u: goto L_00300070;
    case 29u: goto L_00300080;
    case 30u: goto L_0030008C;
    case 31u: goto L_00300090;
    case 32u: goto L_00300094;
    case 33u: goto L_00300098;
    case 34u: goto L_0030009C;
    case 35u: goto L_003000A8;
    case 36u: goto L_003000B8;
    case 37u: goto L_003000C0;
    case 38u: goto L_003000E0;
    case 39u: goto L_003000E4;
    case 40u: goto L_003000E8;
    case 41u: goto L_003000EC;
    case 42u: goto L_003000F0;
    case 43u: goto L_00300100;
    case 44u: goto L_00300104;
    case 45u: goto L_00300110;
    case 46u: goto L_00300120;
    case 47u: goto L_00300130;
    case 48u: goto L_00300140;
    case 49u: goto L_00300150;
    case 50u: goto L_00300154;
    case 51u: goto L_00300180;
    case 52u: goto L_003001A0;
    case 53u: goto L_003001B8;
    case 54u: goto L_003001D0;
    case 55u: goto L_003001F8;
    case 56u: goto L_00300228;
    case 57u: goto L_00300230;
    case 58u: goto L_00300244;
    case 59u: goto L_00300290;
    case 60u: goto L_003002B0;
    case 61u: goto L_003002D0;
    case 62u: goto L_00300380;
    case 63u: goto L_003003A0;
    case 64u: goto L_003003E0;
    case 65u: goto L_00300414;
    case 66u: goto L_0030042C;
    case 67u: goto L_00300438;
    case 68u: goto L_00300470;
    case 69u: goto L_00300500;
    case 70u: goto L_00300514;
    case 71u: goto L_0030057C;
    case 72u: goto L_003005A4;
    case 73u: goto L_003005B0;
    case 74u: goto L_00300600;
    case 75u: goto L_00300700;
    case 76u: goto L_00300710;
    case 77u: goto L_00300720;
    case 78u: goto L_00300770;
    case 79u: goto L_00300778;
    case 80u: goto L_00300794;
    case 81u: goto L_003007B8;
    case 82u: goto L_003007E8;
    case 83u: goto L_003007FC;
    case 84u: goto L_00300818;
    case 85u: goto L_0030083C;
    case 86u: goto L_00300858;
    case 87u: goto L_00300860;
    case 88u: goto L_00300868;
    case 89u: goto L_00300890;
    case 90u: goto L_003008AC;
    case 91u: goto L_003008E0;
    case 92u: goto L_003008E4;
    case 93u: goto L_00300910;
    case 94u: goto L_00300928;
    case 95u: goto L_00300940;
    case 96u: goto L_00300958;
    case 97u: goto L_00300970;
    case 98u: goto L_00300978;
    case 99u: goto L_00300994;
    case 100u: goto L_003009B0;
    case 101u: goto L_00300A14;
    case 102u: goto L_00300A50;
    case 103u: goto L_00300ABC;
    case 104u: goto L_00300B40;
    case 105u: goto L_00300C00;
    case 106u: goto L_00300C50;
    case 107u: goto L_00300CC0;
    case 108u: goto L_00300D0C;
    case 109u: goto L_00300E00;
    case 110u: goto L_00300E3C;
    case 111u: goto L_00300E78;
    case 112u: goto L_00300E90;
    case 113u: goto L_00300EB8;
    case 114u: goto L_00300ECC;
    case 115u: goto L_00300F64;
    case 116u: goto L_00300FC0;
    case 117u: goto L_0030109C;
    case 118u: goto L_003010BC;
    case 119u: goto L_003010F4;
    case 120u: goto L_003010FC;
    case 121u: goto L_00301110;
    case 122u: goto L_00301150;
    case 123u: goto L_00301170;
    case 124u: goto L_003011D8;
    case 125u: goto L_00301228;
    case 126u: goto L_00301350;
    case 127u: goto L_00301448;
    case 128u: goto L_00301478;
    case 129u: goto L_00301488;
    case 130u: goto L_003014A0;
    case 131u: goto L_003014B4;
    case 132u: goto L_003014C4;
    case 133u: goto L_003014E8;
    case 134u: goto L_003014F0;
    case 135u: goto L_00301540;
    case 136u: goto L_00301568;
    case 137u: goto L_00301600;
    case 138u: goto L_00301690;
    case 139u: goto L_003016A8;
    case 140u: goto L_003016B8;
    case 141u: goto L_003016D0;
    case 142u: goto L_003016D8;
    case 143u: goto L_003016F4;
    case 144u: goto L_0030170C;
    case 145u: goto L_00301714;
    case 146u: goto L_00301730;
    case 147u: goto L_00301748;
    case 148u: goto L_00301770;
    case 149u: goto L_0030178C;
    case 150u: goto L_003017A8;
    case 151u: goto L_003017E8;
    case 152u: goto L_003017FC;
    case 153u: goto L_00301828;
    case 154u: goto L_00301848;
    case 155u: goto L_00301864;
    case 156u: goto L_003018B4;
    case 157u: goto L_003018C8;
    case 158u: goto L_003018D0;
    case 159u: goto L_003018E0;
    case 160u: goto L_003018F8;
    case 161u: goto L_00301920;
    case 162u: goto L_00301958;
    case 163u: goto L_00301960;
    case 164u: goto L_0030197C;
    case 165u: goto L_003019B0;
    case 166u: goto L_003019E0;
    case 167u: goto L_00301A10;
    case 168u: goto L_00301A30;
    case 169u: goto L_00301A50;
    case 170u: goto L_00301A54;
    case 171u: goto L_00301A70;
    case 172u: goto L_00301A98;
    case 173u: goto L_00301AB0;
    case 174u: goto L_00301AE4;
    case 175u: goto L_00301B1C;
    case 176u: goto L_00301B50;
    case 177u: goto L_00301B80;
    case 178u: goto L_00301BA8;
    case 179u: goto L_00301BF4;
    case 180u: goto L_00301C40;
    case 181u: goto L_00301C60;
    case 182u: goto L_00301C70;
    case 183u: goto L_00301C90;
    case 184u: goto L_00301D10;
    case 185u: goto L_00301D28;
    case 186u: goto L_00301D48;
    case 187u: goto L_00301E70;
    case 188u: goto L_00301EC0;
    case 189u: goto L_00301F00;
    case 190u: goto L_00301F20;
    case 191u: goto L_00301F30;
    case 192u: goto L_00301F40;
    case 193u: goto L_00301FCC;
    case 194u: goto L_00301FFC;
    case 195u: goto L_00302014;
    case 196u: goto L_00302024;
    case 197u: goto L_0030204C;
    case 198u: goto L_00302060;
    case 199u: goto L_0030206C;
    case 200u: goto L_00302074;
    case 201u: goto L_00302100;
    case 202u: goto L_0030211C;
    case 203u: goto L_00302140;
    case 204u: goto L_00302154;
    case 205u: goto L_00302160;
    case 206u: goto L_00302174;
    case 207u: goto L_0030217C;
    case 208u: goto L_003021A4;
    case 209u: goto L_003021BC;
    case 210u: goto L_003021C4;
    case 211u: goto L_003021EC;
    case 212u: goto L_003021F0;
    case 213u: goto L_0030221C;
    case 214u: goto L_00302280;
    case 215u: goto L_003022AC;
    case 216u: goto L_003022C4;
    case 217u: goto L_003022D4;
    case 218u: goto L_003022FC;
    case 219u: goto L_00302310;
    case 220u: goto L_0030231C;
    case 221u: goto L_00302324;
    case 222u: goto L_003023AC;
    case 223u: goto L_003023C0;
    case 224u: goto L_003023CC;
    case 225u: goto L_003023E4;
    case 226u: goto L_003023EC;
    case 227u: goto L_00302414;
    case 228u: goto L_0030242C;
    case 229u: goto L_00302434;
    case 230u: goto L_0030245C;
    case 231u: goto L_00302460;
    case 232u: goto L_0030248C;
    case 233u: goto L_003024D0;
    case 234u: goto L_003024F0;
    case 235u: goto L_00302520;
    case 236u: goto L_00302528;
    case 237u: goto L_0030254C;
    case 238u: goto L_003025A0;
    case 239u: goto L_00302630;
    case 240u: goto L_00302670;
    case 241u: goto L_00302690;
    case 242u: goto L_003026B0;
    case 243u: goto L_003026C0;
    case 244u: goto L_003026F8;
    case 245u: goto L_00302704;
    case 246u: goto L_00302760;
    case 247u: goto L_0030279C;
    case 248u: goto L_003027B8;
    case 249u: goto L_003027D8;
    case 250u: goto L_003027F8;
    case 251u: goto L_0030282C;
    case 252u: goto L_00302848;
    case 253u: goto L_00302868;
    case 254u: goto L_00302888;
    case 255u: goto L_003028A0;
    case 256u: goto L_003028E8;
    case 257u: goto L_00302918;
    case 258u: goto L_00302954;
    case 259u: goto L_00302970;
    case 260u: goto L_00302990;
    case 261u: goto L_003029B0;
    case 262u: goto L_003029E4;
    case 263u: goto L_00302A00;
    case 264u: goto L_00302A20;
    case 265u: goto L_00302A40;
    case 266u: goto L_00302AA0;
    case 267u: goto L_00302AD0;
    case 268u: goto L_00302B24;
    case 269u: goto L_00302B6C;
    case 270u: goto L_00302BB0;
    case 271u: goto L_00302BC4;
    case 272u: goto L_00302BF0;
    case 273u: goto L_00302CA0;
    case 274u: goto L_00302CC8;
    case 275u: goto L_00302D10;
    case 276u: goto L_00302D60;
    case 277u: goto L_00302DF0;
    case 278u: goto L_00302E00;
    case 279u: goto L_00302E2C;
    case 280u: goto L_00302EC8;
    case 281u: goto L_00302ED8;
    case 282u: goto L_00302F00;
    case 283u: goto L_00302F04;
    case 284u: goto L_00302F90;
    case 285u: goto L_00302FB8;
    case 286u: goto L_00302FE0;
    case 287u: goto L_00303000;
    case 288u: goto L_00303010;
    case 289u: goto L_00303050;
    case 290u: goto L_00303064;
    case 291u: goto L_00303088;
    case 292u: goto L_003030A0;
    case 293u: goto L_003030CC;
    case 294u: goto L_00303108;
    case 295u: goto L_00303140;
    case 296u: goto L_0030317C;
    case 297u: goto L_00303188;
    case 298u: goto L_003031A0;
    case 299u: goto L_003031D0;
    case 300u: goto L_00303240;
    case 301u: goto L_00303260;
    case 302u: goto L_00303300;
    case 303u: goto L_00303330;
    case 304u: goto L_00303400;
    case 305u: goto L_00303530;
    case 306u: goto L_00303554;
    case 307u: goto L_00303584;
    case 308u: goto L_0030358C;
    case 309u: goto L_00303594;
    case 310u: goto L_003035C0;
    case 311u: goto L_003035D0;
    case 312u: goto L_003035E8;
    case 313u: goto L_00303600;
    case 314u: goto L_00303640;
    case 315u: goto L_00303688;
    case 316u: goto L_00303698;
    case 317u: goto L_003036B0;
    case 318u: goto L_003036D0;
    case 319u: goto L_0030372C;
    case 320u: goto L_00303750;
    case 321u: goto L_00303794;
    case 322u: goto L_003037C4;
    case 323u: goto L_003037E0;
    case 324u: goto L_003037F0;
    case 325u: goto L_00303808;
    case 326u: goto L_00303814;
    case 327u: goto L_00303824;
    case 328u: goto L_0030383C;
    case 329u: goto L_00303844;
    case 330u: goto L_00303854;
    case 331u: goto L_0030386C;
    case 332u: goto L_00303874;
    case 333u: goto L_00303888;
    case 334u: goto L_0030389C;
    case 335u: goto L_003038D0;
    case 336u: goto L_00303900;
    case 337u: goto L_0030394C;
    case 338u: goto L_0030395C;
    case 339u: goto L_00303974;
    case 340u: goto L_00303990;
    case 341u: goto L_00303998;
    case 342u: goto L_003039BC;
    case 343u: goto L_003039E0;
    case 344u: goto L_003039F8;
    case 345u: goto L_00303A38;
    case 346u: goto L_00303A68;
    case 347u: goto L_00303A88;
    case 348u: goto L_00303A98;
    case 349u: goto L_00303AB0;
    case 350u: goto L_00303ABC;
    case 351u: goto L_00303ACC;
    case 352u: goto L_00303AE4;
    case 353u: goto L_00303AEC;
    case 354u: goto L_00303AFC;
    case 355u: goto L_00303B14;
    case 356u: goto L_00303B1C;
    case 357u: goto L_00303B30;
    case 358u: goto L_00303B64;
    case 359u: goto L_00303B90;
    case 360u: goto L_00303BB0;
    case 361u: goto L_00303C00;
    case 362u: goto L_00303C6C;
    case 363u: goto L_00303C98;
    case 364u: goto L_00303CC0;
    case 365u: goto L_00303CE0;
    case 366u: goto L_00303D64;
    case 367u: goto L_00303D8C;
    case 368u: goto L_00303DB4;
    case 369u: goto L_00303DC0;
    case 370u: goto L_00303DD0;
    case 371u: goto L_00303E5C;
    case 372u: goto L_00303EB0;
    case 373u: goto L_00303EFC;
    case 374u: goto L_00303F60;
    case 375u: goto L_00303F70;
    default: bad_entry(c, 0x00300000u); return;
    }
L_00300000:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 1;
L_00300004:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 1;
L_00300008:
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 1;
L_0030000C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300028; } }
    goto L_00300014;
L_00300010:
    c.budget -= 1;
L_00300014:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00300018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300020u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_007F(c, 259u, depth + 1u); else { c.pc = 0x002FFE10u; return; } if (c.pc != 0x00300020u) [[unlikely]] return; }
    goto L_00300020;
L_0030001C:
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_00300020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300060; } }
    goto L_00300028;
L_00300024:
    c.budget -= 1;
L_00300028:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 158u)));
    c.budget -= 1;
L_0030002C:
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 1;
L_00300030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300050; } }
    goto L_00300038;
L_00300034:
    c.budget -= 1;
L_00300038:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0030003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300044u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_007F(c, 259u, depth + 1u); else { c.pc = 0x002FFE10u; return; } if (c.pc != 0x00300044u) [[unlikely]] return; }
    goto L_00300044;
L_00300040:
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_00300044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300060; } }
    goto L_0030004C;
L_00300048:
    c.budget -= 1;
L_0030004C:
    c.budget -= 1;
L_00300050:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030005Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_007F(c, 259u, depth + 1u); else { c.pc = 0x002FFE10u; return; } if (c.pc != 0x0030005Cu) [[unlikely]] return; }
    goto L_0030005C;
L_00300058:
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_0030005C:
    c.budget -= 1;
L_00300060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00300064:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00300068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030006C:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00300070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 4;
L_00300080:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003000A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300090u);  if (depth < kMaxDepth) unit_007F(c, 209u, depth + 1u); else { c.pc = 0x002FF460u; return; } if (c.pc != 0x00300090u) [[unlikely]] return; }
    goto L_00300090;
L_0030008C:
    c.budget -= 1;
L_00300090:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_00300094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030009Cu); set32(c.r[4], ld32((c.r[2].w[0] + 1536u)));  if (depth < kMaxDepth) unit_007F(c, 223u, depth + 1u); else { c.pc = 0x002FF5A0u; return; } if (c.pc != 0x0030009Cu) [[unlikely]] return; }
    goto L_0030009C;
L_00300098:
    set32(c.r[4], ld32((c.r[2].w[0] + 1536u)));
    c.budget -= 1;
L_0030009C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000A8u); set32(c.r[4], ld32((c.r[3].w[0] + 1536u)));  if (depth < kMaxDepth) unit_007F(c, 256u, depth + 1u); else { c.pc = 0x002FFDC0u; return; } if (c.pc != 0x003000A8u) [[unlikely]] return; }
L_003000A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003000B8:
    c.budget -= 2;
L_003000C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003000F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000E0u);  if (depth < kMaxDepth) unit_007F(c, 224u, depth + 1u); else { c.pc = 0x002FF5C0u; return; } if (c.pc != 0x003000E0u) [[unlikely]] return; }
L_003000E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_003000E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000ECu); set32(c.r[4], ld32((c.r[3].w[0] + 1536u)));  if (depth < kMaxDepth) unit_007F(c, 258u, depth + 1u); else { c.pc = 0x002FFDF0u; return; } if (c.pc != 0x003000ECu) [[unlikely]] return; }
    goto L_003000EC;
L_003000E8:
    set32(c.r[4], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 1;
L_003000EC:
    c.budget -= 1;
L_003000F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00300100:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_00300104:
    set32(c.r[5], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00300118; } }
L_00300110:
    st8((c.r[5].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 306u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00300118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00300130:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00300148; } }
L_00300140:
    st8((c.r[4].w[0] + 334u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00300148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300150:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_00300154:
    set32(c.r[2], ld32((c.r[2].w[0] + 1536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00300178; } }
L_00300168:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 334u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00300178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300180:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1536u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300198; } }
    st8((c.r[3].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00300198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003001A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1536u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003001B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003001BC; } }
L_003001B8:
    set32(c.r[2], c.r[2].w[0] + 313u);
    c.budget -= 1;
L_003001BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003001D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003001F8u) [[unlikely]] return; }
L_003001F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00300230; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 656u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00300228:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00300230:
    set32(c.r[18], c.r[16].w[0] + 304u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300244u); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00300244u) [[unlikely]] return; }
L_00300244:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], 0u - 1u);
    st8((c.r[18].w[0] + 41u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 20u);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    st32((c.r[3].w[0] + 1544u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00300290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003002B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[3].w[0] + 1824u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_003002D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    set32(c.r[17], c.r[17].w[0] - 30112u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_00300338; } }
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_00300368; } }
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00300368; } }
L_00300338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_00300368; } }
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00300368:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00300500; } }
    goto L_00300384;
L_00300380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_00300384:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19408u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003003A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_00300500; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00300500; } }
    c.budget -= 1;
L_003003E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { goto L_00300500; } }
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_00300414:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030042Cu); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 173u, depth + 1u); else { c.pc = 0x00301AB0u; return; } if (c.pc != 0x0030042Cu) [[unlikely]] return; }
L_0030042C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300500; } }
    c.budget -= 1;
L_00300438:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { goto L_00300500; } }
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00300500; } }
L_00300470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003004B0; } }
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_003004B0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003004D0; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_003004D0:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00300500; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00300500; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00300500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 206u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00300518; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 206u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00300514:
    c.budget -= 1;
L_00300518:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 206u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00300530; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 206u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00300530:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00300690; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00300658; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00300610; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00300560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003006D8; } }
L_00300560:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], c.r[5].w[0] - 30106u);
    set32(c.r[4], c.r[4].w[0] - 30105u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
L_0030057C:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 30112u);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 10;
L_003005A4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003005B0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_003005F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003005F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003005F8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003005F8; } }
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003006D8; } }
L_003005F8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_00300600:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003005B0u | kUnwind; return; } goto L_003005B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003006D8; } }
L_00300610:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_00300628; } }
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00300628:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_003006D8; } }
    c.budget -= 1;
L_00300658:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - 30108u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003006D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_003006D8; } }
L_00300690:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003006B0; } }
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003006B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 10;
L_003006D8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00300700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300720:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    set32(c.r[17], c.r[17].w[0] - 30112u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300770u); set32(c.r[16], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0080(c, 89u, depth + 1u); else { c.pc = 0x00300890u; return; } if (c.pc != 0x00300770u) [[unlikely]] return; }
L_00300770:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00300778:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 207u)));
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] < 0; c.r[4].d[0] = c.r[21].d[0] << 56;  if (t) { goto L_00300800; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300794u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x00300794u) [[unlikely]] return; }
L_00300794:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] < 0; c.r[6].d[0] = c.r[21].d[0] << 56;  if (t) { goto L_00300800; } }
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007B8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 102u, depth + 1u); else { c.pc = 0x00300A50u; return; } if (c.pc != 0x003007B8u) [[unlikely]] return; }
L_003007B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[6], 0u + 12u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[2].w[0] + 632u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[19].d[0] | c.r[3].d[0];
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 86u, depth + 1u); else { c.pc = 0x002F0770u; return; } if (c.pc != 0x003007E8u) [[unlikely]] return; }
L_003007E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007FCu); set32(c.r[4], c.r[2].w[0] + 632u);  if (depth < kMaxDepth) unit_007C(c, 86u, depth + 1u); else { c.pc = 0x002F0770u; return; } if (c.pc != 0x003007FCu) [[unlikely]] return; }
L_003007FC:
    c.budget -= 1;
L_00300800:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300778u | kUnwind; return; } goto L_00300778; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00300818:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 207u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[6].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_00300840; } }
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030083Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 116u, depth + 1u); else { c.pc = 0x00300FC0u; return; } if (c.pc != 0x0030083Cu) [[unlikely]] return; }
L_0030083C:
    c.budget -= 1;
L_00300840:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300818u | kUnwind; return; } goto L_00300818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300858u);  if (depth < kMaxDepth) unit_0080(c, 123u, depth + 1u); else { c.pc = 0x00301170u; return; } if (c.pc != 0x00300858u) [[unlikely]] return; }
L_00300858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300860u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 137u, depth + 1u); else { c.pc = 0x00301600u; return; } if (c.pc != 0x00300860u) [[unlikely]] return; }
L_00300860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300868u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 161u, depth + 1u); else { c.pc = 0x00301920u; return; } if (c.pc != 0x00300868u) [[unlikely]] return; }
L_00300868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00300890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.budget -= 7;
L_003008AC:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 30112u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29915u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 29914u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_00300A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003008E0u) [[unlikely]] return; }
L_003008E0:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.budget -= 1;
L_003008E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 30304u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 211u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300910u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00300910u) [[unlikely]] return; }
L_00300910:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300928u); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00300928u) [[unlikely]] return; }
L_00300928:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300940u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00300940u) [[unlikely]] return; }
L_00300940:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300958u); set32(c.r[4], c.r[2].w[0] + 3600u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00300958u) [[unlikely]] return; }
L_00300958:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300970u); set32(c.r[4], c.r[2].w[0] + 3360u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00300970u) [[unlikely]] return; }
L_00300970:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00300978:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], c.r[17].w[0] + 19680u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300994u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00300994u) [[unlikely]] return; }
L_00300994:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300978u | kUnwind; return; } goto L_00300978; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003009B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], 0u + 87u);
    set32(c.r[6], c.r[6].w[0] - 30288u);
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 380u)));
    c.f[1] = c.r[6].w[0];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A14u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00300A14u) [[unlikely]] return; }
L_00300A14:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003009B0u | kUnwind; return; } goto L_003009B0; } }
    c.budget -= 1;
L_00300A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00300A50:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] - 30112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29915u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 29914u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300ABCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 321u, depth + 1u); else { c.pc = 0x002D3500u; return; } if (c.pc != 0x00300ABCu) [[unlikely]] return; }
L_00300ABC:
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00300F80; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[30].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300D18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00300C10; } }
    set32(c.r[22], c.r[29].w[0] + 304u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[18], c.r[29].w[0] + 272u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[21], c.r[29].w[0] + 240u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] - 30256u);
    set32(c.r[7], c.r[7].w[0] - 30208u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30160u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 14;
L_00300B40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.f[3] = ld32((c.r[9].w[0] + 4u));
    c.r[2].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 42;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300B40u | kUnwind; return; } goto L_00300B40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C00u); set32(c.r[5], 0u - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00300C00u) [[unlikely]] return; }
L_00300C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00300DD8; } }
L_00300C10:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[22], c.r[29].w[0] + 304u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[18], c.r[29].w[0] + 272u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[21], c.r[29].w[0] + 240u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] - 30256u);
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 30208u);
    set32(c.r[6], c.r[6].w[0] - 30160u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 16;
L_00300C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[3] = ld32((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[9].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.f[3] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.budget -= 28;
L_00300CC0:
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300C50u | kUnwind; return; } goto L_00300C50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D0Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00300D0Cu) [[unlikely]] return; }
L_00300D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00300DD8; } }
    c.budget -= 1;
L_00300D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[5] = ld32((c.r[1].w[0] - 30256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 240u), 0u);
    c.f[21] = 0u;
    st32((c.r[29].w[0] + 244u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[29].w[0] + 252u), 0u);
    st32((c.r[29].w[0] + 256u), 0u);
    set32(c.r[22], c.r[29].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.f[4] = ld32((c.r[1].w[0] - 30252u));
    set32(c.r[18], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 264u), 0u);
    set32(c.r[21], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 304u), c.f[5]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[1].w[0] - 30248u));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[1].w[0] - 30244u));
    st32((c.r[29].w[0] + 312u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[1].w[0] - 30240u));
    st32((c.r[29].w[0] + 316u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[1].w[0] - 30236u));
    st32((c.r[29].w[0] + 320u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[1].w[0] - 30232u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[1].w[0] - 30228u));
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.budget -= 48;
L_00300DD8:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 42u);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[23], 0u - 338u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 10;
L_00300E00:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 4u);  if (t) { goto L_00300E30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], 0u + 3u);  if (t) { goto L_00300E24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300E2C; } }
L_00300E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_00300E34; } }
L_00300E2C:
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_00300E30:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_00300E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E3Cu);  if (depth < kMaxDepth) unit_0074(c, 322u, depth + 1u); else { c.pc = 0x002D3520u; return; } if (c.pc != 0x00300E3Cu) [[unlikely]] return; }
L_00300E3C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00300E58; } }
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_00300E58:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300E68; } }
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_00300E68:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E78u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x00300E78u) [[unlikely]] return; }
L_00300E78:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00300F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E90u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00300E90u) [[unlikely]] return; }
L_00300E90:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.f[2] = c.r[23].w[0];
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[21], c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EB8u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00300EB8u) [[unlikely]] return; }
L_00300EB8:
    c.f[12] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300ECCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00300ECCu) [[unlikely]] return; }
L_00300ECC:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300F08; } }
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00300F08; } }
    c.f[13] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00300F10; } }
L_00300F08:
    set32(c.r[3], 0u + 12u);
    c.f[13] = c.f[20];
    c.budget -= 2;
L_00300F10:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.f[0] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], c.r[3].w[0] + 632u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F64u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_007C(c, 82u, depth + 1u); else { c.pc = 0x002F0660u; return; } if (c.pc != 0x00300F64u) [[unlikely]] return; }
L_00300F64:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[23], c.r[23].w[0] + 55u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300E00u | kUnwind; return; } goto L_00300E00; } }
L_00300F80:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00300FC0:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30304u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.r[16].d[0] = c.r[6].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29915u)));
    set32(c.r[18], c.r[4].w[0] + 304u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] - 30112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 29914u);
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 35;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[3].w[0] + 4u);  if (t) { goto L_00301068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00301088; } }
L_00301068:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 8;
L_00301088:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030109Cu); st32((c.r[4].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030109Cu) [[unlikely]] return; }
L_0030109C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010BCu); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003010BCu) [[unlikely]] return; }
L_003010BC:
    set32(c.r[2], c.r[28].w[0] - 28064u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 380u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010F4u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003010F4u) [[unlikely]] return; }
L_003010F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010FCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003010FCu) [[unlikely]] return; }
L_003010FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301110u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00301110u) [[unlikely]] return; }
L_00301110:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], c.r[3].w[0] - 30120u);
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301150u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00301150u) [[unlikely]] return; }
L_00301150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00301170:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30112u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 26;
L_003011D8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003011D8u | kUnwind; return; } goto L_003011D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] + 22704u);
    c.budget -= 13;
L_00301228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_00301250; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00301250:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301228u | kUnwind; return; } goto L_00301228; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301320; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 41u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00301320; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_00301320; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 4u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003012E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 26u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 22704u);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 10;
L_003012E8:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301320; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 22704u);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 10;
L_00301320:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), 0u);
    set32(c.r[20], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 192u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + 1200u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 12;
L_00301350:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[24] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; c.f[23] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00301388; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00301388; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
L_00301388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[1].d[0] = c.r[2].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.f[25] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_003013E0; } }
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st32((c.r[2].w[0]), 0u);
    c.f[20] = 0u;
    set32(c.r[2], c.r[29].w[0] + 284u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00301400; } }
    c.budget -= 1;
L_003013E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[20] = 0u;
    set32(c.r[2], c.r[29].w[0] + 284u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 288u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 8;
L_00301400:
    set32(c.r[2], c.r[23].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::mul(c.f[1], c.f[25]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.f[21] = fp::mul(c.f[0], c.f[25]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[27] = fp::sub(c.f[23], c.f[1]);
    c.f[26] = fp::add(c.f[0], c.f[24]);
    c.budget -= 18;
L_00301448:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003014C8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00301468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[22]);  if (t) { goto L_00301470; } }
    c.budget -= 1;
L_00301468:
    st32((c.r[20].w[0]), c.f[21]);
    c.budget -= 2;
L_00301470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301478u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00301478u) [[unlikely]] return; }
L_00301478:
    c.f[12] = c.f[26];
    c.f[13] = c.f[27];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301488u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00301488u) [[unlikely]] return; }
L_00301488:
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 6;
L_003014A0:
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014B4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003014B4u) [[unlikely]] return; }
L_003014B4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003014C4u) [[unlikely]] return; }
L_003014C4:
    c.budget -= 1;
L_003014C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301448u | kUnwind; return; } goto L_00301448; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[28].w[0] - 28052u);
    set32(c.r[18], c.r[28].w[0] - 28056u);
    set32(c.r[17], c.r[28].w[0] - 28060u);
    c.budget -= 4;
L_003014E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003014F0u) [[unlikely]] return; }
L_003014F0:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00301508; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00301520; } }
L_00301508:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00301520:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.f[12] = fp::add(c.f[24], c.f[0]);
    c.f[14] = c.f[20];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301540u); c.f[13] = fp::add(c.f[23], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00301540u) [[unlikely]] return; }
L_00301540:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.f[12] = c.f[25];
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301568u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00301568u) [[unlikely]] return; }
L_00301568:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003014E8u | kUnwind; return; } goto L_003014E8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 62u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] - 84u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301350u | kUnwind; return; } goto L_00301350; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00301600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 344u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_003018F8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 41u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003018F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003018F8; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 30112u);
    set32(c.r[5], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301690u); set32(c.r[18], c.r[3].w[0] + 4u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00301690u) [[unlikely]] return; }
L_00301690:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[20] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016A8u); c.r[16].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003016A8u) [[unlikely]] return; }
L_003016A8:
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016B8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003016B8u) [[unlikely]] return; }
L_003016B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016D0u); set32(c.r[4], c.r[2].w[0] + 3120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003016D0u) [[unlikely]] return; }
L_003016D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016D8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003016D8u) [[unlikely]] return; }
L_003016D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003016F4u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003016F4u) [[unlikely]] return; }
L_003016F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030170Cu); set32(c.r[4], c.r[2].w[0] + 2880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030170Cu) [[unlikely]] return; }
L_0030170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301714u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00301714u) [[unlikely]] return; }
L_00301714:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301730u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00301730u) [[unlikely]] return; }
L_00301730:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301748u); set32(c.r[4], c.r[2].w[0] + 2640u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00301748u) [[unlikely]] return; }
L_00301748:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_00301800; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301768; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00301800; } }
L_00301768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301770u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00301770u) [[unlikely]] return; }
L_00301770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43450000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3440000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030178Cu); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030178Cu) [[unlikely]] return; }
L_0030178C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003017A8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003017A8u) [[unlikely]] return; }
L_003017A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 26u)));
    c.f[13] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[7], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[19].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[2].w[0] + 632u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003017E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 82u, depth + 1u); else { c.pc = 0x002F0660u; return; } if (c.pc != 0x003017E8u) [[unlikely]] return; }
L_003017E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003017FCu); set32(c.r[4], c.r[2].w[0] + 632u);  if (depth < kMaxDepth) unit_007C(c, 86u, depth + 1u); else { c.pc = 0x002F0770u; return; } if (c.pc != 0x003017FCu) [[unlikely]] return; }
L_003017FC:
    c.budget -= 1;
L_00301800:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_003018C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301820; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003018C8; } }
L_00301820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301828u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00301828u) [[unlikely]] return; }
L_00301828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3440000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301848u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00301848u) [[unlikely]] return; }
L_00301848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301864u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00301864u) [[unlikely]] return; }
L_00301864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.f[13] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 27u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 29u)));
    set32(c.r[7], 0u + 12u);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[3].w[0] + 632u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 82u, depth + 1u); else { c.pc = 0x002F0660u; return; } if (c.pc != 0x003018B4u) [[unlikely]] return; }
L_003018B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018C8u); set32(c.r[4], c.r[2].w[0] + 632u);  if (depth < kMaxDepth) unit_007C(c, 86u, depth + 1u); else { c.pc = 0x002F0770u; return; } if (c.pc != 0x003018C8u) [[unlikely]] return; }
L_003018C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018D0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003018D0u) [[unlikely]] return; }
L_003018D0:
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018E0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003018E0u) [[unlikely]] return; }
L_003018E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003018F8u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003018F8u) [[unlikely]] return; }
L_003018F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00301920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 325u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301990; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00301990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301958u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00301958u) [[unlikely]] return; }
L_00301958:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00301960:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], c.r[16].w[0] + 16560u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030197Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0030197Cu) [[unlikely]] return; }
L_0030197C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301960u | kUnwind; return; } goto L_00301960; } }
    c.budget -= 1;
L_00301990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003019B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1544u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003019C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003019D8; } }
L_003019C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 305u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_003019D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003019E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1544u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003019F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00301A08; } }
L_003019F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 305u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00301A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301A10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1544u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00301A28; } }
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00301A28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301A30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1544u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00301A48; } }
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00301A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301A50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_00301A54:
    set32(c.r[4], ld32((c.r[3].w[0] + 1544u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00301A68; } }
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00301A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1544u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301A98; } }
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A98u); st8((c.r[3].w[0] + 305u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 173u, depth + 1u); else { c.pc = 0x00301AB0u; return; } if (c.pc != 0x00301A98u) [[unlikely]] return; }
L_00301A98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00301AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1544u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301B38; } }
    st8((c.r[3].w[0] + 321u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[3].w[0] + 304u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[3].w[0] + 322u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00301B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301AE4u);  if (depth < kMaxDepth) unit_0074(c, 319u, depth + 1u); else { c.pc = 0x002D34C0u; return; } if (c.pc != 0x00301AE4u) [[unlikely]] return; }
L_00301AE4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301B00; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00301B00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29915u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 29914u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B1Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0074(c, 321u, depth + 1u); else { c.pc = 0x002D3500u; return; } if (c.pc != 0x00301B1Cu) [[unlikely]] return; }
L_00301B1C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00301B38; } }
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00301B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301B50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 1544u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00301B70; } }
    set32(c.r[3], 0u + 2u);
    st16((c.r[6].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 325u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 324u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00301B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00301BA8u) [[unlikely]] return; }
L_00301BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00301BE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 7232u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 12;
L_00301BE0:
    set32(c.r[18], c.r[16].w[0] + 304u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BF4u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00301BF4u) [[unlikely]] return; }
L_00301BF4:
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], 0u + 20u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    st32((c.r[3].w[0] + 1548u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00301C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00301C60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301C70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[3].w[0] + 8000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_00301C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00301D40; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00301D70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00301D20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00301CE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301D70; } }
    c.budget -= 1;
L_00301CE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00301D70; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D10u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_007C(c, 52u, depth + 1u); else { c.pc = 0x002F0300u; return; } if (c.pc != 0x00301D10u) [[unlikely]] return; }
L_00301D10:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00301D70; } }
L_00301D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D28u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00301D28u) [[unlikely]] return; }
L_00301D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00301D70; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00301D70; } }
L_00301D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D48u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00301D48u) [[unlikely]] return; }
L_00301D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301D70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00301D70:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_00301E48; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00301E10; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00301DC0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00301DA8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00301E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301E48; } }
L_00301DA8:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 20u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_00301E48; } }
L_00301DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00301DD8; } }
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00301DD8:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], 0u + 20u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_00301E48; } }
    c.budget -= 1;
L_00301E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 48u), c.f[1]);  if (t) { goto L_00301E48; } }
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 3;
L_00301E48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00301F00; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19376u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00301E70:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00301E88; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00301E88:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], 0u + 20u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[0]);  if (t) { goto L_00301F00; } }
    c.budget -= 1;
L_00301EC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00301ED8; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00301ED8:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], 0u + 20u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 10;
L_00301F00:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00301F30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00301F40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 316u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 304u);  if (t) { goto L_00301F98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00301F98; } }
    c.f[22] = c.r[2].w[0];
    c.f[24] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[22];  if (t) { goto L_00301FE8; } }
    c.budget -= 1;
L_00301F98:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301FE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301FE0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FCCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00301FCCu) [[unlikely]] return; }
L_00301FCC:
    c.f[23] = ld32((c.r[17].w[0] + 48u));
    c.f[22] = ld32((c.r[17].w[0] + 44u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[0];  if (t) { goto L_00301FE8; } }
    c.budget -= 1;
L_00301FE0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00301FE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2B40000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FFCu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00301FFCu) [[unlikely]] return; }
L_00301FFC:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302014u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00302014u) [[unlikely]] return; }
L_00302014:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00302160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302024u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00302024u) [[unlikely]] return; }
L_00302024:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[12] = fp::add(c.f[1], c.f[24]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030204Cu); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030204Cu) [[unlikely]] return; }
L_0030204C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302060u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_007C(c, 137u, depth + 1u); else { c.pc = 0x002F0F40u; return; } if (c.pc != 0x00302060u) [[unlikely]] return; }
L_00302060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030206Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_007C(c, 58u, depth + 1u); else { c.pc = 0x002F03A0u; return; } if (c.pc != 0x0030206Cu) [[unlikely]] return; }
L_0030206C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302074u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00302074u) [[unlikely]] return; }
L_00302074:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_003020C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003020C0; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_003020A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003020A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020D8; } }
L_003020A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[26] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020E8; } }
L_003020C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.f[26] = c.r[2].w[0];
    c.f[1] = 0u;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020E8; } }
    c.budget -= 1;
L_003020D8:
    c.f[1] = 0u;
    c.f[26] = c.f[1];
    c.budget -= 4;
L_003020E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2B40000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302100u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00302100u) [[unlikely]] return; }
L_00302100:
    c.f[25] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030211Cu); c.f[12] = fp::add(c.f[0], c.f[26]);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x0030211Cu) [[unlikely]] return; }
L_0030211C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43010000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[25]);
    c.f[12] = fp::add(c.f[2], c.f[24]);
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302140u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00302140u) [[unlikely]] return; }
L_00302140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[22];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302154u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_007C(c, 110u, depth + 1u); else { c.pc = 0x002F0B80u; return; } if (c.pc != 0x00302154u) [[unlikely]] return; }
L_00302154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302160u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_007C(c, 58u, depth + 1u); else { c.pc = 0x002F03A0u; return; } if (c.pc != 0x00302160u) [[unlikely]] return; }
L_00302160:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302174u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00302174u) [[unlikely]] return; }
L_00302174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030217Cu); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030217Cu) [[unlikely]] return; }
L_0030217C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[12] = fp::add(c.f[1], c.f[24]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021A4u); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003021A4u) [[unlikely]] return; }
L_003021A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[2].w[0] + 296u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021BCu); set32(c.r[4], c.r[2].w[0] + 2640u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003021BCu) [[unlikely]] return; }
L_003021BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021C4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003021C4u) [[unlikely]] return; }
L_003021C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43010000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021ECu); c.f[12] = fp::add(c.f[1], c.f[24]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003021ECu) [[unlikely]] return; }
L_003021EC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003021F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 296u)));
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030221Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030221Cu) [[unlikely]] return; }
L_0030221C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003021F0u | kUnwind; return; } goto L_003021F0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00302258; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00302258; } }
    c.f[22] = c.r[2].w[0];
    c.f[24] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[22];  if (t) { goto L_00302298; } }
    c.budget -= 1;
L_00302258:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302290; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302280u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x00302280u) [[unlikely]] return; }
L_00302280:
    c.f[23] = ld32((c.r[17].w[0] + 48u));
    c.f[22] = ld32((c.r[17].w[0] + 44u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[0];  if (t) { goto L_00302298; } }
L_00302290:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00302298:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3930000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x003022ACu) [[unlikely]] return; }
L_003022AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022C4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x003022C4u) [[unlikely]] return; }
L_003022C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003023D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022D4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003022D4u) [[unlikely]] return; }
L_003022D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[12] = fp::add(c.f[1], c.f[24]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022FCu); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003022FCu) [[unlikely]] return; }
L_003022FC:
    c.f[12] = c.f[23];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302310u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_007C(c, 137u, depth + 1u); else { c.pc = 0x002F0F40u; return; } if (c.pc != 0x00302310u) [[unlikely]] return; }
L_00302310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030231Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_007C(c, 58u, depth + 1u); else { c.pc = 0x002F03A0u; return; } if (c.pc != 0x0030231Cu) [[unlikely]] return; }
L_0030231C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302324u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00302324u) [[unlikely]] return; }
L_00302324:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_00302370; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00302370; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_00302358; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00302358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302388; } }
L_00302358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431E0000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302398; } }
L_00302370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43240000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302398; } }
L_00302388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43240000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
L_00302398:
    c.f[0] = fp::add(c.f[21], c.f[0]);
    c.f[12] = fp::add(c.f[24], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023ACu); c.f[13] = fp::add(c.f[20], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003023ACu) [[unlikely]] return; }
L_003023AC:
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023C0u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_007C(c, 110u, depth + 1u); else { c.pc = 0x002F0B80u; return; } if (c.pc != 0x003023C0u) [[unlikely]] return; }
L_003023C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023CCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_007C(c, 58u, depth + 1u); else { c.pc = 0x002F03A0u; return; } if (c.pc != 0x003023CCu) [[unlikely]] return; }
L_003023CC:
    c.budget -= 1;
L_003023D0:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023E4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0074(c, 328u, depth + 1u); else { c.pc = 0x002D3620u; return; } if (c.pc != 0x003023E4u) [[unlikely]] return; }
L_003023E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023ECu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003023ECu) [[unlikely]] return; }
L_003023EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[12] = fp::add(c.f[1], c.f[22]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302414u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00302414u) [[unlikely]] return; }
L_00302414:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[2].w[0] + 296u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030242Cu); set32(c.r[4], c.r[2].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030242Cu) [[unlikely]] return; }
L_0030242C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302434u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00302434u) [[unlikely]] return; }
L_00302434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[12] = fp::add(c.f[1], c.f[22]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030245Cu); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030245Cu) [[unlikely]] return; }
L_0030245C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00302460:
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 296u)));
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030248Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030248Cu) [[unlikely]] return; }
L_0030248C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302460u | kUnwind; return; } goto L_00302460; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003024D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1548u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003024E8; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003024E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003024F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1548u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302520u); set32(c.r[16], c.r[3].w[0] + 304u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x00302520u) [[unlikely]] return; }
L_00302520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302528u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_007C(c, 57u, depth + 1u); else { c.pc = 0x002F0390u; return; } if (c.pc != 0x00302528u) [[unlikely]] return; }
L_00302528:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030254Cu); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x0030254Cu) [[unlikely]] return; }
L_0030254C:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00302578; } }
    set32(c.r[3], 0u + 16u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00302580; } }
    c.budget -= 1;
L_00302578:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00302580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003025A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1548u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00302680; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 321u)));
    set32(c.r[16], c.r[3].w[0] + 304u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00302648; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00302648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00302608; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00302608; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00302600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302680; } }
L_00302600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00302680; } }
L_00302608:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00302638; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302630u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_007C(c, 52u, depth + 1u); else { c.pc = 0x002F0300u; return; } if (c.pc != 0x00302630u) [[unlikely]] return; }
L_00302630:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00302638:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00302680; } }
    c.budget -= 1;
L_00302648:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00302678; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302670u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_007C(c, 52u, depth + 1u); else { c.pc = 0x002F0300u; return; } if (c.pc != 0x00302670u) [[unlikely]] return; }
L_00302670:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00302678:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00302680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1548u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003026B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026B0u); set32(c.r[4], ld32((c.r[3].w[0] + 308u)));  if (depth < kMaxDepth) unit_007C(c, 108u, depth + 1u); else { c.pc = 0x002F0B50u; return; } if (c.pc != 0x003026B0u) [[unlikely]] return; }
L_003026B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003026C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00302730; } }
    c.budget -= 1;
L_003026F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302704u); set32(c.r[5], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302704u) [[unlikely]] return; }
L_00302704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));  if (t) { goto L_00302730; } }
    c.budget -= 1;
L_00302718:
    set32(c.r[18], c.r[18].w[0] + 22u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003026F8u | kUnwind; return; } goto L_003026F8; } }
    c.budget -= 1;
L_00302730:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_003028F8; } }
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302770; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302760u); set32(c.r[5], c.r[5].w[0] - 19312u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302760u) [[unlikely]] return; }
L_00302760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302770; } }
    set32(c.r[16], 0u + 32u);
    c.budget -= 2;
L_00302770:
    c.r[17].d[0] = c.r[17].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00302808; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302808; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030279Cu); set32(c.r[5], c.r[5].w[0] - 19304u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0030279Cu) [[unlikely]] return; }
L_0030279C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003027A8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003027A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027B8u); set32(c.r[5], c.r[5].w[0] - 19296u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003027B8u) [[unlikely]] return; }
L_003027B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003027C8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003027C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027D8u); set32(c.r[5], c.r[5].w[0] - 19280u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003027D8u) [[unlikely]] return; }
L_003027D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003027E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003027E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027F8u); set32(c.r[5], c.r[5].w[0] - 19256u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003027F8u) [[unlikely]] return; }
L_003027F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302808; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00302808:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00302898; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302898; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030282Cu); set32(c.r[5], c.r[5].w[0] - 19304u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0030282Cu) [[unlikely]] return; }
L_0030282C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302838; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 1;
L_00302838:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302848u); set32(c.r[5], c.r[5].w[0] - 19296u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302848u) [[unlikely]] return; }
L_00302848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302858; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 2;
L_00302858:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302868u); set32(c.r[5], c.r[5].w[0] - 19280u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302868u) [[unlikely]] return; }
L_00302868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302878; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 2;
L_00302878:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302888u); set32(c.r[5], c.r[5].w[0] - 19256u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302888u) [[unlikely]] return; }
L_00302888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302898; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 2;
L_00302898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028A0u);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x003028A0u) [[unlikely]] return; }
L_003028A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_003028C8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_00302AB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00302AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00302AB0; } }
L_003028C8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 18u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302AB0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028E8u); set32(c.r[5], c.r[5].w[0] - 19240u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003028E8u) [[unlikely]] return; }
L_003028E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 31u);  if (t) { goto L_00302AB0; } }
L_003028F8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302928; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302918u); set32(c.r[5], c.r[5].w[0] - 19312u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302918u) [[unlikely]] return; }
L_00302918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302928; } }
    set32(c.r[16], 0u + 32u);
    c.budget -= 2;
L_00302928:
    c.r[17].d[0] = c.r[17].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_003029C0; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003029C0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302954u); set32(c.r[5], c.r[5].w[0] - 19304u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302954u) [[unlikely]] return; }
L_00302954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302960; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00302960:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302970u); set32(c.r[5], c.r[5].w[0] - 19296u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302970u) [[unlikely]] return; }
L_00302970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302980; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00302980:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302990u); set32(c.r[5], c.r[5].w[0] - 19280u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302990u) [[unlikely]] return; }
L_00302990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003029A0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003029A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029B0u); set32(c.r[5], c.r[5].w[0] - 19256u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003029B0u) [[unlikely]] return; }
L_003029B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003029C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003029C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00302A50; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302A50; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029E4u); set32(c.r[5], c.r[5].w[0] - 19304u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x003029E4u) [[unlikely]] return; }
L_003029E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003029F0; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 1;
L_003029F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A00u); set32(c.r[5], c.r[5].w[0] - 19296u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302A00u) [[unlikely]] return; }
L_00302A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302A10; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 2;
L_00302A10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A20u); set32(c.r[5], c.r[5].w[0] - 19280u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302A20u) [[unlikely]] return; }
L_00302A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302A30; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 2;
L_00302A30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A40u); set32(c.r[5], c.r[5].w[0] - 19256u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302A40u) [[unlikely]] return; }
L_00302A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302A50; } }
    set32(c.r[16], 0u + 38u);
    c.budget -= 2;
L_00302A50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10847u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00302A80; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_00302AB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00302AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00302AB0; } }
L_00302A80:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 18u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00302AB0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AA0u); set32(c.r[5], c.r[5].w[0] - 19240u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00302AA0u) [[unlikely]] return; }
L_00302AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00302AB0; } }
    set32(c.r[16], 0u + 31u);
    c.budget -= 2;
L_00302AB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00302AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00302B90; } }
L_00302AF8:
    c.r[16].d[0] = c.r[17].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00302B10; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00302B40; } }
L_00302B10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B24u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 243u, depth + 1u); else { c.pc = 0x003026C0u; return; } if (c.pc != 0x00302B24u) [[unlikely]] return; }
L_00302B24:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302B90; } }
    c.budget -= 1;
L_00302B40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00302B58; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00302B88; } }
    c.budget -= 1;
L_00302B58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B6Cu); set32(c.r[5], c.r[5].w[0] - 27696u);  if (depth < kMaxDepth) unit_0080(c, 243u, depth + 1u); else { c.pc = 0x003026C0u; return; } if (c.pc != 0x00302B6Cu) [[unlikely]] return; }
L_00302B6C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302B90; } }
    c.budget -= 1;
L_00302B88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00302B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00302BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302BC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00302BC4u) [[unlikely]] return; }
L_00302BC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302BF0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 21u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_00302C38; } }
    c.budget -= 1;
L_00302C10:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00302C38; } }
    c.budget -= 1;
L_00302C28:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302C38; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00302C38:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 21u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00302C80; } }
    c.budget -= 1;
L_00302C58:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_00302C80; } }
    c.budget -= 1;
L_00302C70:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00302C80; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_00302C80:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00302CA0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 28048u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28046u));
    set32(c.r[6], c.r[29].w[0] + 12u);
    set32(c.r[9], 0u + 18u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 13u)));
    c.budget -= 10;
L_00302CC8:
    set32(c.r[5], c.r[4].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00302CF8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00302D08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 1u);  if (t) { goto L_00302D08; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00302CF8:
    set32(c.r[9], c.r[9].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302CC8u | kUnwind; return; } goto L_00302CC8; } }
    c.budget -= 1;
L_00302D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00302D10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[13].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 108u);
    st8((c.r[28].w[0] - 23092u), static_cast<std::uint8_t>(0u));
    c.r[12].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[11], 0u + 21u);
    set32(c.r[9], 0u + 20u);
    set32(c.r[7], 0u + 19u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[10], 0u + 5u);
    c.budget -= 20;
L_00302D60:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00302D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00302DB0; } }
L_00302D70:
    set32(c.r[3], c.r[5].w[0] + c.r[13].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_00302D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_00302DB0; } }
L_00302D88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_00302D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_00302DB0; } }
L_00302D98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00302DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00302DB0; } }
L_00302DA8:
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00302DB0:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[3].d[0] = c.r[13].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302D60u | kUnwind; return; } goto L_00302D60; } }
    c.r[18].d[0] = c.r[4].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00302DD8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_00302E98; } }
L_00302DD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30080u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00302E98; } }
    set32(c.r[19], c.r[19].w[0] - 30080u);
    c.budget -= 1;
L_00302DF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00302E00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00302E20; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302E00u | kUnwind; return; } goto L_00302E00; } }
    c.budget -= 1;
L_00302E20:
    c.r[20].d[0] = c.r[3].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E2Cu); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x00302E2Cu) [[unlikely]] return; }
L_00302E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[20].sd[0] < 28ll ? 1ull : 0ull;  if (t) { goto L_00302E48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_00302E48; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00302E80; } }
    c.budget -= 1;
L_00302E48:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00302E80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 10048u);
    set32(c.r[5], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23092u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 23092u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_00302E80:
    set32(c.r[19], c.r[19].w[0] + 22u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302DF0u | kUnwind; return; } goto L_00302DF0; } }
    c.budget -= 1;
L_00302E98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00302EB0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_00302F70; } }
    c.budget -= 1;
L_00302EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29680u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00302F70; } }
    set32(c.r[18], c.r[18].w[0] - 29680u);
    c.budget -= 1;
L_00302EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00302ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00302EF8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302ED8u | kUnwind; return; } goto L_00302ED8; } }
    c.budget -= 1;
L_00302EF8:
    c.r[19].d[0] = c.r[3].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F04u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x00302F04u) [[unlikely]] return; }
    goto L_00302F04;
L_00302F00:
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 1;
L_00302F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[19].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_00302F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_00302F20; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00302F58; } }
    c.budget -= 1;
L_00302F20:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00302F58; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 10048u);
    set32(c.r[5], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23092u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 23092u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_00302F58:
    set32(c.r[18], c.r[18].w[0] + 22u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302EC8u | kUnwind; return; } goto L_00302EC8; } }
    c.budget -= 1;
L_00302F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00302F90:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00302FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00302FD0; } }
    c.budget -= 1;
L_00302FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FB8u);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x00302FB8u) [[unlikely]] return; }
L_00302FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_00302FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00302FD0; } }
L_00302FC8:
    set32(c.r[3], 0u + 17u);
    st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00302FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00302FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 10048u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23096u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 8;
L_00303000:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00303010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303010u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00303010u) [[unlikely]] return; }
L_00303010:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23096u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23092u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23096u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303038; } }
    st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00303038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00303050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303064u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00303064u) [[unlikely]] return; }
L_00303064:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23092u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303088u); st8((c.r[28].w[0] - 23096u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 286u, depth + 1u); else { c.pc = 0x00302FE0u; return; } if (c.pc != 0x00303088u) [[unlikely]] return; }
L_00303088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003030A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003030F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003030CCu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003030CCu) [[unlikely]] return; }
L_003030CC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_003030E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_003030E8; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_003030E4:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 1;
L_003030E8:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 2;
L_003030F0:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303108u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00303108u) [[unlikely]] return; }
L_00303108:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00303120; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00303124; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00303120:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_00303124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_0030316C; } }
L_00303138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303140u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00303140u) [[unlikely]] return; }
L_00303140:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00303158; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0030315C; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00303158:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_0030315C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29096u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0030316C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030317Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0030317Cu) [[unlikely]] return; }
L_0030317C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303188u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00303188u) [[unlikely]] return; }
L_00303188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003031A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003031D0u) [[unlikely]] return; }
L_003031D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303208; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + 12864u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_00303208:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    st32((c.r[3].w[0] + 1556u), c.r[2].w[0]);
    st8((c.r[2].w[0] + 305u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 306u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 307u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00303240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00303260:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[6].w[0] + 13888u);
    set32(c.r[5], c.r[5].w[0] + 14503u);
    set32(c.r[8], c.r[4].w[0] + 304u);
    set32(c.r[3], 0u + 52u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 306u)));
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 306u)));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003032B0; } }
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003032B0:
    st32((c.r[8].w[0] + 8u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003032E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_003032D8; } }
    set32(c.r[3], c.r[3].w[0] - 25688u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00303328; } }
L_003032D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 25680u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00303328; } }
L_003032E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25632u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] - 25632u);  if (t) { goto L_00303328; } }
L_00303300:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00303318; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00303328; } }
    c.budget -= 1;
L_00303318:
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303300u | kUnwind; return; } goto L_00303300; } }
L_00303328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303330:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_003033A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00303350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003033E8; } }
L_00303350:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 16u), c.f[1]);  if (t) { goto L_003033E8; } }
    st32((c.r[6].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003033E8; } }
L_003033A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 20u), c.f[1]);  if (t) { goto L_003033E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[3].w[0] + 14592u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
L_003033E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00303400:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 9600u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 309u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 332u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00303480; } }
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 24u), c.f[1]);  if (t) { goto L_003034B0; } }
    st32((c.r[18].w[0] + 24u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003034B0; } }
    c.budget -= 1;
L_00303480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 24u), c.f[1]);  if (t) { goto L_003034B0; } }
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003034B0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003034F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00303528; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00303528; } }
    c.budget -= 1;
L_003034F0:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303528; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00303528; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00303528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303530u);  if (depth < kMaxDepth) unit_0080(c, 46u, depth + 1u); else { c.pc = 0x00300120u; return; } if (c.pc != 0x00303530u) [[unlikely]] return; }
L_00303530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303548; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 33568ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303568; } }
L_00303548:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303554u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00303554u) [[unlikely]] return; }
L_00303554:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00303598; } }
    c.budget -= 1;
L_00303568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303584u); set32(c.r[5], 0u + 184u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00303584u) [[unlikely]] return; }
L_00303584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030358Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));  if (depth < kMaxDepth) unit_0080(c, 241u, depth + 1u); else { c.pc = 0x00302690u; return; } if (c.pc != 0x0030358Cu) [[unlikely]] return; }
L_0030358C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303594u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 313u, depth + 1u); else { c.pc = 0x00303600u; return; } if (c.pc != 0x00303594u) [[unlikely]] return; }
L_00303594:
    c.budget -= 1;
L_00303598:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003035C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003035D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035E8u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003035E8u) [[unlikely]] return; }
L_003035E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    st32((c.r[3].w[0] + 1556u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00303600:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 309u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    set32(c.r[5], c.r[5].w[0] - 30112u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 307u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_00303640:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 25456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    set32(c.r[4], c.r[3].w[0] - 2u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303688u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303688u) [[unlikely]] return; }
L_00303688:
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303698u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303698u) [[unlikely]] return; }
L_00303698:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036B0u); set32(c.r[4], c.r[2].w[0] + 6240u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003036B0u) [[unlikely]] return; }
L_003036B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.f[20] = ld32((c.r[18].w[0] + 4u));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { goto L_003037D8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003036D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00303708; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00303724; } }
L_00303708:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_00303724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030372Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030372Cu) [[unlikely]] return; }
L_0030372C:
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = 0u;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303750u); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303750u) [[unlikely]] return; }
L_00303750:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A00000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 41120ull;
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303794u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00303794u) [[unlikely]] return; }
L_00303794:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037C4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x003037C4u) [[unlikely]] return; }
L_003037C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003036D0u | kUnwind; return; } goto L_003036D0; } }
L_003037D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037E0u); c.f[20] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003037E0u) [[unlikely]] return; }
L_003037E0:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037F0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003037F0u) [[unlikely]] return; }
L_003037F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303808u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00303808u) [[unlikely]] return; }
L_00303808:
    c.f[20] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303814u); set32(c.r[18], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303814u) [[unlikely]] return; }
L_00303814:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303824u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303824u) [[unlikely]] return; }
L_00303824:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030383Cu); set32(c.r[4], c.r[2].w[0] + 5520u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030383Cu) [[unlikely]] return; }
L_0030383C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303844u); c.f[20] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303844u) [[unlikely]] return; }
L_00303844:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303854u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303854u) [[unlikely]] return; }
L_00303854:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030386Cu); set32(c.r[4], c.r[2].w[0] + 5760u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030386Cu) [[unlikely]] return; }
L_0030386C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303874u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303874u) [[unlikely]] return; }
L_00303874:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303888u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303888u) [[unlikely]] return; }
L_00303888:
    c.f[13] = ld32((c.r[20].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030389Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0030389Cu) [[unlikely]] return; }
L_0030389C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[28].w[0] - 28006u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 296u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003038D0u) [[unlikely]] return; }
L_003038D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00303900:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 25456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    set32(c.r[4], c.r[3].w[0] - 2u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030394Cu); c.f[20] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030394Cu) [[unlikely]] return; }
L_0030394C:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030395Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030395Cu) [[unlikely]] return; }
L_0030395C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303974u); set32(c.r[4], c.r[2].w[0] + 6240u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00303974u) [[unlikely]] return; }
L_00303974:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.f[20] = ld32((c.r[18].w[0] + 4u));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { goto L_00303A80; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00303990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303998u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303998u) [[unlikely]] return; }
L_00303998:
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = 0u;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039BCu); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003039BCu) [[unlikely]] return; }
L_003039BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00303A00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039E0u); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x003039E0u) [[unlikely]] return; }
L_003039E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039F8u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x003039F8u) [[unlikely]] return; }
L_003039F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_00303A08; } }
L_00303A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFA00000u);
    c.r[17].d[0] = c.r[2].d[0] | 41120ull;
    c.budget -= 2;
L_00303A08:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A38u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00303A38u) [[unlikely]] return; }
L_00303A38:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A68u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00303A68u) [[unlikely]] return; }
L_00303A68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303990u | kUnwind; return; } goto L_00303990; } }
    c.budget -= 1;
L_00303A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A88u); c.f[20] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303A88u) [[unlikely]] return; }
L_00303A88:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A98u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303A98u) [[unlikely]] return; }
L_00303A98:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AB0u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00303AB0u) [[unlikely]] return; }
L_00303AB0:
    c.f[20] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303ABCu); set32(c.r[18], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303ABCu) [[unlikely]] return; }
L_00303ABC:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303ACCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303ACCu) [[unlikely]] return; }
L_00303ACC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AE4u); set32(c.r[4], c.r[2].w[0] + 5520u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00303AE4u) [[unlikely]] return; }
L_00303AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AECu); c.f[20] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303AECu) [[unlikely]] return; }
L_00303AEC:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AFCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303AFCu) [[unlikely]] return; }
L_00303AFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B14u); set32(c.r[4], c.r[2].w[0] + 5760u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00303B14u) [[unlikely]] return; }
L_00303B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B1Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00303B1Cu) [[unlikely]] return; }
L_00303B1C:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B30u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00303B30u) [[unlikely]] return; }
L_00303B30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[28].w[0] - 28006u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.f[12] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 296u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B64u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00303B64u) [[unlikely]] return; }
L_00303B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00303B90:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1556u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00303BB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C00u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00303C00u) [[unlikely]] return; }
L_00303C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00303C98; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 18u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 21866u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 15552u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] - 21864u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[20].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C6Cu); st32((c.r[17].w[0] + 28u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00303C6Cu) [[unlikely]] return; }
L_00303C6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 21868u);
    set32(c.r[2], c.r[2].w[0] - 21867u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 176u)));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00303C98u) [[unlikely]] return; }
L_00303C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00303CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00303CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 21728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 1360u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00303D70; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D64u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 360u, depth + 1u); else { c.pc = 0x00303BB0u; return; } if (c.pc != 0x00303D64u) [[unlikely]] return; }
L_00303D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303DB8; } }
    c.budget -= 1;
L_00303D70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303D98; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D8Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 360u, depth + 1u); else { c.pc = 0x00303BB0u; return; } if (c.pc != 0x00303D8Cu) [[unlikely]] return; }
L_00303D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303DB8; } }
    c.budget -= 1;
L_00303D98:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00303DB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DB4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 360u, depth + 1u); else { c.pc = 0x00303BB0u; return; } if (c.pc != 0x00303DB4u) [[unlikely]] return; }
L_00303DB4:
    c.budget -= 1;
L_00303DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 370u, depth + 1u); else { c.pc = 0x00303DD0u; return; } if (c.pc != 0x00303DC0u) [[unlikely]] return; }
L_00303DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303E38; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00303E38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00303E28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_00303E38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00303E38; } }
    c.budget -= 1;
L_00303E28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00303E90; } }
    c.budget -= 1;
L_00303E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303E5Cu) [[unlikely]] return; }
L_00303E5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303E90; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00303E88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1626u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303E90; } }
    c.budget -= 1;
L_00303E88:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00303E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00303EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 850u));
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[2], c.r[2].w[0] >> (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 850u));
    c.r[6].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EFCu);  if (depth < kMaxDepth) unit_0081(c, 136u, depth + 1u); else { c.pc = 0x00305F00u; return; } if (c.pc != 0x00303EFCu) [[unlikely]] return; }
L_00303EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 19u, depth); } }
    c.budget -= 1;
L_00303F08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_00303F88; } }
    set32(c.r[2], 0u + 240u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00303F88; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00303F40; } }
    set32(c.r[2], c.r[2].w[0] - 21152u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00303F50; } }
L_00303F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 21088u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_00303F50:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F60u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00303F60u) [[unlikely]] return; }
L_00303F60:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F70u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00303F70u) [[unlikely]] return; }
L_00303F70:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
L_00303F88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { [[clang::musttail]] return unit_0081(c, 17u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0081(c, 16u, depth); } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0081(c, 10u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0081(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 17u, depth); } }
    c.budget -= 1;
L_00303FC8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { [[clang::musttail]] return unit_0081(c, 1u, depth); } }
    set32(c.r[2], c.r[2].w[0] - 21152u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0081(c, 3u, depth); } }
    [[clang::musttail]] return unit_0081(c, 1u, depth);
}

}
