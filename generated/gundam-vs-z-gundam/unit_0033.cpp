#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0033[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0,
    208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216,
    0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307,
    0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0,
    0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0,
    0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0,
    0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 362, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0,
    0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    389, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0,
    0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0,
    0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0,
    417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 425, 0, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0,
};

void unit_0033(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001CC000;
    case 2u: goto L_001CC0B0;
    case 3u: goto L_001CC0D4;
    case 4u: goto L_001CC100;
    case 5u: goto L_001CC128;
    case 6u: goto L_001CC130;
    case 7u: goto L_001CC190;
    case 8u: goto L_001CC1B8;
    case 9u: goto L_001CC1D4;
    case 10u: goto L_001CC1E0;
    case 11u: goto L_001CC1F0;
    case 12u: goto L_001CC1F8;
    case 13u: goto L_001CC228;
    case 14u: goto L_001CC230;
    case 15u: goto L_001CC244;
    case 16u: goto L_001CC260;
    case 17u: goto L_001CC268;
    case 18u: goto L_001CC2A0;
    case 19u: goto L_001CC2A8;
    case 20u: goto L_001CC2D0;
    case 21u: goto L_001CC2D8;
    case 22u: goto L_001CC300;
    case 23u: goto L_001CC338;
    case 24u: goto L_001CC340;
    case 25u: goto L_001CC354;
    case 26u: goto L_001CC3A0;
    case 27u: goto L_001CC3D8;
    case 28u: goto L_001CC3E0;
    case 29u: goto L_001CC418;
    case 30u: goto L_001CC428;
    case 31u: goto L_001CC430;
    case 32u: goto L_001CC438;
    case 33u: goto L_001CC498;
    case 34u: goto L_001CC4A0;
    case 35u: goto L_001CC4B4;
    case 36u: goto L_001CC500;
    case 37u: goto L_001CC508;
    case 38u: goto L_001CC540;
    case 39u: goto L_001CC548;
    case 40u: goto L_001CC570;
    case 41u: goto L_001CC578;
    case 42u: goto L_001CC5A0;
    case 43u: goto L_001CC5EC;
    case 44u: goto L_001CC67C;
    case 45u: goto L_001CC720;
    case 46u: goto L_001CC748;
    case 47u: goto L_001CC750;
    case 48u: goto L_001CC780;
    case 49u: goto L_001CC790;
    case 50u: goto L_001CC798;
    case 51u: goto L_001CC7C8;
    case 52u: goto L_001CC7D0;
    case 53u: goto L_001CC7F8;
    case 54u: goto L_001CC830;
    case 55u: goto L_001CC838;
    case 56u: goto L_001CC878;
    case 57u: goto L_001CC8A0;
    case 58u: goto L_001CC8C8;
    case 59u: goto L_001CC8E0;
    case 60u: goto L_001CC900;
    case 61u: goto L_001CC938;
    case 62u: goto L_001CC954;
    case 63u: goto L_001CC988;
    case 64u: goto L_001CC99C;
    case 65u: goto L_001CC9C0;
    case 66u: goto L_001CC9D0;
    case 67u: goto L_001CC9D8;
    case 68u: goto L_001CC9F8;
    case 69u: goto L_001CCA00;
    case 70u: goto L_001CCA08;
    case 71u: goto L_001CCA48;
    case 72u: goto L_001CCA88;
    case 73u: goto L_001CCAB0;
    case 74u: goto L_001CCAB8;
    case 75u: goto L_001CCAC0;
    case 76u: goto L_001CCAF0;
    case 77u: goto L_001CCAF8;
    case 78u: goto L_001CCB18;
    case 79u: goto L_001CCB20;
    case 80u: goto L_001CCB60;
    case 81u: goto L_001CCB68;
    case 82u: goto L_001CCB7C;
    case 83u: goto L_001CCBA0;
    case 84u: goto L_001CCBD8;
    case 85u: goto L_001CCBE0;
    case 86u: goto L_001CCBF4;
    case 87u: goto L_001CCC38;
    case 88u: goto L_001CCC40;
    case 89u: goto L_001CCC48;
    case 90u: goto L_001CCC80;
    case 91u: goto L_001CCC88;
    case 92u: goto L_001CCC90;
    case 93u: goto L_001CCCC8;
    case 94u: goto L_001CCCD0;
    case 95u: goto L_001CCCD8;
    case 96u: goto L_001CCD18;
    case 97u: goto L_001CCD58;
    case 98u: goto L_001CCD80;
    case 99u: goto L_001CCDAC;
    case 100u: goto L_001CCDDC;
    case 101u: goto L_001CCDE8;
    case 102u: goto L_001CCE08;
    case 103u: goto L_001CCE1C;
    case 104u: goto L_001CCE58;
    case 105u: goto L_001CCE60;
    case 106u: goto L_001CCE88;
    case 107u: goto L_001CCEA0;
    case 108u: goto L_001CCEA8;
    case 109u: goto L_001CCEE0;
    case 110u: goto L_001CCEE8;
    case 111u: goto L_001CCF10;
    case 112u: goto L_001CCF18;
    case 113u: goto L_001CCF40;
    case 114u: goto L_001CCF54;
    case 115u: goto L_001CCF78;
    case 116u: goto L_001CCF80;
    case 117u: goto L_001CCF88;
    case 118u: goto L_001CCFC0;
    case 119u: goto L_001CCFE8;
    case 120u: goto L_001CD008;
    case 121u: goto L_001CD020;
    case 122u: goto L_001CD044;
    case 123u: goto L_001CD090;
    case 124u: goto L_001CD120;
    case 125u: goto L_001CD1B0;
    case 126u: goto L_001CD1E0;
    case 127u: goto L_001CD2A0;
    case 128u: goto L_001CD3D0;
    case 129u: goto L_001CD3E8;
    case 130u: goto L_001CD470;
    case 131u: goto L_001CD4C4;
    case 132u: goto L_001CD4F0;
    case 133u: goto L_001CD538;
    case 134u: goto L_001CD608;
    case 135u: goto L_001CD620;
    case 136u: goto L_001CD628;
    case 137u: goto L_001CD630;
    case 138u: goto L_001CD6A0;
    case 139u: goto L_001CD6A8;
    case 140u: goto L_001CD6C0;
    case 141u: goto L_001CD6EC;
    case 142u: goto L_001CD708;
    case 143u: goto L_001CD728;
    case 144u: goto L_001CD748;
    case 145u: goto L_001CD778;
    case 146u: goto L_001CD7B8;
    case 147u: goto L_001CD7EC;
    case 148u: goto L_001CD860;
    case 149u: goto L_001CD868;
    case 150u: goto L_001CD870;
    case 151u: goto L_001CD8C8;
    case 152u: goto L_001CD928;
    case 153u: goto L_001CD948;
    case 154u: goto L_001CD978;
    case 155u: goto L_001CD9A4;
    case 156u: goto L_001CDA04;
    case 157u: goto L_001CDA28;
    case 158u: goto L_001CDA44;
    case 159u: goto L_001CDA6C;
    case 160u: goto L_001CDAA8;
    case 161u: goto L_001CDAD4;
    case 162u: goto L_001CDAE0;
    case 163u: goto L_001CDAE8;
    case 164u: goto L_001CDB4C;
    case 165u: goto L_001CDB68;
    case 166u: goto L_001CDB74;
    case 167u: goto L_001CDBF0;
    case 168u: goto L_001CDC50;
    case 169u: goto L_001CDC58;
    case 170u: goto L_001CDC88;
    case 171u: goto L_001CDC90;
    case 172u: goto L_001CDCE8;
    case 173u: goto L_001CDCF0;
    case 174u: goto L_001CDD20;
    case 175u: goto L_001CDD58;
    case 176u: goto L_001CDD80;
    case 177u: goto L_001CDD98;
    case 178u: goto L_001CDDA0;
    case 179u: goto L_001CDDC0;
    case 180u: goto L_001CDDF4;
    case 181u: goto L_001CDE68;
    case 182u: goto L_001CDE70;
    case 183u: goto L_001CDE90;
    case 184u: goto L_001CDEA0;
    case 185u: goto L_001CDEAC;
    case 186u: goto L_001CDF28;
    case 187u: goto L_001CDF88;
    case 188u: goto L_001CDF90;
    case 189u: goto L_001CDFC0;
    case 190u: goto L_001CDFF8;
    case 191u: goto L_001CE034;
    case 192u: goto L_001CE068;
    case 193u: goto L_001CE080;
    case 194u: goto L_001CE0B0;
    case 195u: goto L_001CE170;
    case 196u: goto L_001CE280;
    case 197u: goto L_001CE2A8;
    case 198u: goto L_001CE2B8;
    case 199u: goto L_001CE2C4;
    case 200u: goto L_001CE2D4;
    case 201u: goto L_001CE2E0;
    case 202u: goto L_001CE318;
    case 203u: goto L_001CE364;
    case 204u: goto L_001CE3C0;
    case 205u: goto L_001CE3E0;
    case 206u: goto L_001CE3E8;
    case 207u: goto L_001CE3F0;
    case 208u: goto L_001CE400;
    case 209u: goto L_001CE40C;
    case 210u: goto L_001CE41C;
    case 211u: goto L_001CE454;
    case 212u: goto L_001CE498;
    case 213u: goto L_001CE4DC;
    case 214u: goto L_001CE4E4;
    case 215u: goto L_001CE4F0;
    case 216u: goto L_001CE4FC;
    case 217u: goto L_001CE508;
    case 218u: goto L_001CE51C;
    case 219u: goto L_001CE524;
    case 220u: goto L_001CE530;
    case 221u: goto L_001CE540;
    case 222u: goto L_001CE54C;
    case 223u: goto L_001CE55C;
    case 224u: goto L_001CE570;
    case 225u: goto L_001CE600;
    case 226u: goto L_001CE618;
    case 227u: goto L_001CE620;
    case 228u: goto L_001CE630;
    case 229u: goto L_001CE63C;
    case 230u: goto L_001CE648;
    case 231u: goto L_001CE6E0;
    case 232u: goto L_001CE6F8;
    case 233u: goto L_001CE700;
    case 234u: goto L_001CE710;
    case 235u: goto L_001CE71C;
    case 236u: goto L_001CE728;
    case 237u: goto L_001CE7C0;
    case 238u: goto L_001CE7DC;
    case 239u: goto L_001CE7EC;
    case 240u: goto L_001CE7F8;
    case 241u: goto L_001CE808;
    case 242u: goto L_001CE858;
    case 243u: goto L_001CE864;
    case 244u: goto L_001CE8D0;
    case 245u: goto L_001CE930;
    case 246u: goto L_001CE958;
    case 247u: goto L_001CE970;
    case 248u: goto L_001CE998;
    case 249u: goto L_001CE9AC;
    case 250u: goto L_001CEA20;
    case 251u: goto L_001CEA30;
    case 252u: goto L_001CEA68;
    case 253u: goto L_001CEAA0;
    case 254u: goto L_001CEB60;
    case 255u: goto L_001CEBC0;
    case 256u: goto L_001CEC00;
    case 257u: goto L_001CEC20;
    case 258u: goto L_001CEC38;
    case 259u: goto L_001CED30;
    case 260u: goto L_001CED94;
    case 261u: goto L_001CEDA8;
    case 262u: goto L_001CEDB8;
    case 263u: goto L_001CEE00;
    case 264u: goto L_001CEE38;
    case 265u: goto L_001CEE48;
    case 266u: goto L_001CEE54;
    case 267u: goto L_001CEE5C;
    case 268u: goto L_001CEE6C;
    case 269u: goto L_001CEF1C;
    case 270u: goto L_001CEF28;
    case 271u: goto L_001CEF88;
    case 272u: goto L_001CF050;
    case 273u: goto L_001CF0C0;
    case 274u: goto L_001CF0D0;
    case 275u: goto L_001CF0E0;
    case 276u: goto L_001CF130;
    case 277u: goto L_001CF194;
    case 278u: goto L_001CF1AC;
    case 279u: goto L_001CF1C0;
    case 280u: goto L_001CF1D0;
    case 281u: goto L_001CF220;
    case 282u: goto L_001CF284;
    case 283u: goto L_001CF29C;
    case 284u: goto L_001CF2B0;
    case 285u: goto L_001CF2C0;
    case 286u: goto L_001CF310;
    case 287u: goto L_001CF374;
    case 288u: goto L_001CF388;
    case 289u: goto L_001CF398;
    case 290u: goto L_001CF3E0;
    case 291u: goto L_001CF410;
    case 292u: goto L_001CF438;
    case 293u: goto L_001CF448;
    case 294u: goto L_001CF45C;
    case 295u: goto L_001CF468;
    case 296u: goto L_001CF520;
    case 297u: goto L_001CF584;
    case 298u: goto L_001CF598;
    case 299u: goto L_001CF5A8;
    case 300u: goto L_001CF5F0;
    case 301u: goto L_001CF654;
    case 302u: goto L_001CF668;
    case 303u: goto L_001CF678;
    case 304u: goto L_001CF6C0;
    case 305u: goto L_001CF6D4;
    case 306u: goto L_001CF6F4;
    case 307u: goto L_001CF6FC;
    case 308u: goto L_001CF704;
    case 309u: goto L_001CF70C;
    case 310u: goto L_001CF714;
    case 311u: goto L_001CF730;
    case 312u: goto L_001CF744;
    case 313u: goto L_001CF754;
    case 314u: goto L_001CF768;
    case 315u: goto L_001CF778;
    case 316u: goto L_001CF788;
    case 317u: goto L_001CF798;
    case 318u: goto L_001CF7A8;
    case 319u: goto L_001CF7C0;
    case 320u: goto L_001CF7D4;
    case 321u: goto L_001CF7E4;
    case 322u: goto L_001CF7F8;
    case 323u: goto L_001CF808;
    case 324u: goto L_001CF818;
    case 325u: goto L_001CF828;
    case 326u: goto L_001CF840;
    case 327u: goto L_001CF854;
    case 328u: goto L_001CF864;
    case 329u: goto L_001CF878;
    case 330u: goto L_001CF888;
    case 331u: goto L_001CF898;
    case 332u: goto L_001CF8B0;
    case 333u: goto L_001CF8C4;
    case 334u: goto L_001CF8D4;
    case 335u: goto L_001CF8E8;
    case 336u: goto L_001CF8F8;
    case 337u: goto L_001CF908;
    case 338u: goto L_001CF930;
    case 339u: goto L_001CF950;
    case 340u: goto L_001CF960;
    case 341u: goto L_001CF974;
    case 342u: goto L_001CF984;
    case 343u: goto L_001CF998;
    case 344u: goto L_001CF9B0;
    case 345u: goto L_001CF9C4;
    case 346u: goto L_001CF9D4;
    case 347u: goto L_001CF9E4;
    case 348u: goto L_001CF9F4;
    case 349u: goto L_001CFA04;
    case 350u: goto L_001CFA14;
    case 351u: goto L_001CFA30;
    case 352u: goto L_001CFA44;
    case 353u: goto L_001CFA54;
    case 354u: goto L_001CFA64;
    case 355u: goto L_001CFA74;
    case 356u: goto L_001CFA84;
    case 357u: goto L_001CFA94;
    case 358u: goto L_001CFAB0;
    case 359u: goto L_001CFAC4;
    case 360u: goto L_001CFAD4;
    case 361u: goto L_001CFAE4;
    case 362u: goto L_001CFAE8;
    case 363u: goto L_001CFB00;
    case 364u: goto L_001CFB14;
    case 365u: goto L_001CFB24;
    case 366u: goto L_001CFB38;
    case 367u: goto L_001CFB50;
    case 368u: goto L_001CFB64;
    case 369u: goto L_001CFB74;
    case 370u: goto L_001CFB88;
    case 371u: goto L_001CFB98;
    case 372u: goto L_001CFBA8;
    case 373u: goto L_001CFBC0;
    case 374u: goto L_001CFBD4;
    case 375u: goto L_001CFBE4;
    case 376u: goto L_001CFC00;
    case 377u: goto L_001CFC14;
    case 378u: goto L_001CFC24;
    case 379u: goto L_001CFC38;
    case 380u: goto L_001CFC50;
    case 381u: goto L_001CFC64;
    case 382u: goto L_001CFC74;
    case 383u: goto L_001CFC88;
    case 384u: goto L_001CFCA0;
    case 385u: goto L_001CFCB4;
    case 386u: goto L_001CFCC4;
    case 387u: goto L_001CFCD8;
    case 388u: goto L_001CFCF0;
    case 389u: goto L_001CFD00;
    case 390u: goto L_001CFD10;
    case 391u: goto L_001CFD24;
    case 392u: goto L_001CFD40;
    case 393u: goto L_001CFD50;
    case 394u: goto L_001CFD60;
    case 395u: goto L_001CFD74;
    case 396u: goto L_001CFD84;
    case 397u: goto L_001CFD94;
    case 398u: goto L_001CFDA4;
    case 399u: goto L_001CFDB4;
    case 400u: goto L_001CFDC4;
    case 401u: goto L_001CFDE0;
    case 402u: goto L_001CFDF4;
    case 403u: goto L_001CFE04;
    case 404u: goto L_001CFE14;
    case 405u: goto L_001CFE24;
    case 406u: goto L_001CFE34;
    case 407u: goto L_001CFE44;
    case 408u: goto L_001CFE60;
    case 409u: goto L_001CFE74;
    case 410u: goto L_001CFE84;
    case 411u: goto L_001CFE94;
    case 412u: goto L_001CFEA4;
    case 413u: goto L_001CFEB4;
    case 414u: goto L_001CFEC4;
    case 415u: goto L_001CFEE0;
    case 416u: goto L_001CFEF0;
    case 417u: goto L_001CFF00;
    case 418u: goto L_001CFF14;
    case 419u: goto L_001CFF24;
    case 420u: goto L_001CFF40;
    case 421u: goto L_001CFF54;
    case 422u: goto L_001CFF94;
    case 423u: goto L_001CFFA4;
    case 424u: goto L_001CFFB4;
    case 425u: goto L_001CFFB8;
    case 426u: goto L_001CFFC8;
    case 427u: goto L_001CFFD0;
    case 428u: goto L_001CFFE0;
    case 429u: goto L_001CFFF0;
    default: bad_entry(c, 0x001CC000u); return;
    }
