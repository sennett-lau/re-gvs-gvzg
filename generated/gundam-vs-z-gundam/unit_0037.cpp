#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0037[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0,
    10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0,
    23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0,
    0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0,
    82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0,
    100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0,
    0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0,
    123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0,
    276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355,
    356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 364, 0, 0,
};

void unit_0037(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001DC000;
    case 2u: goto L_001DC010;
    case 3u: goto L_001DC01C;
    case 4u: goto L_001DC028;
    case 5u: goto L_001DC030;
    case 6u: goto L_001DC03C;
    case 7u: goto L_001DC040;
    case 8u: goto L_001DC0EC;
    case 9u: goto L_001DC0F8;
    case 10u: goto L_001DC100;
    case 11u: goto L_001DC110;
    case 12u: goto L_001DC11C;
    case 13u: goto L_001DC128;
    case 14u: goto L_001DC130;
    case 15u: goto L_001DC138;
    case 16u: goto L_001DC140;
    case 17u: goto L_001DC150;
    case 18u: goto L_001DC15C;
    case 19u: goto L_001DC168;
    case 20u: goto L_001DC2DC;
    case 21u: goto L_001DC2E8;
    case 22u: goto L_001DC2F0;
    case 23u: goto L_001DC300;
    case 24u: goto L_001DC30C;
    case 25u: goto L_001DC318;
    case 26u: goto L_001DC324;
    case 27u: goto L_001DC32C;
    case 28u: goto L_001DC334;
    case 29u: goto L_001DC344;
    case 30u: goto L_001DC354;
    case 31u: goto L_001DC360;
    case 32u: goto L_001DC36C;
    case 33u: goto L_001DC374;
    case 34u: goto L_001DC384;
    case 35u: goto L_001DC390;
    case 36u: goto L_001DC39C;
    case 37u: goto L_001DC3A8;
    case 38u: goto L_001DC3B8;
    case 39u: goto L_001DC3C4;
    case 40u: goto L_001DC3D0;
    case 41u: goto L_001DC3D8;
    case 42u: goto L_001DC3E4;
    case 43u: goto L_001DC3F0;
    case 44u: goto L_001DC3F8;
    case 45u: goto L_001DC410;
    case 46u: goto L_001DC41C;
    case 47u: goto L_001DC428;
    case 48u: goto L_001DC434;
    case 49u: goto L_001DC444;
    case 50u: goto L_001DC450;
    case 51u: goto L_001DC45C;
    case 52u: goto L_001DC464;
    case 53u: goto L_001DC470;
    case 54u: goto L_001DC47C;
    case 55u: goto L_001DC4B0;
    case 56u: goto L_001DC650;
    case 57u: goto L_001DC6A8;
    case 58u: goto L_001DC6D0;
    case 59u: goto L_001DC6E4;
    case 60u: goto L_001DC6F0;
    case 61u: goto L_001DC6FC;
    case 62u: goto L_001DC708;
    case 63u: goto L_001DC720;
    case 64u: goto L_001DC740;
    case 65u: goto L_001DC758;
    case 66u: goto L_001DC770;
    case 67u: goto L_001DC778;
    case 68u: goto L_001DC780;
    case 69u: goto L_001DC788;
    case 70u: goto L_001DC824;
    case 71u: goto L_001DC8F4;
    case 72u: goto L_001DC900;
    case 73u: goto L_001DC90C;
    case 74u: goto L_001DC914;
    case 75u: goto L_001DC92C;
    case 76u: goto L_001DC938;
    case 77u: goto L_001DC944;
    case 78u: goto L_001DC950;
    case 79u: goto L_001DC958;
    case 80u: goto L_001DC968;
    case 81u: goto L_001DC974;
    case 82u: goto L_001DC980;
    case 83u: goto L_001DC988;
    case 84u: goto L_001DC994;
    case 85u: goto L_001DC99C;
    case 86u: goto L_001DC9B0;
    case 87u: goto L_001DC9BC;
    case 88u: goto L_001DC9C8;
    case 89u: goto L_001DC9D0;
    case 90u: goto L_001DC9DC;
    case 91u: goto L_001DCA9C;
    case 92u: goto L_001DCAA8;
    case 93u: goto L_001DCAB0;
    case 94u: goto L_001DCAC0;
    case 95u: goto L_001DCACC;
    case 96u: goto L_001DCAD8;
    case 97u: goto L_001DCAE0;
    case 98u: goto L_001DCAE8;
    case 99u: goto L_001DCAF0;
    case 100u: goto L_001DCB00;
    case 101u: goto L_001DCB0C;
    case 102u: goto L_001DCB18;
    case 103u: goto L_001DCC8C;
    case 104u: goto L_001DCC98;
    case 105u: goto L_001DCCA0;
    case 106u: goto L_001DCCB0;
    case 107u: goto L_001DCCBC;
    case 108u: goto L_001DCCC8;
    case 109u: goto L_001DCCD4;
    case 110u: goto L_001DCCDC;
    case 111u: goto L_001DCCE4;
    case 112u: goto L_001DCCF4;
    case 113u: goto L_001DCD04;
    case 114u: goto L_001DCD10;
    case 115u: goto L_001DCD1C;
    case 116u: goto L_001DCD24;
    case 117u: goto L_001DCD34;
    case 118u: goto L_001DCD40;
    case 119u: goto L_001DCD4C;
    case 120u: goto L_001DCD58;
    case 121u: goto L_001DCD68;
    case 122u: goto L_001DCD74;
    case 123u: goto L_001DCD80;
    case 124u: goto L_001DCD88;
    case 125u: goto L_001DCD94;
    case 126u: goto L_001DCDA0;
    case 127u: goto L_001DCDA8;
    case 128u: goto L_001DCDC0;
    case 129u: goto L_001DCDCC;
    case 130u: goto L_001DCDD8;
    case 131u: goto L_001DCDE4;
    case 132u: goto L_001DCDF4;
    case 133u: goto L_001DCE00;
    case 134u: goto L_001DCE0C;
    case 135u: goto L_001DCE14;
    case 136u: goto L_001DCE20;
    case 137u: goto L_001DCE2C;
    case 138u: goto L_001DCE60;
    case 139u: goto L_001DCFF0;
    case 140u: goto L_001DD004;
    case 141u: goto L_001DD00C;
    case 142u: goto L_001DD020;
    case 143u: goto L_001DD028;
    case 144u: goto L_001DD030;
    case 145u: goto L_001DD040;
    case 146u: goto L_001DD080;
    case 147u: goto L_001DD0C0;
    case 148u: goto L_001DD100;
    case 149u: goto L_001DD140;
    case 150u: goto L_001DD154;
    case 151u: goto L_001DD168;
    case 152u: goto L_001DD180;
    case 153u: goto L_001DD194;
    case 154u: goto L_001DD21C;
    case 155u: goto L_001DD260;
    case 156u: goto L_001DD290;
    case 157u: goto L_001DD2F4;
    case 158u: goto L_001DD310;
    case 159u: goto L_001DD388;
    case 160u: goto L_001DD398;
    case 161u: goto L_001DD3B0;
    case 162u: goto L_001DD488;
    case 163u: goto L_001DD4A0;
    case 164u: goto L_001DD4E0;
    case 165u: goto L_001DD4EC;
    case 166u: goto L_001DD524;
    case 167u: goto L_001DD538;
    case 168u: goto L_001DD560;
    case 169u: goto L_001DD570;
    case 170u: goto L_001DD5A4;
    case 171u: goto L_001DD5B4;
    case 172u: goto L_001DD5C0;
    case 173u: goto L_001DD5E0;
    case 174u: goto L_001DD5E8;
    case 175u: goto L_001DD600;
    case 176u: goto L_001DD64C;
    case 177u: goto L_001DD660;
    case 178u: goto L_001DD670;
    case 179u: goto L_001DD684;
    case 180u: goto L_001DD6AC;
    case 181u: goto L_001DD6D0;
    case 182u: goto L_001DD6E0;
    case 183u: goto L_001DD7B0;
    case 184u: goto L_001DD7C8;
    case 185u: goto L_001DD7D0;
    case 186u: goto L_001DD7F0;
    case 187u: goto L_001DD8A0;
    case 188u: goto L_001DD938;
    case 189u: goto L_001DD970;
    case 190u: goto L_001DD980;
    case 191u: goto L_001DD9B0;
    case 192u: goto L_001DD9F0;
    case 193u: goto L_001DDA78;
    case 194u: goto L_001DDA8C;
    case 195u: goto L_001DDAC8;
    case 196u: goto L_001DDAFC;
    case 197u: goto L_001DDB1C;
    case 198u: goto L_001DDB38;
    case 199u: goto L_001DDB6C;
    case 200u: goto L_001DDB78;
    case 201u: goto L_001DDBA4;
    case 202u: goto L_001DDBAC;
    case 203u: goto L_001DDBC8;
    case 204u: goto L_001DDBE0;
    case 205u: goto L_001DDC50;
    case 206u: goto L_001DDC98;
    case 207u: goto L_001DDCD4;
    case 208u: goto L_001DDD04;
    case 209u: goto L_001DDD34;
    case 210u: goto L_001DDD64;
    case 211u: goto L_001DDD78;
    case 212u: goto L_001DDD90;
    case 213u: goto L_001DDDD8;
    case 214u: goto L_001DDDE8;
    case 215u: goto L_001DDE44;
    case 216u: goto L_001DDEA8;
    case 217u: goto L_001DDEC4;
    case 218u: goto L_001DDF64;
    case 219u: goto L_001DDFA0;
    case 220u: goto L_001DDFFC;
    case 221u: goto L_001DE024;
    case 222u: goto L_001DE090;
    case 223u: goto L_001DE0D8;
    case 224u: goto L_001DE11C;
    case 225u: goto L_001DE154;
    case 226u: goto L_001DE18C;
    case 227u: goto L_001DE1C4;
    case 228u: goto L_001DE1E0;
    case 229u: goto L_001DE290;
    case 230u: goto L_001DE2A4;
    case 231u: goto L_001DE324;
    case 232u: goto L_001DE348;
    case 233u: goto L_001DE370;
    case 234u: goto L_001DE3D4;
    case 235u: goto L_001DE430;
    case 236u: goto L_001DE46C;
    case 237u: goto L_001DE49C;
    case 238u: goto L_001DE4CC;
    case 239u: goto L_001DE4FC;
    case 240u: goto L_001DE510;
    case 241u: goto L_001DE520;
    case 242u: goto L_001DE538;
    case 243u: goto L_001DE594;
    case 244u: goto L_001DE5A0;
    case 245u: goto L_001DE5F0;
    case 246u: goto L_001DE648;
    case 247u: goto L_001DE68C;
    case 248u: goto L_001DE6C4;
    case 249u: goto L_001DE6FC;
    case 250u: goto L_001DE734;
    case 251u: goto L_001DE748;
    case 252u: goto L_001DE7E0;
    case 253u: goto L_001DE820;
    case 254u: goto L_001DE830;
    case 255u: goto L_001DE89C;
    case 256u: goto L_001DE8E0;
    case 257u: goto L_001DE924;
    case 258u: goto L_001DE938;
    case 259u: goto L_001DE948;
    case 260u: goto L_001DE960;
    case 261u: goto L_001DEA0C;
    case 262u: goto L_001DEA50;
    case 263u: goto L_001DEA94;
    case 264u: goto L_001DEAA8;
    case 265u: goto L_001DEAB8;
    case 266u: goto L_001DEACC;
    case 267u: goto L_001DEAE0;
    case 268u: goto L_001DEAF8;
    case 269u: goto L_001DEB34;
    case 270u: goto L_001DEB3C;
    case 271u: goto L_001DEB50;
    case 272u: goto L_001DEBA4;
    case 273u: goto L_001DEBDC;
    case 274u: goto L_001DEBE8;
    case 275u: goto L_001DEBF4;
    case 276u: goto L_001DEC00;
    case 277u: goto L_001DEC0C;
    case 278u: goto L_001DEC18;
    case 279u: goto L_001DEC28;
    case 280u: goto L_001DEC6C;
    case 281u: goto L_001DEC80;
    case 282u: goto L_001DEC90;
    case 283u: goto L_001DED44;
    case 284u: goto L_001DED80;
    case 285u: goto L_001DED90;
    case 286u: goto L_001DEDD4;
    case 287u: goto L_001DEDE8;
    case 288u: goto L_001DEDFC;
    case 289u: goto L_001DEE10;
    case 290u: goto L_001DEEA4;
    case 291u: goto L_001DEEB0;
    case 292u: goto L_001DEEBC;
    case 293u: goto L_001DEEC8;
    case 294u: goto L_001DEED4;
    case 295u: goto L_001DEEE0;
    case 296u: goto L_001DEF10;
    case 297u: goto L_001DEF58;
    case 298u: goto L_001DEFA0;
    case 299u: goto L_001DEFDC;
    case 300u: goto L_001DF00C;
    case 301u: goto L_001DF03C;
    case 302u: goto L_001DF06C;
    case 303u: goto L_001DF080;
    case 304u: goto L_001DF0B0;
    case 305u: goto L_001DF0EC;
    case 306u: goto L_001DF0FC;
    case 307u: goto L_001DF110;
    case 308u: goto L_001DF16C;
    case 309u: goto L_001DF178;
    case 310u: goto L_001DF214;
    case 311u: goto L_001DF270;
    case 312u: goto L_001DF2B8;
    case 313u: goto L_001DF2F4;
    case 314u: goto L_001DF324;
    case 315u: goto L_001DF354;
    case 316u: goto L_001DF384;
    case 317u: goto L_001DF400;
    case 318u: goto L_001DF408;
    case 319u: goto L_001DF41C;
    case 320u: goto L_001DF46C;
    case 321u: goto L_001DF4B4;
    case 322u: goto L_001DF4D8;
    case 323u: goto L_001DF4F0;
    case 324u: goto L_001DF55C;
    case 325u: goto L_001DF570;
    case 326u: goto L_001DF5BC;
    case 327u: goto L_001DF5F0;
    case 328u: goto L_001DF5FC;
    case 329u: goto L_001DF65C;
    case 330u: goto L_001DF704;
    case 331u: goto L_001DF7A4;
    case 332u: goto L_001DF7B0;
    case 333u: goto L_001DF7F4;
    case 334u: goto L_001DF810;
    case 335u: goto L_001DF850;
    case 336u: goto L_001DF898;
    case 337u: goto L_001DF8B0;
    case 338u: goto L_001DFA10;
    case 339u: goto L_001DFA28;
    case 340u: goto L_001DFA34;
    case 341u: goto L_001DFA44;
    case 342u: goto L_001DFA60;
    case 343u: goto L_001DFA98;
    case 344u: goto L_001DFAE4;
    case 345u: goto L_001DFB68;
    case 346u: goto L_001DFBA4;
    case 347u: goto L_001DFD44;
    case 348u: goto L_001DFDE8;
    case 349u: goto L_001DFE1C;
    case 350u: goto L_001DFE20;
    case 351u: goto L_001DFE30;
    case 352u: goto L_001DFEA0;
    case 353u: goto L_001DFED4;
    case 354u: goto L_001DFEE8;
    case 355u: goto L_001DFEFC;
    case 356u: goto L_001DFF00;
    case 357u: goto L_001DFF1C;
    case 358u: goto L_001DFF30;
    case 359u: goto L_001DFF48;
    case 360u: goto L_001DFF98;
    case 361u: goto L_001DFFB8;
    case 362u: goto L_001DFFE8;
    case 363u: goto L_001DFFF0;
    case 364u: goto L_001DFFF4;
    default: bad_entry(c, 0x001DC000u); return;
    }
