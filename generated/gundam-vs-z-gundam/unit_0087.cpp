#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0087[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0,
    0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 354, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 382, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388,
    0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 392, 393, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0,
    400, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 404, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0,
    407, 0, 0, 408, 409, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 419, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0,
    0, 425, 0, 426, 427, 428, 0, 429, 0, 0, 0, 430, 431, 432, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 436, 437, 0, 0, 438, 0, 0, 439,
    440, 0, 0, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 0, 452, 0, 0, 0, 453, 454, 455, 0, 456, 457, 0, 458, 459, 460, 461, 462, 463,
};

void unit_0087(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0031C000;
    case 2u: goto L_0031C01C;
    case 3u: goto L_0031C038;
    case 4u: goto L_0031C040;
    case 5u: goto L_0031C048;
    case 6u: goto L_0031C050;
    case 7u: goto L_0031C088;
    case 8u: goto L_0031C0A0;
    case 9u: goto L_0031C0F8;
    case 10u: goto L_0031C104;
    case 11u: goto L_0031C138;
    case 12u: goto L_0031C144;
    case 13u: goto L_0031C170;
    case 14u: goto L_0031C190;
    case 15u: goto L_0031C1F8;
    case 16u: goto L_0031C20C;
    case 17u: goto L_0031C224;
    case 18u: goto L_0031C234;
    case 19u: goto L_0031C23C;
    case 20u: goto L_0031C240;
    case 21u: goto L_0031C270;
    case 22u: goto L_0031C2E4;
    case 23u: goto L_0031C328;
    case 24u: goto L_0031C340;
    case 25u: goto L_0031C3A4;
    case 26u: goto L_0031C3C0;
    case 27u: goto L_0031C3D0;
    case 28u: goto L_0031C3D8;
    case 29u: goto L_0031C3F8;
    case 30u: goto L_0031C410;
    case 31u: goto L_0031C43C;
    case 32u: goto L_0031C468;
    case 33u: goto L_0031C480;
    case 34u: goto L_0031C524;
    case 35u: goto L_0031C53C;
    case 36u: goto L_0031C544;
    case 37u: goto L_0031C560;
    case 38u: goto L_0031C578;
    case 39u: goto L_0031C580;
    case 40u: goto L_0031C5B0;
    case 41u: goto L_0031C5C4;
    case 42u: goto L_0031C5D0;
    case 43u: goto L_0031C60C;
    case 44u: goto L_0031C640;
    case 45u: goto L_0031C650;
    case 46u: goto L_0031C680;
    case 47u: goto L_0031C6E8;
    case 48u: goto L_0031C6F8;
    case 49u: goto L_0031C728;
    case 50u: goto L_0031C7B8;
    case 51u: goto L_0031C7E0;
    case 52u: goto L_0031C7F0;
    case 53u: goto L_0031C800;
    case 54u: goto L_0031C81C;
    case 55u: goto L_0031C830;
    case 56u: goto L_0031C844;
    case 57u: goto L_0031C868;
    case 58u: goto L_0031C880;
    case 59u: goto L_0031C8EC;
    case 60u: goto L_0031C8F4;
    case 61u: goto L_0031C910;
    case 62u: goto L_0031C980;
    case 63u: goto L_0031C990;
    case 64u: goto L_0031C9A0;
    case 65u: goto L_0031C9E0;
    case 66u: goto L_0031CA20;
    case 67u: goto L_0031CAA8;
    case 68u: goto L_0031CC28;
    case 69u: goto L_0031CC80;
    case 70u: goto L_0031CCFC;
    case 71u: goto L_0031CD34;
    case 72u: goto L_0031CD50;
    case 73u: goto L_0031CD84;
    case 74u: goto L_0031CD98;
    case 75u: goto L_0031CDC0;
    case 76u: goto L_0031CDD0;
    case 77u: goto L_0031CE30;
    case 78u: goto L_0031CE60;
    case 79u: goto L_0031CEE0;
    case 80u: goto L_0031CF10;
    case 81u: goto L_0031CF60;
    case 82u: goto L_0031CF80;
    case 83u: goto L_0031CF88;
    case 84u: goto L_0031CFB0;
    case 85u: goto L_0031CFDC;
    case 86u: goto L_0031CFE8;
    case 87u: goto L_0031D00C;
    case 88u: goto L_0031D020;
    case 89u: goto L_0031D030;
    case 90u: goto L_0031D038;
    case 91u: goto L_0031D040;
    case 92u: goto L_0031D048;
    case 93u: goto L_0031D050;
    case 94u: goto L_0031D094;
    case 95u: goto L_0031D0E8;
    case 96u: goto L_0031D0F4;
    case 97u: goto L_0031D128;
    case 98u: goto L_0031D134;
    case 99u: goto L_0031D178;
    case 100u: goto L_0031D18C;
    case 101u: goto L_0031D19C;
    case 102u: goto L_0031D1BC;
    case 103u: goto L_0031D1C8;
    case 104u: goto L_0031D1D0;
    case 105u: goto L_0031D1D8;
    case 106u: goto L_0031D200;
    case 107u: goto L_0031D210;
    case 108u: goto L_0031D228;
    case 109u: goto L_0031D240;
    case 110u: goto L_0031D25C;
    case 111u: goto L_0031D278;
    case 112u: goto L_0031D2C4;
    case 113u: goto L_0031D2CC;
    case 114u: goto L_0031D2E0;
    case 115u: goto L_0031D314;
    case 116u: goto L_0031D340;
    case 117u: goto L_0031D378;
    case 118u: goto L_0031D388;
    case 119u: goto L_0031D398;
    case 120u: goto L_0031D3D8;
    case 121u: goto L_0031D3E8;
    case 122u: goto L_0031D414;
    case 123u: goto L_0031D428;
    case 124u: goto L_0031D440;
    case 125u: goto L_0031D45C;
    case 126u: goto L_0031D478;
    case 127u: goto L_0031D490;
    case 128u: goto L_0031D4A0;
    case 129u: goto L_0031D55C;
    case 130u: goto L_0031D590;
    case 131u: goto L_0031D5A0;
    case 132u: goto L_0031D5B0;
    case 133u: goto L_0031D5E8;
    case 134u: goto L_0031D5F0;
    case 135u: goto L_0031D658;
    case 136u: goto L_0031D660;
    case 137u: goto L_0031D690;
    case 138u: goto L_0031D6B8;
    case 139u: goto L_0031D6CC;
    case 140u: goto L_0031D6D4;
    case 141u: goto L_0031D6DC;
    case 142u: goto L_0031D704;
    case 143u: goto L_0031D724;
    case 144u: goto L_0031D738;
    case 145u: goto L_0031D740;
    case 146u: goto L_0031D748;
    case 147u: goto L_0031D750;
    case 148u: goto L_0031D760;
    case 149u: goto L_0031D770;
    case 150u: goto L_0031D77C;
    case 151u: goto L_0031D7C0;
    case 152u: goto L_0031D810;
    case 153u: goto L_0031D818;
    case 154u: goto L_0031D840;
    case 155u: goto L_0031D848;
    case 156u: goto L_0031D86C;
    case 157u: goto L_0031D890;
    case 158u: goto L_0031D8B0;
    case 159u: goto L_0031D8B8;
    case 160u: goto L_0031D8D4;
    case 161u: goto L_0031D8E0;
    case 162u: goto L_0031D8F8;
    case 163u: goto L_0031D948;
    case 164u: goto L_0031D970;
    case 165u: goto L_0031D9C0;
    case 166u: goto L_0031DA14;
    case 167u: goto L_0031DA28;
    case 168u: goto L_0031DA40;
    case 169u: goto L_0031DA50;
    case 170u: goto L_0031DA6C;
    case 171u: goto L_0031DA80;
    case 172u: goto L_0031DA90;
    case 173u: goto L_0031DA98;
    case 174u: goto L_0031DAB0;
    case 175u: goto L_0031DB20;
    case 176u: goto L_0031DB30;
    case 177u: goto L_0031DB40;
    case 178u: goto L_0031DB68;
    case 179u: goto L_0031DB84;
    case 180u: goto L_0031DBA0;
    case 181u: goto L_0031DBE0;
    case 182u: goto L_0031DC44;
    case 183u: goto L_0031DC4C;
    case 184u: goto L_0031DC60;
    case 185u: goto L_0031DC70;
    case 186u: goto L_0031DD08;
    case 187u: goto L_0031DD10;
    case 188u: goto L_0031DD30;
    case 189u: goto L_0031DD60;
    case 190u: goto L_0031DDC8;
    case 191u: goto L_0031DDDC;
    case 192u: goto L_0031DE2C;
    case 193u: goto L_0031DF08;
    case 194u: goto L_0031DF18;
    case 195u: goto L_0031DF30;
    case 196u: goto L_0031DFA4;
    case 197u: goto L_0031DFDC;
    case 198u: goto L_0031DFE8;
    case 199u: goto L_0031DFF8;
    case 200u: goto L_0031E014;
    case 201u: goto L_0031E01C;
    case 202u: goto L_0031E034;
    case 203u: goto L_0031E048;
    case 204u: goto L_0031E060;
    case 205u: goto L_0031E0D4;
    case 206u: goto L_0031E10C;
    case 207u: goto L_0031E118;
    case 208u: goto L_0031E128;
    case 209u: goto L_0031E144;
    case 210u: goto L_0031E14C;
    case 211u: goto L_0031E164;
    case 212u: goto L_0031E178;
    case 213u: goto L_0031E190;
    case 214u: goto L_0031E1A0;
    case 215u: goto L_0031E1D0;
    case 216u: goto L_0031E208;
    case 217u: goto L_0031E21C;
    case 218u: goto L_0031E26C;
    case 219u: goto L_0031E370;
    case 220u: goto L_0031E380;
    case 221u: goto L_0031E390;
    case 222u: goto L_0031E3D8;
    case 223u: goto L_0031E400;
    case 224u: goto L_0031E410;
    case 225u: goto L_0031E458;
    case 226u: goto L_0031E468;
    case 227u: goto L_0031E480;
    case 228u: goto L_0031E500;
    case 229u: goto L_0031E508;
    case 230u: goto L_0031E520;
    case 231u: goto L_0031E5A0;
    case 232u: goto L_0031E5A8;
    case 233u: goto L_0031E5C0;
    case 234u: goto L_0031E6C0;
    case 235u: goto L_0031E6C8;
    case 236u: goto L_0031E704;
    case 237u: goto L_0031E70C;
    case 238u: goto L_0031E730;
    case 239u: goto L_0031E740;
    case 240u: goto L_0031E748;
    case 241u: goto L_0031E774;
    case 242u: goto L_0031E790;
    case 243u: goto L_0031E7C0;
    case 244u: goto L_0031E834;
    case 245u: goto L_0031E870;
    case 246u: goto L_0031E8A8;
    case 247u: goto L_0031E8C0;
    case 248u: goto L_0031E8D8;
    case 249u: goto L_0031E8F0;
    case 250u: goto L_0031E90C;
    case 251u: goto L_0031E928;
    case 252u: goto L_0031E980;
    case 253u: goto L_0031E9D0;
    case 254u: goto L_0031EA00;
    case 255u: goto L_0031EA38;
    case 256u: goto L_0031EA60;
    case 257u: goto L_0031EA74;
    case 258u: goto L_0031EAA4;
    case 259u: goto L_0031EAF0;
    case 260u: goto L_0031EB18;
    case 261u: goto L_0031EB50;
    case 262u: goto L_0031EB64;
    case 263u: goto L_0031EB70;
    case 264u: goto L_0031EB8C;
    case 265u: goto L_0031EBA8;
    case 266u: goto L_0031EBB0;
    case 267u: goto L_0031EBB8;
    case 268u: goto L_0031EBD8;
    case 269u: goto L_0031EBF4;
    case 270u: goto L_0031EC0C;
    case 271u: goto L_0031EC18;
    case 272u: goto L_0031EC68;
    case 273u: goto L_0031EC78;
    case 274u: goto L_0031EC88;
    case 275u: goto L_0031EC98;
    case 276u: goto L_0031ECA8;
    case 277u: goto L_0031ECB8;
    case 278u: goto L_0031ECCC;
    case 279u: goto L_0031ECD8;
    case 280u: goto L_0031ECFC;
    case 281u: goto L_0031ED10;
    case 282u: goto L_0031ED20;
    case 283u: goto L_0031ED28;
    case 284u: goto L_0031ED30;
    case 285u: goto L_0031ED38;
    case 286u: goto L_0031ED48;
    case 287u: goto L_0031ED58;
    case 288u: goto L_0031EDB0;
    case 289u: goto L_0031EDBC;
    case 290u: goto L_0031EDF0;
    case 291u: goto L_0031EDFC;
    case 292u: goto L_0031EE40;
    case 293u: goto L_0031EE64;
    case 294u: goto L_0031EE90;
    case 295u: goto L_0031EEAC;
    case 296u: goto L_0031EEB4;
    case 297u: goto L_0031EEC0;
    case 298u: goto L_0031EEF0;
    case 299u: goto L_0031EF18;
    case 300u: goto L_0031EF48;
    case 301u: goto L_0031EF80;
    case 302u: goto L_0031EFA8;
    case 303u: goto L_0031EFE8;
    case 304u: goto L_0031F060;
    case 305u: goto L_0031F0D0;
    case 306u: goto L_0031F0E0;
    case 307u: goto L_0031F0F0;
    case 308u: goto L_0031F118;
    case 309u: goto L_0031F134;
    case 310u: goto L_0031F150;
    case 311u: goto L_0031F1D8;
    case 312u: goto L_0031F1F0;
    case 313u: goto L_0031F214;
    case 314u: goto L_0031F234;
    case 315u: goto L_0031F23C;
    case 316u: goto L_0031F250;
    case 317u: goto L_0031F280;
    case 318u: goto L_0031F294;
    case 319u: goto L_0031F2BC;
    case 320u: goto L_0031F2C8;
    case 321u: goto L_0031F2D8;
    case 322u: goto L_0031F2E8;
    case 323u: goto L_0031F2F8;
    case 324u: goto L_0031F308;
    case 325u: goto L_0031F364;
    case 326u: goto L_0031F3A8;
    case 327u: goto L_0031F3E8;
    case 328u: goto L_0031F3F8;
    case 329u: goto L_0031F41C;
    case 330u: goto L_0031F448;
    case 331u: goto L_0031F470;
    case 332u: goto L_0031F498;
    case 333u: goto L_0031F504;
    case 334u: goto L_0031F548;
    case 335u: goto L_0031F570;
    case 336u: goto L_0031F5A8;
    case 337u: goto L_0031F5E0;
    case 338u: goto L_0031F608;
    case 339u: goto L_0031F618;
    case 340u: goto L_0031F648;
    case 341u: goto L_0031F6A8;
    case 342u: goto L_0031F6D8;
    case 343u: goto L_0031F6E0;
    case 344u: goto L_0031F6F0;
    case 345u: goto L_0031F700;
    case 346u: goto L_0031F720;
    case 347u: goto L_0031F730;
    case 348u: goto L_0031F738;
    case 349u: goto L_0031F768;
    case 350u: goto L_0031F78C;
    case 351u: goto L_0031F7A8;
    case 352u: goto L_0031F7D0;
    case 353u: goto L_0031F80C;
    case 354u: goto L_0031F810;
    case 355u: goto L_0031F820;
    case 356u: goto L_0031F828;
    case 357u: goto L_0031F870;
    case 358u: goto L_0031F8E4;
    case 359u: goto L_0031F8EC;
    case 360u: goto L_0031F910;
    case 361u: goto L_0031F948;
    case 362u: goto L_0031F974;
    case 363u: goto L_0031F998;
    case 364u: goto L_0031F9B0;
    case 365u: goto L_0031F9BC;
    case 366u: goto L_0031FA00;
    case 367u: goto L_0031FA08;
    case 368u: goto L_0031FA1C;
    case 369u: goto L_0031FA24;
    case 370u: goto L_0031FA5C;
    case 371u: goto L_0031FA88;
    case 372u: goto L_0031FAB0;
    case 373u: goto L_0031FAD4;
    case 374u: goto L_0031FB10;
    case 375u: goto L_0031FB5C;
    case 376u: goto L_0031FB78;
    case 377u: goto L_0031FB88;
    case 378u: goto L_0031FBE4;
    case 379u: goto L_0031FC20;
    case 380u: goto L_0031FC58;
    case 381u: goto L_0031FC74;
    case 382u: goto L_0031FC78;
    case 383u: goto L_0031FC80;
    case 384u: goto L_0031FCBC;
    case 385u: goto L_0031FCC8;
    case 386u: goto L_0031FCD4;
    case 387u: goto L_0031FCF0;
    case 388u: goto L_0031FCFC;
    case 389u: goto L_0031FD04;
    case 390u: goto L_0031FD14;
    case 391u: goto L_0031FD20;
    case 392u: goto L_0031FD28;
    case 393u: goto L_0031FD2C;
    case 394u: goto L_0031FD30;
    case 395u: goto L_0031FD44;
    case 396u: goto L_0031FD50;
    case 397u: goto L_0031FD58;
    case 398u: goto L_0031FD68;
    case 399u: goto L_0031FD70;
    case 400u: goto L_0031FD80;
    case 401u: goto L_0031FD84;
    case 402u: goto L_0031FDC0;
    case 403u: goto L_0031FDCC;
    case 404u: goto L_0031FDD0;
    case 405u: goto L_0031FDE0;
    case 406u: goto L_0031FDE8;
    case 407u: goto L_0031FE00;
    case 408u: goto L_0031FE0C;
    case 409u: goto L_0031FE10;
    case 410u: goto L_0031FE14;
    case 411u: goto L_0031FE38;
    case 412u: goto L_0031FE4C;
    case 413u: goto L_0031FE60;
    case 414u: goto L_0031FE70;
    case 415u: goto L_0031FE80;
    case 416u: goto L_0031FE9C;
    case 417u: goto L_0031FEB0;
    case 418u: goto L_0031FEC4;
    case 419u: goto L_0031FEC8;
    case 420u: goto L_0031FED0;
    case 421u: goto L_0031FED8;
    case 422u: goto L_0031FEE0;
    case 423u: goto L_0031FEEC;
    case 424u: goto L_0031FEF4;
    case 425u: goto L_0031FF04;
    case 426u: goto L_0031FF0C;
    case 427u: goto L_0031FF10;
    case 428u: goto L_0031FF14;
    case 429u: goto L_0031FF1C;
    case 430u: goto L_0031FF2C;
    case 431u: goto L_0031FF30;
    case 432u: goto L_0031FF34;
    case 433u: goto L_0031FF38;
    case 434u: goto L_0031FF44;
    case 435u: goto L_0031FF58;
    case 436u: goto L_0031FF60;
    case 437u: goto L_0031FF64;
    case 438u: goto L_0031FF70;
    case 439u: goto L_0031FF7C;
    case 440u: goto L_0031FF80;
    case 441u: goto L_0031FF8C;
    case 442u: goto L_0031FF90;
    case 443u: goto L_0031FF94;
    case 444u: goto L_0031FF98;
    case 445u: goto L_0031FF9C;
    case 446u: goto L_0031FFA0;
    case 447u: goto L_0031FFA4;
    case 448u: goto L_0031FFA8;
    case 449u: goto L_0031FFAC;
    case 450u: goto L_0031FFB0;
    case 451u: goto L_0031FFB4;
    case 452u: goto L_0031FFBC;
    case 453u: goto L_0031FFCC;
    case 454u: goto L_0031FFD0;
    case 455u: goto L_0031FFD4;
    case 456u: goto L_0031FFDC;
    case 457u: goto L_0031FFE0;
    case 458u: goto L_0031FFE8;
    case 459u: goto L_0031FFEC;
    case 460u: goto L_0031FFF0;
    case 461u: goto L_0031FFF4;
    case 462u: goto L_0031FFF8;
    case 463u: goto L_0031FFFC;
    default: bad_entry(c, 0x0031C000u); return;
    }