L_001CC000:
    c.f[1] = fp::sub(c.f[0], c.f[14]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[15], c.f[0]);  if (t) { goto L_001CC058; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC038; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_001CC0A0; } }
L_001CC030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_001CC0A0; } }
L_001CC038:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_001CC0A0; } }
    c.budget -= 1;
L_001CC050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[15]);  if (t) { goto L_001CC0A0; } }
L_001CC058:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC080; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_001CC0A0; } }
L_001CC078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_001CC0A0; } }
L_001CC080:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_001CC0A0; } }
    c.budget -= 1;
L_001CC098:
    st32((c.r[4].w[0] + 8u), c.f[15]);
    c.budget -= 2;
L_001CC0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 700u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 877u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CD008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0D4u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001CC0D4u) [[unlikely]] return; }
L_001CC0D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16224u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CC100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001CC150; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
L_001CC120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC128u) [[unlikely]] return; }
L_001CC128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC130u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CC130u) [[unlikely]] return; }
L_001CC130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC150:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC180; } }
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC180:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC190:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CC1B8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1D4u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC1D4u) [[unlikely]] return; }
L_001CC1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC1E0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC1F8u) [[unlikely]] return; }
L_001CC1F8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC230u) [[unlikely]] return; }
L_001CC230:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC244u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CC244u) [[unlikely]] return; }
L_001CC244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 121u, depth + 1u); else { c.pc = 0x001CD020u; return; } if (c.pc != 0x001CC268u) [[unlikely]] return; }
L_001CC268:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC2A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CC2A8u) [[unlikely]] return; }
L_001CC2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC2C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC2D0u) [[unlikely]] return; }
L_001CC2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
L_001CC2D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC2F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC2F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC300:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1204u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1204u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16160u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CC338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC340u) [[unlikely]] return; }
L_001CC340:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC354u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CC354u) [[unlikely]] return; }
L_001CC354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CC368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1204u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC3A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC3C0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CC3D0; } }
L_001CC3C0:
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1204u), 0u);  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC3D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC3D8u) [[unlikely]] return; }
L_001CC3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC3E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CC3E0u) [[unlikely]] return; }
L_001CC3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CC3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC3F0:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC418:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC430u) [[unlikely]] return; }
L_001CC430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC438u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CC438u) [[unlikely]] return; }
L_001CC438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CC448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC448:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC468; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC468:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC488; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC488:
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1204u), 0u);  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC4A0u) [[unlikely]] return; }
L_001CC4A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4B4u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CC4B4u) [[unlikely]] return; }
L_001CC4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC4D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC4F0; } }
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1204u), 0u);  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC4F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CD008; } }
L_001CC500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 121u, depth + 1u); else { c.pc = 0x001CD020u; return; } if (c.pc != 0x001CC508u) [[unlikely]] return; }
L_001CC508:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CC548u) [[unlikely]] return; }
L_001CC548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC568; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC570u) [[unlikely]] return; }
L_001CC570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
L_001CC578:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC590; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC590:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC5A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001CC6E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CC6C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CC670; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CC618; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CC5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC5E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC5ECu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CC5ECu) [[unlikely]] return; }
L_001CC5EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC618:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001CC638; } }
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_001CD008; } }
L_001CC638:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CC670; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CC670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC67Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CC67Cu) [[unlikely]] return; }
L_001CC67C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD008; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 796u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC6C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC6E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC710; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC710:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC720:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CC748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC750u) [[unlikely]] return; }
L_001CC750:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC780:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC798u) [[unlikely]] return; }
L_001CC798:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC7B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC7B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC7D0u) [[unlikely]] return; }
L_001CC7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CC7F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 4;
L_001CC7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CC7F8u) [[unlikely]] return; }
L_001CC7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC820; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001CC820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 121u, depth + 1u); else { c.pc = 0x001CD020u; return; } if (c.pc != 0x001CC838u) [[unlikely]] return; }
L_001CC838:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC878:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC890; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC890:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC8A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16080u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CC8C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001CD008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC8E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC900:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC930; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CD008; } }
L_001CC938:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC954u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001CC954u) [[unlikely]] return; }
L_001CC954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC988:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CC9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC99Cu);  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC99Cu) [[unlikely]] return; }
L_001CC99C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC9B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC9C0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC9D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CC9D8u) [[unlikely]] return; }
L_001CC9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC9F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CC9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC9F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CC9F8u) [[unlikely]] return; }
L_001CC9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
L_001CCA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 121u, depth + 1u); else { c.pc = 0x001CD020u; return; } if (c.pc != 0x001CCA08u) [[unlikely]] return; }
L_001CCA08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCA48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCA78; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCA78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCA88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CCAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCAB8u) [[unlikely]] return; }
L_001CCAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CCAC0u) [[unlikely]] return; }
L_001CCAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CCAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCAD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCAF8u) [[unlikely]] return; }
L_001CCAF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCB20u) [[unlikely]] return; }
L_001CCB20:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CCB38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CCB58; } }
L_001CCB38:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CD008; } }
L_001CCB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCB68u) [[unlikely]] return; }
L_001CCB68:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB7Cu); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CCB7Cu) [[unlikely]] return; }
L_001CCB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CCB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCBA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001CCBA0u) [[unlikely]] return; }
L_001CCBA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCBE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCBE0u) [[unlikely]] return; }
L_001CCBE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCBF4u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CCBF4u) [[unlikely]] return; }
L_001CCBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CCC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCC08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCC28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCC28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCC40u) [[unlikely]] return; }
L_001CCC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CCC48u) [[unlikely]] return; }
L_001CCC48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CCC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCC58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 90u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCC88u) [[unlikely]] return; }
L_001CCC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CCC90u) [[unlikely]] return; }
L_001CCC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CCCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCCA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCCB8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCCD0u) [[unlikely]] return; }
L_001CCCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 121u, depth + 1u); else { c.pc = 0x001CD020u; return; } if (c.pc != 0x001CCCD8u) [[unlikely]] return; }
L_001CCCD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCD18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCD48; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCD48:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCD58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CD008; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CCD80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001CCD98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CCDC0; } }
L_001CCD98:
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDACu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CCDACu) [[unlikely]] return; }
L_001CCDAC:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CD008; } }
L_001CCDC0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDDCu); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCDDCu) [[unlikely]] return; }
L_001CCDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCDE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCE08:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE1Cu); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCE1Cu) [[unlikely]] return; }
L_001CCE1C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CCE48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCE48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCE60u) [[unlikely]] return; }
L_001CCE60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CCE80; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 5;
L_001CCE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CCE88u) [[unlikely]] return; }
L_001CCE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 121u, depth + 1u); else { c.pc = 0x001CD020u; return; } if (c.pc != 0x001CCEA8u) [[unlikely]] return; }
L_001CCEA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 123u, depth + 1u); else { c.pc = 0x001CD090u; return; } if (c.pc != 0x001CCEE8u) [[unlikely]] return; }
L_001CCEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CCF08; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCF10u) [[unlikely]] return; }
L_001CCF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD008; } }
L_001CCF18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCF30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCF30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF54u); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCF54u) [[unlikely]] return; }
L_001CCF54:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD008; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 125u, depth + 1u); else { c.pc = 0x001CD1B0u; return; } if (c.pc != 0x001CCF80u) [[unlikely]] return; }
L_001CCF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CD120u; return; } if (c.pc != 0x001CCF88u) [[unlikely]] return; }
L_001CCF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD008; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCFC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCFD8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
L_001CCFD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD008; } }
    c.budget -= 1;
