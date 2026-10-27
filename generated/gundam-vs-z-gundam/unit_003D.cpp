#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003D[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0,
    33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0,
    0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0,
    0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0,
    190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0,
    0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0,
    0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0,
    0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0,
    0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277,
    0, 278, 0, 279, 0, 280, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F4000;
    case 2u: goto L_001F4004;
    case 3u: goto L_001F4028;
    case 4u: goto L_001F4050;
    case 5u: goto L_001F4068;
    case 6u: goto L_001F4070;
    case 7u: goto L_001F407C;
    case 8u: goto L_001F4090;
    case 9u: goto L_001F409C;
    case 10u: goto L_001F40A4;
    case 11u: goto L_001F40B4;
    case 12u: goto L_001F40D0;
    case 13u: goto L_001F4170;
    case 14u: goto L_001F4198;
    case 15u: goto L_001F41A0;
    case 16u: goto L_001F41CC;
    case 17u: goto L_001F41F4;
    case 18u: goto L_001F4200;
    case 19u: goto L_001F422C;
    case 20u: goto L_001F4254;
    case 21u: goto L_001F42D4;
    case 22u: goto L_001F42E4;
    case 23u: goto L_001F42E8;
    case 24u: goto L_001F4320;
    case 25u: goto L_001F43A8;
    case 26u: goto L_001F43C8;
    case 27u: goto L_001F43D0;
    case 28u: goto L_001F43FC;
    case 29u: goto L_001F4414;
    case 30u: goto L_001F441C;
    case 31u: goto L_001F445C;
    case 32u: goto L_001F4474;
    case 33u: goto L_001F4480;
    case 34u: goto L_001F448C;
    case 35u: goto L_001F44A4;
    case 36u: goto L_001F44B0;
    case 37u: goto L_001F44C4;
    case 38u: goto L_001F44E0;
    case 39u: goto L_001F4560;
    case 40u: goto L_001F4578;
    case 41u: goto L_001F4580;
    case 42u: goto L_001F4598;
    case 43u: goto L_001F45B0;
    case 44u: goto L_001F45B8;
    case 45u: goto L_001F45D0;
    case 46u: goto L_001F45E8;
    case 47u: goto L_001F465C;
    case 48u: goto L_001F466C;
    case 49u: goto L_001F4678;
    case 50u: goto L_001F46A0;
    case 51u: goto L_001F46A8;
    case 52u: goto L_001F46B8;
    case 53u: goto L_001F46CC;
    case 54u: goto L_001F4710;
    case 55u: goto L_001F47A0;
    case 56u: goto L_001F47C8;
    case 57u: goto L_001F47E0;
    case 58u: goto L_001F47E8;
    case 59u: goto L_001F47F4;
    case 60u: goto L_001F4808;
    case 61u: goto L_001F4814;
    case 62u: goto L_001F481C;
    case 63u: goto L_001F482C;
    case 64u: goto L_001F4848;
    case 65u: goto L_001F48D0;
    case 66u: goto L_001F48E8;
    case 67u: goto L_001F48F0;
    case 68u: goto L_001F490C;
    case 69u: goto L_001F4924;
    case 70u: goto L_001F4930;
    case 71u: goto L_001F494C;
    case 72u: goto L_001F4964;
    case 73u: goto L_001F49CC;
    case 74u: goto L_001F49DC;
    case 75u: goto L_001F4A10;
    case 76u: goto L_001F4A50;
    case 77u: goto L_001F4ACC;
    case 78u: goto L_001F4C38;
    case 79u: goto L_001F4C44;
    case 80u: goto L_001F4C78;
    case 81u: goto L_001F4CE0;
    case 82u: goto L_001F4D00;
    case 83u: goto L_001F4D20;
    case 84u: goto L_001F4D60;
    case 85u: goto L_001F4D88;
    case 86u: goto L_001F4DE0;
    case 87u: goto L_001F4E3C;
    case 88u: goto L_001F4E74;
    case 89u: goto L_001F4E88;
    case 90u: goto L_001F4EA0;
    case 91u: goto L_001F4F08;
    case 92u: goto L_001F4F74;
    case 93u: goto L_001F4FA0;
    case 94u: goto L_001F5000;
    case 95u: goto L_001F5028;
    case 96u: goto L_001F5050;
    case 97u: goto L_001F5090;
    case 98u: goto L_001F50F0;
    case 99u: goto L_001F5110;
    case 100u: goto L_001F5130;
    case 101u: goto L_001F5160;
    case 102u: goto L_001F51AC;
    case 103u: goto L_001F53AC;
    case 104u: goto L_001F540C;
    case 105u: goto L_001F5430;
    case 106u: goto L_001F5458;
    case 107u: goto L_001F5480;
    case 108u: goto L_001F5490;
    case 109u: goto L_001F54A0;
    case 110u: goto L_001F54C8;
    case 111u: goto L_001F54D4;
    case 112u: goto L_001F54F0;
    case 113u: goto L_001F5518;
    case 114u: goto L_001F5580;
    case 115u: goto L_001F55A0;
    case 116u: goto L_001F56C0;
    case 117u: goto L_001F56F8;
    case 118u: goto L_001F5700;
    case 119u: goto L_001F5708;
    case 120u: goto L_001F5764;
    case 121u: goto L_001F5788;
    case 122u: goto L_001F57A8;
    case 123u: goto L_001F57C8;
    case 124u: goto L_001F57D0;
    case 125u: goto L_001F57F0;
    case 126u: goto L_001F5938;
    case 127u: goto L_001F5948;
    case 128u: goto L_001F595C;
    case 129u: goto L_001F5984;
    case 130u: goto L_001F59A0;
    case 131u: goto L_001F5A4C;
    case 132u: goto L_001F5A68;
    case 133u: goto L_001F5A80;
    case 134u: goto L_001F5A98;
    case 135u: goto L_001F5AA0;
    case 136u: goto L_001F5B48;
    case 137u: goto L_001F5BA4;
    case 138u: goto L_001F5BC0;
    case 139u: goto L_001F5BD0;
    case 140u: goto L_001F5BE8;
    case 141u: goto L_001F5BF4;
    case 142u: goto L_001F5C04;
    case 143u: goto L_001F5C10;
    case 144u: goto L_001F5C70;
    case 145u: goto L_001F5C9C;
    case 146u: goto L_001F5CB8;
    case 147u: goto L_001F5CC4;
    case 148u: goto L_001F5CD0;
    case 149u: goto L_001F5CE0;
    case 150u: goto L_001F5D64;
    case 151u: goto L_001F5DBC;
    case 152u: goto L_001F5DE0;
    case 153u: goto L_001F5DF8;
    case 154u: goto L_001F5E04;
    case 155u: goto L_001F5E10;
    case 156u: goto L_001F5E1C;
    case 157u: goto L_001F5E74;
    case 158u: goto L_001F5E80;
    case 159u: goto L_001F5E88;
    case 160u: goto L_001F6000;
    case 161u: goto L_001F6038;
    case 162u: goto L_001F6048;
    case 163u: goto L_001F605C;
    case 164u: goto L_001F60E4;
    case 165u: goto L_001F60F4;
    case 166u: goto L_001F613C;
    case 167u: goto L_001F6174;
    case 168u: goto L_001F6184;
    case 169u: goto L_001F61D4;
    case 170u: goto L_001F61E4;
    case 171u: goto L_001F6208;
    case 172u: goto L_001F6210;
    case 173u: goto L_001F6290;
    case 174u: goto L_001F62AC;
    case 175u: goto L_001F62BC;
    case 176u: goto L_001F6370;
    case 177u: goto L_001F6380;
    case 178u: goto L_001F6390;
    case 179u: goto L_001F6450;
    case 180u: goto L_001F6464;
    case 181u: goto L_001F6480;
    case 182u: goto L_001F6520;
    case 183u: goto L_001F6540;
    case 184u: goto L_001F6548;
    case 185u: goto L_001F6554;
    case 186u: goto L_001F6570;
    case 187u: goto L_001F65B8;
    case 188u: goto L_001F65E8;
    case 189u: goto L_001F65F8;
    case 190u: goto L_001F6600;
    case 191u: goto L_001F6608;
    case 192u: goto L_001F6610;
    case 193u: goto L_001F6618;
    case 194u: goto L_001F6638;
    case 195u: goto L_001F6664;
    case 196u: goto L_001F6670;
    case 197u: goto L_001F6678;
    case 198u: goto L_001F6688;
    case 199u: goto L_001F6690;
    case 200u: goto L_001F6698;
    case 201u: goto L_001F66A0;
    case 202u: goto L_001F66B8;
    case 203u: goto L_001F66D0;
    case 204u: goto L_001F66EC;
    case 205u: goto L_001F66F8;
    case 206u: goto L_001F6700;
    case 207u: goto L_001F6724;
    case 208u: goto L_001F6730;
    case 209u: goto L_001F6750;
    case 210u: goto L_001F6760;
    case 211u: goto L_001F6768;
    case 212u: goto L_001F6770;
    case 213u: goto L_001F678C;
    case 214u: goto L_001F6798;
    case 215u: goto L_001F67A0;
    case 216u: goto L_001F67A8;
    case 217u: goto L_001F67B0;
    case 218u: goto L_001F67B8;
    case 219u: goto L_001F67C0;
    case 220u: goto L_001F67D0;
    case 221u: goto L_001F67D8;
    case 222u: goto L_001F67E0;
    case 223u: goto L_001F67E8;
    case 224u: goto L_001F67F0;
    case 225u: goto L_001F6804;
    case 226u: goto L_001F6814;
    case 227u: goto L_001F681C;
    case 228u: goto L_001F6824;
    case 229u: goto L_001F682C;
    case 230u: goto L_001F6834;
    case 231u: goto L_001F6840;
    case 232u: goto L_001F6864;
    case 233u: goto L_001F6870;
    case 234u: goto L_001F68C8;
    case 235u: goto L_001F68E4;
    case 236u: goto L_001F68F4;
    case 237u: goto L_001F68FC;
    case 238u: goto L_001F6904;
    case 239u: goto L_001F6924;
    case 240u: goto L_001F6930;
    case 241u: goto L_001F6950;
    case 242u: goto L_001F6960;
    case 243u: goto L_001F6970;
    case 244u: goto L_001F69A0;
    case 245u: goto L_001F69C0;
    case 246u: goto L_001F69C8;
    case 247u: goto L_001F69D0;
    case 248u: goto L_001F69D8;
    case 249u: goto L_001F69E0;
    case 250u: goto L_001F69F4;
    case 251u: goto L_001F6A04;
    case 252u: goto L_001F6A0C;
    case 253u: goto L_001F6A14;
    case 254u: goto L_001F6A20;
    case 255u: goto L_001F6A38;
    case 256u: goto L_001F6A64;
    case 257u: goto L_001F6A70;
    case 258u: goto L_001F6A78;
    case 259u: goto L_001F6A88;
    case 260u: goto L_001F6A90;
    case 261u: goto L_001F6A98;
    case 262u: goto L_001F6AA0;
    case 263u: goto L_001F6AA8;
    case 264u: goto L_001F6AB0;
    case 265u: goto L_001F6AB8;
    case 266u: goto L_001F6ACC;
    case 267u: goto L_001F6ADC;
    case 268u: goto L_001F6AE4;
    case 269u: goto L_001F6AF0;
    case 270u: goto L_001F6B20;
    case 271u: goto L_001F6B30;
    case 272u: goto L_001F6B38;
    case 273u: goto L_001F6B40;
    case 274u: goto L_001F6B48;
    case 275u: goto L_001F6B50;
    case 276u: goto L_001F6B6C;
    case 277u: goto L_001F6B7C;
    case 278u: goto L_001F6B84;
    case 279u: goto L_001F6B8C;
    case 280u: goto L_001F6B94;
    case 281u: goto L_001F6B9C;
    case 282u: goto L_001F6BA0;
    case 283u: goto L_001F6BC0;
    case 284u: goto L_001F6BE8;
    case 285u: goto L_001F6C50;
    case 286u: goto L_001F6C70;
    case 287u: goto L_001F6D80;
    case 288u: goto L_001F6D9C;
    case 289u: goto L_001F6DA8;
    case 290u: goto L_001F6DB0;
    case 291u: goto L_001F6DD0;
    case 292u: goto L_001F6E00;
    case 293u: goto L_001F6E74;
    case 294u: goto L_001F6E7C;
    case 295u: goto L_001F6E84;
    case 296u: goto L_001F6EC8;
    case 297u: goto L_001F6EF4;
    case 298u: goto L_001F6F10;
    case 299u: goto L_001F6F20;
    case 300u: goto L_001F6F30;
    case 301u: goto L_001F6F40;
    case 302u: goto L_001F6F78;
    case 303u: goto L_001F7080;
    case 304u: goto L_001F70A0;
    case 305u: goto L_001F70E8;
    case 306u: goto L_001F70F4;
    case 307u: goto L_001F7114;
    case 308u: goto L_001F711C;
    case 309u: goto L_001F7130;
    case 310u: goto L_001F7164;
    case 311u: goto L_001F7170;
    case 312u: goto L_001F7190;
    case 313u: goto L_001F71D4;
    case 314u: goto L_001F7220;
    case 315u: goto L_001F72D8;
    case 316u: goto L_001F7304;
    case 317u: goto L_001F7344;
    case 318u: goto L_001F7380;
    case 319u: goto L_001F738C;
    case 320u: goto L_001F73A0;
    case 321u: goto L_001F73D4;
    case 322u: goto L_001F7420;
    case 323u: goto L_001F74C8;
    case 324u: goto L_001F74E4;
    case 325u: goto L_001F7500;
    case 326u: goto L_001F755C;
    case 327u: goto L_001F75A0;
    case 328u: goto L_001F7650;
    case 329u: goto L_001F769C;
    case 330u: goto L_001F76B8;
    case 331u: goto L_001F7720;
    case 332u: goto L_001F773C;
    case 333u: goto L_001F7768;
    case 334u: goto L_001F7790;
    case 335u: goto L_001F77B0;
    case 336u: goto L_001F77E0;
    case 337u: goto L_001F7818;
    case 338u: goto L_001F7850;
    case 339u: goto L_001F7870;
    case 340u: goto L_001F7930;
    case 341u: goto L_001F79B4;
    case 342u: goto L_001F79E4;
    case 343u: goto L_001F7A24;
    case 344u: goto L_001F7A50;
    case 345u: goto L_001F7AD0;
    case 346u: goto L_001F7AF0;
    case 347u: goto L_001F7B90;
    case 348u: goto L_001F7BAC;
    case 349u: goto L_001F7BE0;
    case 350u: goto L_001F7C00;
    case 351u: goto L_001F7C24;
    case 352u: goto L_001F7C40;
    case 353u: goto L_001F7C5C;
    case 354u: goto L_001F7C7C;
    case 355u: goto L_001F7C90;
    case 356u: goto L_001F7CA0;
    case 357u: goto L_001F7CB0;
    case 358u: goto L_001F7CC8;
    case 359u: goto L_001F7CF4;
    case 360u: goto L_001F7D18;
    case 361u: goto L_001F7D28;
    case 362u: goto L_001F7D40;
    case 363u: goto L_001F7D64;
    case 364u: goto L_001F7DBC;
    case 365u: goto L_001F7DE0;
    case 366u: goto L_001F7E00;
    case 367u: goto L_001F7E30;
    case 368u: goto L_001F7E7C;
    default: bad_entry(c, 0x001F4000u); return;
    }