L_0031C000:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031C240; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C01Cu); st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031C01Cu) [[unlikely]] return; }
L_0031C01C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] - 14064u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C038u); st8((c.r[3].w[0] + 2606u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0092(c, 68u, depth + 1u); else { c.pc = 0x00348800u; return; } if (c.pc != 0x0031C038u) [[unlikely]] return; }
L_0031C038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C240; } }
L_0031C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C048u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031C048u) [[unlikely]] return; }
L_0031C048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C240; } }
L_0031C050:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 15520u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2598u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C088u); st8((c.r[2].w[0] + 8273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0092(c, 174u, depth + 1u); else { c.pc = 0x00349590u; return; } if (c.pc != 0x0031C088u) [[unlikely]] return; }
L_0031C088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] + 21840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C0A0u); c.r[6].d[0] = c.r[2].d[0] | 38229ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031C0A0u) [[unlikely]] return; }
L_0031C0A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15520u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15521u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15522u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21840u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21841u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0031C1F0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[19], c.r[19].w[0] + 15520u);
    set32(c.r[18], c.r[18].w[0] + 21840u);
    c.budget -= 5;
L_0031C0F8:
    set32(c.r[4], c.r[18].w[0] + 86u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C104u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031C104u) [[unlikely]] return; }
L_0031C104:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 69u));
    st8((c.r[18].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 70u));
    st8((c.r[18].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 71u));
    st8((c.r[18].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 153u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 151u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0031C160; } }
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0031C138:
    set32(c.r[4], c.r[16].w[0] + 189u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C144u); set32(c.r[5], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031C144u) [[unlikely]] return; }