L_001CCFE8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001CD008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CD078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD044u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CD044u) [[unlikely]] return; }
L_001CD044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD078; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001CD078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD090:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD0B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD118; } }
    c.budget -= 1;
L_001CD0B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001CD110; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD110; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD110; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CD110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD118; } }
    c.budget -= 1;
L_001CD110:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CD118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD120:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD148; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD1A8; } }
    c.budget -= 1;
L_001CD148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B70000u);  if (t) { goto L_001CD1A0; } }
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD1A0; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CD1A0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CD1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD1A8; } }
L_001CD1A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CD1A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD1E0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CD1E0u) [[unlikely]] return; }
L_001CD1E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_001CD208; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD218; } }
L_001CD208:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CD240; } }
L_001CD218:
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_001CD240; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CD240; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001CD240:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_001CD268; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CD268; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CD290; } }
    c.budget -= 1;
L_001CD268:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001CD290; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CD290; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_001CD290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD2A0:
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[6], c.r[6].w[0] + 18512u);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[3].w[0] << 9);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 19198u);
    set32(c.r[3], c.r[3].w[0] + 18513u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 19176u);
    set32(c.r[9], c.r[6].w[0] + c.r[7].w[0]);
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] + 18547u);
    set32(c.r[24], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] - 19195u);
    set32(c.r[15], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[24].w[0]), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    set32(c.r[6], c.r[6].w[0] + 18515u);
    set32(c.r[14], c.r[6].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[9], c.r[9].w[0] + 18544u);
    set32(c.r[6], c.r[6].w[0] - 19197u);
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[13], c.r[6].w[0] + c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[9], c.r[9].w[0] - 19193u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[6], c.r[6].w[0] + 18514u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[9].w[0] + c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[9], c.r[9].w[0] + 18545u);
    set32(c.r[10], c.r[9].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[9], c.r[9].w[0] + 18546u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[8], 0u + 4u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 63;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001CD3C8; } }
    c.r[3].d[0] = c.r[13].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001CD3C8; } }
    set32(c.r[3], c.r[3].w[0] - 19196u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001CD3C8; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CD3C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD3D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[28].w[0] - 23860u);
    set32(c.r[7], c.r[7].w[0] + 18496u);
    set32(c.r[6], c.r[3].w[0] + 40u);
    c.budget -= 6;