L_001DC000:
    c.f[13] = ld32((c.r[21].w[0] + 4292u));
    c.f[14] = ld32((c.r[21].w[0] + 4296u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC010u); set32(c.r[16], c.r[21].w[0] + 5248u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC010u) [[unlikely]] return; }
L_001DC010:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC01Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC01Cu) [[unlikely]] return; }
L_001DC01C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC028u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC028u) [[unlikely]] return; }
L_001DC028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC030u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC030u) [[unlikely]] return; }
L_001DC030:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC03Cu); set32(c.r[5], c.r[21].w[0] + 5600u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC03Cu) [[unlikely]] return; }
L_001DC03C:
    c.budget -= 1;
L_001DC040:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DC058; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8256u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DC170; } }
L_001DC058:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[21].w[0] + 5472u));
    set32(c.r[18], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[21].w[0] + 5476u));
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[21].w[0] + 5480u));
    set32(c.r[5], c.r[21].w[0] + 8464u);
    c.f[0] = ld32((c.r[21].w[0] + 5484u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 5488u));
    c.f[2] = ld32((c.r[21].w[0] + 5492u));
    c.f[1] = ld32((c.r[21].w[0] + 5496u));
    c.f[0] = ld32((c.r[21].w[0] + 5500u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 8352u));
    c.f[2] = ld32((c.r[21].w[0] + 8356u));
    c.f[1] = ld32((c.r[21].w[0] + 8360u));
    c.f[0] = ld32((c.r[21].w[0] + 8364u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 8336u));
    c.f[2] = ld32((c.r[21].w[0] + 8340u));
    c.f[1] = ld32((c.r[21].w[0] + 8344u));
    c.f[0] = ld32((c.r[21].w[0] + 8348u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC0ECu); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DC0ECu) [[unlikely]] return; }
L_001DC0EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC0F8u); set32(c.r[5], c.r[21].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DC0F8u) [[unlikely]] return; }
L_001DC0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC100u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DC100u) [[unlikely]] return; }
L_001DC100:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC110u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC110u) [[unlikely]] return; }
L_001DC110:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC11Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC11Cu) [[unlikely]] return; }
L_001DC11C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC128u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC128u) [[unlikely]] return; }
L_001DC128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC130u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC130u) [[unlikely]] return; }
L_001DC130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC138u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC138u) [[unlikely]] return; }
L_001DC138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC140u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC140u) [[unlikely]] return; }
L_001DC140:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 5632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC150u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x001DC150u) [[unlikely]] return; }
L_001DC150:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC15Cu); set32(c.r[5], c.r[21].w[0] + 8384u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC15Cu) [[unlikely]] return; }
L_001DC15C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC168u); set32(c.r[5], c.r[21].w[0] + 8368u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC168u) [[unlikely]] return; }
L_001DC168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC480; } }
L_001DC170:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 9248u);
    set32(c.r[18], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[21].w[0] + 5472u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 8464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5476u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5480u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5488u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5492u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5496u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8352u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8356u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8360u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8336u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8340u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8344u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 91;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC2DCu); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DC2DCu) [[unlikely]] return; }