L_001F4000:
    c.budget -= 1;
L_001F4004:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F42E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[17].w[0] + 304u);  if (t) { goto L_001F42E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4028u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F4028u) [[unlikely]] return; }
L_001F4028:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4050u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F4050u) [[unlikely]] return; }
L_001F4050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4068u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F4068u) [[unlikely]] return; }
L_001F4068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4070u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F4070u) [[unlikely]] return; }
L_001F4070:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F407Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F407Cu) [[unlikely]] return; }
L_001F407C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4090u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 346u, depth + 1u); else { c.pc = 0x001BB640u; return; } if (c.pc != 0x001F4090u) [[unlikely]] return; }
L_001F4090:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F409Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 348u, depth + 1u); else { c.pc = 0x001BB7A0u; return; } if (c.pc != 0x001F409Cu) [[unlikely]] return; }
L_001F409C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40A4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001F40A4u) [[unlikely]] return; }
L_001F40A4:
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40B4u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F40B4u) [[unlikely]] return; }
L_001F40B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F750000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40D0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F40D0u) [[unlikely]] return; }
L_001F40D0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[6], c.r[6].w[0] + 26496u);
    set32(c.r[21], c.r[29].w[0] + 200u);
    set32(c.r[22], c.r[29].w[0] + 204u);
    set32(c.r[23], c.r[29].w[0] + 208u);
    set32(c.r[19], c.r[29].w[0] + 196u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[16], 0u + 7u);
    set32(c.r[4], 0u + 44u);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1840u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[23].w[0]), c.f[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 101u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[1].d[0] == 0ull; if (c.r[5].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];  if (t) { goto L_001F4258; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16592u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F4170:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4198u); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F4198u) [[unlikely]] return; }