L_001CD3E8:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] - 1104u);
    c.r[3].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD3E8u | kUnwind; return; } goto L_001CD3E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD470:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CD4A0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001CD4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001CD4B8; } }
    st32((c.r[17].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 2;
L_001CD4B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD4C4u); st32((c.r[17].w[0] + 700u), 0u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001CD4C4u) [[unlikely]] return; }
L_001CD4C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 874u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CE068; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CD4F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CD538; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
L_001CD510:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CD538; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD538u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x001CD538u) [[unlikely]] return; }
L_001CD538:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_001CD550; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD570; } }
L_001CD550:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 10u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CD570:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 27u);  if (t) { goto L_001CD5D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD598; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 8513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 8512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001CD598:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001CD5C0; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE068; } }
L_001CD5C0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CE068; } }
L_001CD5D0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_001CD610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CE068; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CD600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CD600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 95u, depth + 1u); else { c.pc = 0x001EA400u; return; } if (c.pc != 0x001CD608u) [[unlikely]] return; }
L_001CD608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
L_001CD610:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CE068; } }
L_001CD620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CD628u) [[unlikely]] return; }
L_001CD628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CD630u) [[unlikely]] return; }
L_001CD630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CD640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CD640:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001CD668; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CD668:
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CE068; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CE068; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE068; } }
L_001CD6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CD6A8u) [[unlikely]] return; }
L_001CD6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CD6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CD6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CD6C0u) [[unlikely]] return; }
L_001CD6C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CD6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CD6D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 700u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6ECu); st32((c.r[17].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001CD6ECu) [[unlikely]] return; }
L_001CD6EC:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD708u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 231u, depth + 1u); else { c.pc = 0x001E7860u; return; } if (c.pc != 0x001CD708u) [[unlikely]] return; }
L_001CD708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001CD720; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CD720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD728u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001CD728u) [[unlikely]] return; }
L_001CD728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD748u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001CD748u) [[unlikely]] return; }
L_001CD748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[18], c.r[29].w[0] + 84u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD778u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CD778u) [[unlikely]] return; }
L_001CD778:
    st32((c.r[18].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CD7A0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CD7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7B8u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x001CD7B8u) [[unlikely]] return; }
L_001CD7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD7C8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001CD7C8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD7E0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001CD7E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7ECu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CD7ECu) [[unlikely]] return; }
L_001CD7EC:
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CD818; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001CD818:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001CD838; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CD838:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CE068; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD860u); st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CD860u) [[unlikely]] return; }
L_001CD860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
L_001CD868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CD870u) [[unlikely]] return; }
L_001CD870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CD880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CD880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CD898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CD898:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 4096ull;  if (t) { goto L_001CD8C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CD9D8; } }
    c.budget -= 1;
L_001CD8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD8C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CD8C8u) [[unlikely]] return; }
L_001CD8C8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_001CD8F0; } }
    set32(c.r[3], 0u + 12u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CD8F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CD920; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 700u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1952u)));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1954u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CD920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD928u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001CD928u) [[unlikely]] return; }
L_001CD928:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD948u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001CD948u) [[unlikely]] return; }
L_001CD948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD978u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001CD978u) [[unlikely]] return; }
L_001CD978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD9D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9A4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001CD9A4u) [[unlikely]] return; }
L_001CD9A4:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_001CD9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CD9C0; } }
L_001CD9B8:
    set32(c.r[3], 0u + 2048u);
    st16((c.r[17].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CD9C0:
    set32(c.r[3], 0u + 60u);
    st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CD9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CD9D8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CDA10; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA04u); st16((c.r[17].w[0] + 1954u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDA04u) [[unlikely]] return; }
L_001CDA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDA10:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CDAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA28u);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001CDA28u) [[unlikely]] return; }
L_001CDA28:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA44u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 231u, depth + 1u); else { c.pc = 0x001E7860u; return; } if (c.pc != 0x001CDA44u) [[unlikely]] return; }
L_001CDA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDA60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[2].w[0]);  if (t) { goto L_001CDAA0; } }
L_001CDA60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDA6Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CDA6Cu) [[unlikely]] return; }
L_001CDA6C:
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CDAA0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 4;
L_001CDAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDAA8u) [[unlikely]] return; }
L_001CDAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
L_001CDAB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAD4u);  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDAD4u) [[unlikely]] return; }
L_001CDAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CDAE8u) [[unlikely]] return; }
L_001CDAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CDAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDAF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CDB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDB10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDB58; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001CDB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDB38:
    set32(c.r[2], ld32((c.r[17].w[0] + 700u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB4Cu); st32((c.r[17].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDB4Cu) [[unlikely]] return; }
L_001CDB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDB58:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDB68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB74u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CDB74u) [[unlikely]] return; }
L_001CDB74:
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CDBB0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001CDBB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE068; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 874u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_001CDBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDBE0:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDBF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_001CDC08; } }
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CDC08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDC78; } }
    st8((c.r[17].w[0] + 797u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CDC30; } }
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001CDC30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CDC48; } }
    st8((c.r[17].w[0] + 798u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001CDC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001CDC50u) [[unlikely]] return; }
L_001CDC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x001CDC58u) [[unlikely]] return; }
L_001CDC58:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDC78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CDC90u) [[unlikely]] return; }
L_001CDC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CDCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDCA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CDCB8; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CDCB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_001CDCD8; } }
    set32(c.r[3], 0u + 90u);
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDCD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CDCF0u) [[unlikely]] return; }
L_001CDCF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CDD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDD00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CDD18; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CDD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDD20u) [[unlikely]] return; }
L_001CDD20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CDD38; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001CE068; } }
L_001CDD38:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[17].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDD58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001CE068; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16288u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CDD80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001CE068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDDA0u) [[unlikely]] return; }
L_001CDDA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CE068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDDC0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[3], 0u - 3585u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE068; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDF4u);  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CDDF4u) [[unlikely]] return; }
L_001CDDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDE48; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 796u));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[17].w[0] + 796u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 803u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[4], c.r[4].w[0] + 3u);
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_001CDE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDE38:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDE48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 195u, depth + 1u); else { c.pc = 0x001CE170u; return; } if (c.pc != 0x001CDE70u) [[unlikely]] return; }
L_001CDE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDE88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 193u, depth + 1u); else { c.pc = 0x001CE080u; return; } if (c.pc != 0x001CDE90u) [[unlikely]] return; }
L_001CDE90:
    set32(c.r[3], ld32((c.r[17].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE068; } }
L_001CDEA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDEACu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CDEACu) [[unlikely]] return; }
L_001CDEAC:
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CDEE8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001CDEE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE068; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 797u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_001CDF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
L_001CDF18:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDF28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_001CDF40; } }
    st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CDF40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDFB0; } }
    st8((c.r[17].w[0] + 797u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CDF68; } }
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001CDF68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CDF80; } }
    st8((c.r[17].w[0] + 798u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001CDF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001CDF88u) [[unlikely]] return; }