L_001DC2DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC2E8u); set32(c.r[5], c.r[21].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DC2E8u) [[unlikely]] return; }
L_001DC2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC2F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DC2F0u) [[unlikely]] return; }
L_001DC2F0:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC300u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC300u) [[unlikely]] return; }
L_001DC300:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC30Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC30Cu) [[unlikely]] return; }
L_001DC30C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC318u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC318u) [[unlikely]] return; }
L_001DC318:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC324u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC324u) [[unlikely]] return; }
L_001DC324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC32Cu); c.r[4].d[0] = ld16((c.r[21].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC32Cu) [[unlikely]] return; }
L_001DC32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC334u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC334u) [[unlikely]] return; }
L_001DC334:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC344u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC344u) [[unlikely]] return; }
L_001DC344:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC354u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC354u) [[unlikely]] return; }
L_001DC354:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC360u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC360u) [[unlikely]] return; }
L_001DC360:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC36Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC36Cu) [[unlikely]] return; }
L_001DC36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC374u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001DC374u) [[unlikely]] return; }
L_001DC374:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC384u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC384u) [[unlikely]] return; }
L_001DC384:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC390u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC390u) [[unlikely]] return; }
L_001DC390:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC39Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC39Cu) [[unlikely]] return; }
L_001DC39C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3A8u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC3A8u) [[unlikely]] return; }
L_001DC3A8:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3B8u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC3B8u) [[unlikely]] return; }
L_001DC3B8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3C4u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC3C4u) [[unlikely]] return; }
L_001DC3C4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3D0u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC3D0u) [[unlikely]] return; }
L_001DC3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3D8u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC3D8u) [[unlikely]] return; }
L_001DC3D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3E4u); set32(c.r[5], c.r[21].w[0] + 5648u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC3E4u) [[unlikely]] return; }
L_001DC3E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3F0u); set32(c.r[5], c.r[21].w[0] + 8368u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC3F0u) [[unlikely]] return; }
L_001DC3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DC3F8u) [[unlikely]] return; }
L_001DC3F8:
    c.f[12] = ld32((c.r[21].w[0] + 4144u));
    set32(c.r[18], c.r[21].w[0] + 4144u);
    c.f[13] = ld32((c.r[21].w[0] + 4148u));
    c.f[14] = ld32((c.r[21].w[0] + 4152u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC410u); set32(c.r[17], c.r[21].w[0] + 5140u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC410u) [[unlikely]] return; }
L_001DC410:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC41Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC41Cu) [[unlikely]] return; }
L_001DC41C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC428u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC428u) [[unlikely]] return; }
L_001DC428:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC434u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC434u) [[unlikely]] return; }
L_001DC434:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC444u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC444u) [[unlikely]] return; }
L_001DC444:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC450u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC450u) [[unlikely]] return; }
L_001DC450:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC45Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC45Cu) [[unlikely]] return; }
L_001DC45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC464u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC464u) [[unlikely]] return; }
L_001DC464:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC470u); set32(c.r[5], c.r[21].w[0] + 5632u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC470u) [[unlikely]] return; }
L_001DC470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC47Cu); set32(c.r[5], c.r[21].w[0] + 8384u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC47Cu) [[unlikely]] return; }
L_001DC47C:
    c.budget -= 1;
L_001DC480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001DC4B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001DC4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC4D0; } }
    c.budget -= 1;
L_001DC4C8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001DC4D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[4].w[0] + 4052u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 111u));
    st32((c.r[4].w[0] + 8576u), c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld8((c.r[4].w[0] + 850u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC558; } }
    c.f[1] = ld32((c.r[4].w[0] + 5536u));
    c.f[0] = ld32((c.r[4].w[0] + 8496u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5696u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5540u));
    c.f[0] = ld32((c.r[4].w[0] + 8500u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5700u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5544u));
    c.f[0] = ld32((c.r[4].w[0] + 8504u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5704u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5552u));
    c.f[0] = ld32((c.r[4].w[0] + 8480u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5712u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5556u));
    c.f[0] = ld32((c.r[4].w[0] + 8484u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5716u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5560u));
    c.f[0] = ld32((c.r[4].w[0] + 8488u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5720u), c.f[0]);
    c.budget -= 25;
L_001DC558:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 850u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC648; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001DC580; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DC5A8; } }
L_001DC580:
    c.f[3] = ld32((c.r[4].w[0] + 5568u));
    c.f[2] = ld32((c.r[4].w[0] + 5572u));
    c.f[1] = ld32((c.r[4].w[0] + 5576u));
    c.f[0] = ld32((c.r[4].w[0] + 5580u));
    st32((c.r[4].w[0] + 4048u), c.f[3]);
    st32((c.r[4].w[0] + 4052u), c.f[2]);
    st32((c.r[4].w[0] + 4056u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4060u), c.f[0]);  if (t) { goto L_001DC608; } }
    c.budget -= 1;
L_001DC5A8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 9472u);
    c.f[1] = ld32((c.r[4].w[0] + 5568u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4048u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[1] = ld32((c.r[4].w[0] + 5572u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4052u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[1] = ld32((c.r[4].w[0] + 5576u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4056u), c.f[0]);
    c.budget -= 24;
L_001DC608:
    c.f[3] = ld32((c.r[4].w[0] + 5504u));
    c.f[2] = ld32((c.r[4].w[0] + 5508u));
    c.f[1] = ld32((c.r[4].w[0] + 5512u));
    c.f[0] = ld32((c.r[4].w[0] + 5516u));
    st32((c.r[4].w[0] + 5664u), c.f[3]);
    st32((c.r[4].w[0] + 5668u), c.f[2]);
    st32((c.r[4].w[0] + 5672u), c.f[1]);
    st32((c.r[4].w[0] + 5676u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 5520u));
    c.f[2] = ld32((c.r[4].w[0] + 5524u));
    c.f[1] = ld32((c.r[4].w[0] + 5528u));
    c.f[0] = ld32((c.r[4].w[0] + 5532u));
    st32((c.r[4].w[0] + 5680u), c.f[3]);
    st32((c.r[4].w[0] + 5684u), c.f[2]);
    st32((c.r[4].w[0] + 5688u), c.f[1]);
    st32((c.r[4].w[0] + 5692u), c.f[0]);
    c.budget -= 16;
L_001DC648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC650:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] + 4032u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[21].w[0] + 5056u);  if (t) { goto L_001DC690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_001DC698; } }
L_001DC690:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_001DC698:
    set32(c.r[2], ld32((c.r[21].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 111u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6A8u); c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001DC6A8u) [[unlikely]] return; }
L_001DC6A8:
    c.f[5] = ld32((c.r[21].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0]));
    c.f[3] = ld32((c.r[21].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6D0u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC6D0u) [[unlikely]] return; }
L_001DC6D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { goto L_001DC728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6E4u); set32(c.r[4], c.r[21].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001DC6E4u) [[unlikely]] return; }
L_001DC6E4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6F0u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC6F0u) [[unlikely]] return; }
L_001DC6F0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6FCu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC6FCu) [[unlikely]] return; }
L_001DC6FC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC708u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC708u) [[unlikely]] return; }
L_001DC708:
    c.f[0] = ld32((c.r[21].w[0] + 8540u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC720u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC720u) [[unlikely]] return; }
L_001DC720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC780; } }
L_001DC728:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC740u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC740u) [[unlikely]] return; }
L_001DC740:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC758u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC758u) [[unlikely]] return; }
L_001DC758:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC770u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC770u) [[unlikely]] return; }
L_001DC770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC778u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8332u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC778u) [[unlikely]] return; }
L_001DC778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC780u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8328u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC780u) [[unlikely]] return; }
L_001DC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC788u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001DC788u) [[unlikely]] return; }
L_001DC788:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DC7B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8296u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DC830; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8320u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DC830; } }
L_001DC7B0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[21].w[0] + 5440u));
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[21].w[0] + 5444u));
    set32(c.r[5], c.r[21].w[0] + 5600u);
    c.f[1] = ld32((c.r[21].w[0] + 5448u));
    set32(c.r[6], 0u + 2u);
    c.f[0] = ld32((c.r[21].w[0] + 5452u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 5456u));
    c.f[2] = ld32((c.r[21].w[0] + 5460u));
    c.f[1] = ld32((c.r[21].w[0] + 5464u));
    c.f[0] = ld32((c.r[21].w[0] + 5468u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4304u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4256u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC824u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x001DC824u) [[unlikely]] return; }
L_001DC824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC9E0; } }
    c.budget -= 1;