L_001F4198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4258; } }
L_001F41A0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41CCu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F41CCu) [[unlikely]] return; }
L_001F41CC:
    set32(c.r[3], c.r[16].w[0] + 2u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41F4u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F41F4u) [[unlikely]] return; }
L_001F41F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4258; } }
    c.budget -= 1;
L_001F4200:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F422Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F422Cu) [[unlikely]] return; }
L_001F422C:
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4254u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F4254u) [[unlikely]] return; }
L_001F4254:
    c.budget -= 1;
L_001F4258:
    c.f[1] = ld32((c.r[28].w[0] - 32536u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F42E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], c.r[16].w[0] + 3u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32532u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F42C0; } }
    st32((c.r[21].w[0]), c.f[2]);
    st32((c.r[22].w[0]), c.f[2]);
    st32((c.r[23].w[0]), 0u);
    c.budget -= 4;
L_001F42C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42D4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F42D4u) [[unlikely]] return; }
L_001F42D4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F42E4u) [[unlikely]] return; }
L_001F42E4:
    c.budget -= 1;
L_001F42E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001F4320:
    set32(c.r[29], c.r[29].w[0] - 240u);
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[22].w[0] + 304u);  if (t) { goto L_001F46E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F46E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F46E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001F46E0; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], c.r[29].w[0] + 216u);
    set32(c.r[30], c.r[29].w[0] + 220u);
    set32(c.r[16], c.r[29].w[0] + 228u);
    c.budget -= 5;
L_001F43A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_001F46D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F43C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 42u, depth + 1u); else { c.pc = 0x002D8AC0u; return; } if (c.pc != 0x001F43C8u) [[unlikely]] return; }
L_001F43C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F43D0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F43D0u) [[unlikely]] return; }
L_001F43D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F43FCu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F43FCu) [[unlikely]] return; }
L_001F43FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4414u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F4414u) [[unlikely]] return; }
L_001F4414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F441Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F441Cu) [[unlikely]] return; }
L_001F441C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4438; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F4450; } }
L_001F4438:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F4498; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001F4498; } }
    c.budget -= 1;
L_001F4450:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F445Cu); set32(c.r[5], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F445Cu) [[unlikely]] return; }
L_001F445C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 172u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4474u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002E(c, 346u, depth + 1u); else { c.pc = 0x001BB640u; return; } if (c.pc != 0x001F4474u) [[unlikely]] return; }
L_001F4474:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4480u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 348u, depth + 1u); else { c.pc = 0x001BB7A0u; return; } if (c.pc != 0x001F4480u) [[unlikely]] return; }
L_001F4480:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F448Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F448Cu) [[unlikely]] return; }
L_001F448C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F44A8; } }
    c.budget -= 1;
L_001F4498:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44A4u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F44A4u) [[unlikely]] return; }
L_001F44A4:
    c.budget -= 1;
L_001F44A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44B0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001F44B0u) [[unlikely]] return; }
L_001F44B0:
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44C4u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F44C4u) [[unlikely]] return; }
L_001F44C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F750000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44E0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F44E0u) [[unlikely]] return; }
L_001F44E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] + 26496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[30].w[0]), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 224u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 1840u);  if (t) { goto L_001F45E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F4560:
    set32(c.r[2], c.r[19].w[0] + 1920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4578u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F4578u) [[unlikely]] return; }
L_001F4578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F45E8; } }
L_001F4580:
    set32(c.r[2], c.r[19].w[0] + 1920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4598u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F4598u) [[unlikely]] return; }
L_001F4598:
    set32(c.r[2], c.r[19].w[0] + 2160u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F45B0u) [[unlikely]] return; }
L_001F45B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F45E8; } }
L_001F45B8:
    set32(c.r[2], c.r[19].w[0] + 1920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F45D0u) [[unlikely]] return; }
L_001F45D0:
    set32(c.r[2], c.r[19].w[0] + 2640u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F45E8u) [[unlikely]] return; }
L_001F45E8:
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32536u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[19].w[0] + 2400u);  if (t) { goto L_001F4670; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32536u));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32532u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F4648; } }
    st32((c.r[23].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 224u);
    st32((c.r[30].w[0]), c.f[2]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_001F4648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F465Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F465Cu) [[unlikely]] return; }
L_001F465C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F466Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F466Cu) [[unlikely]] return; }
L_001F466C:
    c.budget -= 1;
L_001F4670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4678u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F4678u) [[unlikely]] return; }
L_001F4678:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46A0u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F46A0u) [[unlikely]] return; }
L_001F46A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F46A8u) [[unlikely]] return; }
L_001F46A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_001F46C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 43u, depth + 1u); else { c.pc = 0x002D8AE0u; return; } if (c.pc != 0x001F46B8u) [[unlikely]] return; }
L_001F46B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F46D0; } }
L_001F46C0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 44u, depth + 1u); else { c.pc = 0x002D8B00u; return; } if (c.pc != 0x001F46CCu) [[unlikely]] return; }
L_001F46CC:
    c.budget -= 1;
L_001F46D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F43A8u | kUnwind; return; } goto L_001F43A8; } }
L_001F46E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001F4710:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F49E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F49E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F49E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F49E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F49E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_001F49E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F47A0u) [[unlikely]] return; }
L_001F47A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47C8u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F47C8u) [[unlikely]] return; }
L_001F47C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F47E0u) [[unlikely]] return; }
L_001F47E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F47E8u) [[unlikely]] return; }
L_001F47E8:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47F4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F47F4u) [[unlikely]] return; }
L_001F47F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4808u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 346u, depth + 1u); else { c.pc = 0x001BB640u; return; } if (c.pc != 0x001F4808u) [[unlikely]] return; }
L_001F4808:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4814u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 348u, depth + 1u); else { c.pc = 0x001BB7A0u; return; } if (c.pc != 0x001F4814u) [[unlikely]] return; }
L_001F4814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F481Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001F481Cu) [[unlikely]] return; }
L_001F481C:
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F482Cu); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F482Cu) [[unlikely]] return; }
L_001F482C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F750000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4848u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F4848u) [[unlikely]] return; }
L_001F4848:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], c.r[5].w[0] + 26496u);
    set32(c.r[18], c.r[29].w[0] + 184u);
    set32(c.r[21], c.r[29].w[0] + 188u);
    set32(c.r[22], c.r[29].w[0] + 192u);
    set32(c.r[19], c.r[29].w[0] + 180u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 1840u);  if (t) { goto L_001F4968; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16656u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F48D0:
    set32(c.r[2], c.r[16].w[0] + 6960u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F48E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F48E8u) [[unlikely]] return; }
L_001F48E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4968; } }
L_001F48F0:
    set32(c.r[20], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[16].w[0] + 6960u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F490Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F490Cu) [[unlikely]] return; }
L_001F490C:
    set32(c.r[2], c.r[16].w[0] + 7200u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4924u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F4924u) [[unlikely]] return; }
L_001F4924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4968; } }
    c.budget -= 1;
L_001F4930:
    set32(c.r[20], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[16].w[0] + 6960u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F494Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F494Cu) [[unlikely]] return; }