L_001CDF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x001CDF90u) [[unlikely]] return; }
L_001CDF90:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDFB0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CDFC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 875u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CE050; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001CE000; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CDFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
L_001CDFE8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 95u, depth + 1u); else { c.pc = 0x001EA400u; return; } if (c.pc != 0x001CDFF8u) [[unlikely]] return; }
L_001CDFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
L_001CE000:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_001CE020; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CE068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE040; } }
L_001CE020:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE034u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001CE034u) [[unlikely]] return; }
L_001CE034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CE040:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CE068; } }
    c.budget -= 1;
L_001CE050:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_001CE068; } }
    st8((c.r[17].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 875u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001CE068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CE080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE0B0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE0B0u) [[unlikely]] return; }
L_001CE0B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_001CE0D8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CE0E8; } }
L_001CE0D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE110; } }
L_001CE0E8:
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_001CE110; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE110; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 4;
L_001CE110:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_001CE138; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE138; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_001CE160; } }
    c.budget -= 1;
L_001CE138:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001CE160; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE160; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.budget -= 3;
L_001CE160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CE170:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE198; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CE198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE278; } }
    c.budget -= 1;
L_001CE198:
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE218; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CE218; } }
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44A20000u);  if (t) { goto L_001CE270; } }
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE270; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE270; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CE270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE278; } }
    c.budget -= 1;
L_001CE218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001CE270; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE270; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE270; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CE270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE278; } }
    c.budget -= 1;
L_001CE270:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CE278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CE280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CE3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2A8u); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001CE2A8u) [[unlikely]] return; }
L_001CE2A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CE2B8u) [[unlikely]] return; }
L_001CE2B8:
    set32(c.r[4], c.r[16].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2C4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE2C4u) [[unlikely]] return; }
L_001CE2C4:
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2D4u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE2D4u) [[unlikely]] return; }
L_001CE2D4:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2E0u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE2E0u) [[unlikely]] return; }
L_001CE2E0:
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001CE300; } }
    set32(c.r[2], c.r[18].w[0] - 32768u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_001CE300:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 32568u)));
    set32(c.r[2], c.r[18].w[0] - 16384u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE318u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001CE318u) [[unlikely]] return; }
L_001CE318:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE348; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_001CE340; } }
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_001CE348; } }
L_001CE340:
    c.r[18].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_001CE348:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8428u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 32564u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE364u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001CE364u) [[unlikely]] return; }
L_001CE364:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_001CE398; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001CE390; } }
    set32(c.r[3], 0u - c.r[17].w[0]);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_001CE398; } }
    c.budget -= 1;
L_001CE390:
    c.r[18].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_001CE398:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 8428u), c.r[3].w[0]);
    c.budget -= 4;
L_001CE3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CE3C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3E0u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001CE3E0u) [[unlikely]] return; }
L_001CE3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3E8u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001CE3E8u) [[unlikely]] return; }
L_001CE3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3F0u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001CE3F0u) [[unlikely]] return; }
L_001CE3F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE400u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CE400u) [[unlikely]] return; }
L_001CE400:
    set32(c.r[4], c.r[17].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE40Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE40Cu) [[unlikely]] return; }
L_001CE40C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE41Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE41Cu) [[unlikely]] return; }
L_001CE41C:
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001CE440; } }
    set32(c.r[2], c.r[18].w[0] - 32768u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 4;
L_001CE440:
    set32(c.r[2], c.r[18].w[0] - 16384u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE454u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001CE454u) [[unlikely]] return; }
L_001CE454:
    c.r[1].d[0] = c.r[2].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE480; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001CE478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 256u);  if (t) { goto L_001CE480; } }
L_001CE478:
    set32(c.r[18], 0u - 256u);
    c.budget -= 2;
L_001CE480:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8428u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE498u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001CE498u) [[unlikely]] return; }
L_001CE498:
    c.r[1].d[0] = c.r[2].sd[0] < 11265ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE4C8; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001CE4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 11264u);  if (t) { goto L_001CE4C8; } }
    c.budget -= 1;
L_001CE4C0:
    set32(c.r[18], 0u - 11264u);
    c.budget -= 2;
L_001CE4C8:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4DCu); st32((c.r[17].w[0] + 8428u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001CE4DCu) [[unlikely]] return; }
L_001CE4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4E4u); set32(c.r[4], c.r[17].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001CE4E4u) [[unlikely]] return; }
L_001CE4E4:
    set32(c.r[4], c.r[17].w[0] + 4416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4F0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE4F0u) [[unlikely]] return; }
L_001CE4F0:
    set32(c.r[4], c.r[17].w[0] + 4432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4FCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE4FCu) [[unlikely]] return; }
L_001CE4FC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE508u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001CE508u) [[unlikely]] return; }
L_001CE508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE51Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001CE51Cu) [[unlikely]] return; }
L_001CE51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE524u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001CE524u) [[unlikely]] return; }
L_001CE524:
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE530u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001CE530u) [[unlikely]] return; }
L_001CE530:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE540u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CE540u) [[unlikely]] return; }
L_001CE540:
    set32(c.r[4], c.r[17].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE54Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE54Cu) [[unlikely]] return; }
L_001CE54C:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE55Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE55Cu) [[unlikely]] return; }
L_001CE55C:
    set32(c.r[2], c.r[2].w[0] - 7209u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001CE570u) [[unlikely]] return; }
L_001CE570:
    c.r[1].d[0] = c.r[2].sd[0] < 897ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001CE598; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[16], 0u + 896u);  if (t) { goto L_001CE590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CE598; } }
L_001CE590:
    set32(c.r[16], 0u - 896u);
    c.budget -= 2;
L_001CE598:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1244u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE5B8; } }
    set32(c.r[16], 0u + 12288u);
    c.budget -= 1;
L_001CE5B8:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE5D0; } }
    set32(c.r[16], 0u - 8192u);
    c.budget -= 1;
L_001CE5D0:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[17].w[0] + 1244u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CE600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE618u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001CE618u) [[unlikely]] return; }
L_001CE618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE620u); set32(c.r[4], ld32((c.r[16].w[0] + 8424u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001CE620u) [[unlikely]] return; }
L_001CE620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE630u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CE630u) [[unlikely]] return; }
L_001CE630:
    set32(c.r[4], c.r[16].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE63Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE63Cu) [[unlikely]] return; }
L_001CE63C:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE648u); c.f[12] = ld32((c.r[29].w[0] + 36u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE648u) [[unlikely]] return; }
L_001CE648:
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; c.r[1].d[0] = c.r[4].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_001CE670; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_001CE680; } }
    c.budget -= 1;
L_001CE670:
    c.r[1].d[0] = c.r[4].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE680; } }
    set32(c.r[4], 0u - 1024u);
    c.budget -= 1;
L_001CE680:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8424u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < -8192ll ? 1ull : 0ull;  if (t) { goto L_001CE6A8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 8192u);  if (t) { goto L_001CE6B8; } }
L_001CE6A8:
    c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE6B8; } }
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_001CE6B8:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 8424u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE6F8u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001CE6F8u) [[unlikely]] return; }
L_001CE6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE700u); set32(c.r[4], ld32((c.r[16].w[0] + 8424u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001CE700u) [[unlikely]] return; }
L_001CE700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE710u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CE710u) [[unlikely]] return; }
L_001CE710:
    set32(c.r[4], c.r[16].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE71Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE71Cu) [[unlikely]] return; }
L_001CE71C:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE728u); c.f[12] = ld32((c.r[29].w[0] + 36u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE728u) [[unlikely]] return; }
L_001CE728:
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; c.r[1].d[0] = c.r[4].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_001CE750; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_001CE760; } }
    c.budget -= 1;
L_001CE750:
    c.r[1].d[0] = c.r[4].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE760; } }
    set32(c.r[4], 0u - 1024u);
    c.budget -= 1;
