#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009A[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0,
    0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0,
    227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388,
    0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00368000;
    case 2u: goto L_00368008;
    case 3u: goto L_00368098;
    case 4u: goto L_003680A8;
    case 5u: goto L_003680E0;
    case 6u: goto L_00368108;
    case 7u: goto L_00368110;
    case 8u: goto L_00368120;
    case 9u: goto L_00368180;
    case 10u: goto L_003681A4;
    case 11u: goto L_003681AC;
    case 12u: goto L_00368240;
    case 13u: goto L_00368290;
    case 14u: goto L_003682D8;
    case 15u: goto L_00368300;
    case 16u: goto L_0036831C;
    case 17u: goto L_00368328;
    case 18u: goto L_00368330;
    case 19u: goto L_0036834C;
    case 20u: goto L_0036838C;
    case 21u: goto L_00368398;
    case 22u: goto L_003683A0;
    case 23u: goto L_003683B8;
    case 24u: goto L_003683C4;
    case 25u: goto L_00368420;
    case 26u: goto L_0036843C;
    case 27u: goto L_00368454;
    case 28u: goto L_0036846C;
    case 29u: goto L_00368484;
    case 30u: goto L_00368490;
    case 31u: goto L_003684B4;
    case 32u: goto L_003684C0;
    case 33u: goto L_003684C8;
    case 34u: goto L_00368500;
    case 35u: goto L_003685D4;
    case 36u: goto L_00368600;
    case 37u: goto L_00368614;
    case 38u: goto L_0036867C;
    case 39u: goto L_003686A4;
    case 40u: goto L_003686F0;
    case 41u: goto L_00368740;
    case 42u: goto L_00368780;
    case 43u: goto L_003687C4;
    case 44u: goto L_003687DC;
    case 45u: goto L_003687E8;
    case 46u: goto L_003687F0;
    case 47u: goto L_003687F8;
    case 48u: goto L_00368818;
    case 49u: goto L_00368858;
    case 50u: goto L_003688C4;
    case 51u: goto L_003688DC;
    case 52u: goto L_003688E8;
    case 53u: goto L_003688F0;
    case 54u: goto L_003688F8;
    case 55u: goto L_00368918;
    case 56u: goto L_00368958;
    case 57u: goto L_003689C4;
    case 58u: goto L_003689DC;
    case 59u: goto L_003689E8;
    case 60u: goto L_003689F0;
    case 61u: goto L_003689F8;
    case 62u: goto L_00368A40;
    case 63u: goto L_00368A5C;
    case 64u: goto L_00368A70;
    case 65u: goto L_00368A80;
    case 66u: goto L_00368AB0;
    case 67u: goto L_00368AE0;
    case 68u: goto L_00368AF8;
    case 69u: goto L_00368B48;
    case 70u: goto L_00368B98;
    case 71u: goto L_00368C68;
    case 72u: goto L_00368CE8;
    case 73u: goto L_00368D80;
    case 74u: goto L_00368DE0;
    case 75u: goto L_00368E28;
    case 76u: goto L_00368E48;
    case 77u: goto L_00368F70;
    case 78u: goto L_00368FF8;
    case 79u: goto L_00369040;
    case 80u: goto L_00369068;
    case 81u: goto L_003690B0;
    case 82u: goto L_003690F8;
    case 83u: goto L_00369140;
    case 84u: goto L_003691F8;
    case 85u: goto L_00369270;
    case 86u: goto L_003692E8;
    case 87u: goto L_00369330;
    case 88u: goto L_003693B8;
    case 89u: goto L_00369400;
    case 90u: goto L_00369448;
    case 91u: goto L_00369490;
    case 92u: goto L_003694D8;
    case 93u: goto L_003694F8;
    case 94u: goto L_00369540;
    case 95u: goto L_00369568;
    case 96u: goto L_00369590;
    case 97u: goto L_003695B8;
    case 98u: goto L_003695E0;
    case 99u: goto L_00369608;
    case 100u: goto L_00369630;
    case 101u: goto L_00369678;
    case 102u: goto L_003696C0;
    case 103u: goto L_00369708;
    case 104u: goto L_00369750;
    case 105u: goto L_003697A0;
    case 106u: goto L_003697D8;
    case 107u: goto L_003697E0;
    case 108u: goto L_003697F8;
    case 109u: goto L_00369810;
    case 110u: goto L_00369834;
    case 111u: goto L_00369854;
    case 112u: goto L_00369870;
    case 113u: goto L_003698C4;
    case 114u: goto L_003698CC;
    case 115u: goto L_003698D4;
    case 116u: goto L_003698F0;
    case 117u: goto L_00369920;
    case 118u: goto L_0036997C;
    case 119u: goto L_00369990;
    case 120u: goto L_00369998;
    case 121u: goto L_003699A0;
    case 122u: goto L_003699A8;
    case 123u: goto L_003699C0;
    case 124u: goto L_00369A28;
    case 125u: goto L_00369A30;
    case 126u: goto L_00369A38;
    case 127u: goto L_00369A48;
    case 128u: goto L_00369A50;
    case 129u: goto L_00369A60;
    case 130u: goto L_00369A9C;
    case 131u: goto L_00369AB0;
    case 132u: goto L_00369AB8;
    case 133u: goto L_00369AC0;
    case 134u: goto L_00369AC8;
    case 135u: goto L_00369AE4;
    case 136u: goto L_00369AEC;
    case 137u: goto L_00369B08;
    case 138u: goto L_00369B18;
    case 139u: goto L_00369B40;
    case 140u: goto L_00369B50;
    case 141u: goto L_00369B60;
    case 142u: goto L_00369B70;
    case 143u: goto L_00369B80;
    case 144u: goto L_00369BC0;
    case 145u: goto L_00369BD0;
    case 146u: goto L_00369BE0;
    case 147u: goto L_00369C00;
    case 148u: goto L_00369C20;
    case 149u: goto L_00369D48;
    case 150u: goto L_00369D74;
    case 151u: goto L_00369DA0;
    case 152u: goto L_00369DA8;
    case 153u: goto L_00369DE8;
    case 154u: goto L_00369DF0;
    case 155u: goto L_00369E78;
    case 156u: goto L_00369E90;
    case 157u: goto L_00369EA0;
    case 158u: goto L_00369EA8;
    case 159u: goto L_00369F28;
    case 160u: goto L_00369F38;
    case 161u: goto L_00369F40;
    case 162u: goto L_0036A028;
    case 163u: goto L_0036A074;
    case 164u: goto L_0036A088;
    case 165u: goto L_0036A090;
    case 166u: goto L_0036A098;
    case 167u: goto L_0036A0C0;
    case 168u: goto L_0036A108;
    case 169u: goto L_0036A110;
    case 170u: goto L_0036A118;
    case 171u: goto L_0036A120;
    case 172u: goto L_0036A148;
    case 173u: goto L_0036A150;
    case 174u: goto L_0036A158;
    case 175u: goto L_0036A168;
    case 176u: goto L_0036A178;
    case 177u: goto L_0036A180;
    case 178u: goto L_0036A190;
    case 179u: goto L_0036A1A0;
    case 180u: goto L_0036A1B0;
    case 181u: goto L_0036A1C0;
    case 182u: goto L_0036A1D0;
    case 183u: goto L_0036A1E0;
    case 184u: goto L_0036A1E8;
    case 185u: goto L_0036A24C;
    case 186u: goto L_0036A27C;
    case 187u: goto L_0036A28C;
    case 188u: goto L_0036A29C;
    case 189u: goto L_0036A2AC;
    case 190u: goto L_0036A2BC;
    case 191u: goto L_0036A2D0;
    case 192u: goto L_0036A2F8;
    case 193u: goto L_0036A308;
    case 194u: goto L_0036A360;
    case 195u: goto L_0036A370;
    case 196u: goto L_0036A378;
    case 197u: goto L_0036A380;
    case 198u: goto L_0036A3A8;
    case 199u: goto L_0036A3F8;
    case 200u: goto L_0036A400;
    case 201u: goto L_0036A408;
    case 202u: goto L_0036A418;
    case 203u: goto L_0036A428;
    case 204u: goto L_0036A438;
    case 205u: goto L_0036A448;
    case 206u: goto L_0036A474;
    case 207u: goto L_0036A484;
    case 208u: goto L_0036A498;
    case 209u: goto L_0036A4A0;
    case 210u: goto L_0036A4A8;
    case 211u: goto L_0036A4B8;
    case 212u: goto L_0036A4F0;
    case 213u: goto L_0036A500;
    case 214u: goto L_0036A528;
    case 215u: goto L_0036A57C;
    case 216u: goto L_0036A590;
    case 217u: goto L_0036A598;
    case 218u: goto L_0036A5A0;
    case 219u: goto L_0036A5C8;
    case 220u: goto L_0036A60C;
    case 221u: goto L_0036A614;
    case 222u: goto L_0036A61C;
    case 223u: goto L_0036A62C;
    case 224u: goto L_0036A654;
    case 225u: goto L_0036A664;
    case 226u: goto L_0036A678;
    case 227u: goto L_0036A680;
    case 228u: goto L_0036A688;
    case 229u: goto L_0036A690;
    case 230u: goto L_0036A6A0;
    case 231u: goto L_0036A6B0;
    case 232u: goto L_0036A6C0;
    case 233u: goto L_0036A6D0;
    case 234u: goto L_0036A6E0;
    case 235u: goto L_0036A6E8;
    case 236u: goto L_0036A70C;
    case 237u: goto L_0036A720;
    case 238u: goto L_0036A728;
    case 239u: goto L_0036A78C;
    case 240u: goto L_0036A7BC;
    case 241u: goto L_0036A7CC;
    case 242u: goto L_0036A7DC;
    case 243u: goto L_0036A7EC;
    case 244u: goto L_0036A7FC;
    case 245u: goto L_0036A820;
    case 246u: goto L_0036A828;
    case 247u: goto L_0036A850;
    case 248u: goto L_0036A880;
    case 249u: goto L_0036A8A8;
    case 250u: goto L_0036A8B0;
    case 251u: goto L_0036A8E0;
    case 252u: goto L_0036A918;
    case 253u: goto L_0036A940;
    case 254u: goto L_0036A948;
    case 255u: goto L_0036A950;
    case 256u: goto L_0036A960;
    case 257u: goto L_0036A980;
    case 258u: goto L_0036A9C0;
    case 259u: goto L_0036A9D4;
    case 260u: goto L_0036A9DC;
    case 261u: goto L_0036A9E4;
    case 262u: goto L_0036A9EC;
    case 263u: goto L_0036A9F8;
    case 264u: goto L_0036AA00;
    case 265u: goto L_0036AA24;
    case 266u: goto L_0036AA30;
    case 267u: goto L_0036AA38;
    case 268u: goto L_0036AA90;
    case 269u: goto L_0036AA98;
    case 270u: goto L_0036AAB8;
    case 271u: goto L_0036AAC0;
    case 272u: goto L_0036AAC8;
    case 273u: goto L_0036AAD0;
    case 274u: goto L_0036AAF0;
    case 275u: goto L_0036AB40;
    case 276u: goto L_0036AB78;
    case 277u: goto L_0036ABA0;
    case 278u: goto L_0036ABF0;
    case 279u: goto L_0036AC30;
    case 280u: goto L_0036AC4C;
    case 281u: goto L_0036AC68;
    case 282u: goto L_0036AC84;
    case 283u: goto L_0036ACB0;
    case 284u: goto L_0036ACC4;
    case 285u: goto L_0036ACD8;
    case 286u: goto L_0036ACF4;
    case 287u: goto L_0036AD00;
    case 288u: goto L_0036AD1C;
    case 289u: goto L_0036AD28;
    case 290u: goto L_0036AD44;
    case 291u: goto L_0036AD70;
    case 292u: goto L_0036ADA0;
    case 293u: goto L_0036AE00;
    case 294u: goto L_0036AE10;
    case 295u: goto L_0036AE20;
    case 296u: goto L_0036AE30;
    case 297u: goto L_0036AE40;
    case 298u: goto L_0036AE50;
    case 299u: goto L_0036AEA4;
    case 300u: goto L_0036AEC8;
    case 301u: goto L_0036AEE0;
    case 302u: goto L_0036AF08;
    case 303u: goto L_0036AF50;
    case 304u: goto L_0036AF60;
    case 305u: goto L_0036B010;
    case 306u: goto L_0036B030;
    case 307u: goto L_0036B040;
    case 308u: goto L_0036B050;
    case 309u: goto L_0036B070;
    case 310u: goto L_0036B0BC;
    case 311u: goto L_0036B108;
    case 312u: goto L_0036B188;
    case 313u: goto L_0036B1B0;
    case 314u: goto L_0036B1DC;
    case 315u: goto L_0036B21C;
    case 316u: goto L_0036B250;
    case 317u: goto L_0036B280;
    case 318u: goto L_0036B2C8;
    case 319u: goto L_0036B348;
    case 320u: goto L_0036B37C;
    case 321u: goto L_0036B38C;
    case 322u: goto L_0036B3B8;
    case 323u: goto L_0036B3F4;
    case 324u: goto L_0036B40C;
    case 325u: goto L_0036B470;
    case 326u: goto L_0036B4BC;
    case 327u: goto L_0036B4D8;
    case 328u: goto L_0036B514;
    case 329u: goto L_0036B53C;
    case 330u: goto L_0036B598;
    case 331u: goto L_0036B5D4;
    case 332u: goto L_0036B5F0;
    case 333u: goto L_0036B610;
    case 334u: goto L_0036B630;
    case 335u: goto L_0036B698;
    case 336u: goto L_0036B6D0;
    case 337u: goto L_0036B6E0;
    case 338u: goto L_0036B730;
    case 339u: goto L_0036B738;
    case 340u: goto L_0036B7B8;
    case 341u: goto L_0036B7C0;
    case 342u: goto L_0036B7D0;
    case 343u: goto L_0036B7D8;
    case 344u: goto L_0036B7E0;
    case 345u: goto L_0036B7F0;
    case 346u: goto L_0036B82C;
    case 347u: goto L_0036B838;
    case 348u: goto L_0036B84C;
    case 349u: goto L_0036B858;
    case 350u: goto L_0036B860;
    case 351u: goto L_0036B868;
    case 352u: goto L_0036B890;
    case 353u: goto L_0036B8D8;
    case 354u: goto L_0036B8F0;
    case 355u: goto L_0036B908;
    case 356u: goto L_0036B918;
    case 357u: goto L_0036B930;
    case 358u: goto L_0036B938;
    case 359u: goto L_0036B948;
    case 360u: goto L_0036B960;
    case 361u: goto L_0036B980;
    case 362u: goto L_0036B9A0;
    case 363u: goto L_0036BA08;
    case 364u: goto L_0036BA40;
    case 365u: goto L_0036BA50;
    case 366u: goto L_0036BA7C;
    case 367u: goto L_0036BB40;
    case 368u: goto L_0036BB48;
    case 369u: goto L_0036BB50;
    case 370u: goto L_0036BB70;
    case 371u: goto L_0036BB90;
    case 372u: goto L_0036BBD4;
    case 373u: goto L_0036BBF0;
    case 374u: goto L_0036BC04;
    case 375u: goto L_0036BC0C;
    case 376u: goto L_0036BC14;
    case 377u: goto L_0036BC1C;
    case 378u: goto L_0036BC30;
    case 379u: goto L_0036BD30;
    case 380u: goto L_0036BD70;
    case 381u: goto L_0036BD9C;
    case 382u: goto L_0036BDB0;
    case 383u: goto L_0036BDE0;
    case 384u: goto L_0036BE00;
    case 385u: goto L_0036BE44;
    case 386u: goto L_0036BE64;
    case 387u: goto L_0036BE74;
    case 388u: goto L_0036BE7C;
    case 389u: goto L_0036BE84;
    case 390u: goto L_0036BE8C;
    case 391u: goto L_0036BEA0;
    default: bad_entry(c, 0x00368000u); return;
    }