L_001F494C:
    set32(c.r[2], c.r[16].w[0] + 7680u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4964u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F4964u) [[unlikely]] return; }
L_001F4964:
    c.budget -= 1;
L_001F4968:
    c.f[1] = ld32((c.r[28].w[0] - 32536u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[16].w[0] + 7440u);  if (t) { goto L_001F49E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32532u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F49B8; } }
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[21].w[0]), c.f[2]);
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
L_001F49B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F49CCu) [[unlikely]] return; }
L_001F49CC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001F49DCu) [[unlikely]] return; }
L_001F49DC:
    c.budget -= 1;
L_001F49E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001F4A10:
    st16((c.r[4].w[0] + 304u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[6].w[0] << 1);
    st32((c.r[4].w[0] + 328u), c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26592u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 308u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 316u), c.f[0]);  c.pc = t; return; }
L_001F4A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], ld32((c.r[28].w[0] - 23780u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F4A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4CE8; } }
L_001F4A80:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001F4AC0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F4AC0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8656u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 196u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 196u);  if (t) { goto L_001F4AD8; } }
L_001F4AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4ACCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001F4ACCu) [[unlikely]] return; }
L_001F4ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4AD8:
    c.r[2].d[0] = c.r[8].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4AF8:
    c.r[2].d[0] = c.r[7].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4B18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
L_001F4B28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
L_001F4B40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4B58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_001F4B78; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_001F4B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4CE8; } }
L_001F4B78:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4C98; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    c.r[1].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4BC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 886u)));
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 5);  if (t) { goto L_001F4BC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17280u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001F4C18; } }
L_001F4BC8:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4C10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 886u)));
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4C10; } }
    set32(c.r[5], c.r[3].w[0] - 32u);
    set32(c.r[4], c.r[6].w[0] - 32u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19328u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001F4C18; } }
L_001F4C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4CE8; } }
L_001F4C18:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 195u, depth + 1u); else { c.pc = 0x0023AF60u; return; } if (c.pc != 0x001F4C38u) [[unlikely]] return; }
L_001F4C38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x001F4C44u) [[unlikely]] return; }
L_001F4C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4C60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4C90; } }
L_001F4C60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C78u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x001F4C78u) [[unlikely]] return; }
L_001F4C78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4CE8; } }
L_001F4C98:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 886u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CE8; } }
    c.budget -= 1;
L_001F4CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F4D60u; return; } if (c.pc != 0x001F4CE0u) [[unlikely]] return; }
L_001F4CE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001F4CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F4D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F4D20u) [[unlikely]] return; }
L_001F4D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F4D50; } }
    set32(c.r[3], 0u + 18u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 19936u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_001F4D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D88u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F4D88u) [[unlikely]] return; }
L_001F4D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F4DC8; } }
    set32(c.r[3], 0u + 18u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 886u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[3], c.r[3].w[0] + 20128u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 14;
L_001F4DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F4E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F4E78; } }
    c.budget -= 1;
L_001F4E10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4E50; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 120u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 60u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x001F4E3Cu) [[unlikely]] return; }
L_001F4E3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F4E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F4E78; } }
L_001F4E50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F4E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E74u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x001F4E74u) [[unlikely]] return; }
L_001F4E74:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F4E78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F4E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E88u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x001F4E88u) [[unlikely]] return; }
L_001F4E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4EA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_001F4EF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4EF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4F00; } }
L_001F4EF8:
    set32(c.r[2], 0u + 99u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F4F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F08u);  if (depth < kMaxDepth) unit_004E(c, 195u, depth + 1u); else { c.pc = 0x0023AF60u; return; } if (c.pc != 0x001F4F08u) [[unlikely]] return; }
L_001F4F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_001F4F90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5020; } }
    c.budget -= 1;
L_001F4F30:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[5].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[6].d[0] = c.r[18].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F74u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x001F4F74u) [[unlikely]] return; }
L_001F4F74:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5028; } }
L_001F4F90:
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x001F4FA0u) [[unlikely]] return; }
L_001F4FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_001F5028; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 17040u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001F5010; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_001F5010; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5000u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x001F5000u) [[unlikely]] return; }
L_001F5000:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_001F5010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5028; } }
L_001F5020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5028u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x001F5028u) [[unlikely]] return; }
L_001F5028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 9u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F5080; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F50F0; } }
L_001F5080:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5090u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F5090u) [[unlikely]] return; }
L_001F5090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F50F0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[8], 0u + 18u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 20752u);
    set32(c.r[2], c.r[2].w[0] + 21664u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] - 9u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50F0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F50F0u) [[unlikely]] return; }
L_001F50F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5110:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F5130:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 16384u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F5160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], c.r[19].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_001F5200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F51B0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001F51ACu) [[unlikely]] return; }
L_001F51AC:
    c.budget -= 1;
L_001F51B0:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 750u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F5200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F51F0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001F5200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F5200; } }
    c.budget -= 1;
L_001F51F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5460; } }
L_001F5200:
    set32(c.r[7], ld32((c.r[18].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_001F5440; } }
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5440; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & 28ull;  if (t) { goto L_001F5440; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001F5440; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F5240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5278; } }
L_001F5240:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_001F5258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5278; } }
    c.budget -= 1;
L_001F5258:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_001F5270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5278; } }
    c.budget -= 1;
L_001F5270:
    set32(c.r[6], 0u - 1u);
    c.budget -= 2;
L_001F5278:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F52B0; } }
    c.budget -= 1;
L_001F5290:
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F52A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F52B0; } }
    c.budget -= 1;
L_001F52A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001F52B0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] << 2);  if (t) { goto L_001F52D8; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 6u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F52D8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001F52D8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001F53B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_001F53B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] << 1);  if (t) { goto L_001F53B8; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 26656u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5380; } }
    c.f[0] = ld32((c.r[18].w[0] + 8252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459A0000u);
    c.r[4].d[0] = c.r[2].d[0] | 47104ull;
    c.f[1] = c.r[4].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_001F5388; } }
    c.budget -= 1;
L_001F5380:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001F5388:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F53ACu); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F53ACu) [[unlikely]] return; }
L_001F53AC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F53B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F5418; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F53E0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5460; } }
L_001F53E0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001F5460; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F5460; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F540Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001F540Cu) [[unlikely]] return; }
L_001F540C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5460; } }
    c.budget -= 1;
L_001F5418:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F5430; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001F5430u) [[unlikely]] return; }
L_001F5430:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5460; } }
    c.budget -= 1;
L_001F5440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F5458; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5458u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001F5458u) [[unlikely]] return; }
L_001F5458:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F5460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F5490:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F54A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 306u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54C8u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F54C8u) [[unlikely]] return; }
L_001F54C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54D4u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001F54D4u) [[unlikely]] return; }
L_001F54D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F54F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5518u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F5518u) [[unlikely]] return; }
L_001F5518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5560; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 21888u);
    set32(c.r[3], c.r[3].w[0] + 25888u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_001F5560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 28512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F55A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 839u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F55D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F57D0; } }
L_001F55D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 26752u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    st8((c.r[19].w[0] + 386u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    st8((c.r[19].w[0] + 387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    st8((c.r[19].w[0] + 388u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    st16((c.r[19].w[0] + 380u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 382u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[19].w[0] + 304u), c.f[3]);
    st32((c.r[19].w[0] + 308u), c.f[2]);
    st32((c.r[19].w[0] + 312u), c.f[1]);
    st32((c.r[19].w[0] + 316u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[19].w[0] + 320u), c.f[3]);
    st32((c.r[19].w[0] + 324u), c.f[2]);
    st32((c.r[19].w[0] + 328u), c.f[1]);
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[19].w[0] + 336u), c.f[3]);
    st32((c.r[19].w[0] + 340u), c.f[2]);
    st32((c.r[19].w[0] + 344u), c.f[1]);
    st32((c.r[19].w[0] + 348u), c.f[0]);
    st8((c.r[19].w[0] + 389u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 390u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 391u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 393u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 394u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8658u));
    st8((c.r[19].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 58;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56C0u); set32(c.r[17], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001F56C0u) [[unlikely]] return; }
L_001F56C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F56E0; } }
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 184u), 0u);  if (t) { goto L_001F56F8; } }
    c.budget -= 1;