L_0031C144:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 151u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 65u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 65u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C138u | kUnwind; return; } goto L_0031C138; } }
    c.budget -= 1;
L_0031C160:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0031C170:
    set32(c.r[2], c.r[19].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2184u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0031C190:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2216u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 32ll ? 1ull : 0ull;
    st8((c.r[5].w[0] + 2301u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2217u));
    st8((c.r[5].w[0] + 2302u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2218u));
    st8((c.r[5].w[0] + 2303u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C190u | kUnwind; return; } goto L_0031C190; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 96u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C170u | kUnwind; return; } goto L_0031C170; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21924u));
    set32(c.r[19], c.r[19].w[0] + 5285u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C0F8u | kUnwind; return; } goto L_0031C0F8; } }
    c.budget -= 1;
L_0031C1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1F8u);  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00334150u; return; } if (c.pc != 0x0031C1F8u) [[unlikely]] return; }
L_0031C1F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C20Cu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031C20Cu) [[unlikely]] return; }
L_0031C20C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C224u); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 53u, depth + 1u); else { c.pc = 0x00354A10u; return; } if (c.pc != 0x0031C224u) [[unlikely]] return; }
L_0031C224:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 118u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C234u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031C234u) [[unlikely]] return; }
L_0031C234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C23Cu);  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031C23Cu) [[unlikely]] return; }
L_0031C23C:
    c.budget -= 1;
L_0031C240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0031C270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C338; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C468; } }
L_0031C2A0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21840u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);  if (t) { goto L_0031C318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[4], c.r[4].w[0] + 21858u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2E4u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031C2E4u) [[unlikely]] return; }
L_0031C2E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21841u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031C308; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2598u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031C318; } }
    c.budget -= 1;
L_0031C308:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2598u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0031C318:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2598u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C328u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 66u, depth + 1u); else { c.pc = 0x0031CA20u; return; } if (c.pc != 0x0031C328u) [[unlikely]] return; }
L_0031C328:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0031C468; } }
    c.budget -= 1;
L_0031C338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C340u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031C340u) [[unlikely]] return; }
L_0031C340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031C3B8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2598u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031C378; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C378; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C468; } }
    c.budget -= 1;
L_0031C378:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2592u));
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3A4u); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031C3A4u) [[unlikely]] return; }
L_0031C3A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031C468; } }
    c.budget -= 1;
L_0031C3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3C0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031C3C0u) [[unlikely]] return; }
L_0031C3C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031C3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3D0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031C3D0u) [[unlikely]] return; }
L_0031C3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3D8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 233u, depth + 1u); else { c.pc = 0x0031E5C0u; return; } if (c.pc != 0x0031C3D8u) [[unlikely]] return; }
L_0031C3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C468; } }
L_0031C3E0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 31u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3F8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031C3F8u) [[unlikely]] return; }
L_0031C3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031C440; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2598u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C410u); c.r[5].d[0] = ld8((c.r[29].w[0] + 31u));  if (depth < kMaxDepth) unit_0087(c, 66u, depth + 1u); else { c.pc = 0x0031CA20u; return; } if (c.pc != 0x0031C410u) [[unlikely]] return; }
L_0031C410:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_0031C440; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C43Cu);  if (depth < kMaxDepth) unit_0087(c, 75u, depth + 1u); else { c.pc = 0x0031CDC0u; return; } if (c.pc != 0x0031C43Cu) [[unlikely]] return; }
L_0031C43C:
    c.budget -= 1;
L_0031C440:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_0031C468; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031C468; } }
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C468u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0087(c, 69u, depth + 1u); else { c.pc = 0x0031CC80u; return; } if (c.pc != 0x0031C468u) [[unlikely]] return; }
L_0031C468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 23068u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 2593u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[9], c.r[8].w[0] + 2593u);  if (t) { goto L_0031C630; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0031C5A0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0031C4E8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0031C4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C670; } }
L_0031C4C0:
    set32(c.r[3], ld32((c.r[8].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[8].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031C670; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031C670; } }
    c.budget -= 1;
L_0031C4E8:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 2598u));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C588; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0031C550; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C670; } }
L_0031C510:
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 68u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C524u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x0031C524u) [[unlikely]] return; }
L_0031C524:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C53Cu); set32(c.r[7], c.r[7].w[0] + 21858u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x0031C53Cu) [[unlikely]] return; }
L_0031C53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C544u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031C544u) [[unlikely]] return; }
L_0031C544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C670; } }
    c.budget -= 1;
L_0031C550:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C560u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x0031C560u) [[unlikely]] return; }
L_0031C560:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C578u); set32(c.r[7], c.r[7].w[0] + 21842u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x0031C578u) [[unlikely]] return; }
L_0031C578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C580u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031C580u) [[unlikely]] return; }
L_0031C580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C670; } }
L_0031C588:
    set32(c.r[3], 0u + 4u);
    st8((c.r[8].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C670; } }
    c.budget -= 1;
L_0031C5A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 21858u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C5B0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x0031C5B0u) [[unlikely]] return; }
L_0031C5B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031C5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C5C4u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031C5C4u) [[unlikely]] return; }
L_0031C5C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C5D0u); set32(c.r[4], c.r[4].w[0] + 21858u);  if (depth < kMaxDepth) unit_008B(c, 238u, depth + 1u); else { c.pc = 0x0032F370u; return; } if (c.pc != 0x0031C5D0u) [[unlikely]] return; }
L_0031C5D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C670; } }
    c.budget -= 1;
L_0031C5F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031C670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C60Cu);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031C60Cu) [[unlikely]] return; }
L_0031C60C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C670; } }
L_0031C630:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 21842u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C640u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x0031C640u) [[unlikely]] return; }
L_0031C640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031C670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C650u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031C650u) [[unlikely]] return; }
L_0031C650:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0031C670:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031C680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0031C828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C808; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C7F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C868; } }
    c.budget -= 1;
L_0031C6C8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 13u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 21858u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C6E8u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031C6E8u) [[unlikely]] return; }
L_0031C6E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[29].w[0] + 81u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C6F8u); set32(c.r[5], c.r[5].w[0] + 21842u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031C6F8u) [[unlikely]] return; }
L_0031C6F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031C7D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[3].w[0] - 8u);  if (t) { goto L_0031C788; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 21840u);
    c.budget -= 4;
L_0031C728:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 154u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[1], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[7].w[0] + 32767u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    st8((c.r[6].w[0] + 74u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 5442u));
    st8((c.r[6].w[0] + 75u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 10730u));
    st8((c.r[6].w[0] + 76u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 16018u));
    st8((c.r[6].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 21306u));
    st8((c.r[6].w[0] + 78u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 26594u));
    st8((c.r[6].w[0] + 79u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 31882u));
    st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[4].w[0] + 9537u);
    c.r[5].d[0] = ld8((c.r[1].w[0] - 28366u));
    st8((c.r[6].w[0] + 81u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C728u | kUnwind; return; } goto L_0031C728; } }
L_0031C788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 5288u);  if (t) { goto L_0031C7D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 21840u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[3].w[0] + 16u);
    c.budget -= 7;
L_0031C7B8:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 154u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    st8((c.r[7].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 5288u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C7B8u | kUnwind; return; } goto L_0031C7B8; } }
    c.budget -= 1;
L_0031C7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C7E0u);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031C7E0u) [[unlikely]] return; }
L_0031C7E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C7F0u); set32(c.r[5], c.r[5].w[0] - 13856u);  if (depth < kMaxDepth) unit_0092(c, 32u, depth + 1u); else { c.pc = 0x00348430u; return; } if (c.pc != 0x0031C7F0u) [[unlikely]] return; }
L_0031C7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C868; } }
L_0031C7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C800u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031C800u) [[unlikely]] return; }
L_0031C800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C868; } }
L_0031C808:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C81Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031C81Cu) [[unlikely]] return; }
L_0031C81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C868; } }
    c.budget -= 1;
L_0031C828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C830u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031C830u) [[unlikely]] return; }
L_0031C830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031C868; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C844u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031C844u) [[unlikely]] return; }
L_0031C844:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 16016u));
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5798u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C868u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 438u, depth + 1u); else { c.pc = 0x0031FF70u; return; } if (c.pc != 0x0031C868u) [[unlikely]] return; }
L_0031C868:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0031C880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C8F8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031C8F8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031C8E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 8279u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C8F8; } }
L_0031C8E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C8ECu); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x0031C8ECu) [[unlikely]] return; }
L_0031C8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C8F4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0087(c, 227u, depth + 1u); else { c.pc = 0x0031E480u; return; } if (c.pc != 0x0031C8F4u) [[unlikely]] return; }
L_0031C8F4:
    c.budget -= 1;
L_0031C8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 25u)));  if (t) { goto L_0031C9D0; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2606u));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 2606u);  if (t) { goto L_0031C9D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031C9A8; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0031C998; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C9D0; } }
    c.budget -= 1;
L_0031C978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C980u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 309u, depth + 1u); else { c.pc = 0x0034ABD0u; return; } if (c.pc != 0x0031C980u) [[unlikely]] return; }
L_0031C980:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C990u); c.r[5].d[0] = 0ull | 65440ull;  if (depth < kMaxDepth) unit_008C(c, 201u, depth + 1u); else { c.pc = 0x003336A0u; return; } if (c.pc != 0x0031C990u) [[unlikely]] return; }
L_0031C990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C9D0; } }
L_0031C998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9A0u);  if (depth < kMaxDepth) unit_008C(c, 207u, depth + 1u); else { c.pc = 0x00333870u; return; } if (c.pc != 0x0031C9A0u) [[unlikely]] return; }
L_0031C9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C9D0; } }
L_0031C9A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031C9D0; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 8276u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_0031C9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C9E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031CA18; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031CA18; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0031CA18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CA20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_0031CB40; } }
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0031CA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0031CC70; } }
    c.budget -= 1;