L_00368000:
    set32(c.r[23], c.r[29].w[0] + 172u);
    set32(c.r[30], c.r[29].w[0] + 174u);
    c.budget -= 2;
L_00368008:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st16((c.r[29].w[0] + 160u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[29].w[0] + 176u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    set32(c.r[2], c.r[29].w[0] + 178u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[29].w[0] + 168u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368098u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008B(c, 153u, depth + 1u); else { c.pc = 0x0032DC60u; return; } if (c.pc != 0x00368098u) [[unlikely]] return; }
L_00368098:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368008u | kUnwind; return; } goto L_00368008; } }
L_003680A8:
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
L_003680E0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00368108; } }
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_00368100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368108; } }
L_00368100:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00368108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368110:
    st32((c.r[6].w[0]), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), 0u);
    c.budget -= 4;
L_00368120:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00368170; } }
    c.r[3].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00368150; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00368160; } }
L_00368150:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00368160:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368120u | kUnwind; return; } goto L_00368120; } }
L_00368170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00368180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681A4u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_009A(c, 7u, depth + 1u); else { c.pc = 0x00368110u; return; } if (c.pc != 0x003681A4u) [[unlikely]] return; }
L_003681A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 50u, depth + 1u); else { c.pc = 0x003A8790u; return; } if (c.pc != 0x003681ACu) [[unlikely]] return; }
L_003681AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003681CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_003681F0; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_003681F4; } }
L_003681CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[4].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_003681F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_003681F4:
    set32(c.r[4], 0u + 640u);
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0036821C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0036821C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00368240:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368290u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_00AA(c, 50u, depth + 1u); else { c.pc = 0x003A8790u; return; } if (c.pc != 0x00368290u) [[unlikely]] return; }
L_00368290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003682B0; } }
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[23].w[0]) >> 1));  if (t) { goto L_003682D0; } }
    set32(c.r[3], c.r[23].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003682D0; } }