L_001DC830:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] - 9024u);
    c.f[1] = ld32((c.r[21].w[0] + 5440u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5444u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5448u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5456u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5460u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5464u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8F4u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC8F4u) [[unlikely]] return; }
L_001DC8F4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC900u); set32(c.r[16], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC900u) [[unlikely]] return; }
L_001DC900:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC90Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC90Cu) [[unlikely]] return; }
L_001DC90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC914u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC914u) [[unlikely]] return; }
L_001DC914:
    c.f[12] = ld32((c.r[21].w[0] + 4224u));
    set32(c.r[22], c.r[21].w[0] + 4224u);
    c.f[13] = ld32((c.r[21].w[0] + 4228u));
    c.f[14] = ld32((c.r[21].w[0] + 4232u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC92Cu); set32(c.r[16], c.r[21].w[0] + 5200u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC92Cu) [[unlikely]] return; }
L_001DC92C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC938u) [[unlikely]] return; }
L_001DC938:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC944u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC944u) [[unlikely]] return; }
L_001DC944:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC950u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC950u) [[unlikely]] return; }
L_001DC950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC958u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001DC958u) [[unlikely]] return; }
L_001DC958:
    c.f[13] = ld32((c.r[22].w[0] + 20u));
    c.f[14] = ld32((c.r[22].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC968u); c.f[12] = ld32((c.r[22].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC968u) [[unlikely]] return; }
L_001DC968:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC974u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC974u) [[unlikely]] return; }
L_001DC974:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC980u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC980u) [[unlikely]] return; }
L_001DC980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC988u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC988u) [[unlikely]] return; }
L_001DC988:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC994u); set32(c.r[5], c.r[21].w[0] + 5616u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC994u) [[unlikely]] return; }
L_001DC994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC99Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DC99Cu) [[unlikely]] return; }
L_001DC99C:
    c.f[12] = ld32((c.r[21].w[0] + 4288u));
    c.f[13] = ld32((c.r[21].w[0] + 4292u));
    c.f[14] = ld32((c.r[21].w[0] + 4296u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9B0u); set32(c.r[16], c.r[21].w[0] + 5248u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DC9B0u) [[unlikely]] return; }
L_001DC9B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DC9BCu) [[unlikely]] return; }
L_001DC9BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DC9C8u) [[unlikely]] return; }
L_001DC9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9D0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DC9D0u) [[unlikely]] return; }
L_001DC9D0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9DCu); set32(c.r[5], c.r[21].w[0] + 5600u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DC9DCu) [[unlikely]] return; }
L_001DC9DC:
    c.budget -= 1;
L_001DC9E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DCA08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8256u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DCB20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8280u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DCB20; } }
L_001DCA08:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[21].w[0] + 5472u));
    set32(c.r[18], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[21].w[0] + 5476u));
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[21].w[0] + 5480u));
    set32(c.r[5], c.r[21].w[0] + 8464u);
    c.f[0] = ld32((c.r[21].w[0] + 5484u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 5488u));
    c.f[2] = ld32((c.r[21].w[0] + 5492u));
    c.f[1] = ld32((c.r[21].w[0] + 5496u));
    c.f[0] = ld32((c.r[21].w[0] + 5500u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 8352u));
    c.f[2] = ld32((c.r[21].w[0] + 8356u));
    c.f[1] = ld32((c.r[21].w[0] + 8360u));
    c.f[0] = ld32((c.r[21].w[0] + 8364u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 8336u));
    c.f[2] = ld32((c.r[21].w[0] + 8340u));
    c.f[1] = ld32((c.r[21].w[0] + 8344u));
    c.f[0] = ld32((c.r[21].w[0] + 8348u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA9Cu); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DCA9Cu) [[unlikely]] return; }
L_001DCA9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAA8u); set32(c.r[5], c.r[21].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DCAA8u) [[unlikely]] return; }
L_001DCAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAB0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DCAB0u) [[unlikely]] return; }
L_001DCAB0:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAC0u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCAC0u) [[unlikely]] return; }
L_001DCAC0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCACCu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCACCu) [[unlikely]] return; }
L_001DCACC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAD8u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCAD8u) [[unlikely]] return; }
L_001DCAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAE0u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCAE0u) [[unlikely]] return; }
L_001DCAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAE8u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCAE8u) [[unlikely]] return; }
L_001DCAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAF0u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCAF0u) [[unlikely]] return; }
L_001DCAF0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 5632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB00u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 169u, depth + 1u); else { c.pc = 0x00126300u; return; } if (c.pc != 0x001DCB00u) [[unlikely]] return; }
L_001DCB00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB0Cu); set32(c.r[5], c.r[21].w[0] + 8384u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DCB0Cu) [[unlikely]] return; }
L_001DCB0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB18u); set32(c.r[5], c.r[21].w[0] + 8368u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DCB18u) [[unlikely]] return; }
L_001DCB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCE30; } }
L_001DCB20:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 9248u);
    set32(c.r[18], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[21].w[0] + 5472u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 8464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5476u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5480u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5488u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5492u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 5496u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8352u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8356u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8360u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8336u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8340u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.f[1] = ld32((c.r[21].w[0] + 8344u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 91;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC8Cu); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DCC8Cu) [[unlikely]] return; }
L_001DCC8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC98u); set32(c.r[5], c.r[21].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001DCC98u) [[unlikely]] return; }
L_001DCC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCA0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DCCA0u) [[unlikely]] return; }
L_001DCCA0:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCB0u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCCB0u) [[unlikely]] return; }
L_001DCCB0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCBCu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCCBCu) [[unlikely]] return; }
L_001DCCBC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCC8u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCCC8u) [[unlikely]] return; }
L_001DCCC8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCD4u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCCD4u) [[unlikely]] return; }
L_001DCCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCDCu); c.r[4].d[0] = ld16((c.r[21].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCCDCu) [[unlikely]] return; }
L_001DCCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCE4u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCCE4u) [[unlikely]] return; }
L_001DCCE4:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCF4u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCCF4u) [[unlikely]] return; }
L_001DCCF4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD04u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCD04u) [[unlikely]] return; }
L_001DCD04:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD10u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCD10u) [[unlikely]] return; }
L_001DCD10:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD1Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCD1Cu) [[unlikely]] return; }
L_001DCD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001DCD24u) [[unlikely]] return; }
L_001DCD24:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD34u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCD34u) [[unlikely]] return; }
L_001DCD34:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD40u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCD40u) [[unlikely]] return; }
L_001DCD40:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD4Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCD4Cu) [[unlikely]] return; }
L_001DCD4C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD58u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCD58u) [[unlikely]] return; }
L_001DCD58:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD68u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCD68u) [[unlikely]] return; }
L_001DCD68:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD74u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCD74u) [[unlikely]] return; }
L_001DCD74:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD80u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCD80u) [[unlikely]] return; }
L_001DCD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD88u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCD88u) [[unlikely]] return; }
L_001DCD88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD94u); set32(c.r[5], c.r[21].w[0] + 5648u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DCD94u) [[unlikely]] return; }
L_001DCD94:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDA0u); set32(c.r[5], c.r[21].w[0] + 8368u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DCDA0u) [[unlikely]] return; }
L_001DCDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDA8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001DCDA8u) [[unlikely]] return; }
L_001DCDA8:
    c.f[12] = ld32((c.r[21].w[0] + 4144u));
    set32(c.r[18], c.r[21].w[0] + 4144u);
    c.f[13] = ld32((c.r[21].w[0] + 4148u));
    c.f[14] = ld32((c.r[21].w[0] + 4152u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDC0u); set32(c.r[17], c.r[21].w[0] + 5140u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCDC0u) [[unlikely]] return; }
L_001DCDC0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDCCu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCDCCu) [[unlikely]] return; }
L_001DCDCC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDD8u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCDD8u) [[unlikely]] return; }
L_001DCDD8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDE4u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCDE4u) [[unlikely]] return; }
L_001DCDE4:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCDF4u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001DCDF4u) [[unlikely]] return; }
L_001DCDF4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE00u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001DCE00u) [[unlikely]] return; }
L_001DCE00:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE0Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001DCE0Cu) [[unlikely]] return; }
L_001DCE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE14u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001DCE14u) [[unlikely]] return; }
L_001DCE14:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE20u); set32(c.r[5], c.r[21].w[0] + 5632u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DCE20u) [[unlikely]] return; }
L_001DCE20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE2Cu); set32(c.r[5], c.r[21].w[0] + 8384u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001DCE2Cu) [[unlikely]] return; }
L_001DCE2C:
    c.budget -= 1;
L_001DCE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001DCE60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001DCE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCE80; } }
    c.budget -= 1;