L_0031CA48:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_0031CAE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031CAE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    set32(c.r[2], c.r[3].w[0] + 2u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0031CA80; } }
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_0031CA80:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 5288u);  if (t) { goto L_0031CAE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 21840u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
L_0031CAA8:
    c.r[2].d[0] = ld8((c.r[6].w[0] - 10424u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0031CAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0031CC70; } }
    c.budget -= 1;
L_0031CAC0:
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CAA8u | kUnwind; return; } goto L_0031CAA8; } }
    c.budget -= 1;
L_0031CAE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0031CB08; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21841u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0031CB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0031CC70; } }
L_0031CB00:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0031CB08:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0031CC68; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 21840u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031CB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CB34; } }
L_0031CB30:
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_0031CB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CC70; } }
    c.budget -= 1;
L_0031CB40:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0031CC68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031CB60; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_0031CB60:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031CB78; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031CB78:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0031CBA8; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 21840u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031CBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CC70; } }
L_0031CBA0:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 2;
L_0031CBA8:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0031CBD8; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21841u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031CBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CC70; } }
L_0031CBD0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_0031CBD8:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_0031CC68; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031CC68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[7], c.r[3].w[0] - 2u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031CC60; } }
    set32(c.r[3], 0u + 5288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 21840u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
L_0031CC28:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0031CC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0031CC70; } }
    c.budget -= 1;
L_0031CC40:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CC28u | kUnwind; return; } goto L_0031CC28; } }
    c.budget -= 1;
L_0031CC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0031CC70; } }
L_0031CC68:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 2;
L_0031CC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 5288u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] + 21994u);
    set32(c.r[5], c.r[5].w[0] + 21995u);
    set32(c.r[4], c.r[4].w[0] + 21996u);
    set32(c.r[16], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[18].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 21992u);
    c.r[17].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[19].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031CD90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CCFCu); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031CCFCu) [[unlikely]] return; }
L_0031CCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] - 1u);  if (t) { goto L_0031CD48; } }
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031CD28; } }
    c.r[19].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 2;
L_0031CD28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CD34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031CD34u) [[unlikely]] return; }
L_0031CD34:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031CD90; } }
    c.budget -= 1;
L_0031CD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CD50u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031CD50u) [[unlikely]] return; }
L_0031CD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 1u);  if (t) { goto L_0031CD90; } }
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031CD78; } }
    c.r[19].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_0031CD78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CD84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031CD84u) [[unlikely]] return; }
L_0031CD84:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0031CD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CD98u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0087(c, 75u, depth + 1u); else { c.pc = 0x0031CDC0u; return; } if (c.pc != 0x0031CD98u) [[unlikely]] return; }
L_0031CD98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031CDC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21840u);
    c.budget -= 4;
L_0031CDD0:
    st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 151u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0031CDF8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0031CDF8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CDD0u | kUnwind; return; } goto L_0031CDD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[13].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0031CED0; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[14], c.r[14].w[0] + 21840u);
    set32(c.r[6], 0u + 5288u);
    c.r[5].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 4;
L_0031CE30:
    c.r[4].d[0] = ld8((c.r[14].w[0] + 154u));
    set32(c.r[3], c.r[14].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2269u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[11].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0031CEC0; } }
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_0031CEC0; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[12], c.r[14].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0031CE60:
    c.r[3].d[0] = ld8((c.r[12].w[0] + 2301u));
    c.r[8].d[0] = ld8((c.r[12].w[0] + 2302u));
    c.r[7].d[0] = ld8((c.r[12].w[0] + 2303u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 155u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 156u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 154u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[10], c.r[3].w[0] + 154u);  if (t) { goto L_0031CE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_0031CEB0; } }
    c.budget -= 1;
L_0031CE98:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031CEB0; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0031CEB0:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[3].d[0] = c.r[15].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CE60u | kUnwind; return; } goto L_0031CE60; } }
L_0031CEC0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CE30u | kUnwind; return; } goto L_0031CE30; } }
L_0031CED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CEE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2176u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031CF10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 2593u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 2593u);  if (t) { goto L_0031D318; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5600u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031CF60:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] + 21840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF80u); c.r[6].d[0] = c.r[2].d[0] | 38229ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031CF80u) [[unlikely]] return; }
L_0031CF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF88u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031CF88u) [[unlikely]] return; }
L_0031CF88:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 346u);
    set32(c.r[4], c.r[4].w[0] + 21858u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CFB0u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031CFB0u) [[unlikely]] return; }
L_0031CFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] - 5435u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[1].w[0] + 21922u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 118u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CFDCu); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0031CFDCu) [[unlikely]] return; }
L_0031CFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D318; } }
    c.budget -= 1;
L_0031CFE8:
    set32(c.r[3], ld32((c.r[7].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[7].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D318; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D00Cu); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031D00Cu) [[unlikely]] return; }
L_0031D00C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 14u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D020u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031D020u) [[unlikely]] return; }
L_0031D020:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D030u); set32(c.r[5], c.r[5].w[0] - 9552u);  if (depth < kMaxDepth) unit_0092(c, 68u, depth + 1u); else { c.pc = 0x00348800u; return; } if (c.pc != 0x0031D030u) [[unlikely]] return; }
L_0031D030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D318; } }
L_0031D038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D040u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031D040u) [[unlikely]] return; }
L_0031D040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D318; } }
L_0031D048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D050u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031D050u) [[unlikely]] return; }
L_0031D050:
    set32(c.r[3], 0u + 346u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 5782u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031D1A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 15520u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D094u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0092(c, 174u, depth + 1u); else { c.pc = 0x00349590u; return; } if (c.pc != 0x0031D094u) [[unlikely]] return; }
L_0031D094:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15520u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15521u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15522u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21840u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21841u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0031D170; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[19], c.r[19].w[0] + 15520u);
    set32(c.r[18], c.r[18].w[0] + 21840u);
    c.budget -= 4;
L_0031D0E8:
    set32(c.r[4], c.r[18].w[0] + 86u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D0F4u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031D0F4u) [[unlikely]] return; }
L_0031D0F4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 69u));
    st8((c.r[18].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 70u));
    st8((c.r[18].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 71u));
    st8((c.r[18].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 153u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 151u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0031D150; } }
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0031D128:
    set32(c.r[4], c.r[16].w[0] + 189u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D134u); set32(c.r[5], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031D134u) [[unlikely]] return; }
L_0031D134:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 151u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 65u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 65u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D128u | kUnwind; return; } goto L_0031D128; } }
    c.budget -= 1;
L_0031D150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21924u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 5285u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D0E8u | kUnwind; return; } goto L_0031D0E8; } }
    c.budget -= 1;
L_0031D170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D178u);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031D178u) [[unlikely]] return; }
L_0031D178:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D18Cu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031D18Cu) [[unlikely]] return; }
L_0031D18C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D19Cu); set32(c.r[5], c.r[5].w[0] - 9312u);  if (depth < kMaxDepth) unit_0092(c, 106u, depth + 1u); else { c.pc = 0x00348D20u; return; } if (c.pc != 0x0031D19Cu) [[unlikely]] return; }
L_0031D19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D318; } }
    c.budget -= 1;
L_0031D1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D1BCu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 227u, depth + 1u); else { c.pc = 0x0031E480u; return; } if (c.pc != 0x0031D1BCu) [[unlikely]] return; }
L_0031D1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D318; } }
    c.budget -= 1;
L_0031D1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D1D0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031D1D0u) [[unlikely]] return; }
L_0031D1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D318; } }
L_0031D1D8:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2592u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 928u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D200u); set32(c.r[4], c.r[2].w[0] + 1600u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031D200u) [[unlikely]] return; }
L_0031D200:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 127u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D210u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0092(c, 112u, depth + 1u); else { c.pc = 0x00348E50u; return; } if (c.pc != 0x0031D210u) [[unlikely]] return; }
L_0031D210:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 127u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031D2B0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0031D228:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D240u); set32(c.r[4], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031D240u) [[unlikely]] return; }
L_0031D240:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1728u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D25Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031D25Cu) [[unlikely]] return; }
L_0031D25C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1745u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D278u); set32(c.r[5], c.r[2].w[0] + 25u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031D278u) [[unlikely]] return; }
L_0031D278:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 89u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + 232u);
    st8((c.r[2].w[0] + 1826u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 127u));
    set32(c.r[3], c.r[3].w[0] + 90u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 120u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D228u | kUnwind; return; } goto L_0031D228; } }
    c.budget -= 1;
L_0031D2B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 118u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2C4u); st8((c.r[2].w[0] + 8273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031D2C4u) [[unlikely]] return; }
L_0031D2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2CCu);  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00334150u; return; } if (c.pc != 0x0031D2CCu) [[unlikely]] return; }
L_0031D2CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2E0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031D2E0u) [[unlikely]] return; }
L_0031D2E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D314u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 53u, depth + 1u); else { c.pc = 0x00354A10u; return; } if (c.pc != 0x0031D314u) [[unlikely]] return; }
L_0031D314:
    c.budget -= 1;
L_0031D318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0031D340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2593u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031D468; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031D370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D478; } }
    c.budget -= 1;
L_0031D370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D378u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0031DC60u; return; } if (c.pc != 0x0031D378u) [[unlikely]] return; }
L_0031D378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0031D478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D388u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031D388u) [[unlikely]] return; }
L_0031D388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031D3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031D398u) [[unlikely]] return; }
L_0031D398:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 30u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031D478; } }
    c.budget -= 1;
L_0031D3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3D8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031D3D8u) [[unlikely]] return; }
L_0031D3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031D448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031D3E8u) [[unlikely]] return; }
L_0031D3E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D414u); st8((c.r[2].w[0] + 8273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00334150u; return; } if (c.pc != 0x0031D414u) [[unlikely]] return; }
L_0031D414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D428u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031D428u) [[unlikely]] return; }
L_0031D428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D440u); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 53u, depth + 1u); else { c.pc = 0x00354A10u; return; } if (c.pc != 0x0031D440u) [[unlikely]] return; }
L_0031D440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D478; } }
L_0031D448:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D45Cu); set32(c.r[4], c.r[2].w[0] + 2598u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031D45Cu) [[unlikely]] return; }
L_0031D45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D478; } }
    c.budget -= 1;
L_0031D468:
    set32(c.r[2], 0u + 4u);
    st8((c.r[5].w[0] + 8273u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D478u); set32(c.r[4], 0u + 137u);  if (depth < kMaxDepth) unit_0087(c, 227u, depth + 1u); else { c.pc = 0x0031E480u; return; } if (c.pc != 0x0031D478u) [[unlikely]] return; }