L_003682B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[5], c.r[23].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_003682D0:
    set32(c.r[3], c.r[16].w[0] << 2);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 2;
L_003682D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003684C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368300u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_0007(c, 113u, depth + 1u); else { c.pc = 0x0011D9B0u; return; } if (c.pc != 0x00368300u) [[unlikely]] return; }
L_00368300:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003684A0; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036831Cu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036831Cu) [[unlikely]] return; }
L_0036831C:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00368378; } }
L_00368328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 5u, depth + 1u); else { c.pc = 0x003680E0u; return; } if (c.pc != 0x00368330u) [[unlikely]] return; }
L_00368330:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00368378; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036834Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 133u, depth + 1u); else { c.pc = 0x0011DF58u; return; } if (c.pc != 0x0036834Cu) [[unlikely]] return; }
L_0036834C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_00368360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[23].w[0]);  if (t) { goto L_00368368; } }
L_00368360:
    set32(c.r[19], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_00368368:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368328u | kUnwind; return; } goto L_00368328; } }
    c.budget -= 1;
L_00368378:
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036838Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x0036838Cu) [[unlikely]] return; }
L_0036838C:
    c.r[4].d[0] = c.r[30].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368398u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x00368398u) [[unlikely]] return; }
L_00368398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683A0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x003683A0u) [[unlikely]] return; }
L_003683A0:
    set32(c.r[21], c.r[21].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683B8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003683B8u) [[unlikely]] return; }
L_003683B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x003683C4u) [[unlikely]] return; }
L_003683C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00368460; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00368448; } }
    set32(c.r[2], 0u + 121u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00368428; } }
    set32(c.r[2], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00368400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368478; } }
L_00368400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 32680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368420u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00368420u) [[unlikely]] return; }
L_00368420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);  if (t) { goto L_00368498; } }
L_00368428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5082u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036843Cu); set32(c.r[4], c.r[4].w[0] + 19600u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x0036843Cu) [[unlikely]] return; }
L_0036843C:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);  if (t) { goto L_00368498; } }
L_00368448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368454u); set32(c.r[4], ld32((c.r[1].w[0] - 32676u)));  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00368454u) [[unlikely]] return; }
L_00368454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);  if (t) { goto L_00368498; } }
    c.budget -= 1;
L_00368460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036846Cu); set32(c.r[4], ld32((c.r[1].w[0] - 32672u)));  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x0036846Cu) [[unlikely]] return; }
L_0036846C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);  if (t) { goto L_00368498; } }
    c.budget -= 1;
L_00368478:
    c.r[4].d[0] = c.r[30].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368484u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x00368484u) [[unlikely]] return; }
L_00368484:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368490u); set32(c.r[4], c.r[4].w[0] + 19608u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00368490u) [[unlikely]] return; }
L_00368490:
    set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00368498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003682D8u | kUnwind; return; } goto L_003682D8; } }
L_003684A0:
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684B4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003684B4u) [[unlikely]] return; }
L_003684B4:
    c.r[4].d[0] = c.r[30].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684C0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x003684C0u) [[unlikely]] return; }
L_003684C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x003684C8u) [[unlikely]] return; }
L_003684C8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00368500:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[22].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00368540; } }
    c.r[3].d[0] = c.r[22].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00368548; } }
L_00368540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003686C0; } }
L_00368548:
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 30272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30274u);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 30276u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 30278u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 30280u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[22].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 30282u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 29632u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003685D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x003685D4u) [[unlikely]] return; }
L_003685D4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003686C0; } }
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[16].d[0] = c.r[16].d[0] << 48;
    c.r[23].d[0] = c.r[23].d[0] << 48;
    c.r[30].d[0] = c.r[21].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    c.budget -= 8;
L_00368600:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00368620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368614u);  if (depth < kMaxDepth) unit_009A(c, 9u, depth + 1u); else { c.pc = 0x00368180u; return; } if (c.pc != 0x00368614u) [[unlikely]] return; }
L_00368614:
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 3;
L_00368620:
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 55u);  if (t) { goto L_00368650; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00368650; } }
    set32(c.r[2], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_00368650; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00368650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368680; } }
L_00368650:
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 4u);
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036867Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_009A(c, 12u, depth + 1u); else { c.pc = 0x00368240u; return; } if (c.pc != 0x0036867Cu) [[unlikely]] return; }
L_0036867C:
    c.budget -= 1;