L_001CE760:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8424u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < -8192ll ? 1ull : 0ull;  if (t) { goto L_001CE788; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 8192u);  if (t) { goto L_001CE798; } }
L_001CE788:
    c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE798; } }
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_001CE798:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 8424u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CE7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7DCu); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001CE7DCu) [[unlikely]] return; }
L_001CE7DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CE7ECu) [[unlikely]] return; }
L_001CE7EC:
    set32(c.r[4], c.r[16].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7F8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CE7F8u) [[unlikely]] return; }
L_001CE7F8:
    set32(c.r[17], c.r[29].w[0] + 56u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE808u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE808u) [[unlikely]] return; }
L_001CE808:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_001CE818; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001CE818:
    set32(c.r[2], ld32((c.r[16].w[0] + 8428u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 11521ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE830; } }
    set32(c.r[3], 0u + 11520u);
    c.budget -= 1;
L_001CE830:
    c.r[1].d[0] = c.r[3].sd[0] < -11520ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE840; } }
    set32(c.r[3], 0u - 11520u);
    c.budget -= 1;
L_001CE840:
    st32((c.r[16].w[0] + 8428u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE858u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001CE858u) [[unlikely]] return; }
L_001CE858:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE864u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CE864u) [[unlikely]] return; }
L_001CE864:
    set32(c.r[4], ld32((c.r[16].w[0] + 1244u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 8192u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001CE888; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_001CE888:
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE8A0; } }
    set32(c.r[5], 0u + 8192u);
    c.budget -= 2;
L_001CE8A0:
    c.r[1].d[0] = c.r[5].sd[0] < -12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE8B0; } }
    set32(c.r[5], 0u - 12288u);
    c.budget -= 1;
L_001CE8B0:
    st32((c.r[16].w[0] + 1244u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CE8D0:
    st8((c.r[4].w[0] + 324u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 308u), 0u);
    st32((c.r[4].w[0] + 304u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_001CE904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001CE918; } }
L_001CE904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_001CE918:
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[7].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  goto L_001CEC00; }
L_001CE930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[4].w[0] + 304u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE958u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x001CE958u) [[unlikely]] return; }
L_001CE958:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[18].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE970u); st32((c.r[16].w[0]), c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x001CE970u) [[unlikely]] return; }
L_001CE970:
    c.f[12] = fp::sub(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.f[0];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE998u);  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x001CE998u) [[unlikely]] return; }
L_001CE998:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 256u, depth + 1u); else { c.pc = 0x001CEC00u; return; } if (c.pc != 0x001CE9ACu) [[unlikely]] return; }
L_001CE9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEB40; } }
    c.budget -= 1;
L_001CE9C0:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[20] = fp::sub(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CE9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEB40; } }
    c.budget -= 1;
L_001CE9E8:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 9999u);
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEB40; } }
L_001CEA08:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001CEB38; } }
    c.budget -= 1;
L_001CEA20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEA30u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0033(c, 254u, depth + 1u); else { c.pc = 0x001CEB60u; return; } if (c.pc != 0x001CEA30u) [[unlikely]] return; }
L_001CEA30:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5064u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEA68u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0033(c, 254u, depth + 1u); else { c.pc = 0x001CEB60u; return; } if (c.pc != 0x001CEA68u) [[unlikely]] return; }
L_001CEA68:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5060u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEAA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0033(c, 254u, depth + 1u); else { c.pc = 0x001CEB60u; return; } if (c.pc != 0x001CEAA0u) [[unlikely]] return; }
L_001CEAA0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5056u), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEAF0; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1236u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 1236u), c.r[2].w[0]);
    c.budget -= 6;
L_001CEAF0:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEB20; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1236u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 1236u), c.r[2].w[0]);
    c.budget -= 8;
L_001CEB20:
    set32(c.r[17], c.r[17].w[0] + 10u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEA20u | kUnwind; return; } goto L_001CEA20; } }
    c.budget -= 1;
L_001CEB38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CEB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CEB60:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CEB90; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 2;
L_001CEB90:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  c.pc = t; return; }
L_001CEBC0:
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    set32(c.r[3], c.r[4].w[0] + 304u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEBD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CEBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEBF4; } }
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEBF4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CEBF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CEC00:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], 0u + 9999u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CED10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CED20; } }
    c.budget -= 1;
L_001CEC20:
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[2], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[9], 0u + 1u);  if (t) { goto L_001CECE8; } }
L_001CEC38:
    c.r[8].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0] + 5064u), c.r[10].w[0]);
    c.r[8].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0] + 5060u), c.r[10].w[0]);
    c.r[8].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0] + 5056u), c.r[10].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = c.r[7].d[0] & 512ull;
    c.budget -= 25;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001CECB0; } }
    c.r[8].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[7], ld32((c.r[4].w[0] + 1236u)));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[7].w[0]);
    c.budget -= 5;
L_001CECB0:
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = c.r[7].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001CECD8; } }
    c.r[8].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[7], ld32((c.r[4].w[0] + 1236u)));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[7].w[0]);
    c.budget -= 6;
L_001CECD8:
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEC38u | kUnwind; return; } goto L_001CEC38; } }
L_001CECE8:
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], 0u + 9999u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_001CED10; } }
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001CED20; } }
    c.budget -= 1;
L_001CED10:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEC20u | kUnwind; return; } goto L_001CEC20; } }
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CED20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CED30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CEDA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CED60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEDE8; } }
    c.budget -= 1;
L_001CED60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CED78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEDF0; } }
    c.budget -= 1;
L_001CED78:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED94u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001CED94u) [[unlikely]] return; }
L_001CED94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEDE8; } }
    c.budget -= 1;
L_001CEDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEDA8u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CEDA8u) [[unlikely]] return; }
L_001CEDA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEDB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CEDB8u) [[unlikely]] return; }
L_001CEDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEDD0; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CEDD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEDF0; } }
    c.budget -= 1;
L_001CEDE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CEDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CEE00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001CEE38u) [[unlikely]] return; }
L_001CEE38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE48u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001CEE48u) [[unlikely]] return; }
L_001CEE48:
    set32(c.r[4], c.r[18].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE54u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001CEE54u) [[unlikely]] return; }
L_001CEE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001CEE5Cu) [[unlikely]] return; }
L_001CEE5C:
    set32(c.r[22], c.r[29].w[0] + 152u);
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE6Cu); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CEE6Cu) [[unlikely]] return; }
L_001CEE6C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 31344u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[17].w[0] - 31360u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 31328u);  if (t) { goto L_001CEEB8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[21], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] - c.r[19].w[0]);  if (t) { goto L_001CEF08; } }
    c.budget -= 1;
L_001CEEB8:
    set32(c.r[21], ld32((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CEEE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] - c.r[21].w[0]);
    set32(c.r[19], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[21], c.r[3].w[0] - c.r[21].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] - c.r[19].w[0]);  if (t) { goto L_001CEF08; } }
    c.budget -= 1;
L_001CEEE8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001CEF00; } }
    set32(c.r[20], ld32((c.r[5].w[0])));
    set32(c.r[21], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CEF08; } }
L_001CEF00:
    set32(c.r[20], ld32((c.r[5].w[0] + 4u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CEF08:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF1Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001CEF1Cu) [[unlikely]] return; }
L_001CEF1C:
    c.f[12] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF28u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CEF28u) [[unlikely]] return; }
L_001CEF28:
    c.r[22].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CEF48; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001CEF48:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CEF60; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001CEF60:
    c.f[1] = c.r[16].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF88u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001CEF88u) [[unlikely]] return; }
L_001CEF88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CEFA8; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001CEFA8:
    c.f[1] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_001CF018; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CF018; } }
    c.f[0] = c.r[4].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 8264u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = c.r[22].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[0]);
    c.budget -= 17;
L_001CF018:
    st32((c.r[18].w[0] + 8428u), c.r[3].w[0]);
    set32(c.r[3], 0u - c.r[22].w[0]);
    st32((c.r[18].w[0] + 8424u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001CF050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF0C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CF080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF110; } }
    c.budget -= 1;
L_001CF080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF118; } }
    c.budget -= 1;
L_001CF098:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 327u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF0C0u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001CF0C0u) [[unlikely]] return; }
L_001CF0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF110; } }
L_001CF0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF0D0u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CF0D0u) [[unlikely]] return; }
L_001CF0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF0E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CF0E0u) [[unlikely]] return; }
L_001CF0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF0F8; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 327u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CF0F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF118; } }
    c.budget -= 1;
L_001CF110:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CF118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF1B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CF160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF200; } }
    c.budget -= 1;
L_001CF160:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF208; } }
    c.budget -= 1;
L_001CF178:
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF194u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001CF194u) [[unlikely]] return; }
L_001CF194:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1ACu); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001CF1ACu) [[unlikely]] return; }
L_001CF1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF200; } }
    c.budget -= 1;