L_001DCE78:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001DCE80:
    set32(c.r[3], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[4].w[0] + 4052u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 111u));
    st32((c.r[4].w[0] + 8576u), c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld8((c.r[4].w[0] + 850u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DCF08; } }
    c.f[1] = ld32((c.r[4].w[0] + 5536u));
    c.f[0] = ld32((c.r[4].w[0] + 8496u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5696u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5540u));
    c.f[0] = ld32((c.r[4].w[0] + 8500u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5700u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5544u));
    c.f[0] = ld32((c.r[4].w[0] + 8504u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5704u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5552u));
    c.f[0] = ld32((c.r[4].w[0] + 8480u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5712u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5556u));
    c.f[0] = ld32((c.r[4].w[0] + 8484u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5716u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5560u));
    c.f[0] = ld32((c.r[4].w[0] + 8488u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5720u), c.f[0]);
    c.budget -= 25;
L_001DCF08:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 850u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DCFE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001DCF40; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DCF68; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8320u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DCF68; } }
L_001DCF40:
    c.f[3] = ld32((c.r[4].w[0] + 5568u));
    c.f[2] = ld32((c.r[4].w[0] + 5572u));
    c.f[1] = ld32((c.r[4].w[0] + 5576u));
    c.f[0] = ld32((c.r[4].w[0] + 5580u));
    st32((c.r[4].w[0] + 4048u), c.f[3]);
    st32((c.r[4].w[0] + 4052u), c.f[2]);
    st32((c.r[4].w[0] + 4056u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4060u), c.f[0]);  if (t) { goto L_001DCFA0; } }
    c.budget -= 1;
L_001DCF68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = ld32((c.r[4].w[0] + 5568u));
    set32(c.r[3], c.r[3].w[0] - 9472u);
    st32((c.r[4].w[0] + 4048u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[1] = ld32((c.r[4].w[0] + 5572u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4052u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 5576u));
    st32((c.r[4].w[0] + 4056u), c.f[0]);
    c.budget -= 14;
L_001DCFA0:
    c.f[3] = ld32((c.r[4].w[0] + 5504u));
    c.f[2] = ld32((c.r[4].w[0] + 5508u));
    c.f[1] = ld32((c.r[4].w[0] + 5512u));
    c.f[0] = ld32((c.r[4].w[0] + 5516u));
    st32((c.r[4].w[0] + 5664u), c.f[3]);
    st32((c.r[4].w[0] + 5668u), c.f[2]);
    st32((c.r[4].w[0] + 5672u), c.f[1]);
    st32((c.r[4].w[0] + 5676u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 5520u));
    c.f[2] = ld32((c.r[4].w[0] + 5524u));
    c.f[1] = ld32((c.r[4].w[0] + 5528u));
    c.f[0] = ld32((c.r[4].w[0] + 5532u));
    st32((c.r[4].w[0] + 5680u), c.f[3]);
    st32((c.r[4].w[0] + 5684u), c.f[2]);
    st32((c.r[4].w[0] + 5688u), c.f[1]);
    st32((c.r[4].w[0] + 5692u), c.f[0]);
    c.budget -= 16;
L_001DCFE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 55u, depth + 1u); else { c.pc = 0x001DC4B0u; return; } if (c.pc != 0x001DD004u) [[unlikely]] return; }
L_001DD004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD00Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 171u, depth + 1u); else { c.pc = 0x001DBCC0u; return; } if (c.pc != 0x001DD00Cu) [[unlikely]] return; }
L_001DD00C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DD020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD020u);  if (depth < kMaxDepth) unit_0038(c, 373u, depth + 1u); else { c.pc = 0x001E3AE0u; return; } if (c.pc != 0x001DD020u) [[unlikely]] return; }
L_001DD020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x001DD028u) [[unlikely]] return; }
L_001DD028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x001DD030u) [[unlikely]] return; }
L_001DD030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD040:
    c.f[0] = ld32((c.r[4].w[0] + 8264u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD070; } }
L_001DD058:
    c.f[0] = ld32((c.r[4].w[0] + 8272u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DD06C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD06C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DD070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD080:
    c.f[0] = ld32((c.r[4].w[0] + 8304u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD0B0; } }
L_001DD098:
    c.f[0] = ld32((c.r[4].w[0] + 8312u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DD0AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD0AC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DD0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD0C0:
    c.f[0] = ld32((c.r[4].w[0] + 8268u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD0F0; } }
L_001DD0D8:
    c.f[0] = ld32((c.r[4].w[0] + 8276u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DD0EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD0EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DD0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD100:
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD130; } }
L_001DD118:
    c.f[0] = ld32((c.r[4].w[0] + 8316u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DD12C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD12C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DD130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DD154u) [[unlikely]] return; }
L_001DD154:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DD168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD168u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001DD168u) [[unlikely]] return; }
L_001DD168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DD194u) [[unlikely]] return; }
L_001DD194:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD2A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD1C8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 779u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.budget -= 7;
L_001DD1C8:
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD220; } }
    c.f[0] = ld32((c.r[16].w[0] + 8312u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD220; } }
    c.f[0] = ld32((c.r[16].w[0] + 8304u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD220; } }
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001DD220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD21Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001DD21Cu) [[unlikely]] return; }
L_001DD21C:
    c.budget -= 1;
L_001DD220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD2A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 779u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD260; } }
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001DD260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001DD260u) [[unlikely]] return; }
L_001DD260:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD298; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD290u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001DD290u) [[unlikely]] return; }
L_001DD290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD2A8; } }
L_001DD298:
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001DD2A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD2C0; } }
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001DD2C0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DD2F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DD2F8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD2F4u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001DD2F4u) [[unlikely]] return; }
L_001DD2F4:
    c.budget -= 1;
L_001DD2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD390; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001DD34C; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001DD34C:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29551u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD388u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DD388u) [[unlikely]] return; }
L_001DD388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD398; } }
L_001DD390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD398u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DD398u) [[unlikely]] return; }
L_001DD398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DD3B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DD4A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001DD3E8; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001DD3E8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] - 29552u);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 25968u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[5], c.r[6].w[0] << 1);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[16], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[17].w[0] + 1268u), c.r[5].w[0]);
    st8((c.r[17].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 740u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD488u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 107u, depth + 1u); else { c.pc = 0x001EA6B0u; return; } if (c.pc != 0x001DD488u) [[unlikely]] return; }
L_001DD488:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DD4A0u) [[unlikely]] return; }
L_001DD4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD540; } }
L_001DD4A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.f[20] = ld32((c.r[17].w[0] + 8292u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[17].w[0] + 1016u));  if (t) { goto L_001DD4D8; } }
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[17].w[0] + 1016u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8292u), c.f[0]);
    c.budget -= 7;
L_001DD4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001DD4E0u) [[unlikely]] return; }
L_001DD4E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4ECu); st32((c.r[17].w[0] + 8292u), c.f[20]);  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DD4ECu) [[unlikely]] return; }
L_001DD4EC:
    c.f[1] = ld32((c.r[17].w[0] + 8304u));
    c.f[0] = ld32((c.r[17].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD538; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 710u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1092u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD524u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001DD524u) [[unlikely]] return; }
L_001DD524:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DD538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD538u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001DD538u) [[unlikely]] return; }
L_001DD538:
    st32((c.r[17].w[0] + 1016u), c.f[21]);
    c.budget -= 2;
L_001DD540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DD560:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA350u | kUnwind; return; } [[clang::musttail]] return unit_0036(c, 85u, depth); }
L_001DD570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DD5A8; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5A4u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001DD5A4u) [[unlikely]] return; }
L_001DD5A4:
    c.budget -= 1;
L_001DD5A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001DD5B4u) [[unlikely]] return; }
L_001DD5B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001DD5C0u) [[unlikely]] return; }
L_001DD5C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001DD5E0u) [[unlikely]] return; }
L_001DD5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DD5E8u) [[unlikely]] return; }
L_001DD5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD658; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 26896u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD64Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DD64Cu) [[unlikely]] return; }
L_001DD64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD660; } }
    c.budget -= 1;
L_001DD658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD660u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DD660u) [[unlikely]] return; }
L_001DD660:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DD670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 182u, depth + 1u); else { c.pc = 0x001DD6E0u; return; } if (c.pc != 0x001DD684u) [[unlikely]] return; }
L_001DD684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD6D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6ACu); st32((c.r[16].w[0] + 1260u), 0u);  if (depth < kMaxDepth) unit_0037(c, 186u, depth + 1u); else { c.pc = 0x001DD7F0u; return; } if (c.pc != 0x001DD6ACu) [[unlikely]] return; }
L_001DD6AC:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 26896u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001DD6D0u) [[unlikely]] return; }
L_001DD6D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 35u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DD710; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD7D8; } }
L_001DD710:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8296u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD7D8; } }
L_001DD728:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD7D8; } }
L_001DD740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42880000u);  if (t) { goto L_001DD770; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD7A0; } }
L_001DD770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x43090000u);  if (t) { goto L_001DD7A8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD7A8; } }
    c.budget -= 1;
L_001DD7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DD7D8; } }
L_001DD7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001DD7B0u) [[unlikely]] return; }
L_001DD7B0:
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001DD7C8u) [[unlikely]] return; }
L_001DD7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DD7D0u) [[unlikely]] return; }
L_001DD7D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001DD7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD7F0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 27344u);
    c.f[1] = ld32((c.r[4].w[0] + 8308u));
    set32(c.r[5], c.r[5].w[0] - 27342u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_001DD888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 27340u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  if (t) { goto L_001DD888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 27338u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  if (t) { goto L_001DD888; } }
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 2;
L_001DD888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001DD8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DD998; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DD978; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DD8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD998; } }
L_001DD8D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001DD998; } }
    set32(c.r[2], 0u + 35u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001DD900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001DD940; } }