L_001F56E0:
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F56F8u) [[unlikely]] return; }
L_001F56F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5700u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 178u, depth + 1u); else { c.pc = 0x001F6390u; return; } if (c.pc != 0x001F5700u) [[unlikely]] return; }
L_001F5700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5708u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 181u, depth + 1u); else { c.pc = 0x001F6480u; return; } if (c.pc != 0x001F5708u) [[unlikely]] return; }
L_001F5708:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull | 58369ull;
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F5738; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F5748; } }
    c.budget -= 1;
L_001F5738:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F5748:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F5770; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5764u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 342u, depth + 1u); else { c.pc = 0x00416B00u; return; } if (c.pc != 0x001F5764u) [[unlikely]] return; }
L_001F5764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F57C8; } }
    c.budget -= 1;
L_001F5770:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F5790; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5788u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 342u, depth + 1u); else { c.pc = 0x00416B00u; return; } if (c.pc != 0x001F5788u) [[unlikely]] return; }
L_001F5788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F57C8; } }
L_001F5790:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F57B0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57A8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00C5(c, 342u, depth + 1u); else { c.pc = 0x00416B00u; return; } if (c.pc != 0x001F57A8u) [[unlikely]] return; }
L_001F57A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F57C8; } }
L_001F57B0:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F57C8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57C8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00C5(c, 342u, depth + 1u); else { c.pc = 0x00416B00u; return; } if (c.pc != 0x001F57C8u) [[unlikely]] return; }
L_001F57C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 125u, depth + 1u); else { c.pc = 0x001F57F0u; return; } if (c.pc != 0x001F57D0u) [[unlikely]] return; }
L_001F57D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F57F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 26752u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_001F5868; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 92u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F5868; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6350; } }
    c.budget -= 1;
L_001F5868:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8296u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F58B0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F58B0; } }
    c.f[1] = ld32((c.r[18].w[0] + 1088u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F58B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F58C0; } }
    c.budget -= 1;
L_001F58B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F58C8; } }
    c.budget -= 1;
L_001F58C0:
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001F58C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001F59C8; } }
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F59A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F59A8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5978; } }
    set32(c.r[5], 0u + 2u);
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[3].w[0] - 18u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_001F5928; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5950; } }
L_001F5928:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F5938u) [[unlikely]] return; }
L_001F5938:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5948u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F5948u) [[unlikely]] return; }
L_001F5948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5960; } }
L_001F5950:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F595Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F595Cu) [[unlikely]] return; }
L_001F595C:
    c.budget -= 1;
L_001F5960:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F59A8; } }
    c.budget -= 1;
L_001F5978:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5984u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F5984u) [[unlikely]] return; }
L_001F5984:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F59A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F59A0u) [[unlikely]] return; }
L_001F59A0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F59A8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F59C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F59C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6350; } }
L_001F59C8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_001F5AB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F5AB0; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_001F5AB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F5AB0; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F5AB0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 839u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001F5AB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5AA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_001F5A38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5AA0; } }
    c.budget -= 1;
L_001F5A38:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001F5A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F5A4Cu) [[unlikely]] return; }
L_001F5A4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F5A70; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A68u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001F5A68u) [[unlikely]] return; }
L_001F5A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5AA0; } }
L_001F5A70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A80u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001F5A80u) [[unlikely]] return; }
L_001F5A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5AA0; } }
L_001F5A88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F5AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F5A98u) [[unlikely]] return; }
L_001F5A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5AA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 178u, depth + 1u); else { c.pc = 0x001F6390u; return; } if (c.pc != 0x001F5AA0u) [[unlikely]] return; }
L_001F5AA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 839u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F5AB0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5B40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5AE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 839u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F5B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F5B40; } }
    c.budget -= 1;
L_001F5AE8:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5B10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 839u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F5B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F5B40; } }
    c.budget -= 1;
L_001F5B10:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_001F5B28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5B40; } }
    c.budget -= 1;
L_001F5B28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 839u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F5B40; } }
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F5B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F6570u; return; } if (c.pc != 0x001F5B48u) [[unlikely]] return; }
L_001F5B48:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5D20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5E50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 87u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001F5C28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F5B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5E50; } }
    c.budget -= 1;
L_001F5B88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[18].w[0] + 304u);  if (t) { goto L_001F5BB0; } }
    st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BA4u); st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F5BA4u) [[unlikely]] return; }
L_001F5BA4:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[17].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F5BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F5E50; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5BC0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BD0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001F5BD0u) [[unlikely]] return; }
L_001F5BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] << 56;  if (t) { goto L_001F5C10; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BE8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 398u, depth + 1u); else { c.pc = 0x0020BF00u; return; } if (c.pc != 0x001F5BE8u) [[unlikely]] return; }
L_001F5BE8:
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x001F5BF4u) [[unlikely]] return; }
L_001F5BF4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F5C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C04u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001F5C04u) [[unlikely]] return; }
L_001F5C04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C10u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001F5C10u) [[unlikely]] return; }
L_001F5C10:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5BC0u | kUnwind; return; } goto L_001F5BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5E50; } }
L_001F5C28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5C48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F5C50; } }
    c.budget -= 1;
L_001F5C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F5E50; } }
L_001F5C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 89u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5D10; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001F5C70u) [[unlikely]] return; }
L_001F5C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5CD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 91u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C9Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0042(c, 344u, depth + 1u); else { c.pc = 0x0020B8A0u; return; } if (c.pc != 0x001F5C9Cu) [[unlikely]] return; }
L_001F5C9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 91u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CB8u); set32(c.r[5], c.r[2].w[0] + 34u);  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x001F5CB8u) [[unlikely]] return; }
L_001F5CB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CC4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001F5CC4u) [[unlikely]] return; }
L_001F5CC4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CD0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001F5CD0u) [[unlikely]] return; }
L_001F5CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5CE8; } }
L_001F5CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001F5CE0u) [[unlikely]] return; }
L_001F5CE0:
    st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001F5CE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F5E50; } }
    c.budget -= 1;
L_001F5D10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5E50; } }
    c.budget -= 1;
L_001F5D20:
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5E50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5E50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 87u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F5D70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 339u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F5E50; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D64u); st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F5D64u) [[unlikely]] return; }
L_001F5D64:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5E50; } }
L_001F5D70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5D90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F5D98; } }
    c.budget -= 1;
L_001F5D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F5E50; } }
L_001F5D98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 89u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5E48; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DBCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001F5DBCu) [[unlikely]] return; }
L_001F5DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5E20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 91u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DE0u); set32(c.r[5], c.r[20].w[0] + 219u);  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x001F5DE0u) [[unlikely]] return; }
L_001F5DE0:
    set32(c.r[2], c.r[20].w[0] + 14u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DF8u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0042(c, 344u, depth + 1u); else { c.pc = 0x0020B8A0u; return; } if (c.pc != 0x001F5DF8u) [[unlikely]] return; }
L_001F5DF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E04u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001F5E04u) [[unlikely]] return; }
L_001F5E04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E10u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001F5E10u) [[unlikely]] return; }
L_001F5E10:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E1Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001F5E1Cu) [[unlikely]] return; }
L_001F5E1C:
    c.budget -= 1;
L_001F5E20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F5E50; } }
    c.budget -= 1;
L_001F5E48:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F5E50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5F70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F5F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E74u);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F5E74u) [[unlikely]] return; }
L_001F5E74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E80u); st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 178u, depth + 1u); else { c.pc = 0x001F6390u; return; } if (c.pc != 0x001F5E80u) [[unlikely]] return; }
L_001F5E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 181u, depth + 1u); else { c.pc = 0x001F6480u; return; } if (c.pc != 0x001F5E88u) [[unlikely]] return; }
L_001F5E88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5EB0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[19].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 7;
L_001F5EB0:
    set32(c.r[3], 0u + 1u);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5F30; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F5F40; } }
L_001F5F30:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001F5F40:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 38u);  if (t) { goto L_001F5F58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F6350; } }
L_001F5F58:
    st8((c.r[17].w[0] + 87u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 89u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F6350; } }
    c.budget -= 1;