L_00368680:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] << 48;
    c.r[6].d[0] = c.r[20].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686A4u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 12u, depth + 1u); else { c.pc = 0x00368240u; return; } if (c.pc != 0x003686A4u) [[unlikely]] return; }
L_003686A4:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368600u | kUnwind; return; } goto L_00368600; } }
    c.budget -= 1;
L_003686C0:
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
L_003686F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00368A10; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 19616u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00368740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 32576u);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00368A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32512u);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 32736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 9;
L_00368780:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));  if (t) { goto L_003687D0; } }
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687C4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_009A(c, 9u, depth + 1u); else { c.pc = 0x00368180u; return; } if (c.pc != 0x003687C4u) [[unlikely]] return; }
L_003687C4:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_003687D0:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x003687DCu) [[unlikely]] return; }
L_003687DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687E8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003687E8u) [[unlikely]] return; }
L_003687E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687F0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x003687F0u) [[unlikely]] return; }
L_003687F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x003687F8u) [[unlikely]] return; }
L_003687F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368780u | kUnwind; return; } goto L_00368780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368A10; } }
    c.budget -= 1;
L_00368818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 32576u);
    set32(c.r[22], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00368A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 32736u);
    set32(c.r[23], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00368858:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[21].w[0] << 1);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 10;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { goto L_00368898; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368898; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 2;
L_00368898:
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_003688D0; } }
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688C4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_009A(c, 9u, depth + 1u); else { c.pc = 0x00368180u; return; } if (c.pc != 0x003688C4u) [[unlikely]] return; }
L_003688C4:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_003688D0:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x003688DCu) [[unlikely]] return; }
L_003688DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688E8u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003688E8u) [[unlikely]] return; }
L_003688E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x003688F0u) [[unlikely]] return; }
L_003688F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x003688F8u) [[unlikely]] return; }
L_003688F8:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368858u | kUnwind; return; } goto L_00368858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368A10; } }
    c.budget -= 1;
L_00368918:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 32576u);
    set32(c.r[22], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00368A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 32736u);
    set32(c.r[23], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00368958:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[21].w[0] << 1);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 10;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { goto L_00368998; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 5792u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368998; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 2;
L_00368998:
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_003689D0; } }
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689C4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_009A(c, 9u, depth + 1u); else { c.pc = 0x00368180u; return; } if (c.pc != 0x003689C4u) [[unlikely]] return; }
L_003689C4:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_003689D0:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x003689DCu) [[unlikely]] return; }
L_003689DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689E8u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003689E8u) [[unlikely]] return; }
L_003689E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x003689F0u) [[unlikely]] return; }
L_003689F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x003689F8u) [[unlikely]] return; }
L_003689F8:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368958u | kUnwind; return; } goto L_00368958; } }
    c.budget -= 1;
L_00368A10:
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
L_00368A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4960u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A5Cu); set32(c.r[6], 0u + 148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00368A5Cu) [[unlikely]] return; }
L_00368A5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A70u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00368A70u) [[unlikely]] return; }
L_00368A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4960u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AB0u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368AB0u) [[unlikely]] return; }
L_00368AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369818; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4960u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(43ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00369818; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19680u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00368AE0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368AF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00368B20; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00368B20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], 0u - 1u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368B48:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00368B70; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00368B70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], 0u - 1u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368B98:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00368C20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368BF0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368C40; } }
L_00368BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23716u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[1].w[0] + 4972u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368BF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23716u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4972u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368C20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 26u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368C40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], 0u - 1u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368C68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00368CA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368CC8; } }
    c.budget -= 1;
L_00368C88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368CA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368CC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368CE8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368D30; } }
    c.budget -= 1;
L_00368D00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4974u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368D30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00368D60; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368D60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368D80:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00368DB8; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4974u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00368DB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4974u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00368DE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00368E08; } }
    set32(c.r[2], 0u + 31u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00368E08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 35u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368E28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368E48:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00368F30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00368F00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00368ED8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368EA8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368F50; } }
L_00368E80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4978u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00368EA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4978u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368ED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 27u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368F00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4978u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368F50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368F70:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00368FB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00368F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368FD8; } }
    c.budget -= 1;
L_00368F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368FB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 28u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00368FD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00368FF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369020; } }
    set32(c.r[2], 0u + 12u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369068:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369090; } }
    set32(c.r[2], 0u + 14u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003690B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003690D8; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_003690D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003690F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369120; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 36u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369140:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00369180; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00369160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003691A8; } }
    c.budget -= 1;
L_00369160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 17u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 29u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_003691A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003691D8; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_003691D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003691F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369220; } }
    set32(c.r[2], 0u + 18u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369250; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369270:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369298; } }
    set32(c.r[2], 0u + 19u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003692C8; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_003692C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003692E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369310; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 36u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369330:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00369370; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00369350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369398; } }
    c.budget -= 1;
L_00369350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 21u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003693B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003693E0; } }
    set32(c.r[2], 0u + 22u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_003693E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369400:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369428; } }
    set32(c.r[2], 0u + 23u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369448:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369470; } }
    set32(c.r[2], 0u + 24u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369490:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003694B8; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_003694B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 36u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003694D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003694F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369520; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369590:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_003695B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_003695E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 33u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 34u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369630:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369658; } }
    set32(c.r[2], 0u + 35u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369678:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003696A0; } }
    set32(c.r[2], 0u + 36u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_003696A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003696C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003696E8; } }
    set32(c.r[2], 0u + 37u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_003696E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369708:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369730; } }
    set32(c.r[2], 0u + 38u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
L_00369730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369750:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369788; } }
    set32(c.r[2], 0u + 39u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 23u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369818; } }
    c.budget -= 1;
L_00369788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003697A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003697C0; } }
    set32(c.r[2], 0u + 39u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003697C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003697D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00369818; } }
L_003697E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_003697F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00369818; } }
L_00369810:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_00369818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4974u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00369838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369834u);  if (depth < kMaxDepth) unit_0098(c, 540u, depth + 1u); else { c.pc = 0x00363850u; return; } if (c.pc != 0x00369834u) [[unlikely]] return; }
L_00369834:
    c.budget -= 1;
L_00369838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4974u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00369858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369854u);  if (depth < kMaxDepth) unit_0098(c, 541u, depth + 1u); else { c.pc = 0x00363860u; return; } if (c.pc != 0x00369854u) [[unlikely]] return; }
L_00369854:
    c.budget -= 1;
L_00369858:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00369918; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003698E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003698B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003699A8; } }
    c.budget -= 1;
L_003698B0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698C4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x003698C4u) [[unlikely]] return; }
L_003698C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698CCu);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x003698CCu) [[unlikely]] return; }
L_003698CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x003698D4u) [[unlikely]] return; }
L_003698D4:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003699A8; } }
    c.budget -= 1;
L_003698E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698F0u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x003698F0u) [[unlikely]] return; }
L_003698F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003699A8; } }
    st32((c.r[1].w[0] + 5004u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003699A8; } }
    c.budget -= 1;
L_00369918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369920u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00369920u) [[unlikely]] return; }
L_00369920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003699A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23716u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[2].w[0] + 92u);
    st8((c.r[1].w[0] + 4978u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5000u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4972u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 92u));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00369990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036997Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036997Cu) [[unlikely]] return; }