L_001DD900:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8296u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DD940; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DD940; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD938u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DD938u) [[unlikely]] return; }
L_001DD938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD998; } }
L_001DD940:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26832u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD970u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DD970u) [[unlikely]] return; }
L_001DD970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD998; } }
L_001DD978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD980u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DD980u) [[unlikely]] return; }
L_001DD980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD998; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001DD998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DD9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DDB90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DDB48; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DD9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDBB0; } }
L_001DD9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD9F0u);  if (depth < kMaxDepth) unit_0037(c, 182u, depth + 1u); else { c.pc = 0x001DD6E0u; return; } if (c.pc != 0x001DD9F0u) [[unlikely]] return; }
L_001DD9F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDBC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DDA18; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_001DDA18:
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u - 389u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 35u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001DDA50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001DDA98; } }
    c.budget -= 1;
L_001DDA50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8296u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DDA98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DDA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 186u, depth + 1u); else { c.pc = 0x001DD7F0u; return; } if (c.pc != 0x001DDA78u) [[unlikely]] return; }
L_001DDA78:
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA8Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DDA8Cu) [[unlikely]] return; }
L_001DDA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDAC8; } }
    c.budget -= 1;
L_001DDA98:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26832u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDAC8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DDAC8u) [[unlikely]] return; }
L_001DDAC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDB00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 117u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001DDB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDAFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001DDAFCu) [[unlikely]] return; }
L_001DDAFC:
    c.budget -= 1;
L_001DDB00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DDB28; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001DDB1Cu) [[unlikely]] return; }
L_001DDB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDB38; } }
    c.budget -= 1;
L_001DDB28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB38u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001DDB38u) [[unlikely]] return; }
L_001DDB38:
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001DDB48:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DDB70; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001DDB6Cu) [[unlikely]] return; }
L_001DDB6C:
    c.budget -= 1;
L_001DDB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DDB78u) [[unlikely]] return; }
L_001DDB78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDBB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001DDB90:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBA4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001DDBA4u) [[unlikely]] return; }
L_001DDBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 136u, depth + 1u); else { c.pc = 0x001E5C20u; return; } if (c.pc != 0x001DDBACu) [[unlikely]] return; }
L_001DDBAC:
    c.budget -= 1;
L_001DDBB0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DDBC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBC8u);  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001DDBC8u) [[unlikely]] return; }
L_001DDBC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DDBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DDC68; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DDC50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DDC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDD70; } }
L_001DDC18:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 26831u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC50u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DDC50u) [[unlikely]] return; }
L_001DDC50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDD70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DDC68:
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDCA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDD70; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC98u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DDC98u) [[unlikely]] return; }
L_001DDC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DDD70; } }
L_001DDCA0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DDD10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDCE0; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDCD4u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DDCD4u) [[unlikely]] return; }
L_001DDCD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DDD70; } }
L_001DDCE0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DDD70; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD04u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DDD04u) [[unlikely]] return; }
L_001DDD04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DDD70; } }
L_001DDD10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDD40; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD34u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DDD34u) [[unlikely]] return; }
L_001DDD34:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DDD70; } }
L_001DDD40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DDD70; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD64u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DDD64u) [[unlikely]] return; }
L_001DDD64:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DDD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DDD78u) [[unlikely]] return; }
L_001DDD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DDD90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDD8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001DDDD8u) [[unlikely]] return; }
L_001DDDD8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001DDDE8u) [[unlikely]] return; }
L_001DDDE8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DDFF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DDF78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE030; } }
    c.budget -= 1;
L_001DDE18:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[19].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[19].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001DDE44u) [[unlikely]] return; }
L_001DDE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDE78; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_001DDE60; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_001DDE60:
    c.f[0] = ld32((c.r[19].w[0] + 1156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_001DDE88; } }
L_001DDE78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001DDE88:
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.r[16].d[0] = c.r[18].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDEA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001DDEA8u) [[unlikely]] return; }
L_001DDEA8:
    c.f[2] = ld32((c.r[19].w[0] + 1000u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDEC4u); st32((c.r[19].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001DDEC4u) [[unlikely]] return; }
L_001DDEC4:
    c.f[1] = ld32((c.r[19].w[0] + 1000u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DDF40; } }
    c.r[6].d[0] = ld8((c.r[19].w[0] + 8658u));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 25972u);
    set32(c.r[5], c.r[5].w[0] - 29553u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 740u), c.f[0]);  if (t) { goto L_001DDF50; } }
L_001DDF40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 728u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 740u), 0u);
    c.budget -= 4;
L_001DDF50:
    c.f[0] = ld32((c.r[19].w[0] + 728u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 107u, depth + 1u); else { c.pc = 0x001EA6B0u; return; } if (c.pc != 0x001DDF64u) [[unlikely]] return; }
L_001DDF64:
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001DE030; } }
L_001DDF78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[19].w[0] + 1016u));  if (t) { goto L_001DDF98; } }
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[19].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_001DDF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 108u, depth + 1u); else { c.pc = 0x001EA6F0u; return; } if (c.pc != 0x001DDFA0u) [[unlikely]] return; }
L_001DDFA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 856u)));
    c.f[2] = ld32((c.r[19].w[0] + 1016u));
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.f[1] = ld32((c.r[19].w[0] + 728u));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 728u), c.f[1]);
    st32((c.r[19].w[0] + 1016u), c.f[21]);
    c.f[1] = ld32((c.r[19].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DE030; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE030; } }
    c.budget -= 1;
L_001DDFF0:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFFCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001DDFFCu) [[unlikely]] return; }
L_001DDFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE010; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1636u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (t) { goto L_001DE018; } }
L_001DE010:
    set32(c.r[17], 0u + 16384u);
    c.budget -= 2;
L_001DE018:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE024u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001DE024u) [[unlikely]] return; }
L_001DE024:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[19].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 3;
L_001DE030:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 709u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DE0A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE090; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE1D8; } }
L_001DE058:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[7].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26831u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE090u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE090u) [[unlikely]] return; }
L_001DE090:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE1D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DE0A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE0E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE1D8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0D8u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE0D8u) [[unlikely]] return; }
L_001DE0D8:
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE1D8; } }
L_001DE0E8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DE168; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE130; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE11Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE11Cu) [[unlikely]] return; }
L_001DE11C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE1D8; } }
    c.budget -= 1;
L_001DE130:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE1D8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE154u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE154u) [[unlikely]] return; }
L_001DE154:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE1D8; } }
    c.budget -= 1;
L_001DE168:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE1A0; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE18Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE18Cu) [[unlikely]] return; }
L_001DE18C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE1D8; } }
L_001DE1A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE1D8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1C4u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE1C4u) [[unlikely]] return; }
L_001DE1C4:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 711u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001DE1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DE1E0u) [[unlikely]] return; }
L_001DE1E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 710u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DE288; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE288; } }
L_001DE208:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001DE210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 710u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 710u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 711u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DE278; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE260; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE288; } }
    c.budget -= 1;
L_001DE248:
    set32(c.r[2], 0u + 32u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE288; } }
    c.budget -= 1;
L_001DE260:
    set32(c.r[2], 0u + 64u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE288; } }
    c.budget -= 1;
L_001DE278:
    set32(c.r[2], 0u + 128u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 280u), 0u);
    st8((c.r[19].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001DE288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001DE290u) [[unlikely]] return; }
L_001DE290:
    c.f[1] = ld32((c.r[19].w[0] + 1004u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE2A4u); st32((c.r[19].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001DE2A4u) [[unlikely]] return; }
L_001DE2A4:
    c.f[2] = ld32((c.r[19].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE2E8; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001DE2E8:
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 8292u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 1084u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE318; } }
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_001DE318:
    set32(c.r[5], ld32((c.r[19].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE324u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001DE324u) [[unlikely]] return; }
L_001DE324:
    c.f[1] = ld32((c.r[19].w[0] + 1080u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE340; } }
    st32((c.r[19].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_001DE340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE348u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001DE348u) [[unlikely]] return; }
L_001DE348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DE370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DE510; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DE400; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE3E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE508; } }
    c.budget -= 1;
L_001DE3B8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3D4u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE3D4u) [[unlikely]] return; }
L_001DE3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE508; } }
    c.budget -= 1;
L_001DE3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[1] = ld32((c.r[16].w[0] + 8268u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_001DE508; } }
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001DE400:
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE438; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);  if (t) { goto L_001DE508; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE430u); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE430u) [[unlikely]] return; }
L_001DE430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE508; } }
L_001DE438:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DE4A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE478; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE46Cu); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE46Cu) [[unlikely]] return; }
L_001DE46C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE508; } }
L_001DE478:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE508; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE49Cu); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE49Cu) [[unlikely]] return; }
L_001DE49C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE508; } }
L_001DE4A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE4D8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4CCu); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE4CCu) [[unlikely]] return; }
L_001DE4CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DE508; } }
L_001DE4D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE508; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4FCu); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE4FCu) [[unlikely]] return; }
L_001DE4FC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DE508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE510u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DE510u) [[unlikely]] return; }
L_001DE510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DE520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE538u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001DE538u) [[unlikely]] return; }
L_001DE538:
    set32(c.r[4], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE588; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], 0u - 65u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_001DE588:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001DE594u) [[unlikely]] return; }