L_001F5F70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6350; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5F98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 496u)));
    st16((c.r[19].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F5F98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5FC8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 965u));
    set32(c.r[3], 0u + 15u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 498u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001F5FE0; } }
    c.budget -= 1;
L_001F5FC8:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 965u));
    set32(c.r[3], 0u + 240u);
    c.r[4].d[0] = c.r[4].d[0] & 240ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F5FE0; } }
    st16((c.r[19].w[0] + 498u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001F5FE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F62D0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F6118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6000u);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F6000u) [[unlikely]] return; }
L_001F6000:
    set32(c.r[5], 0u + 2u);
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[3].w[0] - 18u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_001F6028; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F6050; } }
    c.budget -= 1;
L_001F6028:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F6038u) [[unlikely]] return; }
L_001F6038:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6048u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F6048u) [[unlikely]] return; }
L_001F6048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6060; } }
L_001F6050:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F605Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F605Cu) [[unlikely]] return; }
L_001F605C:
    c.budget -= 1;
L_001F6060:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F6080; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6090; } }
L_001F6080:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001F6090:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 965u));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 38u);  if (t) { goto L_001F6100; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F60E8; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_001F60E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F60D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6110; } }
    c.budget -= 1;
L_001F60D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 282u, depth + 1u); else { c.pc = 0x003C6720u; return; } if (c.pc != 0x001F60E4u) [[unlikely]] return; }
L_001F60E4:
    c.budget -= 1;
L_001F60E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 282u, depth + 1u); else { c.pc = 0x003C6720u; return; } if (c.pc != 0x001F60F4u) [[unlikely]] return; }
L_001F60F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6110; } }
    c.budget -= 1;
L_001F6100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 777u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st8((c.r[18].w[0] + 777u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001F6110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6350; } }
L_001F6118:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F6298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F613Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F613Cu) [[unlikely]] return; }
L_001F613C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F61A0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    set32(c.r[2], 0u + 15u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F61A0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F6174u) [[unlikely]] return; }
L_001F6174:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6184u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F6184u) [[unlikely]] return; }
L_001F6184:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6350; } }
L_001F61A0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F6200; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    set32(c.r[2], 0u + 240u);
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F6200; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F61D4u) [[unlikely]] return; }
L_001F61D4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F61E4u) [[unlikely]] return; }
L_001F61E4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6350; } }
L_001F6200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6208u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 178u, depth + 1u); else { c.pc = 0x001F6390u; return; } if (c.pc != 0x001F6208u) [[unlikely]] return; }
L_001F6208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6210u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 181u, depth + 1u); else { c.pc = 0x001F6480u; return; } if (c.pc != 0x001F6210u) [[unlikely]] return; }
L_001F6210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6238; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 7;
L_001F6238:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6280; } }
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 15;
L_001F6280:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6290u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F6290u) [[unlikely]] return; }
L_001F6290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F62D0; } }
L_001F6298:
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F62D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F62ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F62ACu) [[unlikely]] return; }
L_001F62AC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F62BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x001F62BCu) [[unlikely]] return; }
L_001F62BC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 965u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6350; } }
L_001F62D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6350; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F6328; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6318; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6350; } }
    c.budget -= 1;
L_001F6318:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6350; } }
L_001F6328:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6350; } }
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_001F6350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F6370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F6380:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F6390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F63D0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 26773u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_001F6420; } }
    c.budget -= 1;
L_001F63D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F6400; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 26774u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_001F6420; } }
L_001F6400:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 26772u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
L_001F6420:
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F6468; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001F6458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6450u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001F6450u) [[unlikely]] return; }
L_001F6450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6468; } }
L_001F6458:
    c.r[6].d[0] = c.r[6].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6464u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001F6464u) [[unlikely]] return; }
L_001F6464:
    c.budget -= 1;
L_001F6468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F6480:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] - 22192u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 23;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F6510; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 243u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6510; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 26u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 32767u);  if (t) { goto L_001F6510; } }
    st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001F6510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F6558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6540u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F6570u; return; } if (c.pc != 0x001F6540u) [[unlikely]] return; }
L_001F6540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6548u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6548u) [[unlikely]] return; }
L_001F6548:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6554u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001F6554u) [[unlikely]] return; }
L_001F6554:
    c.budget -= 1;
L_001F6558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6570:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001F6BA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16688u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F65B8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F6620; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6620; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65E8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F65E8u) [[unlikely]] return; }
L_001F65E8:
    c.f[13] = ld32((c.r[17].w[0] + 4436u));
    c.f[14] = ld32((c.r[17].w[0] + 4440u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65F8u); c.f[12] = ld32((c.r[17].w[0] + 4432u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F65F8u) [[unlikely]] return; }
L_001F65F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6600u); set32(c.r[4], ld32((c.r[17].w[0] + 5356u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6600u) [[unlikely]] return; }
L_001F6600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6608u); set32(c.r[4], ld32((c.r[17].w[0] + 5360u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6608u) [[unlikely]] return; }
L_001F6608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6610u); set32(c.r[4], ld32((c.r[17].w[0] + 5364u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F6610u) [[unlikely]] return; }
L_001F6610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6618u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6618u) [[unlikely]] return; }
L_001F6618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F6620:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 82u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6638u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x001F6638u) [[unlikely]] return; }
L_001F6638:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6664u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6664u) [[unlikely]] return; }
L_001F6664:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6670u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F6670u) [[unlikely]] return; }
L_001F6670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6678u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F6678u) [[unlikely]] return; }
L_001F6678:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6688u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6688u) [[unlikely]] return; }
L_001F6688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6690u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6690u) [[unlikely]] return; }
L_001F6690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6698u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6698u) [[unlikely]] return; }
L_001F6698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66A0u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F66A0u) [[unlikely]] return; }
L_001F66A0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F66B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66B8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F66B8u) [[unlikely]] return; }
L_001F66B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F66D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66D0u); set32(c.r[4], ld32((c.r[17].w[0] + 376u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F66D0u) [[unlikely]] return; }
L_001F66D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F66F0; } }
L_001F66D8:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F66F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66ECu); set32(c.r[4], ld32((c.r[17].w[0] + 392u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F66ECu) [[unlikely]] return; }
L_001F66EC:
    c.budget -= 1;
L_001F66F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66F8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F66F8u) [[unlikely]] return; }
L_001F66F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F6700:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6778; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6724u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6724u) [[unlikely]] return; }
L_001F6724:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6730u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F6730u) [[unlikely]] return; }
L_001F6730:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6750u); st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F6750u) [[unlikely]] return; }
L_001F6750:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6760u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6760u) [[unlikely]] return; }
L_001F6760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6768u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6768u) [[unlikely]] return; }
L_001F6768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6770u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6770u) [[unlikely]] return; }
L_001F6770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F6778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F678Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F678Cu) [[unlikely]] return; }
L_001F678C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6798u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F6798u) [[unlikely]] return; }
L_001F6798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67A0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F67A0u) [[unlikely]] return; }
L_001F67A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67A8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F67A8u) [[unlikely]] return; }
L_001F67A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67B0u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F67B0u) [[unlikely]] return; }
L_001F67B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67B8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x001F67B8u) [[unlikely]] return; }
L_001F67B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67C0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F67C0u) [[unlikely]] return; }
L_001F67C0:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67D0u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F67D0u) [[unlikely]] return; }
L_001F67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67D8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001F67D8u) [[unlikely]] return; }
L_001F67D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67E0u); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F67E0u) [[unlikely]] return; }
L_001F67E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67E8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F67E8u) [[unlikely]] return; }
L_001F67E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F67F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6804u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6804u) [[unlikely]] return; }
L_001F6804:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6814u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6814u) [[unlikely]] return; }
L_001F6814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F681Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F681Cu) [[unlikely]] return; }
L_001F681C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6824u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6824u) [[unlikely]] return; }
L_001F6824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F682Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F682Cu) [[unlikely]] return; }
L_001F682C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6834u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6834u) [[unlikely]] return; }
L_001F6834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
    c.budget -= 1;