L_0031D478:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031D490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4A0u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0031DC60u; return; } if (c.pc != 0x0031D4A0u) [[unlikely]] return; }
L_0031D4A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031D580; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D580; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2598u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0031D568; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0031D508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0031D4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D580; } }
L_0031D4F0:
    st8((c.r[7].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031D580; } }
L_0031D508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[5], 0u + 346u);
    set32(c.r[4], c.r[4].w[0] - 5436u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0031D548; } }
    st8((c.r[7].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031D580; } }
L_0031D548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D55Cu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 227u, depth + 1u); else { c.pc = 0x0031E480u; return; } if (c.pc != 0x0031D55Cu) [[unlikely]] return; }
L_0031D55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D580; } }
    c.budget -= 1;
L_0031D568:
    set32(c.r[3], 0u + 1u);
    st8((c.r[7].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0031D580:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031D590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031D5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5B0u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0031DC60u; return; } if (c.pc != 0x0031D5B0u) [[unlikely]] return; }
L_0031D5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031D9B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2593u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0031D9B0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031D5F0u) [[unlikely]] return; }
L_0031D5F0:
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5435u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031D628; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D628:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 15u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D658u); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0095(c, 275u, depth + 1u); else { c.pc = 0x003563A0u; return; } if (c.pc != 0x0031D658u) [[unlikely]] return; }
L_0031D658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
L_0031D660:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D9B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 240u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031D9B0; } }
L_0031D690:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D6E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6B8u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031D6B8u) [[unlikely]] return; }
L_0031D6B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21842u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6CCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031D6CCu) [[unlikely]] return; }
L_0031D6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6D4u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_008D(c, 178u, depth + 1u); else { c.pc = 0x003360D0u; return; } if (c.pc != 0x0031D6D4u) [[unlikely]] return; }
L_0031D6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031D6DCu) [[unlikely]] return; }
L_0031D6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D6E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2612u)));
    c.r[1].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0031D9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D704u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031D704u) [[unlikely]] return; }
L_0031D704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D9B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D724u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031D724u) [[unlikely]] return; }
L_0031D724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21842u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D738u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031D738u) [[unlikely]] return; }
L_0031D738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D740u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_008D(c, 178u, depth + 1u); else { c.pc = 0x003360D0u; return; } if (c.pc != 0x0031D740u) [[unlikely]] return; }
L_0031D740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D748u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031D748u) [[unlikely]] return; }
L_0031D748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
L_0031D750:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 21842u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D760u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x0031D760u) [[unlikely]] return; }
L_0031D760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031D9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D770u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0031D770u) [[unlikely]] return; }
L_0031D770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D77Cu); set32(c.r[4], c.r[4].w[0] + 21842u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0031D77Cu) [[unlikely]] return; }
L_0031D77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D7A8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 15u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D7A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031D9B0; } }
L_0031D7C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D9B0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3419u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D810u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 275u, depth + 1u); else { c.pc = 0x003563A0u; return; } if (c.pc != 0x0031D810u) [[unlikely]] return; }
L_0031D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
L_0031D818:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D9B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D848u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031D848u) [[unlikely]] return; }
L_0031D848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D888; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D86Cu); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031D86Cu) [[unlikely]] return; }
L_0031D86C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 2612u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031D9B0; } }
L_0031D888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D890u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031D890u) [[unlikely]] return; }
L_0031D890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D8C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D8B0u); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031D8B0u) [[unlikely]] return; }
L_0031D8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D8B8u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031D8B8u) [[unlikely]] return; }
L_0031D8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
L_0031D8C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D8D4u); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031D8D4u) [[unlikely]] return; }
L_0031D8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D8E0:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D8F8u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031D8F8u) [[unlikely]] return; }
L_0031D8F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3419u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031D938; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031D920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D920:
    set32(c.r[3], 0u + 30u);
    st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031D9B0; } }
L_0031D938:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031D9B0; } }
L_0031D948:
    set32(c.r[3], 0u - 1u);
    st8((c.r[5].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031D9B0; } }
    c.budget -= 1;
L_0031D970:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031D9B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 30u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[3].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3424u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_0031D9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031D9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0031DA78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DA58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DA48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031DA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DA98; } }
    c.budget -= 1;
L_0031DA08:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA14u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031DA14u) [[unlikely]] return; }
L_0031DA14:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA28u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031DA28u) [[unlikely]] return; }
L_0031DA28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + 21842u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA40u); set32(c.r[6], c.r[6].w[0] - 9248u);  if (depth < kMaxDepth) unit_0092(c, 37u, depth + 1u); else { c.pc = 0x00348520u; return; } if (c.pc != 0x0031DA40u) [[unlikely]] return; }
L_0031DA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DA98; } }
L_0031DA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA50u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031DA50u) [[unlikely]] return; }
L_0031DA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DA98; } }
L_0031DA58:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA6Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031DA6Cu) [[unlikely]] return; }
L_0031DA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DA98; } }
    c.budget -= 1;
L_0031DA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA80u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031DA80u) [[unlikely]] return; }
L_0031DA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031DA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA90u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031DA90u) [[unlikely]] return; }
L_0031DA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA98u);  if (depth < kMaxDepth) unit_0087(c, 438u, depth + 1u); else { c.pc = 0x0031FF70u; return; } if (c.pc != 0x0031DA98u) [[unlikely]] return; }
L_0031DA98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031DAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 25u)));  if (t) { goto L_0031DB88; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2606u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 2606u);  if (t) { goto L_0031DB88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031DB48; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0031DB38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DB88; } }
    c.budget -= 1;
L_0031DB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DB20u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 309u, depth + 1u); else { c.pc = 0x0034ABD0u; return; } if (c.pc != 0x0031DB20u) [[unlikely]] return; }
L_0031DB20:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DB30u); c.r[5].d[0] = 0ull | 65440ull;  if (depth < kMaxDepth) unit_008C(c, 201u, depth + 1u); else { c.pc = 0x003336A0u; return; } if (c.pc != 0x0031DB30u) [[unlikely]] return; }
L_0031DB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DB88; } }
L_0031DB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DB40u);  if (depth < kMaxDepth) unit_008C(c, 207u, depth + 1u); else { c.pc = 0x00333870u; return; } if (c.pc != 0x0031DB40u) [[unlikely]] return; }
L_0031DB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DB88; } }
L_0031DB48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031DB70; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DB68u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031DB68u) [[unlikely]] return; }
L_0031DB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DB88; } }
L_0031DB70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031DB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DB84u);  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031DB84u) [[unlikely]] return; }
L_0031DB84:
    c.budget -= 1;
L_0031DB88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031DBA0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DBD8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031DBD8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0031DBD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031DBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DC50; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031DC50; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031DC38; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031DC50; } }
    c.budget -= 1;
L_0031DC38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC44u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x0031DC44u) [[unlikely]] return; }
L_0031DC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC4Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0087(c, 230u, depth + 1u); else { c.pc = 0x0031E520u; return; } if (c.pc != 0x0031DC4Cu) [[unlikely]] return; }
L_0031DC4C:
    c.budget -= 1;
L_0031DC50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031DC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC70u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031DC70u) [[unlikely]] return; }
L_0031DC70:
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], 0u + 346u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - 5436u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031DCB0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031DCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DCB8; } }
    c.budget -= 1;
L_0031DCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031DD18; } }
L_0031DCB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 76u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD08u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x0031DD08u) [[unlikely]] return; }
L_0031DD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD10u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031DD10u) [[unlikely]] return; }
L_0031DD10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0031DD18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031DD30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2144u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031DD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2593u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 2593u);  if (t) { goto L_0031DE48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DDE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031DD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DF18; } }
L_0031DD98:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 600u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 20u);
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2596u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0031DDD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DDC8u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0031DDC8u) [[unlikely]] return; }
L_0031DDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DF18; } }
L_0031DDD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DDDCu); set32(c.r[5], c.r[3].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0031DDDCu) [[unlikely]] return; }
L_0031DDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DF18; } }
    c.budget -= 1;
L_0031DDE8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031DE10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031DF18; } }
    c.budget -= 1;
L_0031DE10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2612u)));
    c.r[1].d[0] = c.r[3].sd[0] < 541ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_0031DF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DE2Cu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031DE2Cu) [[unlikely]] return; }
L_0031DE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DF18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031DF18; } }
L_0031DE48:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8273u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0031DF00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0031DF00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031DED8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031DEB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031DE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DF08; } }
    c.budget -= 1;
L_0031DE88:
    st8((c.r[6].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031DF08; } }
L_0031DEB0:
    st8((c.r[6].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031DF08; } }
L_0031DED8:
    st8((c.r[6].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031DF08; } }
L_0031DF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF08u);  if (depth < kMaxDepth) unit_0086(c, 469u, depth + 1u); else { c.pc = 0x0031BB30u; return; } if (c.pc != 0x0031DF08u) [[unlikely]] return; }
L_0031DF08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF18u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031DF18u) [[unlikely]] return; }
L_0031DF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031DF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0031E040; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DFF0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031DFC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031DFA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031DF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E048; } }
    c.budget -= 1;
L_0031DF80:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 75u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DFA4u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0031DFA4u) [[unlikely]] return; }
L_0031DFA4:
    c.budget -= 1;
L_0031DFA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031E048; } }
    c.budget -= 1;
L_0031DFC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DFDCu); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031DFDCu) [[unlikely]] return; }
L_0031DFDC:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DFE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x0031DFE8u) [[unlikely]] return; }
L_0031DFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E048; } }
L_0031DFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DFF8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031DFF8u) [[unlikely]] return; }
L_0031DFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E048; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E014u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031E014u) [[unlikely]] return; }
L_0031E014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E01Cu);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031E01Cu) [[unlikely]] return; }
L_0031E01C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 17u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] - 7280u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E034u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 389u, depth + 1u); else { c.pc = 0x00347970u; return; } if (c.pc != 0x0031E034u) [[unlikely]] return; }
L_0031E034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E048; } }
    c.budget -= 1;
L_0031E040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E048u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031E048u) [[unlikely]] return; }
L_0031E048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0031E170; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031E120; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031E0F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031E0D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031E0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E178; } }
    c.budget -= 1;
L_0031E0B0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 75u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E0D4u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0031E0D4u) [[unlikely]] return; }
L_0031E0D4:
    c.budget -= 1;
L_0031E0D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031E178; } }
    c.budget -= 1;