L_0036997C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 19856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369990u); set32(c.r[4], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00369990u) [[unlikely]] return; }
L_00369990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369998u);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x00369998u) [[unlikely]] return; }
L_00369998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x003699A0u) [[unlikely]] return; }
L_003699A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699A8u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x003699A8u) [[unlikely]] return; }
L_003699A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003699C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 11u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00369BF8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00369BC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00369BB8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369B78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00369A68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00369A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369C00; } }
L_00369A18:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A28u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00369A28u) [[unlikely]] return; }
L_00369A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A30u);  if (depth < kMaxDepth) unit_0098(c, 609u, depth + 1u); else { c.pc = 0x00363ED0u; return; } if (c.pc != 0x00369A30u) [[unlikely]] return; }
L_00369A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A38u);  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x00369A38u) [[unlikely]] return; }
L_00369A38:
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A48u); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00369A48u) [[unlikely]] return; }
L_00369A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A50u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x002251C0u; return; } if (c.pc != 0x00369A50u) [[unlikely]] return; }
L_00369A50:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00369A60u) [[unlikely]] return; }
L_00369A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369C00; } }
L_00369A68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00369AA8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A9Cu);  if (depth < kMaxDepth) unit_0099(c, 7u, depth + 1u); else { c.pc = 0x003641A0u; return; } if (c.pc != 0x00369A9Cu) [[unlikely]] return; }
L_00369A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369C00; } }
    c.budget -= 1;
L_00369AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AB0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369AB0u) [[unlikely]] return; }
L_00369AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AB8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369AB8u) [[unlikely]] return; }
L_00369AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AC0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00369AC0u) [[unlikely]] return; }
L_00369AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AC8u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00369AC8u) [[unlikely]] return; }
L_00369AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369B00; } }
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AE4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00369AE4u) [[unlikely]] return; }
L_00369AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AECu);  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00369AECu) [[unlikely]] return; }
L_00369AEC:
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00369C00; } }
    c.budget -= 1;
L_00369B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B08u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x00369B08u) [[unlikely]] return; }
L_00369B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_00369C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B18u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00369B18u) [[unlikely]] return; }
L_00369B18:
    set32(c.r[3], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00369B40u) [[unlikely]] return; }
L_00369B40:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B50u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00369B50u) [[unlikely]] return; }
L_00369B50:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00369B60u) [[unlikely]] return; }
L_00369B60:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00369B70u) [[unlikely]] return; }
L_00369B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369C00; } }
L_00369B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B80u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369B80u) [[unlikely]] return; }
L_00369B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00369BA0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00369BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00369BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BC0u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x00369BC0u) [[unlikely]] return; }
L_00369BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369C00; } }
L_00369BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BD0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00369BD0u) [[unlikely]] return; }
L_00369BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BE0u);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x00369BE0u) [[unlikely]] return; }
L_00369BE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00369BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C00u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x00369C00u) [[unlikely]] return; }
L_00369C00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 102u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0036A910; } }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 100u);  if (t) { goto L_0036A910; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A910; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 91u);  if (t) { goto L_0036A8D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A878; } }
    set32(c.r[3], 0u + 90u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 25u);  if (t) { goto L_0036A848; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A818; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 23u);  if (t) { goto L_0036A808; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A718; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_0036A6D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A588; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_0036A520; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A518; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_0036A4E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A4B0; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0036A368; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A300; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0036A2C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A1D8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0036A1C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A080; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036A020; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00369DE0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00369DA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00369D98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_00369D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D48u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369D48u) [[unlikely]] return; }
L_00369D48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369D88; } }
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D74u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x002251C0u; return; } if (c.pc != 0x00369D74u) [[unlikely]] return; }
L_00369D74:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_00369D88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_00369D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DA0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369DA0u) [[unlikely]] return; }
L_00369DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DA8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369DA8u) [[unlikely]] return; }
L_00369DA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369DD0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_00369DD0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_00369DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DE8u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369DE8u) [[unlikely]] return; }
L_00369DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DF0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00369DF0u) [[unlikely]] return; }
L_00369DF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00369FB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00369F30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00369E98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00369E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_00369E48:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E78u); st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00369E78u) [[unlikely]] return; }
L_00369E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E90u); st32((c.r[28].w[0] - 23712u), 0u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00369E90u) [[unlikely]] return; }
L_00369E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_00369E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EA0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00369EA0u) [[unlikely]] return; }
L_00369EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EA8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00369EA8u) [[unlikely]] return; }
L_00369EA8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369EF8; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22500u), c.r[2].w[0]);  if (t) { goto L_0036A960; } }
L_00369EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F28u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00369F28u) [[unlikely]] return; }
L_00369F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_00369F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F38u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00369F38u) [[unlikely]] return; }
L_00369F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F40u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00369F40u) [[unlikely]] return; }
L_00369F40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369F98; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22500u), c.r[2].w[0]);  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_00369F98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_00369FB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u - 255u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00369FF8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00369FF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_00369FF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A028u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A028u) [[unlikely]] return; }
L_0036A028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A074u); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0036A074u) [[unlikely]] return; }
L_0036A074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A088u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A088u) [[unlikely]] return; }
L_0036A088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A090u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A090u) [[unlikely]] return; }
L_0036A090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A098u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0036A098u) [[unlikely]] return; }
L_0036A098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036A0B8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0C0u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0036A0C0u) [[unlikely]] return; }
L_0036A0C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036A128; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A0E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A0E8:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A108u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A108u) [[unlikely]] return; }
L_0036A108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A110u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A110u) [[unlikely]] return; }
L_0036A110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A118u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A118u) [[unlikely]] return; }
L_0036A118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A120u);  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0036A120u) [[unlikely]] return; }
L_0036A120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A128:
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A148u); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A148u) [[unlikely]] return; }
L_0036A148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A150u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A150u) [[unlikely]] return; }
L_0036A150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A158u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0036A158u) [[unlikely]] return; }
L_0036A158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0036A170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A168u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A168u) [[unlikely]] return; }
L_0036A168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A178; } }
L_0036A170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A178u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0036A178u) [[unlikely]] return; }
L_0036A178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A180u);  if (depth < kMaxDepth) unit_0098(c, 559u, depth + 1u); else { c.pc = 0x00363A30u; return; } if (c.pc != 0x0036A180u) [[unlikely]] return; }
L_0036A180:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A190u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A190u) [[unlikely]] return; }
L_0036A190:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1A0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A1A0u) [[unlikely]] return; }
L_0036A1A0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A1B0u) [[unlikely]] return; }
L_0036A1B0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A1C0u) [[unlikely]] return; }
L_0036A1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1D0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A1D0u) [[unlikely]] return; }
L_0036A1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369DA8u | kUnwind; return; } goto L_00369DA8; } }
L_0036A1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1E0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A1E0u) [[unlikely]] return; }
L_0036A1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1E8u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037B600u; return; } if (c.pc != 0x0036A1E8u) [[unlikely]] return; }
L_0036A1E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036A260; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A210; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].d[0] = c.r[2].d[0] | 60535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 4995u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 5002u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A24Cu); st8((c.r[1].w[0] + 4980u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0036A24Cu) [[unlikely]] return; }
L_0036A24C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23712u), c.r[2].w[0]);  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A260:
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A27Cu); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 559u, depth + 1u); else { c.pc = 0x00363A30u; return; } if (c.pc != 0x0036A27Cu) [[unlikely]] return; }
L_0036A27C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A28Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A28Cu) [[unlikely]] return; }
L_0036A28C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A29Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A29Cu) [[unlikely]] return; }
L_0036A29C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A2ACu) [[unlikely]] return; }
L_0036A2AC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A2BCu) [[unlikely]] return; }
L_0036A2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2D0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A2D0u) [[unlikely]] return; }
L_0036A2D0:
    set32(c.r[3], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A2F8u) [[unlikely]] return; }