L_001F6840:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6910; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6864u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6864u) [[unlikely]] return; }
L_001F6864:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6870u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F6870u) [[unlikely]] return; }
L_001F6870:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[3], c.r[29].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68C8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001F68C8u) [[unlikely]] return; }
L_001F68C8:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68E4u); st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F68E4u) [[unlikely]] return; }
L_001F68E4:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68F4u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F68F4u) [[unlikely]] return; }
L_001F68F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68FCu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F68FCu) [[unlikely]] return; }
L_001F68FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6904u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6904u) [[unlikely]] return; }
L_001F6904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
    c.budget -= 1;
L_001F6910:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6924u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6924u) [[unlikely]] return; }
L_001F6924:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6930u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F6930u) [[unlikely]] return; }
L_001F6930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6950u); set32(c.r[5], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F6950u) [[unlikely]] return; }
L_001F6950:
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[17].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6960u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001F6960u) [[unlikely]] return; }
L_001F6960:
    set32(c.r[4], c.r[17].w[0] + 8592u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6970u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001F6970u) [[unlikely]] return; }
L_001F6970:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[2], c.r[29].w[0] + 152u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69A0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001F69A0u) [[unlikely]] return; }
L_001F69A0:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8592u);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69C0u); st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F69C0u) [[unlikely]] return; }
L_001F69C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69C8u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001F69C8u) [[unlikely]] return; }
L_001F69C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69D0u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F69D0u) [[unlikely]] return; }
L_001F69D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69D8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F69D8u) [[unlikely]] return; }
L_001F69D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F69E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69F4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F69F4u) [[unlikely]] return; }
L_001F69F4:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A04u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6A04u) [[unlikely]] return; }
L_001F6A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A0Cu); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6A0Cu) [[unlikely]] return; }
L_001F6A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A14u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6A14u) [[unlikely]] return; }
L_001F6A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
    c.budget -= 1;
L_001F6A20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 82u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A38u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x001F6A38u) [[unlikely]] return; }
L_001F6A38:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A64u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6A64u) [[unlikely]] return; }
L_001F6A64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A70u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F6A70u) [[unlikely]] return; }
L_001F6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A78u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F6A78u) [[unlikely]] return; }
L_001F6A78:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A88u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6A88u) [[unlikely]] return; }
L_001F6A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A90u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6A90u) [[unlikely]] return; }
L_001F6A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A98u); set32(c.r[4], 0u - 1820u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6A98u) [[unlikely]] return; }
L_001F6A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AA0u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6AA0u) [[unlikely]] return; }
L_001F6AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AA8u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F6AA8u) [[unlikely]] return; }
L_001F6AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AB0u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6AB0u) [[unlikely]] return; }
L_001F6AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F6AB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6ACCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6ACCu) [[unlikely]] return; }
L_001F6ACC:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6ADCu); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6ADCu) [[unlikely]] return; }
L_001F6ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AE4u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6AE4u) [[unlikely]] return; }
L_001F6AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
    c.budget -= 1;
L_001F6AF0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F6B58; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6B58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B20u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6B20u) [[unlikely]] return; }
L_001F6B20:
    c.f[13] = ld32((c.r[17].w[0] + 4436u));
    c.f[14] = ld32((c.r[17].w[0] + 4440u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B30u); c.f[12] = ld32((c.r[17].w[0] + 4432u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6B30u) [[unlikely]] return; }
L_001F6B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B38u); set32(c.r[4], ld32((c.r[17].w[0] + 5356u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6B38u) [[unlikely]] return; }
L_001F6B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B40u); set32(c.r[4], ld32((c.r[17].w[0] + 5360u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6B40u) [[unlikely]] return; }
L_001F6B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B48u); set32(c.r[4], ld32((c.r[17].w[0] + 5364u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F6B48u) [[unlikely]] return; }
L_001F6B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B50u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6B50u) [[unlikely]] return; }
L_001F6B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA0; } }
L_001F6B58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B6Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F6B6Cu) [[unlikely]] return; }
L_001F6B6C:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B7Cu); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F6B7Cu) [[unlikely]] return; }
L_001F6B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B84u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F6B84u) [[unlikely]] return; }
L_001F6B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B8Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F6B8Cu) [[unlikely]] return; }
L_001F6B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B94u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F6B94u) [[unlikely]] return; }
L_001F6B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B9Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F6B9Cu) [[unlikely]] return; }
L_001F6B9C:
    c.budget -= 1;
L_001F6BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F6BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BE8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F6BE8u) [[unlikely]] return; }
L_001F6BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6C30; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] + 28464u);
    set32(c.r[3], c.r[3].w[0] + 27728u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 16;
L_001F6C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F6C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] + 28528u);
    set32(c.r[6], c.r[6].w[0] + 28530u);
    set32(c.r[5], c.r[5].w[0] + 28536u);
    set32(c.r[3], c.r[3].w[0] + 28532u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 496u)));
    c.budget -= 50;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001F6D40; } }
    set32(c.r[2], 0u + 4096u);
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F6D40:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 502u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 503u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F6D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D80u);  if (depth < kMaxDepth) unit_003D(c, 291u, depth + 1u); else { c.pc = 0x001F6DD0u; return; } if (c.pc != 0x001F6D80u) [[unlikely]] return; }
L_001F6D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6DB0; } }
L_001F6D88:
    c.r[2].d[0] = 0ull | 58368ull;
    st16((c.r[17].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001F6D9Cu) [[unlikely]] return; }
L_001F6D9C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001F6DA8u) [[unlikely]] return; }
L_001F6DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 291u, depth + 1u); else { c.pc = 0x001F6DD0u; return; } if (c.pc != 0x001F6DB0u) [[unlikely]] return; }
L_001F6DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[16].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] + 1984u);
    c.budget -= 12;
L_001F6E00:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6E00u | kUnwind; return; } goto L_001F6E00; } }
    c.f[0] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001F6ED0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6EF8; } }
L_001F6E58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F6E90; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E74u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168610u; return; } if (c.pc != 0x001F6E74u) [[unlikely]] return; }
L_001F6E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 85u, depth + 1u); else { c.pc = 0x001957B0u; return; } if (c.pc != 0x001F6E7Cu) [[unlikely]] return; }
L_001F6E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F6E84u) [[unlikely]] return; }
L_001F6E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6EF8; } }
    c.budget -= 1;
L_001F6E90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F6EA8; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F6EF8; } }
L_001F6EA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6EF8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6EC8u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F6EC8u) [[unlikely]] return; }
L_001F6EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6EF8; } }
L_001F6ED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6EF8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6EF4u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F6EF4u) [[unlikely]] return; }
L_001F6EF4:
    c.budget -= 1;
L_001F6EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6F10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F6F20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F6F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6F40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F78u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 304u, depth + 1u); else { c.pc = 0x002ABED0u; return; } if (c.pc != 0x001F6F78u) [[unlikely]] return; }
L_001F6F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7058; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 28800u);
    set32(c.r[4], c.r[4].w[0] + 31920u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[2].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    st32((c.r[2].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    st32((c.r[2].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 180u)));
    st32((c.r[2].w[0] + 180u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    st32((c.r[2].w[0] + 184u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 188u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 264u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 515u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[2].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[2].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 54;
L_001F7058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F7080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F70A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 8192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 58370ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 8u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 16384u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 502u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70E8u); st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x001F70E8u) [[unlikely]] return; }
L_001F70E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001F70F4u) [[unlikely]] return; }
L_001F70F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7114u) [[unlikely]] return; }
L_001F7114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F711Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 309u, depth + 1u); else { c.pc = 0x001F7130u; return; } if (c.pc != 0x001F711Cu) [[unlikely]] return; }
L_001F711C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 16384u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 29760u);
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7164u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7164u) [[unlikely]] return; }
L_001F7164:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F7170u) [[unlikely]] return; }
L_001F7170:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71D4u); st32((c.r[4].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F71D4u) [[unlikely]] return; }
L_001F71D4:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29648u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_001F7350; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 37;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F72FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72D8u);  if (depth < kMaxDepth) unit_0011(c, 170u, depth + 1u); else { c.pc = 0x00145F30u; return; } if (c.pc != 0x001F72D8u) [[unlikely]] return; }
L_001F72D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F7328; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7328; } }
L_001F72FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7304u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001F7304u) [[unlikely]] return; }
L_001F7304:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_001F7328; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F7328:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F7390; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7344u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F7344u) [[unlikely]] return; }
L_001F7344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7390; } }
    c.budget -= 1;