L_001CF1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1C0u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CF1C0u) [[unlikely]] return; }
L_001CF1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CF1D0u) [[unlikely]] return; }
L_001CF1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF1E8; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CF1E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF208; } }
    c.budget -= 1;
L_001CF200:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CF208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF2A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CF250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF2F0; } }
    c.budget -= 1;
L_001CF250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF2F8; } }
    c.budget -= 1;
L_001CF268:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF284u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001CF284u) [[unlikely]] return; }
L_001CF284:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF29Cu); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001CF29Cu) [[unlikely]] return; }
L_001CF29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF2F0; } }
    c.budget -= 1;
L_001CF2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2B0u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CF2B0u) [[unlikely]] return; }
L_001CF2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CF2C0u) [[unlikely]] return; }
L_001CF2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF2D8; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CF2D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF2F8; } }
    c.budget -= 1;
L_001CF2F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CF2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF380; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CF340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF3C8; } }
    c.budget -= 1;
L_001CF340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF3D0; } }
    c.budget -= 1;
L_001CF358:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF374u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001CF374u) [[unlikely]] return; }
L_001CF374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF3C8; } }
    c.budget -= 1;
L_001CF380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF388u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CF388u) [[unlikely]] return; }
L_001CF388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CF398u) [[unlikely]] return; }
L_001CF398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF3B0; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CF3B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF3D0; } }
    c.budget -= 1;
L_001CF3C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CF3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF3E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 1488u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CF408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF500; } }
L_001CF408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF410u);  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001CF410u) [[unlikely]] return; }
L_001CF410:
    c.f[0] = ld32((c.r[17].w[0] + 3312u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 1296u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3316u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3320u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF438u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001CF438u) [[unlikely]] return; }
L_001CF438:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[17].w[0] + 3264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF448u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001CF448u) [[unlikely]] return; }
L_001CF448:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF45Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001CF45Cu) [[unlikely]] return; }
L_001CF45C:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF468u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CF468u) [[unlikely]] return; }
L_001CF468:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CF490; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[2], c.r[2].w[0] + 1024u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_001CF4C0; } }
    c.budget -= 1;
L_001CF490:
    c.r[1].d[0] = c.r[3].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CF4B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_001CF4C0; } }
    c.budget -= 1;
L_001CF4B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 4;
L_001CF4C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1244u)));
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_001CF4E0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_001CF4F8; } }
    c.budget -= 1;
L_001CF4E0:
    c.r[1].d[0] = c.r[3].sd[0] < -4095ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 4096u);  if (t) { goto L_001CF4F8; } }
    set32(c.r[16], 0u + 1u);
    st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 3;
L_001CF4F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001CF500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CF520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF590; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CF550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5D8; } }
    c.budget -= 1;
L_001CF550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5E0; } }
    c.budget -= 1;
L_001CF568:
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF584u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001CF584u) [[unlikely]] return; }
L_001CF584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5D8; } }
    c.budget -= 1;
L_001CF590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF598u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CF598u) [[unlikely]] return; }
L_001CF598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CF5A8u) [[unlikely]] return; }
L_001CF5A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF5C0; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CF5C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF5E0; } }
    c.budget -= 1;
L_001CF5D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CF5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CF660; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CF620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF6A8; } }
    c.budget -= 1;
L_001CF620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF6B0; } }
    c.budget -= 1;
L_001CF638:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF654u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001CF654u) [[unlikely]] return; }
L_001CF654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF6A8; } }
    c.budget -= 1;
L_001CF660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF668u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001CF668u) [[unlikely]] return; }
L_001CF668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DD0C0u; return; } if (c.pc != 0x001CF678u) [[unlikely]] return; }
L_001CF678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF690; } }
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CF690:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF6B0; } }
    c.budget -= 1;
L_001CF6A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CF6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D1420u; return; } if (c.pc != 0x001CF6D4u) [[unlikely]] return; }
L_001CF6D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 31296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CF6F4u) [[unlikely]] return; }
L_001CF6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D1240u; return; } if (c.pc != 0x001CF6FCu) [[unlikely]] return; }
L_001CF6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 95u, depth + 1u); else { c.pc = 0x001D1440u; return; } if (c.pc != 0x001CF704u) [[unlikely]] return; }
L_001CF704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF70Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 111u, depth + 1u); else { c.pc = 0x001D17D0u; return; } if (c.pc != 0x001CF70Cu) [[unlikely]] return; }
L_001CF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x001CF714u) [[unlikely]] return; }
L_001CF714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CF744u) [[unlikely]] return; }
L_001CF744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF754u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CF754u) [[unlikely]] return; }
L_001CF754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF7A8; } }
    c.budget -= 1;
L_001CF760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 44u, depth + 1u); else { c.pc = 0x001D0700u; return; } if (c.pc != 0x001CF768u) [[unlikely]] return; }
L_001CF768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF778u);  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CF778u) [[unlikely]] return; }
L_001CF778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF788u);  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0200u; return; } if (c.pc != 0x001CF788u) [[unlikely]] return; }
L_001CF788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF798u);  if (depth < kMaxDepth) unit_0034(c, 33u, depth + 1u); else { c.pc = 0x001D0440u; return; } if (c.pc != 0x001CF798u) [[unlikely]] return; }
L_001CF798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7A8u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D0140u; return; } if (c.pc != 0x001CF7A8u) [[unlikely]] return; }
L_001CF7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CF7D4u) [[unlikely]] return; }
L_001CF7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CF7E4u) [[unlikely]] return; }
L_001CF7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF828; } }
    c.budget -= 1;
L_001CF7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CF7F8u) [[unlikely]] return; }
L_001CF7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF808u);  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0200u; return; } if (c.pc != 0x001CF808u) [[unlikely]] return; }
L_001CF808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF818u);  if (depth < kMaxDepth) unit_0034(c, 33u, depth + 1u); else { c.pc = 0x001D0440u; return; } if (c.pc != 0x001CF818u) [[unlikely]] return; }
L_001CF818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF828u);  if (depth < kMaxDepth) unit_0034(c, 22u, depth + 1u); else { c.pc = 0x001D01B0u; return; } if (c.pc != 0x001CF828u) [[unlikely]] return; }
L_001CF828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CF854u) [[unlikely]] return; }
L_001CF854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF864u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CF864u) [[unlikely]] return; }
L_001CF864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF898; } }
    c.budget -= 1;
L_001CF870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CF878u) [[unlikely]] return; }
L_001CF878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF888u);  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0200u; return; } if (c.pc != 0x001CF888u) [[unlikely]] return; }
L_001CF888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF898u);  if (depth < kMaxDepth) unit_0034(c, 22u, depth + 1u); else { c.pc = 0x001D01B0u; return; } if (c.pc != 0x001CF898u) [[unlikely]] return; }
L_001CF898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CF8C4u) [[unlikely]] return; }
L_001CF8C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CF8D4u) [[unlikely]] return; }
L_001CF8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF950; } }
    c.budget -= 1;
L_001CF8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 44u, depth + 1u); else { c.pc = 0x001D0700u; return; } if (c.pc != 0x001CF8E8u) [[unlikely]] return; }
L_001CF8E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8F8u);  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CF8F8u) [[unlikely]] return; }
L_001CF8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF908u);  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0200u; return; } if (c.pc != 0x001CF908u) [[unlikely]] return; }
L_001CF908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF950; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_001CF950; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CF950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 33u, depth + 1u); else { c.pc = 0x001D0440u; return; } if (c.pc != 0x001CF930u) [[unlikely]] return; }
L_001CF930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF950; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF950u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D0140u; return; } if (c.pc != 0x001CF950u) [[unlikely]] return; }
L_001CF950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CF974u) [[unlikely]] return; }
L_001CF974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CF990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF984u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CF984u) [[unlikely]] return; }
L_001CF984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF998; } }
    c.budget -= 1;
L_001CF990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CF998u) [[unlikely]] return; }
L_001CF998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CF9C4u) [[unlikely]] return; }
L_001CF9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9D4u);  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D0AF0u; return; } if (c.pc != 0x001CF9D4u) [[unlikely]] return; }
L_001CF9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9E4u);  if (depth < kMaxDepth) unit_0034(c, 72u, depth + 1u); else { c.pc = 0x001D0C60u; return; } if (c.pc != 0x001CF9E4u) [[unlikely]] return; }
L_001CF9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9F4u);  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D0270u; return; } if (c.pc != 0x001CF9F4u) [[unlikely]] return; }
L_001CF9F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA04u);  if (depth < kMaxDepth) unit_0034(c, 79u, depth + 1u); else { c.pc = 0x001D10A0u; return; } if (c.pc != 0x001CFA04u) [[unlikely]] return; }
L_001CFA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA14u);  if (depth < kMaxDepth) unit_0034(c, 37u, depth + 1u); else { c.pc = 0x001D0570u; return; } if (c.pc != 0x001CFA14u) [[unlikely]] return; }
L_001CFA14:
    c.budget -= 1;