L_001DE594:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE5A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001DE5A0u) [[unlikely]] return; }
L_001DE5A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DE618; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE5F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE740; } }
L_001DE5D0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE5F0u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE5F0u) [[unlikely]] return; }
L_001DE5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE740; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DE618:
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);  if (t) { goto L_001DE740; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 19u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE648u); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE648u) [[unlikely]] return; }
L_001DE648:
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE740; } }
    c.budget -= 1;
L_001DE658:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DE6D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE6A0; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE68Cu); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE68Cu) [[unlikely]] return; }
L_001DE68C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE740; } }
    c.budget -= 1;
L_001DE6A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE740; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6C4u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE6C4u) [[unlikely]] return; }
L_001DE6C4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE740; } }
    c.budget -= 1;
L_001DE6D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE710; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6FCu); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE6FCu) [[unlikely]] return; }
L_001DE6FC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE740; } }
    c.budget -= 1;
L_001DE710:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE740; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE734u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DE734u) [[unlikely]] return; }
L_001DE734:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001DE740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DE748u) [[unlikely]] return; }
L_001DE748:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_001DE7C0; } }
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DE7B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE798; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE7C0; } }
L_001DE780:
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE7C0; } }
    c.budget -= 1;
L_001DE798:
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DE7C0; } }
    c.budget -= 1;
L_001DE7B0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001DE7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001DE7E0u) [[unlikely]] return; }
L_001DE7E0:
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DE818; } }
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 7;
L_001DE818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 50u, depth + 1u); else { c.pc = 0x001D0820u; return; } if (c.pc != 0x001DE820u) [[unlikely]] return; }
L_001DE820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DE830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DE940; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DE8A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DE868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE948; } }
L_001DE868:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26830u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE89Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE89Cu) [[unlikely]] return; }
L_001DE89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE948; } }
    c.budget -= 1;
L_001DE8A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001DE8D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE8D8; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 37u);  if (t) { goto L_001DE8D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DE930; } }
    c.budget -= 1;
L_001DE8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DE8E0u) [[unlikely]] return; }
L_001DE8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26829u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE924u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DE924u) [[unlikely]] return; }
L_001DE924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE948; } }
    c.budget -= 1;
L_001DE930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE938u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DE938u) [[unlikely]] return; }
L_001DE938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE948; } }
L_001DE940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE948u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DE948u) [[unlikely]] return; }
L_001DE948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DE960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 18u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DE988; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DE988:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DEAB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DEA18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEAB8; } }
L_001DE9B0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 65u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], c.r[2].w[0] - 26830u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA0Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DEA0Cu) [[unlikely]] return; }
L_001DEA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEAB8; } }
    c.budget -= 1;
L_001DEA18:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001DEA48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DEA48; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 37u);  if (t) { goto L_001DEA48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DEAA0; } }
    c.budget -= 1;
L_001DEA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DEA50u) [[unlikely]] return; }
L_001DEA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEAB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26829u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA94u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DEA94u) [[unlikely]] return; }
L_001DEA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEAB8; } }
    c.budget -= 1;
L_001DEAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DEAA8u) [[unlikely]] return; }
L_001DEAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEAB8; } }
L_001DEAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DEAB8u) [[unlikely]] return; }
L_001DEAB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001DEAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEACCu);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001DEACCu) [[unlikely]] return; }
L_001DEACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEAF8; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001DEAE0u) [[unlikely]] return; }
L_001DEAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEAF8; } }
    c.f[12] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 81u, depth + 1u); else { c.pc = 0x001E5080u; return; } if (c.pc != 0x001DEAF8u) [[unlikely]] return; }
L_001DEAF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEB28; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_001DEB28:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001DEB34u) [[unlikely]] return; }
L_001DEB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 50u, depth + 1u); else { c.pc = 0x001D0820u; return; } if (c.pc != 0x001DEB3Cu) [[unlikely]] return; }
L_001DEB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DEB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DEC78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DEC20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DEB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEC80; } }
L_001DEB88:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBA4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DEBA4u) [[unlikely]] return; }
L_001DEBA4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_001DEBC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DEC80; } }
    c.budget -= 1;
L_001DEBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 25936u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 4608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBDCu); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEBDCu) [[unlikely]] return; }
L_001DEBDC:
    set32(c.r[4], c.r[16].w[0] + 4672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBE8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEBE8u) [[unlikely]] return; }
L_001DEBE8:
    set32(c.r[4], c.r[16].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBF4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEBF4u) [[unlikely]] return; }
L_001DEBF4:
    set32(c.r[4], c.r[16].w[0] + 4688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC00u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEC00u) [[unlikely]] return; }
L_001DEC00:
    set32(c.r[4], c.r[16].w[0] + 4640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC0Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEC0Cu) [[unlikely]] return; }
L_001DEC0C:
    set32(c.r[4], c.r[16].w[0] + 4704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC18u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEC18u) [[unlikely]] return; }
L_001DEC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEC80; } }
L_001DEC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC28u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DEC28u) [[unlikely]] return; }
L_001DEC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEC80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26826u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DEC6Cu) [[unlikely]] return; }
L_001DEC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEC80; } }
    c.budget -= 1;
L_001DEC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC80u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DEC80u) [[unlikely]] return; }
L_001DEC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DEC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 18u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001DECB8; } }
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DECB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DEDE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DED88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DECE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE00; } }
L_001DECE0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[4], 0u - 73u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 512u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 18u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DED48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED44u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001DED44u) [[unlikely]] return; }
L_001DED44:
    c.budget -= 1;
L_001DED48:
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED80u); st32((c.r[16].w[0] + 1260u), 0u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DED80u) [[unlikely]] return; }
L_001DED80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE00; } }
L_001DED88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DED90u) [[unlikely]] return; }
L_001DED90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEE00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26826u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DEDD4u) [[unlikely]] return; }
L_001DEDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE00; } }
    c.budget -= 1;
L_001DEDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DEDE8u) [[unlikely]] return; }
L_001DEDE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DEE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001DEDFCu) [[unlikely]] return; }
L_001DEDFC:
    c.budget -= 1;
L_001DEE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DEE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001DEF70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DEF58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001DEF10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DEE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF078; } }
L_001DEE50:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 793u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DEE70; } }
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DEE70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001DEE88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DEEE0; } }
L_001DEE88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 25920u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 4608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEA4u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEEA4u) [[unlikely]] return; }
L_001DEEA4:
    set32(c.r[4], c.r[16].w[0] + 4672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEB0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEEB0u) [[unlikely]] return; }
L_001DEEB0:
    set32(c.r[4], c.r[16].w[0] + 4624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEBCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEEBCu) [[unlikely]] return; }
L_001DEEBC:
    set32(c.r[4], c.r[16].w[0] + 4688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEC8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEEC8u) [[unlikely]] return; }
L_001DEEC8:
    set32(c.r[4], c.r[16].w[0] + 4640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEED4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEED4u) [[unlikely]] return; }
L_001DEED4:
    set32(c.r[4], c.r[16].w[0] + 4704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEE0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001DEEE0u) [[unlikely]] return; }
L_001DEEE0:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26828u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF10u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DEF10u) [[unlikely]] return; }
L_001DEF10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF078; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26827u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF58u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DEF58u) [[unlikely]] return; }
L_001DEF58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DEF70:
    set32(c.r[2], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEFA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF078; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFA0u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DEFA0u) [[unlikely]] return; }
L_001DEFA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF078; } }
L_001DEFA8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DF018; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DEFE8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFDCu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DEFDCu) [[unlikely]] return; }
L_001DEFDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DF078; } }
L_001DEFE8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF078; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF00Cu); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DF00Cu) [[unlikely]] return; }
L_001DF00C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DF078; } }
L_001DF018:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF048; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF03Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DF03Cu) [[unlikely]] return; }
L_001DF03C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DF078; } }
L_001DF048:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF078; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF06Cu); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DF06Cu) [[unlikely]] return; }
L_001DF06C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DF078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF080u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DF080u) [[unlikely]] return; }
L_001DF080:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 793u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF098; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001DF098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DF0B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 152u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001DF0ECu) [[unlikely]] return; }
L_001DF0EC:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF0FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001DF0FCu) [[unlikely]] return; }
L_001DF0FC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001DF110u) [[unlikely]] return; }
L_001DF110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_001DF120; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1636u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 2;
L_001DF120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DF288; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF270; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF3F8; } }
    c.budget -= 1;
L_001DF158:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF16Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001DF16Cu) [[unlikely]] return; }
L_001DF16C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001DF178u) [[unlikely]] return; }
L_001DF178:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 65u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 256u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1268u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DF1E0; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 3;
L_001DF1E0:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26828u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF214u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF214u) [[unlikely]] return; }
L_001DF214:
    c.budget -= 1;
L_001DF218:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF3F8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] - 26827u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF270u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF270u) [[unlikely]] return; }
L_001DF270:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF3F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DF288:
    set32(c.r[2], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF2C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF390; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2B8u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF2B8u) [[unlikely]] return; }