L_001F7350:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7390; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F7380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7380u); c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_0021(c, 128u, depth + 1u); else { c.pc = 0x00186B60u; return; } if (c.pc != 0x001F7380u) [[unlikely]] return; }
L_001F7380:
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F738Cu); set32(c.r[5], 0u + 188u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x001F738Cu) [[unlikely]] return; }
L_001F738C:
    c.budget -= 1;
L_001F7390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F73A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73D4u); st32((c.r[4].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F73D4u) [[unlikely]] return; }
L_001F73D4:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29680u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.r[5].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 38;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001F74E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74C8u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F74C8u) [[unlikely]] return; }
L_001F74C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[4].d[0] & 127ull;  if (t) { goto L_001F74E8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 269u, depth + 1u); else { c.pc = 0x0018B5C0u; return; } if (c.pc != 0x001F74E4u) [[unlikely]] return; }
L_001F74E4:
    c.budget -= 1;
L_001F74E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 4719ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[1] = c.r[2].w[0];
    st32((c.r[4].w[0] + 144u), c.f[4]);
    st32((c.r[4].w[0] + 148u), c.f[3]);
    st32((c.r[4].w[0] + 152u), c.f[2]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F755Cu); st32((c.r[4].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F755Cu) [[unlikely]] return; }
L_001F755C:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29648u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F75A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_001F7748; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.r[4].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.budget -= 34;
L_001F7650:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 519u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F76B8; } }
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F76A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F769Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001F769Cu) [[unlikely]] return; }
L_001F769C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F76B8; } }
    c.budget -= 1;
L_001F76A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F76B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 127u, depth + 1u); else { c.pc = 0x001B1D30u; return; } if (c.pc != 0x001F76B8u) [[unlikely]] return; }
L_001F76B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7650u | kUnwind; return; } goto L_001F7650; } }
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F7768; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7720u); st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F7720u) [[unlikely]] return; }
L_001F7720:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[4].d[0] & 2047ull;  if (t) { goto L_001F7768; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F773Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 269u, depth + 1u); else { c.pc = 0x0018B5C0u; return; } if (c.pc != 0x001F773Cu) [[unlikely]] return; }
L_001F773C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7768; } }
    c.budget -= 1;
L_001F7748:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 144u);  if (t) { goto L_001F7768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7768u); set32(c.r[5], 0u + 188u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x001F7768u) [[unlikely]] return; }
L_001F7768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F7790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F77B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77B0u);  if (depth < kMaxDepth) unit_003D(c, 312u, depth + 1u); else { c.pc = 0x001F7190u; return; } if (c.pc != 0x001F77B0u) [[unlikely]] return; }
L_001F77B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7840; } }
L_001F77B8:
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77E0u); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001F77E0u) [[unlikely]] return; }
L_001F77E0:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7818u); st32((c.r[16].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F7818u) [[unlikely]] return; }
L_001F7818:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29648u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001F7840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7870u);  if (depth < kMaxDepth) unit_003D(c, 314u, depth + 1u); else { c.pc = 0x001F7220u; return; } if (c.pc != 0x001F7870u) [[unlikely]] return; }
L_001F7870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A38; } }
L_001F7878:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7A30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7930u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001F7930u) [[unlikely]] return; }
L_001F7930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40260000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F79A0; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F79A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 48u), c.f[3]);
    c.budget -= 15;
L_001F79A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001F79DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 170u, depth + 1u); else { c.pc = 0x00145F30u; return; } if (c.pc != 0x001F79B4u) [[unlikely]] return; }
L_001F79B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F7A08; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A08; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001F79DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79E4u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001F79E4u) [[unlikely]] return; }
L_001F79E4:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_001F7A08; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F7A08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F7A38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A24u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F7A24u) [[unlikely]] return; }
L_001F7A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A38; } }
    c.budget -= 1;
L_001F7A30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F7A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7AA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_001F7AB0; } }
L_001F7AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_001F7AB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29648u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AD0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F7AD0u) [[unlikely]] return; }
L_001F7AD0:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + 48u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001F7BB8; } }
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F7B60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 91u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
L_001F7B60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7BC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B90u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F7B90u) [[unlikely]] return; }
L_001F7B90:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[4].d[0] & 127ull;  if (t) { goto L_001F7BC0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 269u, depth + 1u); else { c.pc = 0x0018B5C0u; return; } if (c.pc != 0x001F7BACu) [[unlikely]] return; }
L_001F7BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7BC0; } }
    c.budget -= 1;
L_001F7BB8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F7BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F7C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C00u);  if (depth < kMaxDepth) unit_003D(c, 320u, depth + 1u); else { c.pc = 0x001F73A0u; return; } if (c.pc != 0x001F7C00u) [[unlikely]] return; }
L_001F7C00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F7C30; } }
    c.budget -= 1;
L_001F7C10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F7C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C24u);  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x001F7A50u; return; } if (c.pc != 0x001F7C24u) [[unlikely]] return; }
L_001F7C24:
    set32(c.r[3], 0u + 32u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F7C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001F7C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C5Cu);  if (depth < kMaxDepth) unit_003D(c, 322u, depth + 1u); else { c.pc = 0x001F7420u; return; } if (c.pc != 0x001F7C5Cu) [[unlikely]] return; }
L_001F7C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7C80; } }
    c.budget -= 1;
L_001F7C68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F7C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C7Cu);  if (depth < kMaxDepth) unit_003D(c, 346u, depth + 1u); else { c.pc = 0x001F7AF0u; return; } if (c.pc != 0x001F7C7Cu) [[unlikely]] return; }
L_001F7C7C:
    c.budget -= 1;
L_001F7C80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F7CA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F7CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 106u, depth + 1u); else { c.pc = 0x001455E0u; return; } if (c.pc != 0x001F7CC8u) [[unlikely]] return; }
L_001F7CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7CE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.f[0]);  if (t) { goto L_001F7CEC; } }
L_001F7CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 3;
L_001F7CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CF4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F7CF4u) [[unlikely]] return; }
L_001F7CF4:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F7D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D18u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x001F7D18u) [[unlikely]] return; }
L_001F7D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7D28; } }
L_001F7D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D28u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x001F7D28u) [[unlikely]] return; }
L_001F7D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D64u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F7D64u) [[unlikely]] return; }
L_001F7D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F7DC0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 18u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + 32224u);
    set32(c.r[2], c.r[2].w[0] - 32400u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DBCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F7DBCu) [[unlikely]] return; }
L_001F7DBC:
    c.budget -= 1;
L_001F7DC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7DE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F7E00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u - 12843u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F7E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], c.r[19].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_001F7EC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F7E80; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001F7E7Cu) [[unlikely]] return; }
L_001F7E7C:
    c.budget -= 1;
L_001F7E80:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 750u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F7EC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F7EB8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F7EC8; } }
    c.budget -= 1;
L_001F7EB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003E(c, 8u, depth); } }
L_001F7EC8:
    set32(c.r[7], ld32((c.r[18].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { [[clang::musttail]] return unit_003E(c, 6u, depth); } }
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003E(c, 6u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & 28ull;  if (t) { [[clang::musttail]] return unit_003E(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { [[clang::musttail]] return unit_003E(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F7F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7F40; } }
L_001F7F08:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_001F7F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7F40; } }
    c.budget -= 1;
L_001F7F20:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_001F7F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7F40; } }
    c.budget -= 1;
L_001F7F38:
    set32(c.r[6], 0u - 1u);
    c.budget -= 2;
L_001F7F40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F7F58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F7F78; } }
    c.budget -= 1;
L_001F7F58:
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F7F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7F78; } }
    c.budget -= 1;
L_001F7F70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001F7F78:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] << 2);  if (t) { goto L_001F7FA0; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 6u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F7FA0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001F7FA0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_003E(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_003E(c, 3u, depth); } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] << 1);  if (t) { [[clang::musttail]] return unit_003E(c, 3u, depth); } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 29808u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 17;
    [[clang::musttail]] return unit_003E(c, 1u, depth);
}

}