L_001CFA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFA44u) [[unlikely]] return; }
L_001CFA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA54u);  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D0AF0u; return; } if (c.pc != 0x001CFA54u) [[unlikely]] return; }
L_001CFA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA64u);  if (depth < kMaxDepth) unit_0034(c, 72u, depth + 1u); else { c.pc = 0x001D0C60u; return; } if (c.pc != 0x001CFA64u) [[unlikely]] return; }
L_001CFA64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA74u);  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D0270u; return; } if (c.pc != 0x001CFA74u) [[unlikely]] return; }
L_001CFA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA84u);  if (depth < kMaxDepth) unit_0034(c, 79u, depth + 1u); else { c.pc = 0x001D10A0u; return; } if (c.pc != 0x001CFA84u) [[unlikely]] return; }
L_001CFA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA94u);  if (depth < kMaxDepth) unit_0034(c, 42u, depth + 1u); else { c.pc = 0x001D0680u; return; } if (c.pc != 0x001CFA94u) [[unlikely]] return; }
L_001CFA94:
    c.budget -= 1;
L_001CFA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFAC4u) [[unlikely]] return; }
L_001CFAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFAD4u) [[unlikely]] return; }
L_001CFAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFAE8; } }
    c.budget -= 1;
L_001CFAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFAE8u) [[unlikely]] return; }
    goto L_001CFAE8;
L_001CFAE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CFAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFB14u) [[unlikely]] return; }
L_001CFB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFB24u) [[unlikely]] return; }
L_001CFB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFB38; } }
    c.budget -= 1;
L_001CFB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 46u, depth + 1u); else { c.pc = 0x001D0790u; return; } if (c.pc != 0x001CFB38u) [[unlikely]] return; }
L_001CFB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFB64u) [[unlikely]] return; }
L_001CFB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFB74u) [[unlikely]] return; }
L_001CFB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFBA8; } }
    c.budget -= 1;
L_001CFB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFB88u) [[unlikely]] return; }
L_001CFB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB98u);  if (depth < kMaxDepth) unit_0034(c, 46u, depth + 1u); else { c.pc = 0x001D0790u; return; } if (c.pc != 0x001CFB98u) [[unlikely]] return; }
L_001CFB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBA8u);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001CFBA8u) [[unlikely]] return; }
L_001CFBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFBD4u) [[unlikely]] return; }
L_001CFBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFBE4u) [[unlikely]] return; }
L_001CFBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFBF0; } }
    c.budget -= 1;
L_001CFBF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFC14u) [[unlikely]] return; }
L_001CFC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFC24u) [[unlikely]] return; }
L_001CFC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFC38; } }
    c.budget -= 1;
L_001CFC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFC38u) [[unlikely]] return; }
L_001CFC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFC64u) [[unlikely]] return; }
L_001CFC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFC74u) [[unlikely]] return; }
L_001CFC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFC88; } }
    c.budget -= 1;
L_001CFC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFC88u) [[unlikely]] return; }
L_001CFC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001CFCB4u) [[unlikely]] return; }
L_001CFCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CFCC4u) [[unlikely]] return; }
L_001CFCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFCD8; } }
    c.budget -= 1;
L_001CFCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFCD8u) [[unlikely]] return; }
L_001CFCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFCF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD00u);  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFD00u) [[unlikely]] return; }
L_001CFD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CFD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFD24u) [[unlikely]] return; }
L_001CFD24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CFD50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFD48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD40u);  if (depth < kMaxDepth) unit_0034(c, 40u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001CFD40u) [[unlikely]] return; }
L_001CFD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CFD50; } }
L_001CFD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 30u, depth + 1u); else { c.pc = 0x001D03A0u; return; } if (c.pc != 0x001CFD50u) [[unlikely]] return; }
L_001CFD50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFD74u) [[unlikely]] return; }
L_001CFD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD84u);  if (depth < kMaxDepth) unit_0034(c, 40u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001CFD84u) [[unlikely]] return; }
L_001CFD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD94u);  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D0AF0u; return; } if (c.pc != 0x001CFD94u) [[unlikely]] return; }
L_001CFD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDA4u);  if (depth < kMaxDepth) unit_0034(c, 72u, depth + 1u); else { c.pc = 0x001D0C60u; return; } if (c.pc != 0x001CFDA4u) [[unlikely]] return; }
L_001CFDA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDB4u);  if (depth < kMaxDepth) unit_0034(c, 79u, depth + 1u); else { c.pc = 0x001D10A0u; return; } if (c.pc != 0x001CFDB4u) [[unlikely]] return; }
L_001CFDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDC4u);  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D0270u; return; } if (c.pc != 0x001CFDC4u) [[unlikely]] return; }
L_001CFDC4:
    c.budget -= 1;
L_001CFDC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFDF4u) [[unlikely]] return; }
L_001CFDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE04u);  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D0AF0u; return; } if (c.pc != 0x001CFE04u) [[unlikely]] return; }
L_001CFE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE14u);  if (depth < kMaxDepth) unit_0034(c, 72u, depth + 1u); else { c.pc = 0x001D0C60u; return; } if (c.pc != 0x001CFE14u) [[unlikely]] return; }
L_001CFE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE24u);  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D0270u; return; } if (c.pc != 0x001CFE24u) [[unlikely]] return; }
L_001CFE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE34u);  if (depth < kMaxDepth) unit_0034(c, 42u, depth + 1u); else { c.pc = 0x001D0680u; return; } if (c.pc != 0x001CFE34u) [[unlikely]] return; }
L_001CFE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE44u);  if (depth < kMaxDepth) unit_0034(c, 83u, depth + 1u); else { c.pc = 0x001D11E0u; return; } if (c.pc != 0x001CFE44u) [[unlikely]] return; }
L_001CFE44:
    c.budget -= 1;
L_001CFE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFE74u) [[unlikely]] return; }
L_001CFE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE84u);  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D0AF0u; return; } if (c.pc != 0x001CFE84u) [[unlikely]] return; }
L_001CFE84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE94u);  if (depth < kMaxDepth) unit_0034(c, 72u, depth + 1u); else { c.pc = 0x001D0C60u; return; } if (c.pc != 0x001CFE94u) [[unlikely]] return; }
L_001CFE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFEA4u);  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D0270u; return; } if (c.pc != 0x001CFEA4u) [[unlikely]] return; }
L_001CFEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFEB4u);  if (depth < kMaxDepth) unit_0034(c, 79u, depth + 1u); else { c.pc = 0x001D10A0u; return; } if (c.pc != 0x001CFEB4u) [[unlikely]] return; }
L_001CFEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFEC4u);  if (depth < kMaxDepth) unit_0034(c, 42u, depth + 1u); else { c.pc = 0x001D0680u; return; } if (c.pc != 0x001CFEC4u) [[unlikely]] return; }
L_001CFEC4:
    c.budget -= 1;
L_001CFEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFEF0u);  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFEF0u) [[unlikely]] return; }
L_001CFEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CFF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFF14u) [[unlikely]] return; }
L_001CFF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF24u);  if (depth < kMaxDepth) unit_0034(c, 70u, depth + 1u); else { c.pc = 0x001D0BE0u; return; } if (c.pc != 0x001CFF24u) [[unlikely]] return; }
L_001CFF24:
    c.budget -= 1;
L_001CFF28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001CFF54u) [[unlikely]] return; }
L_001CFF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CFFB0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CFFA8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    set32(c.r[3], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CFFA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF94u);  if (depth < kMaxDepth) unit_003A(c, 106u, depth + 1u); else { c.pc = 0x001EA5E0u; return; } if (c.pc != 0x001CFF94u) [[unlikely]] return; }
L_001CFF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFA4u);  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001CFFA4u) [[unlikely]] return; }
L_001CFFA4:
    c.budget -= 1;
L_001CFFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFFC8; } }
L_001CFFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D0AF0u; return; } if (c.pc != 0x001CFFB8u) [[unlikely]] return; }
    goto L_001CFFB8;
L_001CFFB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CFFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CFFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFC8u);  if (depth < kMaxDepth) unit_0034(c, 40u, depth + 1u); else { c.pc = 0x001D0600u; return; } if (c.pc != 0x001CFFC8u) [[unlikely]] return; }
L_001CFFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_001CFFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CFFE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CFFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 749u, depth + 1u); else { c.pc = 0x001C7900u; return; } if (c.pc != 0x001D0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0034(c, 2u, depth);
}

}