L_0031E0F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E10Cu); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031E10Cu) [[unlikely]] return; }
L_0031E10C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x0031E118u) [[unlikely]] return; }
L_0031E118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E178; } }
L_0031E120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E128u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031E128u) [[unlikely]] return; }
L_0031E128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E178; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E144u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031E144u) [[unlikely]] return; }
L_0031E144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E14Cu);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031E14Cu) [[unlikely]] return; }
L_0031E14C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 18u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] - 7152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E164u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0092(c, 44u, depth + 1u); else { c.pc = 0x003485F0u; return; } if (c.pc != 0x0031E164u) [[unlikely]] return; }
L_0031E164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E178; } }
    c.budget -= 1;
L_0031E170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E178u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031E178u) [[unlikely]] return; }
L_0031E178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E1A0u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0031DC60u; return; } if (c.pc != 0x0031E1A0u) [[unlikely]] return; }
L_0031E1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E380; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2593u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[5], c.r[7].w[0] + 2593u);  if (t) { goto L_0031E288; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031E228; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031E1D8; } }
L_0031E1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E380; } }
L_0031E1D8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 600u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 20u);
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2596u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0031E210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E208u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0031E208u) [[unlikely]] return; }
L_0031E208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E380; } }
L_0031E210:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E21Cu); set32(c.r[5], c.r[3].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0031E21Cu) [[unlikely]] return; }
L_0031E21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E380; } }
    c.budget -= 1;
L_0031E228:
    set32(c.r[3], ld32((c.r[7].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[7].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031E250; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031E380; } }
    c.budget -= 1;
L_0031E250:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2612u)));
    c.r[1].d[0] = c.r[3].sd[0] < 541ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_0031E380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E26Cu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031E26Cu) [[unlikely]] return; }
L_0031E26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E380; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031E380; } }
L_0031E288:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8273u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0031E368; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0031E338; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031E310; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031E2E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031E2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E370; } }
L_0031E2C0:
    st8((c.r[7].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E370; } }
L_0031E2E8:
    st8((c.r[7].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E370; } }
L_0031E310:
    st8((c.r[7].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E370; } }
L_0031E338:
    st8((c.r[7].w[0] + 2589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E370; } }
    c.budget -= 1;
L_0031E368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E370u);  if (depth < kMaxDepth) unit_0086(c, 469u, depth + 1u); else { c.pc = 0x0031BB30u; return; } if (c.pc != 0x0031E370u) [[unlikely]] return; }
L_0031E370:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E380u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031E380u) [[unlikely]] return; }
L_0031E380:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031E400; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031E400; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E3D8u);  if (depth < kMaxDepth) unit_0086(c, 324u, depth + 1u); else { c.pc = 0x0031A550u; return; } if (c.pc != 0x0031E3D8u) [[unlikely]] return; }
L_0031E3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E400; } }
L_0031E3E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E400u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031E400u) [[unlikely]] return; }
L_0031E400:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031E410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031E468; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031E468; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E458u);  if (depth < kMaxDepth) unit_0086(c, 462u, depth + 1u); else { c.pc = 0x0031BA70u; return; } if (c.pc != 0x0031E458u) [[unlikely]] return; }
L_0031E458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E468; } }
L_0031E460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E468u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x0031E468u) [[unlikely]] return; }
L_0031E468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031E480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2596u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E500u); st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031E500u) [[unlikely]] return; }
L_0031E500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E508u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x0031E508u) [[unlikely]] return; }
L_0031E508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2596u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E5A0u); st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031E5A0u) [[unlikely]] return; }
L_0031E5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E5A8u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x0031E5A8u) [[unlikely]] return; }
L_0031E5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0031E688; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031E658; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0031E628; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E6B8; } }
L_0031E5F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031E6B8; } }
    c.budget -= 1;
L_0031E628:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E6B8; } }
    c.budget -= 1;
L_0031E658:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E6B8; } }
    c.budget -= 1;
L_0031E688:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_0031E6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E6C0u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031E6C0u) [[unlikely]] return; }
L_0031E6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E6C8u);  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031E6C8u) [[unlikely]] return; }
L_0031E6C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E704u); st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031E704u) [[unlikely]] return; }
L_0031E704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E70Cu);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x0031E70Cu) [[unlikely]] return; }
L_0031E70C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2530u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2531u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E740u);  if (depth < kMaxDepth) unit_008D(c, 63u, depth + 1u); else { c.pc = 0x00334DF0u; return; } if (c.pc != 0x0031E740u) [[unlikely]] return; }
L_0031E740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E748u);  if (depth < kMaxDepth) unit_0088(c, 346u, depth + 1u); else { c.pc = 0x00322EF0u; return; } if (c.pc != 0x0031E748u) [[unlikely]] return; }
L_0031E748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E778; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E774u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031E774u) [[unlikely]] return; }
L_0031E774:
    c.budget -= 1;
L_0031E778:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E790:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2096u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031E7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8275u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E7F8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8279u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E810; } }
    c.budget -= 1;
L_0031E7F8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031E828; } }
    c.budget -= 1;
L_0031E810:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0031E828:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E834u); st8((c.r[2].w[0] + 8144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031E834u) [[unlikely]] return; }
L_0031E834:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 60u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    st8((c.r[3].w[0] + 8286u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 8288u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 8290u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031E870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031E960; } }
    set32(c.r[4], c.r[5].w[0] + 1600u);
    set32(c.r[6], 0u + 928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E8A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031E8A8u) [[unlikely]] return; }
L_0031E8A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0031E960; } }
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E8C0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0092(c, 112u, depth + 1u); else { c.pc = 0x00348E50u; return; } if (c.pc != 0x0031E8C0u) [[unlikely]] return; }
L_0031E8C0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031E960; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0031E8D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E8F0u); set32(c.r[4], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031E8F0u) [[unlikely]] return; }
L_0031E8F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1728u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E90Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031E90Cu) [[unlikely]] return; }
L_0031E90C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1745u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E928u); set32(c.r[5], c.r[2].w[0] + 25u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031E928u) [[unlikely]] return; }
L_0031E928:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 89u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 232u);
    st8((c.r[3].w[0] + 1826u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    set32(c.r[4], c.r[4].w[0] + 90u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 56u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E8D8u | kUnwind; return; } goto L_0031E8D8; } }
    c.budget -= 1;
L_0031E960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031E980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);  if (t) { goto L_0031E9F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = ld8((c.r[1].w[0] + 16016u));  if (t) { goto L_0031E9D8; } }
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E9D0u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0091(c, 406u, depth + 1u); else { c.pc = 0x00347BD0u; return; } if (c.pc != 0x0031E9D0u) [[unlikely]] return; }
L_0031E9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E9F0; } }
L_0031E9D8:
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5800u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0031E9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031EA48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031EA40; } }
    set32(c.r[5], c.r[5].w[0] + 8284u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EA38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 230u, depth + 1u); else { c.pc = 0x00349EF0u; return; } if (c.pc != 0x0031EA38u) [[unlikely]] return; }
L_0031EA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EA48; } }
L_0031EA40:
    st16((c.r[5].w[0] + 8284u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0031EA48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EA74u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031EA74u) [[unlikely]] return; }
L_0031EA74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_0031EAB0; } }
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 5456u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EAA4u); set32(c.r[6], c.r[2].w[0] + 18u);  if (depth < kMaxDepth) unit_0093(c, 146u, depth + 1u); else { c.pc = 0x0034CE10u; return; } if (c.pc != 0x0031EAA4u) [[unlikely]] return; }
L_0031EAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EAD8; } }
    c.budget -= 1;
L_0031EAB0:
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] - 5784u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 5786u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_0031EAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EAF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EB18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031EB18u) [[unlikely]] return; }
L_0031EB18:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_0031EEC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5520u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031EB50:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EB64u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0031EB64u) [[unlikely]] return; }
L_0031EB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EEC0; } }
    c.budget -= 1;
L_0031EB70:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EB8Cu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031EB8Cu) [[unlikely]] return; }
L_0031EB8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EBA8u); st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0031EBA8u) [[unlikely]] return; }
L_0031EBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EEC0; } }
L_0031EBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EBB8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031EBB8u) [[unlikely]] return; }
L_0031EBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031EEC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031EEC0; } }
    c.budget -= 1;
L_0031EBD8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 5456u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EBF4u); set32(c.r[6], 0u + 10380u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031EBF4u) [[unlikely]] return; }
L_0031EBF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] + 21840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC0Cu); c.r[6].d[0] = c.r[2].d[0] | 38229ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031EC0Cu) [[unlikely]] return; }
L_0031EC0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 5456u);
    c.budget -= 3;
L_0031EC18:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 2u);
    st16((c.r[3].w[0] + 346u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 3u);
    st16((c.r[3].w[0] + 692u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 4u);
    st16((c.r[3].w[0] + 1038u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 5u);
    st16((c.r[3].w[0] + 1384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 6u);
    st16((c.r[3].w[0] + 1730u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 6u);
    c.r[2].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 2076u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EC18u | kUnwind; return; } goto L_0031EC18; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC68u); set32(c.r[5], c.r[5].w[0] - 4368u);  if (depth < kMaxDepth) unit_0091(c, 417u, depth + 1u); else { c.pc = 0x00347E30u; return; } if (c.pc != 0x0031EC68u) [[unlikely]] return; }
L_0031EC68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC78u); set32(c.r[5], c.r[5].w[0] - 4224u);  if (depth < kMaxDepth) unit_0092(c, 8u, depth + 1u); else { c.pc = 0x00348120u; return; } if (c.pc != 0x0031EC78u) [[unlikely]] return; }
L_0031EC78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC88u); set32(c.r[5], c.r[5].w[0] - 6032u);  if (depth < kMaxDepth) unit_0092(c, 106u, depth + 1u); else { c.pc = 0x00348D20u; return; } if (c.pc != 0x0031EC88u) [[unlikely]] return; }
L_0031EC88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC98u); set32(c.r[5], c.r[5].w[0] - 5760u);  if (depth < kMaxDepth) unit_0091(c, 403u, depth + 1u); else { c.pc = 0x00347B50u; return; } if (c.pc != 0x0031EC98u) [[unlikely]] return; }
L_0031EC98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECA8u); set32(c.r[5], c.r[5].w[0] - 5632u);  if (depth < kMaxDepth) unit_0092(c, 219u, depth + 1u); else { c.pc = 0x00349DC0u; return; } if (c.pc != 0x0031ECA8u) [[unlikely]] return; }
L_0031ECA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECB8u); set32(c.r[5], c.r[5].w[0] - 5536u);  if (depth < kMaxDepth) unit_0093(c, 143u, depth + 1u); else { c.pc = 0x0034CD90u; return; } if (c.pc != 0x0031ECB8u) [[unlikely]] return; }
L_0031ECB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 118u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECCCu); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0031ECCCu) [[unlikely]] return; }
L_0031ECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EEC0; } }
    c.budget -= 1;