L_001DF2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF390; } }
L_001DF2C0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DF330; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF300; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF2F4u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF2F4u) [[unlikely]] return; }
L_001DF2F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DF390; } }
L_001DF300:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF390; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF324u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF324u) [[unlikely]] return; }
L_001DF324:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DF390; } }
L_001DF330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF360; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF354u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF354u) [[unlikely]] return; }
L_001DF354:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001DF390; } }
L_001DF360:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF390; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF384u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF384u) [[unlikely]] return; }
L_001DF384:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DF390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF3E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF3D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF3F8; } }
L_001DF3B8:
    set32(c.r[2], 0u + 32u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF3F8; } }
    c.budget -= 1;
L_001DF3D0:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF3F8; } }
    c.budget -= 1;
L_001DF3E8:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001DF3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DF400u) [[unlikely]] return; }
L_001DF400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001DF408u) [[unlikely]] return; }
L_001DF408:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF41Cu); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001DF41Cu) [[unlikely]] return; }
L_001DF41C:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF460; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_001DF460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF46Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 125u, depth + 1u); else { c.pc = 0x001E59B0u; return; } if (c.pc != 0x001DF46Cu) [[unlikely]] return; }
L_001DF46C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 1268u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1084u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF4A8; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 2;
L_001DF4A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 96u, depth + 1u); else { c.pc = 0x001E52E0u; return; } if (c.pc != 0x001DF4B4u) [[unlikely]] return; }
L_001DF4B4:
    c.f[1] = ld32((c.r[17].w[0] + 1080u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF4D0; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_001DF4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF4D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001DF4D8u) [[unlikely]] return; }
L_001DF4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DF4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DF530; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DF518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF560; } }
L_001DF518:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 712u), c.r[3].w[0]);  if (t) { goto L_001DF560; } }
    c.budget -= 1;
L_001DF530:
    c.f[1] = ld32((c.r[4].w[0] + 8252u));
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[0]);  if (t) { goto L_001DF560; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8298u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8326u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF55Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DF55Cu) [[unlikely]] return; }
L_001DF55C:
    c.budget -= 1;
L_001DF560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DF570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DF608; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7F8; } }
    c.budget -= 1;
L_001DF5A8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5BCu); st32((c.r[18].w[0] + 728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001DF5BCu) [[unlikely]] return; }
L_001DF5BC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    set32(c.r[5], 0u - 261u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5F0u); st8((c.r[18].w[0] + 765u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 136u, depth + 1u); else { c.pc = 0x001E5C20u; return; } if (c.pc != 0x001DF5F0u) [[unlikely]] return; }
L_001DF5F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 334u, depth + 1u); else { c.pc = 0x001EF960u; return; } if (c.pc != 0x001DF5FCu) [[unlikely]] return; }
L_001DF5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7F8; } }
    c.budget -= 1;
L_001DF608:
    c.f[2] = ld32((c.r[18].w[0] + 8292u));
    c.f[1] = ld32((c.r[18].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 728u), c.f[1]);  if (t) { goto L_001DF7F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 1264u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001DF648; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001DF648:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF65Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001DF65Cu) [[unlikely]] return; }
L_001DF65C:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001DF698; } }
    set32(c.r[2], 0u + 2048u);
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 280u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF6E8; } }
    c.budget -= 1;
L_001DF698:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_001DF6B8; } }
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF6E8; } }
    c.budget -= 1;
L_001DF6B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_001DF6D8; } }
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DF6E8; } }
    c.budget -= 1;
L_001DF6D8:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 280u), 0u);
    st8((c.r[18].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001DF6E8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001DF708; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF704u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001DF704u) [[unlikely]] return; }
L_001DF704:
    c.budget -= 1;
L_001DF708:
    set32(c.r[6], c.r[16].w[0] + 12u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    st32((c.r[18].w[0] + 104u), c.f[0]);
    st32((c.r[18].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 728u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 732u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 736u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 740u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    st16((c.r[18].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 878u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[18].w[0] + 1268u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DF7A4u) [[unlikely]] return; }
L_001DF7A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7B0u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001DF7B0u) [[unlikely]] return; }
L_001DF7B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 1608u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 115u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF7D0; } }
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001DF7D0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001DF7F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DF7F8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7F4u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001DF7F4u) [[unlikely]] return; }
L_001DF7F4:
    c.budget -= 1;
L_001DF7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DF810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DF890; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DF878; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DF848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF898; } }
L_001DF848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF850u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DF850u) [[unlikely]] return; }
L_001DF850:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001DF868; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DF898; } }
L_001DF868:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DF898; } }
L_001DF878:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DF898; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001DF890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DF898u) [[unlikely]] return; }
L_001DF898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DF8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DFA38; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF9C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DF980; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFA68; } }
    c.budget -= 1;
L_001DF908:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_001DFA68; } }
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 9;
L_001DF940:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DFA68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 11;
L_001DF980:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DFA68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 11;
L_001DF9C0:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DFA68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8682u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF9F8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001DF9F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DFA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA10u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001DFA10u) [[unlikely]] return; }
L_001DFA10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001DFA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA28u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001DFA28u) [[unlikely]] return; }
L_001DFA28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA34u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001DFA34u) [[unlikely]] return; }
L_001DFA34:
    c.budget -= 1;
L_001DFA38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA44u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x001DFA44u) [[unlikely]] return; }
L_001DFA44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFA68; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA60u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001DFA60u) [[unlikely]] return; }
L_001DFA60:
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_001DFA68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DFB18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DFAB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DFA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFB60; } }
L_001DFA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DFA98u) [[unlikely]] return; }
L_001DFA98:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DFB68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DFAB8:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 736u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 740u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    c.budget -= 11;
L_001DFAE4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DFB68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 740u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DFB68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DFB18:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 740u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 740u), c.f[1]);  if (t) { goto L_001DFB50; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFB68; } }
    c.budget -= 1;
L_001DFB50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001DFB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DFB68u) [[unlikely]] return; }
L_001DFB68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 856u)));
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DFB90; } }
    st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001DFB90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DFBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBA4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001DFBA4u) [[unlikely]] return; }
L_001DFBA4:
    c.budget -= 1;
L_001DFBA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DFD10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DFC80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DFBE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DFBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFD10; } }
    c.budget -= 1;
L_001DFBE0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001DFBE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DFD10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    set32(c.r[2], 0u + 2048u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4096u);  if (t) { goto L_001DFC20; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
L_001DFC20:
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_001DFC40; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
    c.budget -= 1;
L_001DFC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_001DFC60; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
    c.budget -= 1;
L_001DFC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_001DFD10; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
    c.budget -= 1;
L_001DFC80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFD10; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 4096u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 8192u);  if (t) { goto L_001DFCB8; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
L_001DFCB8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001DFCD8; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
    c.budget -= 1;
L_001DFCD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_001DFCF8; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DFD10; } }
    c.budget -= 1;
L_001DFCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (t) { goto L_001DFD10; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001DFD10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFE10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFD38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 878u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DFE10; } }
L_001DFD38:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD44u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001DFD44u) [[unlikely]] return; }
L_001DFD44:
    c.f[1] = ld32((c.r[16].w[0] + 1224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DFD88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFD78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DFE10; } }
    c.budget -= 1;
L_001DFD78:
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] - 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DFE10; } }
L_001DFD88:
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DFDD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFDC0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DFE10; } }
    c.budget -= 1;
L_001DFDC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1232u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DFE10; } }
    c.budget -= 1;
L_001DFDD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFE00; } }
L_001DFDE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1234u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001DFE10; } }
    c.budget -= 1;
L_001DFE00:
    set32(c.r[3], ld32((c.r[16].w[0] + 1252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1234u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 4;
L_001DFE10:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001DFE1Cu) [[unlikely]] return; }
L_001DFE1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.budget -= 1;
L_001DFE20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DFE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE30u);  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001DFE30u) [[unlikely]] return; }
L_001DFE30:
    set32(c.r[6], ld32((c.r[16].w[0] + 1268u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1264u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DFEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFEE0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFED4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001DFED4u) [[unlikely]] return; }
L_001DFED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFEE8; } }
    c.budget -= 1;
L_001DFEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEE8u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001DFEE8u) [[unlikely]] return; }
L_001DFEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DFEFC:
    c.budget -= 1;
L_001DFF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 84u, depth + 1u); else { c.pc = 0x001E5100u; return; } if (c.pc != 0x001DFF1Cu) [[unlikely]] return; }
L_001DFF1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 711u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DFF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF30u);  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001DFF30u) [[unlikely]] return; }
L_001DFF30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFFB0; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DFF48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFF78; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_001DFF80; } }
    c.budget -= 1;
L_001DFF78:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001DFF80:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001DFF98u) [[unlikely]] return; }
L_001DFF98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.f[0]);  if (t) { [[clang::musttail]] return unit_0038(c, 5u, depth); } }
L_001DFFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001DFFB8u) [[unlikely]] return; }
L_001DFFB8:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { [[clang::musttail]] return unit_0038(c, 5u, depth); } }
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], 0u - 129u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001DFFE8:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001DFFF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.budget -= 1;
L_001DFFF4:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_0038(c, 1u, depth);
}

}