L_0036A2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A308u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A308u) [[unlikely]] return; }
L_0036A308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A360u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0036A360u) [[unlikely]] return; }
L_0036A360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A370u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A370u) [[unlikely]] return; }
L_0036A370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A378u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A378u) [[unlikely]] return; }
L_0036A378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A380u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0036A380u) [[unlikely]] return; }
L_0036A380:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036A3A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3A8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0036A3A8u) [[unlikely]] return; }
L_0036A3A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036A450; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A3D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A3D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3F8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A3F8u) [[unlikely]] return; }
L_0036A3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A400u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A400u) [[unlikely]] return; }
L_0036A400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A408u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A408u) [[unlikely]] return; }
L_0036A408:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A418u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A418u) [[unlikely]] return; }
L_0036A418:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A428u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A428u) [[unlikely]] return; }
L_0036A428:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A438u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A438u) [[unlikely]] return; }
L_0036A438:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A448u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A448u) [[unlikely]] return; }
L_0036A448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A474u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0036A474u) [[unlikely]] return; }
L_0036A474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0036A490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A484u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A484u) [[unlikely]] return; }
L_0036A484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A498; } }
    c.budget -= 1;
L_0036A490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A498u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0036A498u) [[unlikely]] return; }
L_0036A498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4A0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A4A0u) [[unlikely]] return; }
L_0036A4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4A8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A4A8u) [[unlikely]] return; }
L_0036A4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4B8u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A4B8u) [[unlikely]] return; }
L_0036A4B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4F0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0036A4F0u) [[unlikely]] return; }
L_0036A4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A500u);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036A500u) [[unlikely]] return; }
L_0036A500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0036A960; } }
L_0036A520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A528u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A528u) [[unlikely]] return; }
L_0036A528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    set32(c.r[2], 0u + 16u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A57Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0036A57Cu) [[unlikely]] return; }
L_0036A57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A590u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A590u) [[unlikely]] return; }
L_0036A590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A598u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0036A598u) [[unlikely]] return; }
L_0036A598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5A0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A5A0u) [[unlikely]] return; }
L_0036A5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036A5C0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5C8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0036A5C8u) [[unlikely]] return; }
L_0036A5C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036A638; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A5F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A60Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A60Cu) [[unlikely]] return; }
L_0036A60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A614u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A614u) [[unlikely]] return; }
L_0036A614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A61Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A61Cu) [[unlikely]] return; }
L_0036A61C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A62Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A62Cu) [[unlikely]] return; }
L_0036A62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A638:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A654u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0036A654u) [[unlikely]] return; }
L_0036A654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0036A670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A664u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A664u) [[unlikely]] return; }
L_0036A664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A678; } }
    c.budget -= 1;
L_0036A670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A678u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0036A678u) [[unlikely]] return; }
L_0036A678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A680u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A680u) [[unlikely]] return; }
L_0036A680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A688u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036A688u) [[unlikely]] return; }
L_0036A688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A690u);  if (depth < kMaxDepth) unit_0098(c, 559u, depth + 1u); else { c.pc = 0x00363A30u; return; } if (c.pc != 0x0036A690u) [[unlikely]] return; }
L_0036A690:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A6A0u) [[unlikely]] return; }
L_0036A6A0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6B0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A6B0u) [[unlikely]] return; }
L_0036A6B0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A6C0u) [[unlikely]] return; }
L_0036A6C0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A6D0u) [[unlikely]] return; }
L_0036A6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6E0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A6E0u) [[unlikely]] return; }
L_0036A6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6E8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0036A6E8u) [[unlikely]] return; }
L_0036A6E8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A70Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0036A70Cu) [[unlikely]] return; }
L_0036A70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A720u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A720u) [[unlikely]] return; }
L_0036A720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A728u);  if (depth < kMaxDepth) unit_009F(c, 22u, depth + 1u); else { c.pc = 0x0037C1C0u; return; } if (c.pc != 0x0036A728u) [[unlikely]] return; }
L_0036A728:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036A7A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A750; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].d[0] = c.r[2].d[0] | 60535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 4995u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 5002u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A78Cu); st8((c.r[1].w[0] + 4980u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0036A78Cu) [[unlikely]] return; }
L_0036A78C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23712u), c.r[2].w[0]);  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A7A0:
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7BCu); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 559u, depth + 1u); else { c.pc = 0x00363A30u; return; } if (c.pc != 0x0036A7BCu) [[unlikely]] return; }
L_0036A7BC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A7CCu) [[unlikely]] return; }
L_0036A7CC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7DCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A7DCu) [[unlikely]] return; }
L_0036A7DC:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0036A7ECu) [[unlikely]] return; }
L_0036A7EC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036A7FCu) [[unlikely]] return; }
L_0036A7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A808:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A820u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A820u) [[unlikely]] return; }
L_0036A820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A828u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0036A828u) [[unlikely]] return; }
L_0036A828:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A960; } }
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A850u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A850u) [[unlikely]] return; }
L_0036A850:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A880u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A880u) [[unlikely]] return; }
L_0036A880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036A8A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8A8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A8A8u) [[unlikely]] return; }
L_0036A8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8B0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0036A8B0u) [[unlikely]] return; }
L_0036A8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A960; } }
L_0036A8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8E0u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A8E0u) [[unlikely]] return; }
L_0036A8E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036A960; } }
    c.budget -= 1;
L_0036A910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A918u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0036A918u) [[unlikely]] return; }
L_0036A918:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036A958; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A940u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x0036A940u) [[unlikely]] return; }
L_0036A940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A948u);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0036A948u) [[unlikely]] return; }
L_0036A948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A950u);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036A950u) [[unlikely]] return; }
L_0036A950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A960; } }
L_0036A958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A960u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036A960u) [[unlikely]] return; }
L_0036A960:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0036AAD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036A9C0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9D4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x0036A9D4u) [[unlikely]] return; }
L_0036A9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9DCu);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0036A9DCu) [[unlikely]] return; }
L_0036A9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9E4u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0036A9E4u) [[unlikely]] return; }
L_0036A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9ECu);  if (depth < kMaxDepth) unit_0049(c, 14u, depth + 1u); else { c.pc = 0x00224190u; return; } if (c.pc != 0x0036A9ECu) [[unlikely]] return; }
L_0036A9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AAD8; } }
    c.budget -= 1;
L_0036A9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA00u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0036AA00u) [[unlikely]] return; }
L_0036AA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036AAD8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA24u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  call(c, 0x0117F440u, depth + 1u); if (c.pc != 0x0036AA24u) [[unlikely]] return; }
L_0036AA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AAD8; } }
    c.budget -= 1;
L_0036AA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA38u);  call(c, 0x0117F470u, depth + 1u); if (c.pc != 0x0036AA38u) [[unlikely]] return; }
L_0036AA38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0036AA80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0036AA70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036AA68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AAD8; } }
    c.budget -= 1;
L_0036AA68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5000u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0036AA70:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AAD8; } }
L_0036AA80:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AAD8; } }
L_0036AA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA98u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0036AA98u) [[unlikely]] return; }
L_0036AA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036AAD8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AAD8; } }
    c.budget -= 1;
L_0036AAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AAC0u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0036AAC0u) [[unlikely]] return; }
L_0036AAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0036AAD8; } }
L_0036AAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AAD0u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0036AAD0u) [[unlikely]] return; }
L_0036AAD0:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0036AAD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036AAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0036AB80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0036AB58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036AB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AB88; } }
    c.budget -= 1;