L_0031ECD8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031EEC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECFCu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031ECFCu) [[unlikely]] return; }
L_0031ECFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED10u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031ED10u) [[unlikely]] return; }
L_0031ED10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED20u); set32(c.r[5], c.r[5].w[0] - 4000u);  if (depth < kMaxDepth) unit_0092(c, 68u, depth + 1u); else { c.pc = 0x00348800u; return; } if (c.pc != 0x0031ED20u) [[unlikely]] return; }
L_0031ED20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EEC0; } }
L_0031ED28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED30u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031ED30u) [[unlikely]] return; }
L_0031ED30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EEC0; } }
L_0031ED38:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED48u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031ED48u) [[unlikely]] return; }
L_0031ED48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED58u); set32(c.r[5], c.r[5].w[0] + 15520u);  if (depth < kMaxDepth) unit_0092(c, 174u, depth + 1u); else { c.pc = 0x00349590u; return; } if (c.pc != 0x0031ED58u) [[unlikely]] return; }
L_0031ED58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15520u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15521u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15522u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21840u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21841u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 21924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031EEC0; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[20], c.r[20].w[0] + 15520u);
    set32(c.r[19], c.r[19].w[0] + 21840u);
    c.budget -= 5;
L_0031EDB0:
    set32(c.r[4], c.r[19].w[0] + 86u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EDBCu); set32(c.r[5], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031EDBCu) [[unlikely]] return; }
L_0031EDBC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 69u));
    st8((c.r[19].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 70u));
    st8((c.r[19].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 71u));
    st8((c.r[19].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 153u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 151u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0031EE18; } }
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0031EDF0:
    set32(c.r[4], c.r[17].w[0] + 189u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EDFCu); set32(c.r[5], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031EDFCu) [[unlikely]] return; }
L_0031EDFC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 151u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 65u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 65u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EDF0u | kUnwind; return; } goto L_0031EDF0; } }
    c.budget -= 1;
L_0031EE18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 5285u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 5288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EDB0u | kUnwind; return; } goto L_0031EDB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EEC0; } }
    c.budget -= 1;
L_0031EE40:
    set32(c.r[2], 0u + 3u);
    st8((c.r[6].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EE64u); st8((c.r[2].w[0] + 8275u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031EE64u) [[unlikely]] return; }
L_0031EE64:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u + 346u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 21858u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EE90u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031EE90u) [[unlikely]] return; }
L_0031EE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] - 5435u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EEACu); st8((c.r[1].w[0] + 21922u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031EEACu) [[unlikely]] return; }
L_0031EEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EEB4u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031EEB4u) [[unlikely]] return; }
L_0031EEB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EEC0u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0095(c, 55u, depth + 1u); else { c.pc = 0x00354A50u; return; } if (c.pc != 0x0031EEC0u) [[unlikely]] return; }
L_0031EEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0031EEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031EF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EF18u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031EF18u) [[unlikely]] return; }
L_0031EF18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_0031EF50; } }
    set32(c.r[2], 0u + 346u);
    set32(c.r[4], c.r[5].w[0] + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EF48u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0091(c, 420u, depth + 1u); else { c.pc = 0x00347EB0u; return; } if (c.pc != 0x0031EF48u) [[unlikely]] return; }
L_0031EF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EF68; } }
L_0031EF50:
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5432u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0031EF68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031F048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EFA8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031EFA8u) [[unlikely]] return; }
L_0031EFA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_0031EFF0; } }
    set32(c.r[2], 0u + 346u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 5456u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[2].w[0] + 8u);
    set32(c.r[7], c.r[2].w[0] + 12u);
    set32(c.r[8], c.r[2].w[0] + 10u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EFE8u); set32(c.r[9], c.r[2].w[0] + 14u);  if (depth < kMaxDepth) unit_0092(c, 11u, depth + 1u); else { c.pc = 0x003481A0u; return; } if (c.pc != 0x0031EFE8u) [[unlikely]] return; }
L_0031EFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F048; } }
L_0031EFF0:
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[7], c.r[7].w[0] - 5452u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[6], c.r[6].w[0] - 5448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[5], c.r[5].w[0] - 5446u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 5444u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5442u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 22;
L_0031F048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 25u)));  if (t) { goto L_0031F138; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2606u));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 2606u);  if (t) { goto L_0031F138; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031F0F8; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0031F0E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031F0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F138; } }
    c.budget -= 1;
L_0031F0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0D0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 309u, depth + 1u); else { c.pc = 0x0034ABD0u; return; } if (c.pc != 0x0031F0D0u) [[unlikely]] return; }
L_0031F0D0:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0E0u); c.r[5].d[0] = 0ull | 65440ull;  if (depth < kMaxDepth) unit_008C(c, 201u, depth + 1u); else { c.pc = 0x003336A0u; return; } if (c.pc != 0x0031F0E0u) [[unlikely]] return; }
L_0031F0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F138; } }
L_0031F0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0F0u);  if (depth < kMaxDepth) unit_008C(c, 207u, depth + 1u); else { c.pc = 0x00333870u; return; } if (c.pc != 0x0031F0F0u) [[unlikely]] return; }
L_0031F0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F138; } }
L_0031F0F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031F120; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F118u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031F118u) [[unlikely]] return; }
L_0031F118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F138; } }
L_0031F120:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031F138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F134u);  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031F134u) [[unlikely]] return; }
L_0031F134:
    c.budget -= 1;
L_0031F138:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 2592u);  if (t) { goto L_0031F248; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0031F1F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0031F1E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031F190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F270; } }
L_0031F190:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8279u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = ld8((c.r[1].w[0] + 16016u));  if (t) { goto L_0031F270; } }
    set32(c.r[4], 0u + 346u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 5798u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0031F270; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F1D8u); set32(c.r[5], c.r[5].w[0] - 4224u);  if (depth < kMaxDepth) unit_0092(c, 8u, depth + 1u); else { c.pc = 0x00348120u; return; } if (c.pc != 0x0031F1D8u) [[unlikely]] return; }
L_0031F1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F270; } }
L_0031F1E0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F1F0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0031F1F0u) [[unlikely]] return; }
L_0031F1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F270; } }
L_0031F1F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F214u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031F214u) [[unlikely]] return; }
L_0031F214:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F234u); st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 55u, depth + 1u); else { c.pc = 0x00354A50u; return; } if (c.pc != 0x0031F234u) [[unlikely]] return; }
L_0031F234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F23Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0031F23Cu) [[unlikely]] return; }
L_0031F23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F270; } }
    c.budget -= 1;
L_0031F248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F250u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031F250u) [[unlikely]] return; }
L_0031F250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F270; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0031F270:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031F280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F294u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031F294u) [[unlikely]] return; }
L_0031F294:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + 8290u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8290u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);  if (t) { goto L_0031F2C0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F2BCu); set32(c.r[5], c.r[5].w[0] - 5632u);  if (depth < kMaxDepth) unit_0092(c, 219u, depth + 1u); else { c.pc = 0x00349DC0u; return; } if (c.pc != 0x0031F2BCu) [[unlikely]] return; }
L_0031F2BC:
    c.budget -= 1;
L_0031F2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F2C8u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031F2C8u) [[unlikely]] return; }
L_0031F2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F2D8u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x0031F2D8u) [[unlikely]] return; }
L_0031F2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F2E8u);  if (depth < kMaxDepth) unit_0088(c, 402u, depth + 1u); else { c.pc = 0x00323670u; return; } if (c.pc != 0x0031F2E8u) [[unlikely]] return; }
L_0031F2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F2F8u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031F2F8u) [[unlikely]] return; }
L_0031F2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F460; } }
L_0031F300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F308u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031F308u) [[unlikely]] return; }
L_0031F308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F3F0; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2597u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 346u);  if (t) { goto L_0031F3B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 5790u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 5786u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031F370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F364u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F364u) [[unlikely]] return; }
L_0031F364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F448; } }
    c.budget -= 1;
L_0031F370:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2591u));
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F3A8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F3A8u) [[unlikely]] return; }
L_0031F3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F448; } }
L_0031F3B0:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2591u));
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F3E8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F3E8u) [[unlikely]] return; }
L_0031F3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F448; } }
L_0031F3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F3F8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031F3F8u) [[unlikely]] return; }
L_0031F3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031F448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F41Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F41Cu) [[unlikely]] return; }
L_0031F41C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2597u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[5].w[0] + 2597u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031F448; } }
    c.budget -= 1;
L_0031F440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F448u);  if (depth < kMaxDepth) unit_0088(c, 29u, depth + 1u); else { c.pc = 0x00320200u; return; } if (c.pc != 0x0031F448u) [[unlikely]] return; }
L_0031F448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st8((c.r[3].w[0] + 9846u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0031F460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031F560; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F498u); st8((c.r[3].w[0] + 9845u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031F498u) [[unlikely]] return; }
L_0031F498:
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = ld8((c.r[7].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_0031F550; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0031F550; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0031F510; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031F4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F560; } }
    c.budget -= 1;
L_0031F4D0:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2591u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[5], c.r[5].w[0] - 400u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F504u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 572u, depth + 1u); else { c.pc = 0x0034FB90u; return; } if (c.pc != 0x0031F504u) [[unlikely]] return; }
L_0031F504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F560; } }
    c.budget -= 1;
L_0031F510:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2591u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[3], 0u + 21u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 400u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10312u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F548u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 572u, depth + 1u); else { c.pc = 0x0034FB90u; return; } if (c.pc != 0x0031F548u) [[unlikely]] return; }
L_0031F548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F560; } }
L_0031F550:
    set32(c.r[3], 0u + 9u);
    st8((c.r[7].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0031F560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031F570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031F5B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031F5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F5C8; } }
    c.budget -= 1;
L_0031F5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5A8u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031F5A8u) [[unlikely]] return; }
L_0031F5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F5C8; } }
L_0031F5B0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0031F5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031F5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + 8290u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8290u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031F618; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F608u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031F608u) [[unlikely]] return; }
L_0031F608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F618u); set32(c.r[5], c.r[5].w[0] - 5632u);  if (depth < kMaxDepth) unit_0092(c, 219u, depth + 1u); else { c.pc = 0x00349DC0u; return; } if (c.pc != 0x0031F618u) [[unlikely]] return; }
L_0031F618:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_0031F7F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5488u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031F648:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8279u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031F670; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[4].w[0] + 2597u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031F680; } }
L_0031F670:
    st8((c.r[4].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0031F680:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031F7F8; } }
    c.budget -= 1;
L_0031F6A8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031F7F8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9845u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031F7F8; } }
L_0031F6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F6E0u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031F6E0u) [[unlikely]] return; }
L_0031F6E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F6F0u);  if (depth < kMaxDepth) unit_0088(c, 402u, depth + 1u); else { c.pc = 0x00323670u; return; } if (c.pc != 0x0031F6F0u) [[unlikely]] return; }
L_0031F6F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F700u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031F700u) [[unlikely]] return; }
L_0031F700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F7F8; } }
L_0031F708:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8279u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F720u);  if (depth < kMaxDepth) unit_0087(c, 354u, depth + 1u); else { c.pc = 0x0031F810u; return; } if (c.pc != 0x0031F720u) [[unlikely]] return; }
L_0031F720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F7F8; } }
L_0031F728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F730u);  if (depth < kMaxDepth) unit_0087(c, 366u, depth + 1u); else { c.pc = 0x0031FA00u; return; } if (c.pc != 0x0031F730u) [[unlikely]] return; }
L_0031F730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F7F8; } }
L_0031F738:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031F7F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031F7F8; } }
    c.budget -= 1;
L_0031F768:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031F7F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F78Cu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 581u, depth + 1u); else { c.pc = 0x0034FC90u; return; } if (c.pc != 0x0031F78Cu) [[unlikely]] return; }
L_0031F78C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 60u);
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031F7F8; } }
    c.budget -= 1;
L_0031F7A8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031F7F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031F7F8; } }
    c.budget -= 1;
L_0031F7D0:
    set32(c.r[5], 0u + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    c.budget -= 10;
L_0031F7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031F80C:
    c.budget -= 1;
L_0031F810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F820u);  if (depth < kMaxDepth) unit_0088(c, 29u, depth + 1u); else { c.pc = 0x00320200u; return; } if (c.pc != 0x0031F820u) [[unlikely]] return; }
L_0031F820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F828u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031F828u) [[unlikely]] return; }
L_0031F828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F990; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0031F968; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0031F930; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0031F930; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031F868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F980; } }
    c.budget -= 1;
L_0031F868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F870u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031F870u) [[unlikely]] return; }
L_0031F870:
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], 0u + 346u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5442u);
    set32(c.r[2], c.r[2].w[0] - 5440u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F8E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] - 5438u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);  if (t) { goto L_0031F8E0; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 5446u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031F8F8; } }
L_0031F8E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031F8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8ECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F8ECu) [[unlikely]] return; }
L_0031F8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F9F0; } }
    c.budget -= 1;
L_0031F8F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F910u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F910u) [[unlikely]] return; }
L_0031F910:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 30u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031F980; } }
    c.budget -= 1;
L_0031F930:
    set32(c.r[5], 0u + 3u);
    st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F948u); st8((c.r[2].w[0] + 9845u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F948u) [[unlikely]] return; }
L_0031F948:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 30u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031F980; } }
    c.budget -= 1;
L_0031F968:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F974u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F974u) [[unlikely]] return; }
L_0031F974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F9F0; } }
    c.budget -= 1;
L_0031F980:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031F9D8; } }
L_0031F990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F998u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031F998u) [[unlikely]] return; }
L_0031F998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F9D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031F9D8; } }
    goto L_0031F9B4;
L_0031F9B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031F9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F9BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031F9BCu) [[unlikely]] return; }
L_0031F9BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2597u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[5].w[0] + 2597u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0031F9D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 7u);
    st8((c.r[3].w[0] + 9846u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0031F9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0031FA08:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA1Cu); set32(c.r[4], c.r[2].w[0] + 2597u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031FA1Cu) [[unlikely]] return; }
L_0031FA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA24u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031FA24u) [[unlikely]] return; }
L_0031FA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031FAA8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031FA68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031FA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FAE0; } }
L_0031FA50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA5Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031FA5Cu) [[unlikely]] return; }
L_0031FA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FAE0; } }
    c.budget -= 1;
L_0031FA68:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA88u); st8((c.r[2].w[0] + 9845u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031FA88u) [[unlikely]] return; }
L_0031FA88:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 30u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031FAE0; } }
    c.budget -= 1;
L_0031FAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FAB0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031FAB0u) [[unlikely]] return; }
L_0031FAB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031FAE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031FAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FAD4u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031FAD4u) [[unlikely]] return; }
L_0031FAD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0031FAE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2597u));
    st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2597u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st8((c.r[4].w[0] + 9846u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_0031FBB8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031FB90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031FB80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031FB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FC10; } }
L_0031FB50:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB5Cu); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031FB5Cu) [[unlikely]] return; }
L_0031FB5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 22u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB78u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 572u, depth + 1u); else { c.pc = 0x0034FB90u; return; } if (c.pc != 0x0031FB78u) [[unlikely]] return; }
L_0031FB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FC10; } }
L_0031FB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB88u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031FB88u) [[unlikely]] return; }
L_0031FB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FC10; } }
L_0031FB90:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10312u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10191u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031FC10; } }
L_0031FBB8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031FC10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
L_0031FBE4:
    st8((c.r[3].w[0] + 10191u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9845u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_0031FC10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_0031FD70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5456u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031FC58:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC74u); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031FC74u) [[unlikely]] return; }
L_0031FC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FD70; } }
    goto L_0031FC7C;
L_0031FC78:
    c.budget -= 1;
L_0031FC7C:
    c.budget -= 1;
L_0031FC80:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031FD70; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 75u);
    set32(c.r[4], 0u + 20u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FCBCu); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0031FCBCu) [[unlikely]] return; }
L_0031FCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FD70; } }
    c.budget -= 1;
L_0031FCC8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031FD70; } }
    goto L_0031FCD8;
L_0031FCD4:
    st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);
    c.budget -= 1;
L_0031FCD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031FD70; } }
    c.budget -= 1;
L_0031FCF0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FCFCu); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031FCFCu) [[unlikely]] return; }
L_0031FCFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 23u);
    c.budget -= 2;
L_0031FD04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] - 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD14u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0092(c, 44u, depth + 1u); else { c.pc = 0x003485F0u; return; } if (c.pc != 0x0031FD14u) [[unlikely]] return; }
L_0031FD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FD70; } }
    c.budget -= 1;
L_0031FD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD28u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031FD28u) [[unlikely]] return; }
L_0031FD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FD70; } }
    goto L_0031FD30;
L_0031FD2C:
    c.budget -= 1;
L_0031FD30:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD44u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031FD44u) [[unlikely]] return; }
L_0031FD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FD70; } }
    c.budget -= 1;
L_0031FD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD58u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031FD58u) [[unlikely]] return; }
L_0031FD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031FD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD68u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031FD68u) [[unlikely]] return; }
L_0031FD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD70u);  if (depth < kMaxDepth) unit_0086(c, 462u, depth + 1u); else { c.pc = 0x0031BA70u; return; } if (c.pc != 0x0031FD70u) [[unlikely]] return; }
L_0031FD70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_0031FD84:
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[3].w[0] + 2592u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0031FDC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031FDB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FDE8; } }
L_0031FDB0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDC0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031FDC0u) [[unlikely]] return; }
L_0031FDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FDE8; } }
L_0031FDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDD0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031FDD0u) [[unlikely]] return; }
    goto L_0031FDD0;
L_0031FDCC:
    c.budget -= 1;
L_0031FDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031FDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDE0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031FDE0u) [[unlikely]] return; }
L_0031FDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 23u, depth + 1u); else { c.pc = 0x00320130u; return; } if (c.pc != 0x0031FDE8u) [[unlikely]] return; }
L_0031FDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FE00:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.budget -= 3;
L_0031FE0C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_0031FE10:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 1;
L_0031FE14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031FE68; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031FE68; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031FE50; } }
    goto L_0031FE3C;
L_0031FE38:
    c.budget -= 1;
L_0031FE3C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031FE68; } }
    goto L_0031FE50;
L_0031FE4C:
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0031FE50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 6u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
L_0031FE60:
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0031FE68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FE70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
L_0031FE80:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[4].w[0] + 2606u);  if (t) { goto L_0031FED8; } }
    set32(c.r[3], 0u + 21u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2606u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031FED8; } }
L_0031FE9C:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031FEC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FEB0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031FED8; } }
L_0031FEC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FEC4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0031FEC8:
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 2;
L_0031FED0:
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0031FED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031FEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
L_0031FEEC:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.budget -= 2;
L_0031FEF4:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031FF58; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    c.budget -= 1;
L_0031FF04:
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031FF58; } }
    goto L_0031FF10;
L_0031FF0C:
    set32(c.r[6], c.r[5].w[0] + 2606u);
    c.budget -= 1;
L_0031FF10:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FF14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031FF38; } }
    goto L_0031FF20;
L_0031FF1C:
    c.budget -= 1;
L_0031FF20:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_0031FF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031FF58; } }
    goto L_0031FF34;
L_0031FF30:
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0031FF34:
    c.budget -= 1;
L_0031FF38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0031FF44:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF58u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031FF58u) [[unlikely]] return; }
L_0031FF58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031FF60:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_0031FF64:
    c.budget -= 3;
L_0031FF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_0031FF7C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_0031FF80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
L_0031FF8C:
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FF90:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FF94:
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FF98:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FF9C:
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FFA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FFACu); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x0031FFACu) [[unlikely]] return; }
    goto L_0031FFAC;
L_0031FFA8:
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FFB4u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031FFB4u) [[unlikely]] return; }
    goto L_0031FFB4;
L_0031FFB0:
    c.budget -= 1;
L_0031FFB4:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], 0u + 1u);
    c.budget -= 2;
L_0031FFBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[8], 0u + 60u);
    c.budget -= 4;
L_0031FFCC:
    set32(c.r[7], 0u + 20u);
    c.budget -= 1;
L_0031FFD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 1;
L_0031FFD4:
    set32(c.r[4], 0u + 346u);
    set32(c.r[3], c.r[3].w[0] - 5438u);
    c.budget -= 2;
L_0031FFDC:
    set32(c.r[2], c.r[2].w[0] - 5440u);
    c.budget -= 1;
L_0031FFE0:
    set32(c.r[5], c.r[5].w[0] - 6032u);
    st8((c.r[6].w[0] + 8275u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 2;
L_0031FFE8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FFEC:
    st8((c.r[6].w[0] + 8276u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FFF0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FFF4:
    st8((c.r[6].w[0] + 10312u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031FFF8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0031FFFC:
    st8((c.r[6].w[0] + 9845u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 1;
    [[clang::musttail]] return unit_0088(c, 1u, depth);
}

}