L_0036AB30:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB40u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0089(c, 230u, depth + 1u); else { c.pc = 0x00326480u; return; } if (c.pc != 0x0036AB40u) [[unlikely]] return; }
L_0036AB40:
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036AB88; } }
    c.budget -= 1;
L_0036AB58:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23020u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036AB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036AB88; } }
    c.budget -= 1;
L_0036AB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB78u);  if (depth < kMaxDepth) unit_0089(c, 240u, depth + 1u); else { c.pc = 0x00326550u; return; } if (c.pc != 0x0036AB78u) [[unlikely]] return; }
L_0036AB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AB88; } }
L_0036AB80:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0036AB88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036ABA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0036AD78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036AD50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ABE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD80; } }
    c.budget -= 1;
L_0036ABE0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ABF0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0089(c, 230u, depth + 1u); else { c.pc = 0x00326480u; return; } if (c.pc != 0x0036ABF0u) [[unlikely]] return; }
L_0036ABF0:
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4996u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4980u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 22844u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036AC38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 12080u);
    set32(c.r[5], c.r[5].w[0] + 4995u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC30u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0036AC30u) [[unlikely]] return; }
L_0036AC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AC50; } }
L_0036AC38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 12080u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC4Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036AC4Cu) [[unlikely]] return; }
L_0036AC4C:
    c.budget -= 1;
L_0036AC50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 12336u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC68u); st8((c.r[28].w[0] - 22828u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036AC68u) [[unlikely]] return; }
L_0036AC68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11824u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[28].w[0] - 22832u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC84u); st16((c.r[28].w[0] - 22836u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036AC84u) [[unlikely]] return; }
L_0036AC84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2064u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[28].w[0] - 22864u), 0u);
    st32((c.r[28].w[0] - 22868u), 0u);
    st32((c.r[28].w[0] - 22872u), 0u);
    st32((c.r[28].w[0] - 22848u), 0u);
    st32((c.r[28].w[0] - 22852u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACB0u); st8((c.r[28].w[0] - 23728u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036ACB0u) [[unlikely]] return; }
L_0036ACB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACC4u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036ACC4u) [[unlikely]] return; }
L_0036ACC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[28].w[0] - 22840u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 32624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACD8u); st8((c.r[28].w[0] - 22856u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0036ACD8u) [[unlikely]] return; }
L_0036ACD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 32624u);
    set32(c.r[5], c.r[5].w[0] + 12096u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACF4u); set32(c.r[7], 0u + 240u);  if (depth < kMaxDepth) unit_0084(c, 479u, depth + 1u); else { c.pc = 0x00313E80u; return; } if (c.pc != 0x0036ACF4u) [[unlikely]] return; }
L_0036ACF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD00u); set32(c.r[4], c.r[4].w[0] - 32664u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0036AD00u) [[unlikely]] return; }
L_0036AD00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 32664u);
    set32(c.r[5], c.r[5].w[0] + 11568u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD1Cu); set32(c.r[7], 0u + 256u);  if (depth < kMaxDepth) unit_0084(c, 479u, depth + 1u); else { c.pc = 0x00313E80u; return; } if (c.pc != 0x0036AD1Cu) [[unlikely]] return; }
L_0036AD1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD28u); set32(c.r[4], c.r[4].w[0] - 32648u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0036AD28u) [[unlikely]] return; }
L_0036AD28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 32648u);
    set32(c.r[5], c.r[5].w[0] + 11312u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD44u); set32(c.r[7], 0u + 256u);  if (depth < kMaxDepth) unit_0084(c, 479u, depth + 1u); else { c.pc = 0x00313E80u; return; } if (c.pc != 0x0036AD44u) [[unlikely]] return; }
L_0036AD44:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22860u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AD80; } }
L_0036AD50:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23020u));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036AD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0036AD80; } }
L_0036AD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD70u);  if (depth < kMaxDepth) unit_0089(c, 240u, depth + 1u); else { c.pc = 0x00326550u; return; } if (c.pc != 0x0036AD70u) [[unlikely]] return; }
L_0036AD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD80; } }
L_0036AD78:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0036AD80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036ADA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036ADD0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4972u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23716u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4978u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036ADE0; } }
    c.budget -= 1;
L_0036ADD0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23716u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[1].w[0] + 4972u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0036ADE0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4976u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));  c.pc = t; return; }
L_0036AE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0036AE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0036AE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0036AE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0036AE40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0036AE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0036AF30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0036AF00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0036AEC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AF38; } }
    c.budget -= 1;
L_0036AE98:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AEA4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036AEA4u) [[unlikely]] return; }
L_0036AEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036AF38; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AF38; } }
L_0036AEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AEC8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0036AEC8u) [[unlikely]] return; }
L_0036AEC8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AEE0u);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0036AEE0u) [[unlikely]] return; }
L_0036AEE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AF38; } }
L_0036AF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF08u);  if (depth < kMaxDepth) unit_0085(c, 36u, depth + 1u); else { c.pc = 0x00314440u; return; } if (c.pc != 0x0036AF08u) [[unlikely]] return; }
L_0036AF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036AF40; } }
L_0036AF18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0036AF30:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0036AF38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0036AF40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036AF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0036AF60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0036AF98; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4972u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_0036AF88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036AFA8; } }
L_0036AF88:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036AFA8; } }
L_0036AF98:
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036AFA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4974u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4976u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4979u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4978u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 5648u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0036B010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 32416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036B030:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036B040:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0036B050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036B070:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29096u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[21], c.r[22].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0BCu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036B0BCu) [[unlikely]] return; }
L_0036B0BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] - 19344u);
    set32(c.r[2], c.r[2].w[0] - 31303u);
    st32((c.r[22].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[22].w[0] + 88u), 0u);
    st32((c.r[22].w[0] + 84u), 0u);
    st32((c.r[22].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036B248; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0036B108:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[20], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 31304u);
    set32(c.r[2], c.r[2].w[0] - 31328u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
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
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B188u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036B188u) [[unlikely]] return; }
L_0036B188:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[4], c.r[20].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[20].w[0] + 16u);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1B0u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036B1B0u) [[unlikely]] return; }
L_0036B1B0:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1DCu);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0036B1DCu) [[unlikely]] return; }
L_0036B1DC:
    c.f[0] = ld32((c.r[20].w[0]));
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
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0036B220; } }
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B21Cu); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0036B21Cu) [[unlikely]] return; }
L_0036B21C:
    c.budget -= 1;
L_0036B220:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B108u | kUnwind; return; } goto L_0036B108; } }
    c.budget -= 1;
L_0036B248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B250u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 317u, depth + 1u); else { c.pc = 0x0036B280u; return; } if (c.pc != 0x0036B250u) [[unlikely]] return; }
L_0036B250:
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
L_0036B280:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[22].w[0] + 304u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036B438; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0036B2C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[20], c.r[16].w[0] + 16u);  if (t) { goto L_0036B420; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036B400; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[20].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 56u)));
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    st8((c.r[20].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 59u)));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B358; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    st8((c.r[20].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B348u); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036B348u) [[unlikely]] return; }
L_0036B348:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0036B3D8; } }
    c.budget -= 1;
L_0036B358:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B37Cu); st32((c.r[20].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036B37Cu) [[unlikely]] return; }
L_0036B37C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B38Cu); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036B38Cu) [[unlikely]] return; }
L_0036B38C:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3B8u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0036B3B8u) [[unlikely]] return; }
L_0036B3B8:
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_0036B3D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0036B420; } }
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3F4u); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0036B3F4u) [[unlikely]] return; }
L_0036B3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B420; } }
    c.budget -= 1;
L_0036B400:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B40Cu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0036B40Cu) [[unlikely]] return; }
L_0036B40C:
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_0036B420:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B2C8u | kUnwind; return; } goto L_0036B2C8; } }
L_0036B438:
    set32(c.r[3], 0u + 1u);
    st8((c.r[22].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
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
L_0036B470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0036B5F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 73u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 16u);  if (t) { goto L_0036B540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4BCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036B4BCu) [[unlikely]] return; }
L_0036B4BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B518; } }
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4D8u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036B4D8u) [[unlikely]] return; }
L_0036B4D8:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B514u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0036B514u) [[unlikely]] return; }
L_0036B514:
    c.budget -= 1;
L_0036B518:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B53Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0036B53Cu) [[unlikely]] return; }
L_0036B53C:
    c.budget -= 1;
L_0036B540:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B5F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 139u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 80u);  if (t) { goto L_0036B5F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036B5F0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B5D8; } }
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B598u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036B598u) [[unlikely]] return; }
L_0036B598:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5D4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0036B5D4u) [[unlikely]] return; }
L_0036B5D4:
    c.budget -= 1;
L_0036B5D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5F0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0036B5F0u) [[unlikely]] return; }
L_0036B5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036B610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036B630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], c.r[8].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] - 31264u);
    set32(c.r[2], c.r[2].w[0] - 31184u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29064u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B698u); st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036B698u) [[unlikely]] return; }
L_0036B698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], 0u + 550u);
    set32(c.r[3], c.r[3].w[0] - 18288u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6D0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 337u, depth + 1u); else { c.pc = 0x0036B6E0u; return; } if (c.pc != 0x0036B6D0u) [[unlikely]] return; }
L_0036B6D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036B6E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0036B840; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036B7F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B850; } }
L_0036B728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B730u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036B730u) [[unlikely]] return; }
L_0036B730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B738u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0036B738u) [[unlikely]] return; }
L_0036B738:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036B7A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], 0u + 20u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 72u), c.f[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0036B850; } }
    c.budget -= 1;
L_0036B7A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 3136u);  if (t) { goto L_0036B850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7B8u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036B7B8u) [[unlikely]] return; }
L_0036B7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7C0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0036B7C0u) [[unlikely]] return; }
L_0036B7C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7D0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036B7D0u) [[unlikely]] return; }
L_0036B7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7D8u); set32(c.r[4], c.r[16].w[0] + 2944u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036B7D8u) [[unlikely]] return; }
L_0036B7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7E0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0036B7E0u) [[unlikely]] return; }
L_0036B7E0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7F0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0036B7F0u) [[unlikely]] return; }
L_0036B7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B850; } }
L_0036B7F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036B820; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036B820:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B82Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0036B82Cu) [[unlikely]] return; }
L_0036B82C:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B838u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0036B838u) [[unlikely]] return; }
L_0036B838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B850; } }
L_0036B840:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B84Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0036B84Cu) [[unlikely]] return; }
L_0036B84C:
    c.budget -= 1;
L_0036B850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B858u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036B858u) [[unlikely]] return; }
L_0036B858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B860u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036B860u) [[unlikely]] return; }
L_0036B860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B868u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036B868u) [[unlikely]] return; }
L_0036B868:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036B890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0036B960; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_0036B8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8D8u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036B8D8u) [[unlikely]] return; }
L_0036B8D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8F0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0036B8F0u) [[unlikely]] return; }
L_0036B8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_0036B960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B908u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036B908u) [[unlikely]] return; }
L_0036B908:
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B918u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036B918u) [[unlikely]] return; }
L_0036B918:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B930u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0036B930u) [[unlikely]] return; }
L_0036B930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B938u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036B938u) [[unlikely]] return; }
L_0036B938:
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B948u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0036B948u) [[unlikely]] return; }
L_0036B948:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B960u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0036B960u) [[unlikely]] return; }
L_0036B960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036B980:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036B9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], c.r[8].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] - 31264u);
    set32(c.r[2], c.r[2].w[0] - 31184u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29064u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA08u); st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036BA08u) [[unlikely]] return; }
L_0036BA08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], 0u + 370u);
    set32(c.r[3], c.r[3].w[0] - 18288u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA40u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 337u, depth + 1u); else { c.pc = 0x0036B6E0u; return; } if (c.pc != 0x0036BA40u) [[unlikely]] return; }
L_0036BA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036BB38; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA7Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036BA7Cu) [[unlikely]] return; }
L_0036BA7C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036BAA8; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 7;
L_0036BAA8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036BAD0; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 6;
L_0036BAD0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036BB10; } }
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 12;
L_0036BB10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0036BB38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036BB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB40u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036BB40u) [[unlikely]] return; }
L_0036BB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB48u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036BB48u) [[unlikely]] return; }
L_0036BB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB50u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036BB50u) [[unlikely]] return; }
L_0036BB50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036BB70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036BB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 31120u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29096u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBD4u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036BBD4u) [[unlikely]] return; }
L_0036BBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 17104u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBF0u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036BBF0u) [[unlikely]] return; }
L_0036BBF0:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC04u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036BC04u) [[unlikely]] return; }
L_0036BC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC0Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036BC0Cu) [[unlikely]] return; }
L_0036BC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC14u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036BC14u) [[unlikely]] return; }
L_0036BC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 378u, depth + 1u); else { c.pc = 0x0036BC30u; return; } if (c.pc != 0x0036BC1Cu) [[unlikely]] return; }
L_0036BC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036BC30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036BCD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036BC78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036BC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BD18; } }
L_0036BC58:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 560u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0036BD18; } }
L_0036BC78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036BD18; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 40u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0036BD18; } }
    c.budget -= 1;
L_0036BCD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036BD08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_0036BD20; } }
L_0036BD08:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0036BD18:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036BD20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BD30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 92u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 27748u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 27746u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036BDC0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0036BD70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[19].w[0] + 192u);  if (t) { goto L_0036BDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD9Cu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0036BD9Cu) [[unlikely]] return; }
L_0036BD9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDB0u); c.f[12] = ld32((c.r[19].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0036BDB0u) [[unlikely]] return; }
L_0036BDB0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BD70u | kUnwind; return; } goto L_0036BD70; } }
L_0036BDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036BDE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 31104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036BE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 31088u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29096u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE44u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0036BE44u) [[unlikely]] return; }
L_0036BE44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - 16288u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE64u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0036BE64u) [[unlikely]] return; }
L_0036BE64:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE74u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0036BE74u) [[unlikely]] return; }
L_0036BE74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE7Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0036BE7Cu) [[unlikely]] return; }
L_0036BE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE84u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0036BE84u) [[unlikely]] return; }
L_0036BE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 391u, depth + 1u); else { c.pc = 0x0036BEA0u; return; } if (c.pc != 0x0036BE8Cu) [[unlikely]] return; }
L_0036BE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036BEA0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { [[clang::musttail]] return unit_009B(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036BFB0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036BF58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036BEF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036BEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
    c.budget -= 1;
L_0036BEE0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 310u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
L_0036BEF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 50u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
    c.budget -= 1;
L_0036BF58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036BF98; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 200u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
    c.budget -= 1;
L_0036BF98:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
    c.budget -= 1;
L_0036BFB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { [[clang::musttail]] return unit_009B(c, 3u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 40u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 13;
    [[clang::musttail]] return unit_009B(c, 1u, depth);
}

}
