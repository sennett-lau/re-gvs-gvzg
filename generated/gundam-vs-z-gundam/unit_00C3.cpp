#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C3[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 6, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 151, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295,
    0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0,
    0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
};

void unit_00C3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0040C000;
    case 2u: goto L_0040C018;
    case 3u: goto L_0040C020;
    case 4u: goto L_0040C058;
    case 5u: goto L_0040C064;
    case 6u: goto L_0040C068;
    case 7u: goto L_0040C070;
    case 8u: goto L_0040C080;
    case 9u: goto L_0040C094;
    case 10u: goto L_0040C0A4;
    case 11u: goto L_0040C0B4;
    case 12u: goto L_0040C100;
    case 13u: goto L_0040C170;
    case 14u: goto L_0040C190;
    case 15u: goto L_0040C1A0;
    case 16u: goto L_0040C1C0;
    case 17u: goto L_0040C20C;
    case 18u: goto L_0040C218;
    case 19u: goto L_0040C238;
    case 20u: goto L_0040C310;
    case 21u: goto L_0040C350;
    case 22u: goto L_0040C420;
    case 23u: goto L_0040C428;
    case 24u: goto L_0040C460;
    case 25u: goto L_0040C4A4;
    case 26u: goto L_0040C4AC;
    case 27u: goto L_0040C4D8;
    case 28u: goto L_0040C4E8;
    case 29u: goto L_0040C510;
    case 30u: goto L_0040C534;
    case 31u: goto L_0040C55C;
    case 32u: goto L_0040C5A0;
    case 33u: goto L_0040C5A8;
    case 34u: goto L_0040C5C4;
    case 35u: goto L_0040C5EC;
    case 36u: goto L_0040C610;
    case 37u: goto L_0040C618;
    case 38u: goto L_0040C66C;
    case 39u: goto L_0040C6C0;
    case 40u: goto L_0040C6DC;
    case 41u: goto L_0040C750;
    case 42u: goto L_0040C75C;
    case 43u: goto L_0040C790;
    case 44u: goto L_0040C7A0;
    case 45u: goto L_0040C7B0;
    case 46u: goto L_0040C7C0;
    case 47u: goto L_0040C7D0;
    case 48u: goto L_0040C7F0;
    case 49u: goto L_0040C830;
    case 50u: goto L_0040C880;
    case 51u: goto L_0040C89C;
    case 52u: goto L_0040C8C8;
    case 53u: goto L_0040C8E8;
    case 54u: goto L_0040C980;
    case 55u: goto L_0040C9E0;
    case 56u: goto L_0040C9F0;
    case 57u: goto L_0040C9FC;
    case 58u: goto L_0040CA8C;
    case 59u: goto L_0040CA98;
    case 60u: goto L_0040CAE0;
    case 61u: goto L_0040CAF4;
    case 62u: goto L_0040CB34;
    case 63u: goto L_0040CB44;
    case 64u: goto L_0040CB78;
    case 65u: goto L_0040CB94;
    case 66u: goto L_0040CBA4;
    case 67u: goto L_0040CBC4;
    case 68u: goto L_0040CBD8;
    case 69u: goto L_0040CBF4;
    case 70u: goto L_0040CC14;
    case 71u: goto L_0040CC40;
    case 72u: goto L_0040CC78;
    case 73u: goto L_0040CCC4;
    case 74u: goto L_0040CCD0;
    case 75u: goto L_0040CCE8;
    case 76u: goto L_0040CD14;
    case 77u: goto L_0040CD68;
    case 78u: goto L_0040CD80;
    case 79u: goto L_0040CDCC;
    case 80u: goto L_0040CE08;
    case 81u: goto L_0040CE1C;
    case 82u: goto L_0040CE20;
    case 83u: goto L_0040CE4C;
    case 84u: goto L_0040CE68;
    case 85u: goto L_0040CE78;
    case 86u: goto L_0040CEA0;
    case 87u: goto L_0040CEC8;
    case 88u: goto L_0040CED4;
    case 89u: goto L_0040CF08;
    case 90u: goto L_0040CF1C;
    case 91u: goto L_0040CF2C;
    case 92u: goto L_0040CF3C;
    case 93u: goto L_0040CF54;
    case 94u: goto L_0040D088;
    case 95u: goto L_0040D0B4;
    case 96u: goto L_0040D0C8;
    case 97u: goto L_0040D0D8;
    case 98u: goto L_0040D0E8;
    case 99u: goto L_0040D128;
    case 100u: goto L_0040D138;
    case 101u: goto L_0040D148;
    case 102u: goto L_0040D188;
    case 103u: goto L_0040D19C;
    case 104u: goto L_0040D1A8;
    case 105u: goto L_0040D1B0;
    case 106u: goto L_0040D200;
    case 107u: goto L_0040D24C;
    case 108u: goto L_0040D300;
    case 109u: goto L_0040D318;
    case 110u: goto L_0040D328;
    case 111u: goto L_0040D338;
    case 112u: goto L_0040D34C;
    case 113u: goto L_0040D35C;
    case 114u: goto L_0040D36C;
    case 115u: goto L_0040D3A0;
    case 116u: goto L_0040D3BC;
    case 117u: goto L_0040D3CC;
    case 118u: goto L_0040D400;
    case 119u: goto L_0040D448;
    case 120u: goto L_0040D48C;
    case 121u: goto L_0040D4BC;
    case 122u: goto L_0040D4F4;
    case 123u: goto L_0040D508;
    case 124u: goto L_0040D518;
    case 125u: goto L_0040D538;
    case 126u: goto L_0040D54C;
    case 127u: goto L_0040D554;
    case 128u: goto L_0040D564;
    case 129u: goto L_0040D590;
    case 130u: goto L_0040D5A0;
    case 131u: goto L_0040D5C0;
    case 132u: goto L_0040D614;
    case 133u: goto L_0040D640;
    case 134u: goto L_0040D690;
    case 135u: goto L_0040D6F0;
    case 136u: goto L_0040D740;
    case 137u: goto L_0040D748;
    case 138u: goto L_0040D758;
    case 139u: goto L_0040D768;
    case 140u: goto L_0040D770;
    case 141u: goto L_0040D778;
    case 142u: goto L_0040D79C;
    case 143u: goto L_0040D7CC;
    case 144u: goto L_0040D7F0;
    case 145u: goto L_0040D808;
    case 146u: goto L_0040D818;
    case 147u: goto L_0040D838;
    case 148u: goto L_0040D858;
    case 149u: goto L_0040D860;
    case 150u: goto L_0040D870;
    case 151u: goto L_0040D878;
    case 152u: goto L_0040D890;
    case 153u: goto L_0040D8A0;
    case 154u: goto L_0040D8C0;
    case 155u: goto L_0040D8E0;
    case 156u: goto L_0040D8F0;
    case 157u: goto L_0040D9C8;
    case 158u: goto L_0040D9E4;
    case 159u: goto L_0040D9F0;
    case 160u: goto L_0040DA30;
    case 161u: goto L_0040DA38;
    case 162u: goto L_0040DA48;
    case 163u: goto L_0040DA50;
    case 164u: goto L_0040DA74;
    case 165u: goto L_0040DA90;
    case 166u: goto L_0040DA98;
    case 167u: goto L_0040DAA0;
    case 168u: goto L_0040DAA8;
    case 169u: goto L_0040DAE0;
    case 170u: goto L_0040DAE8;
    case 171u: goto L_0040DB04;
    case 172u: goto L_0040DB10;
    case 173u: goto L_0040DB28;
    case 174u: goto L_0040DB38;
    case 175u: goto L_0040DB4C;
    case 176u: goto L_0040DB64;
    case 177u: goto L_0040DB7C;
    case 178u: goto L_0040DB98;
    case 179u: goto L_0040DBA0;
    case 180u: goto L_0040DBA8;
    case 181u: goto L_0040DBB0;
    case 182u: goto L_0040DBFC;
    case 183u: goto L_0040DC04;
    case 184u: goto L_0040DC28;
    case 185u: goto L_0040DC44;
    case 186u: goto L_0040DC4C;
    case 187u: goto L_0040DC58;
    case 188u: goto L_0040DC90;
    case 189u: goto L_0040DCA0;
    case 190u: goto L_0040DCB0;
    case 191u: goto L_0040DCC0;
    case 192u: goto L_0040DCD0;
    case 193u: goto L_0040DCF0;
    case 194u: goto L_0040DD10;
    case 195u: goto L_0040DD18;
    case 196u: goto L_0040DD40;
    case 197u: goto L_0040DD4C;
    case 198u: goto L_0040DD90;
    case 199u: goto L_0040DDC0;
    case 200u: goto L_0040DE30;
    case 201u: goto L_0040DE48;
    case 202u: goto L_0040DE50;
    case 203u: goto L_0040DE5C;
    case 204u: goto L_0040DE88;
    case 205u: goto L_0040DEB0;
    case 206u: goto L_0040DEE0;
    case 207u: goto L_0040DFC0;
    case 208u: goto L_0040DFDC;
    case 209u: goto L_0040DFEC;
    case 210u: goto L_0040E018;
    case 211u: goto L_0040E024;
    case 212u: goto L_0040E038;
    case 213u: goto L_0040E060;
    case 214u: goto L_0040E080;
    case 215u: goto L_0040E1E4;
    case 216u: goto L_0040E280;
    case 217u: goto L_0040E2F0;
    case 218u: goto L_0040E320;
    case 219u: goto L_0040E338;
    case 220u: goto L_0040E390;
    case 221u: goto L_0040E39C;
    case 222u: goto L_0040E3B4;
    case 223u: goto L_0040E3D4;
    case 224u: goto L_0040E404;
    case 225u: goto L_0040E434;
    case 226u: goto L_0040E450;
    case 227u: goto L_0040E460;
    case 228u: goto L_0040E490;
    case 229u: goto L_0040E4AC;
    case 230u: goto L_0040E4B4;
    case 231u: goto L_0040E4C4;
    case 232u: goto L_0040E4D0;
    case 233u: goto L_0040E500;
    case 234u: goto L_0040E510;
    case 235u: goto L_0040E518;
    case 236u: goto L_0040E528;
    case 237u: goto L_0040E53C;
    case 238u: goto L_0040E570;
    case 239u: goto L_0040E590;
    case 240u: goto L_0040E620;
    case 241u: goto L_0040E690;
    case 242u: goto L_0040E6DC;
    case 243u: goto L_0040E6F4;
    case 244u: goto L_0040E730;
    case 245u: goto L_0040E758;
    case 246u: goto L_0040E768;
    case 247u: goto L_0040E778;
    case 248u: goto L_0040E780;
    case 249u: goto L_0040E7E8;
    case 250u: goto L_0040E7F0;
    case 251u: goto L_0040E810;
    case 252u: goto L_0040E858;
    case 253u: goto L_0040E890;
    case 254u: goto L_0040E8B0;
    case 255u: goto L_0040E8CC;
    case 256u: goto L_0040EB00;
    case 257u: goto L_0040EB1C;
    case 258u: goto L_0040EE60;
    case 259u: goto L_0040EE7C;
    case 260u: goto L_0040F210;
    case 261u: goto L_0040F280;
    case 262u: goto L_0040F298;
    case 263u: goto L_0040F2AC;
    case 264u: goto L_0040F2B0;
    case 265u: goto L_0040F2C4;
    case 266u: goto L_0040F32C;
    case 267u: goto L_0040F338;
    case 268u: goto L_0040F364;
    case 269u: goto L_0040F394;
    case 270u: goto L_0040F3A0;
    case 271u: goto L_0040F3AC;
    case 272u: goto L_0040F3DC;
    case 273u: goto L_0040F408;
    case 274u: goto L_0040F410;
    case 275u: goto L_0040F444;
    case 276u: goto L_0040F464;
    case 277u: goto L_0040F490;
    case 278u: goto L_0040F4A8;
    case 279u: goto L_0040F4C0;
    case 280u: goto L_0040F4C8;
    case 281u: goto L_0040F4D8;
    case 282u: goto L_0040F510;
    case 283u: goto L_0040F58C;
    case 284u: goto L_0040F5A0;
    case 285u: goto L_0040F5BC;
    case 286u: goto L_0040F5CC;
    case 287u: goto L_0040F5E0;
    case 288u: goto L_0040F5FC;
    case 289u: goto L_0040F610;
    case 290u: goto L_0040F62C;
    case 291u: goto L_0040F638;
    case 292u: goto L_0040F648;
    case 293u: goto L_0040F65C;
    case 294u: goto L_0040F66C;
    case 295u: goto L_0040F67C;
    case 296u: goto L_0040F688;
    case 297u: goto L_0040F698;
    case 298u: goto L_0040F6A0;
    case 299u: goto L_0040F6B4;
    case 300u: goto L_0040F6D0;
    case 301u: goto L_0040F6E4;
    case 302u: goto L_0040F6F4;
    case 303u: goto L_0040F70C;
    case 304u: goto L_0040F718;
    case 305u: goto L_0040F728;
    case 306u: goto L_0040F800;
    case 307u: goto L_0040F804;
    case 308u: goto L_0040F818;
    case 309u: goto L_0040F830;
    case 310u: goto L_0040F860;
    case 311u: goto L_0040F870;
    case 312u: goto L_0040F87C;
    case 313u: goto L_0040F88C;
    case 314u: goto L_0040F8C0;
    case 315u: goto L_0040F8F0;
    case 316u: goto L_0040F924;
    case 317u: goto L_0040F958;
    case 318u: goto L_0040F9A4;
    case 319u: goto L_0040FA20;
    case 320u: goto L_0040FA30;
    case 321u: goto L_0040FA50;
    case 322u: goto L_0040FA94;
    case 323u: goto L_0040FAD4;
    case 324u: goto L_0040FAE8;
    case 325u: goto L_0040FB18;
    case 326u: goto L_0040FB4C;
    case 327u: goto L_0040FB54;
    case 328u: goto L_0040FB88;
    case 329u: goto L_0040FBBC;
    case 330u: goto L_0040FBF4;
    case 331u: goto L_0040FDE8;
    case 332u: goto L_0040FE14;
    case 333u: goto L_0040FE94;
    case 334u: goto L_0040FEA4;
    case 335u: goto L_0040FED0;
    case 336u: goto L_0040FF20;
    case 337u: goto L_0040FF60;
    case 338u: goto L_0040FF74;
    case 339u: goto L_0040FFA8;
    case 340u: goto L_0040FFB0;
    case 341u: goto L_0040FFE4;
    default: bad_entry(c, 0x0040C000u); return;
    }
L_0040C000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0040C018; } }
    set32(c.r[4], 0u + 54u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040C020; } }
L_0040C018:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    c.budget -= 2;
L_0040C020:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24496u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 369u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 408u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C058u); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040C058u) [[unlikely]] return; }
L_0040C058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C064u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040C064u) [[unlikely]] return; }
L_0040C064:
    c.budget -= 1;
L_0040C068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C070u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040C070u) [[unlikely]] return; }
L_0040C070:
    set32(c.r[4], c.r[19].w[0] + 720u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C080u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C080u) [[unlikely]] return; }
L_0040C080:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], 0u + 13u);
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C094u); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C094u) [[unlikely]] return; }
L_0040C094:
    set32(c.r[4], c.r[19].w[0] + 2400u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0A4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C0A4u) [[unlikely]] return; }
L_0040C0A4:
    set32(c.r[4], c.r[19].w[0] + 2640u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0B4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C0B4u) [[unlikely]] return; }
L_0040C0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0040C100:
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[4].w[0] + 315u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[4].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[4].w[0] + 318u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[4].w[0] + 319u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 322u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0040C170:
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 311u), static_cast<std::uint8_t>(c.r[11].w[0]));  c.pc = t; return; }
L_0040C190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 324u);  c.pc = t; return; }
L_0040C1A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 7872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040C1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 15264u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 8964u)));
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C20Cu); set32(c.r[6], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0040C20Cu) [[unlikely]] return; }
L_0040C20C:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0040C218u) [[unlikely]] return; }
L_0040C218:
    set32(c.r[3], 0u + 11u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 7904u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = 0u;
    c.budget -= 8;
L_0040C238:
    set32(c.r[5], c.r[16].w[0] + c.r[8].w[0]);
    st8((c.r[5].w[0] + 39u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.r[3].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 52u), 0u);
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 29u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 56u), 0u);
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 60u), 0u);
    st8((c.r[5].w[0] + 42u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    st8((c.r[5].w[0] + 31u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 64u), 0u);
    st8((c.r[5].w[0] + 43u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 10u);
    st8((c.r[5].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 68u), 0u);
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C238u | kUnwind; return; } goto L_0040C238; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[8].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st8((c.r[6].w[0] + 39u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 7903u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] << 3);
    st8((c.r[6].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0040C418; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    set32(c.r[7], 0u + 8u);
    c.f[1] = c.r[6].w[0];
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
L_0040C350:
    set32(c.r[11], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[10], c.r[11].w[0] + 39u);  if (t) { goto L_0040C3A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040C370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C400; } }
L_0040C370:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[11].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[9], c.r[11].w[0] + 28u);  if (t) { goto L_0040C400; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0040C400; } }
L_0040C3A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[11].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[9], c.r[11].w[0] + 28u);  if (t) { goto L_0040C3E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[6].w[0]);  if (t) { goto L_0040C400; } }
    c.budget -= 1;
L_0040C3E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_0040C400:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C350u | kUnwind; return; } goto L_0040C350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C440; } }
L_0040C418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C420u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0040C420u) [[unlikely]] return; }
L_0040C420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C428u); st32((c.r[17].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_00AF(c, 221u, depth + 1u); else { c.pc = 0x003BDBE0u; return; } if (c.pc != 0x0040C428u) [[unlikely]] return; }
L_0040C428:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040C440; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_0040C440:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[1].w[0] + 8964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[18], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C4A4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0040C4A4u) [[unlikely]] return; }
L_0040C4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C4ACu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040C4ACu) [[unlikely]] return; }
L_0040C4AC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040C4C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[17].w[0] + 104u));  if (t) { goto L_0040C4C8; } }
L_0040C4C4:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_0040C4C8:
    set32(c.r[4], c.r[20].w[0] + 5520u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C4D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C4D8u) [[unlikely]] return; }
L_0040C4D8:
    set32(c.r[4], c.r[18].w[0] + 4320u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C4E8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C4E8u) [[unlikely]] return; }
L_0040C4E8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040C500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0] + 104u));  if (t) { goto L_0040C504; } }
L_0040C500:
    c.f[12] = c.r[2].w[0];
    c.budget -= 1;
L_0040C504:
    set32(c.r[4], c.r[20].w[0] + 7440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C510u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C510u) [[unlikely]] return; }
L_0040C510:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0040C528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0] + 104u));  if (t) { goto L_0040C52C; } }
L_0040C528:
    c.f[12] = c.r[2].w[0];
    c.budget -= 1;
L_0040C52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C534u);  if (depth < kMaxDepth) unit_00C4(c, 18u, depth + 1u); else { c.pc = 0x004102E0u; return; } if (c.pc != 0x0040C534u) [[unlikely]] return; }
L_0040C534:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_0040C54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0] + 104u));  if (t) { goto L_0040C554; } }
L_0040C54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_0040C554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C55Cu);  if (depth < kMaxDepth) unit_00C2(c, 180u, depth + 1u); else { c.pc = 0x00409E00u; return; } if (c.pc != 0x0040C55Cu) [[unlikely]] return; }
L_0040C55C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040C590; } }
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040C760; } }
    c.budget -= 1;
L_0040C590:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 7920u);
    c.budget -= 4;
L_0040C5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5A8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040C5A8u) [[unlikely]] return; }
L_0040C5A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0040C5C8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5C4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040C5C4u) [[unlikely]] return; }
L_0040C5C4:
    c.budget -= 1;
L_0040C5C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] << 4);
    c.f[12] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5ECu); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C5ECu) [[unlikely]] return; }
L_0040C5EC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C5A0u | kUnwind; return; } goto L_0040C5A0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 7904u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0040C610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C618u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040C618u) [[unlikely]] return; }
L_0040C618:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.f[14] = 0u;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
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
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C66Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040C66Cu) [[unlikely]] return; }
L_0040C66C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0040C6A0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 3u);  if (t) { goto L_0040C694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C69C; } }
L_0040C694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 52u));  if (t) { goto L_0040C6A4; } }
L_0040C69C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0040C6A0:
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.budget -= 1;
L_0040C6A4:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6C0u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040C6C0u) [[unlikely]] return; }
L_0040C6C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.r[2].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C610u | kUnwind; return; } goto L_0040C610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6DCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040C6DCu) [[unlikely]] return; }
L_0040C6DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] - 7904u);
    set32(c.r[2], c.r[2].w[0] - 7903u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C750u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040C750u) [[unlikely]] return; }
L_0040C750:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C75Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0040C75Cu) [[unlikely]] return; }
L_0040C75C:
    c.budget -= 1;
L_0040C760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040C790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 304u), c.r[5].w[0]);  c.pc = t; return; }
L_0040C7A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040C7B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 308u);  c.pc = t; return; }
L_0040C7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 324u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0040C7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 7856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040C7F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] - 13952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8964u)));
    set32(c.r[4], c.r[4].w[0] + 304u);
    set32(c.r[5], c.r[2].w[0] + 4560u);
    c.budget -= 15;
    { set32(c.r[6], c.r[2].w[0] + 4800u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0700u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 54u, depth); }
L_0040C830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040C868; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040C868; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040C868:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0040C880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C89Cu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 268u, depth + 1u); else { c.pc = 0x0040AA90u; return; } if (c.pc != 0x0040C89Cu) [[unlikely]] return; }
L_0040C89C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0040C8C0; } }
    c.r[1].d[0] = c.r[9].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040C8D0; } }
    c.budget -= 1;
L_0040C8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C8C8u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0040C8C8u) [[unlikely]] return; }
L_0040C8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C970; } }
L_0040C8D0:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[6], 0u + 18u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0040C968; } }
L_0040C8E8:
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_0040C900; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040C918; } }
L_0040C900:
    c.r[3].d[0] = c.r[4].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0040C940; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040C940; } }
    c.budget -= 1;
L_0040C918:
    set32(c.r[6], c.r[6].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0040C968; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { goto L_0040C950; } }
    c.budget -= 1;
L_0040C940:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_0040C950:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C968; } }
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C8E8u | kUnwind; return; } goto L_0040C8E8; } }
L_0040C968:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0040C970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040C980:
    set32(c.r[29], c.r[29].w[0] - 432u);
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
    set32(c.r[16], ld32((c.r[1].w[0] + 8964u)));
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9048u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9E0u); st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x0040C9E0u) [[unlikely]] return; }
L_0040C9E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9F0u); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 205u, depth + 1u); else { c.pc = 0x003BDA50u; return; } if (c.pc != 0x0040C9F0u) [[unlikely]] return; }
L_0040C9F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9FCu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0040C9FCu) [[unlikely]] return; }
L_0040C9FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[21], c.r[21].w[0] + 8075u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.f[25] = ld32((c.r[2].w[0] + 104u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[24] = c.f[0];  if (t) { goto L_0040CA30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_0040CA38; } }
L_0040CA30:
    c.f[2] = c.f[25];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.budget -= 2;
L_0040CA38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040CA68; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_0040CA84; } }
L_0040CA68:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_0040CA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA8Cu);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040CA8Cu) [[unlikely]] return; }
L_0040CA8C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x0040CA98u) [[unlikely]] return; }
L_0040CA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8076u);
    set32(c.r[3], c.r[19].w[0] << 2);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[17], 0u + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8078u);
    set32(c.r[23], c.r[23].w[0] + 8072u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.f[22] = c.f[24] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 18016u);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8077u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 18;
L_0040CAE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CAF4u); set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 331u, depth + 1u); else { c.pc = 0x003AFAB0u; return; } if (c.pc != 0x0040CAF4u) [[unlikely]] return; }
L_0040CAF4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[23] = 0u;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0040CB28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.f[0] = fp::cvt_w_s(c.f[22]);  if (t) { goto L_0040CB28; } }
    set32(c.r[2], c.f[0]);
    c.f[23] = c.f[24];
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 4;
L_0040CB28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040CB34u) [[unlikely]] return; }
L_0040CB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB44u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040CB44u) [[unlikely]] return; }
L_0040CB44:
    c.f[0] = c.r[20].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DA0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = c.r[3].w[0];
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[0] = fp::add(c.f[21], c.f[0]);
    c.f[23] = fp::add(c.f[0], c.f[23]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB78u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040CB78u) [[unlikely]] return; }
L_0040CB78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 5760u);  if (t) { goto L_0040CBB0; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB94u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040CB94u) [[unlikely]] return; }
L_0040CB94:
    set32(c.r[4], c.r[16].w[0] + 6000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBA4u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040CBA4u) [[unlikely]] return; }
L_0040CBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CBD8; } }
    c.budget -= 1;
L_0040CBB0:
    set32(c.r[4], c.r[16].w[0] + 5760u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBC4u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0076(c, 36u, depth + 1u); else { c.pc = 0x002D89F0u; return; } if (c.pc != 0x0040CBC4u) [[unlikely]] return; }
L_0040CBC4:
    set32(c.r[4], c.r[16].w[0] + 6000u);
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[25];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 36u, depth + 1u); else { c.pc = 0x002D89F0u; return; } if (c.pc != 0x0040CBD8u) [[unlikely]] return; }
L_0040CBD8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[23]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBF4u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00C3(c, 106u, depth + 1u); else { c.pc = 0x0040D200u; return; } if (c.pc != 0x0040CBF4u) [[unlikely]] return; }
L_0040CBF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0040CDD0; } }
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC14u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 50u, depth + 1u); else { c.pc = 0x0040C880u; return; } if (c.pc != 0x0040CC14u) [[unlikely]] return; }
L_0040CC14:
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 113u);
    c.r[5].d[0] = c.r[22].d[0] << 48;
    set32(c.r[6], 0u + 11u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC40u); set32(c.r[7], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040CC40u) [[unlikely]] return; }
L_0040CC40:
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[8], c.r[18].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 488u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 14600u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC78u); c.r[8].d[0] = c.r[3].d[0] ^ c.r[2].d[0];  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040CC78u) [[unlikely]] return; }
L_0040CC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CDD0; } }
L_0040CC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2040000u);
    c.f[0] = c.r[20].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[20] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DA0000u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[23]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CCC4u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00C3(c, 106u, depth + 1u); else { c.pc = 0x0040D200u; return; } if (c.pc != 0x0040CCC4u) [[unlikely]] return; }
L_0040CCC4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CCD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0040CCD0u) [[unlikely]] return; }
L_0040CCD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0040CD70; } }
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CCE8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 50u, depth + 1u); else { c.pc = 0x0040C880u; return; } if (c.pc != 0x0040CCE8u) [[unlikely]] return; }
L_0040CCE8:
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 113u);
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD14u); set32(c.r[7], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040CD14u) [[unlikely]] return; }
L_0040CD14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0040CD30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CDD0; } }
    c.budget -= 1;
L_0040CD30:
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[8], c.r[18].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 488u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 14600u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD68u); c.r[8].d[0] = c.r[3].d[0] ^ c.r[2].d[0];  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040CD68u) [[unlikely]] return; }
L_0040CD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CDD0; } }
L_0040CD70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD80u); set32(c.r[5], c.r[5].w[0] + 14608u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0040CD80u) [[unlikely]] return; }
L_0040CD80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0040CDA0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 308u);  if (t) { goto L_0040CDA0; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0040CDA0:
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], 0u + 113u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDCCu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040CDCCu) [[unlikely]] return; }
L_0040CDCC:
    c.budget -= 1;
L_0040CDD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 33u);  if (t) { goto L_0040CE00; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CAE0u | kUnwind; return; } goto L_0040CAE0; } }
    c.budget -= 1;
L_0040CE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE08u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040CE08u) [[unlikely]] return; }
L_0040CE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1940000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE1Cu); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040CE1Cu) [[unlikely]] return; }
L_0040CE1C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040CE20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0040CE58; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 5280u);  if (t) { goto L_0040CE58; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE4Cu); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040CE4Cu) [[unlikely]] return; }
L_0040CE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CE68; } }
    c.budget -= 1;
L_0040CE58:
    set32(c.r[4], c.r[16].w[0] + 5040u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE68u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040CE68u) [[unlikely]] return; }
L_0040CE68:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE78u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040CE78u) [[unlikely]] return; }
L_0040CE78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CE20u | kUnwind; return; } goto L_0040CE20; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CEA0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040CEA0u) [[unlikely]] return; }
L_0040CEA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1940000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CEC8u); c.f[13] = fp::add(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040CEC8u) [[unlikely]] return; }
L_0040CEC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CED4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0040CED4u) [[unlikely]] return; }
L_0040CED4:
    c.budget -= 1;
L_0040CED8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);  if (t) { goto L_0040D110; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8608u);
    set32(c.r[21], c.r[29].w[0] + 404u);
    set32(c.r[20], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[22], c.r[29].w[0] + 408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::mul(c.f[0], c.f[25]);
    c.budget -= 10;
L_0040CF08:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF1Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 331u, depth + 1u); else { c.pc = 0x003AFAB0u; return; } if (c.pc != 0x0040CF1Cu) [[unlikely]] return; }
L_0040CF1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0040CF2Cu) [[unlikely]] return; }
L_0040CF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0040CF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040CF3Cu) [[unlikely]] return; }
L_0040CF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CF60; } }
    c.budget -= 1;
L_0040CF48:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF54u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 269u, depth + 1u); else { c.pc = 0x0040AAF0u; return; } if (c.pc != 0x0040CF54u) [[unlikely]] return; }
L_0040CF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0040CF68; } }
    c.budget -= 1;
L_0040CF60:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040CF68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0040CFA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[17], 0u + 13u);
    c.f[23] = c.r[2].w[0];
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8400u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0040CFC0; } }
    c.budget -= 1;
L_0040CFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[17], 0u + 11u);
    c.f[23] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 24992u);
    c.f[20] = c.f[24];
    c.budget -= 6;
L_0040CFC0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    st32((c.r[21].w[0]), c.f[22]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040CFE4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040CFFC; } }
L_0040CFE4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040CFFC:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040D018; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040D030; } }
L_0040D018:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040D030:
    set32(c.r[2], c.r[29].w[0] + 412u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040D054; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040D06C; } }
L_0040D054:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040D06C:
    set32(c.r[2], c.r[29].w[0] + 416u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[2].w[0] + 4080u);
    set32(c.r[2], c.r[29].w[0] + 420u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D088u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D088u) [[unlikely]] return; }
L_0040D088:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0B4u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D0B4u) [[unlikely]] return; }
L_0040D0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0C8u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040D0C8u) [[unlikely]] return; }
L_0040D0C8:
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040D0D8u) [[unlikely]] return; }
L_0040D0D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0E8u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00C2(c, 270u, depth + 1u); else { c.pc = 0x0040AB40u; return; } if (c.pc != 0x0040D0E8u) [[unlikely]] return; }
L_0040D0E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040D110; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CF08u | kUnwind; return; } goto L_0040CF08; } }
L_0040D110:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D128u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 331u, depth + 1u); else { c.pc = 0x003AFAB0u; return; } if (c.pc != 0x0040D128u) [[unlikely]] return; }
L_0040D128:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D138u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040D138u) [[unlikely]] return; }
L_0040D138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0040D150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D148u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0040D148u) [[unlikely]] return; }
L_0040D148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D170; } }
L_0040D150:
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] ^ c.r[2].d[0];  if (t) { goto L_0040D178; } }
L_0040D170:
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0040D178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D188u);  if (depth < kMaxDepth) unit_00C4(c, 30u, depth + 1u); else { c.pc = 0x00410420u; return; } if (c.pc != 0x0040D188u) [[unlikely]] return; }
L_0040D188:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.r[5].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D19Cu); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00C3(c, 118u, depth + 1u); else { c.pc = 0x0040D400u; return; } if (c.pc != 0x0040D19Cu) [[unlikely]] return; }
L_0040D19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1A8u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040D1A8u) [[unlikely]] return; }
L_0040D1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1B0u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x0040D1B0u) [[unlikely]] return; }
L_0040D1B0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_0040D200:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[21].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0040D244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040D24C; } }
L_0040D244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D24Cu);  if (depth < kMaxDepth) unit_00AB(c, 307u, depth + 1u); else { c.pc = 0x003AF6F0u; return; } if (c.pc != 0x0040D24Cu) [[unlikely]] return; }
L_0040D24C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8880u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[19], ld32((c.r[1].w[0] + 8964u)));
    c.r[1].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040D278; } }
    set32(c.r[16], 0u + 99u);
    c.budget -= 2;
L_0040D278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[5], 0u + 10u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3360u);
    set32(c.r[22], c.r[29].w[0] + 196u);
    set32(c.r[4], c.r[16].w[0] >> 31);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    mmi::div(c, 0, c.r[16].w[0], c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 24;
    { const bool t = c.r[21].d[0] == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_0040D2F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 8;
L_0040D2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D300u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D300u) [[unlikely]] return; }
L_0040D300:
    c.f[0] = c.r[20].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3730000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D318u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D318u) [[unlikely]] return; }
L_0040D318:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D328u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040D328u) [[unlikely]] return; }
L_0040D328:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D338u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040D338u) [[unlikely]] return; }
L_0040D338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D34Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D34Cu) [[unlikely]] return; }
L_0040D34C:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D35Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040D35Cu) [[unlikely]] return; }
L_0040D35C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D36Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040D36Cu) [[unlikely]] return; }
L_0040D36C:
    set32(c.r[5], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[2], 0u + 26u);
    set32(c.r[4], 0u - 5u);
    if (c.r[18].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3A0u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D3A0u) [[unlikely]] return; }
L_0040D3A0:
    c.f[0] = c.r[20].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3870000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3BCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D3BCu) [[unlikely]] return; }
L_0040D3BC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040D3CCu) [[unlikely]] return; }
L_0040D3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0040D400:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D448u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0040D448u) [[unlikely]] return; }
L_0040D448:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0040D458; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0040D458:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[2], 0u + 497u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 28u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D48Cu); set32(c.r[7], c.r[7].w[0] + 14592u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040D48Cu) [[unlikely]] return; }
L_0040D48C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4BCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0040D4BCu) [[unlikely]] return; }
L_0040D4BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[2] = c.r[4].w[0];
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8076u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[1] = c.r[3].w[0];
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8077u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[18].sd[0] <= 0; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0040D518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4F4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D4F4u) [[unlikely]] return; }
L_0040D4F4:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43030000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D508u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D508u) [[unlikely]] return; }
L_0040D508:
    set32(c.r[4], c.r[16].w[0] + 5280u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D518u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D518u) [[unlikely]] return; }
L_0040D518:
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] - 8u);  if (t) { goto L_0040D568; } }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040D568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D538u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D538u) [[unlikely]] return; }
L_0040D538:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3100000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D54Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D54Cu) [[unlikely]] return; }
L_0040D54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D554u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040D554u) [[unlikely]] return; }
L_0040D554:
    set32(c.r[4], c.r[16].w[0] + 5280u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D564u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D564u) [[unlikely]] return; }
L_0040D564:
    c.budget -= 1;
L_0040D568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040D590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 304u);  c.pc = t; return; }
L_0040D5A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 7824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040D5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[1].w[0] + 9216u)));
    set32(c.r[7], c.r[7].w[0] - 10512u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[5].w[0] + 240u);
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D614u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0040D614u) [[unlikely]] return; }
L_0040D614:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040D640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D678; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D678; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040D678:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0040D690:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[4].w[0] >> 31);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[5].d[0] = c.r[2].d[0] | 21846ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3190000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.hi.d[0];
    c.f[2] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].d[0] = c.hi.d[0];
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 23;
    { c.f[13] = fp::mul(c.f[0], c.f[1]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126F40u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 195u, depth); }
L_0040D6F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] + 9216u)));
    c.f[21] = ld32((c.r[4].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[20], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D740u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0040D740u) [[unlikely]] return; }
L_0040D740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D748u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D748u) [[unlikely]] return; }
L_0040D748:
    set32(c.r[4], c.r[16].w[0] + 960u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D758u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D758u) [[unlikely]] return; }
L_0040D758:
    set32(c.r[4], c.r[20].w[0] + 4320u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D768u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D768u) [[unlikely]] return; }
L_0040D768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D770u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00C4(c, 50u, depth + 1u); else { c.pc = 0x00410650u; return; } if (c.pc != 0x0040D770u) [[unlikely]] return; }
L_0040D770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D778u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D778u) [[unlikely]] return; }
L_0040D778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[5], 0u + 10u);
    c.f[12] = c.f[21];
    set32(c.r[3], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D79Cu); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D79Cu) [[unlikely]] return; }
L_0040D79C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7CCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0040D7CCu) [[unlikely]] return; }
L_0040D7CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7F0u); c.f[22] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D7F0u) [[unlikely]] return; }
L_0040D7F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.f[12] = ld32((c.r[1].w[0] - 7808u));
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D808u); c.f[13] = ld32((c.r[1].w[0] - 7804u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D808u) [[unlikely]] return; }
L_0040D808:
    set32(c.r[4], c.r[20].w[0] + 4560u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D818u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D818u) [[unlikely]] return; }
L_0040D818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D838u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D838u) [[unlikely]] return; }
L_0040D838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D858u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040D858u) [[unlikely]] return; }
L_0040D858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D860u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040D860u) [[unlikely]] return; }
L_0040D860:
    set32(c.r[4], c.r[20].w[0] + 5040u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D870u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D870u) [[unlikely]] return; }
L_0040D870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D878u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D878u) [[unlikely]] return; }
L_0040D878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.f[12] = ld32((c.r[1].w[0] - 7800u));
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D890u); c.f[13] = ld32((c.r[1].w[0] - 7796u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D890u) [[unlikely]] return; }
L_0040D890:
    set32(c.r[4], c.r[20].w[0] + 4800u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8A0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D8A0u) [[unlikely]] return; }
L_0040D8A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A10000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8C0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D8C0u) [[unlikely]] return; }
L_0040D8C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8E0u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040D8E0u) [[unlikely]] return; }
L_0040D8E0:
    c.f[12] = c.f[22];
    set32(c.r[4], c.r[20].w[0] + 5040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8F0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040D8F0u) [[unlikely]] return; }
L_0040D8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], 0u + 2u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[18], c.r[29].w[0] + 164u);
    c.f[22] = fp::mul(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 7840u);
    st32((c.r[18].w[0]), c.f[22]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040D93C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040D954; } }
L_0040D93C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040D954:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040D970; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040D988; } }
L_0040D970:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040D988:
    st32((c.r[29].w[0] + 172u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040D9A8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040D9C0; } }
L_0040D9A8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040D9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9C8u); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040D9C8u) [[unlikely]] return; }
L_0040D9C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BF0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9E4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040D9E4u) [[unlikely]] return; }
L_0040D9E4:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 180u);
    c.budget -= 3;
L_0040D9F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0040DA20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0040DA28; } }
    c.budget -= 1;
L_0040DA20:
    set32(c.r[2], c.r[16].w[0] + 1200u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0040DA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040DA30u) [[unlikely]] return; }
L_0040DA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA38u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 134u, depth + 1u); else { c.pc = 0x0040D690u; return; } if (c.pc != 0x0040DA38u) [[unlikely]] return; }
L_0040DA38:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040DA48u) [[unlikely]] return; }
L_0040DA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040DA50u) [[unlikely]] return; }
L_0040DA50:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D9F0u | kUnwind; return; } goto L_0040D9F0; } }
    set32(c.r[2], c.r[20].w[0] + 3360u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA74u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040DA74u) [[unlikely]] return; }
L_0040DA74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA90u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040DA90u) [[unlikely]] return; }
L_0040DA90:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040DAA0u) [[unlikely]] return; }
L_0040DAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 134u, depth + 1u); else { c.pc = 0x0040D690u; return; } if (c.pc != 0x0040DAA8u) [[unlikely]] return; }
L_0040DAA8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    set32(c.r[3], c.r[3].w[0] + 18016u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAE0u); c.r[4].d[0] = c.r[3].d[0] ^ c.r[2].d[0];  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040DAE0u) [[unlikely]] return; }
L_0040DAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040DAE8u) [[unlikely]] return; }
L_0040DAE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0040DB08; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB04u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040DB04u) [[unlikely]] return; }
L_0040DB04:
    c.budget -= 1;
L_0040DB08:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 184u);
    c.budget -= 2;
L_0040DB10:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_0040DB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB28u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040DB28u) [[unlikely]] return; }
L_0040DB28:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040DB38u) [[unlikely]] return; }
L_0040DB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB4Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040DB4Cu) [[unlikely]] return; }
L_0040DB4C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DB10u | kUnwind; return; } goto L_0040DB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB64u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040DB64u) [[unlikely]] return; }
L_0040DB64:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DA98u | kUnwind; return; } goto L_0040DA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB7Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040DB7Cu) [[unlikely]] return; }
L_0040DB7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB98u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040DB98u) [[unlikely]] return; }
L_0040DB98:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040DBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040DBA8u) [[unlikely]] return; }
L_0040DBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 134u, depth + 1u); else { c.pc = 0x0040D690u; return; } if (c.pc != 0x0040DBB0u) [[unlikely]] return; }
L_0040DBB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0040DBD8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_0040DBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DBE0; } }
L_0040DBD8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_0040DBE0:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBFCu); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040DBFCu) [[unlikely]] return; }
L_0040DBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0040DC04u) [[unlikely]] return; }
L_0040DC04:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DBA0u | kUnwind; return; } goto L_0040DBA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0040DC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC28u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040DC28u) [[unlikely]] return; }
L_0040DC28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC44u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040DC44u) [[unlikely]] return; }
L_0040DC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC4Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C3(c, 134u, depth + 1u); else { c.pc = 0x0040D690u; return; } if (c.pc != 0x0040DC4Cu) [[unlikely]] return; }
L_0040DC4C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC58u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0040DC58u) [[unlikely]] return; }
L_0040DC58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0040DC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0040DCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 308u);  c.pc = t; return; }
L_0040DCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0040DCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0040DCD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 7792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040DCF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x0040DD10u) [[unlikely]] return; }
L_0040DD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD18u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00AB(c, 334u, depth + 1u); else { c.pc = 0x003AFB40u; return; } if (c.pc != 0x0040DD18u) [[unlikely]] return; }
L_0040DD18:
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], 0u + 5u);
    c.r[18].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 8069u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0040DD40:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040DD4Cu) [[unlikely]] return; }
L_0040DD4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);  if (t) { goto L_0040DD78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[1].w[0] + 18044u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040DD88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0040DD78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 68ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DD40u | kUnwind; return; } goto L_0040DD40; } }
L_0040DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD90u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x0040DD90u) [[unlikely]] return; }
L_0040DD90:
    c.r[3].d[0] = c.r[18].sd[0] < 68ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DDA8; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040DE08; } }
L_0040DDA8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0040DE08; } }
    c.budget -= 1;
L_0040DDC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040DE08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_0040DE08; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DDC0u | kUnwind; return; } goto L_0040DDC0; } }
L_0040DE08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040DE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x0040DE48u) [[unlikely]] return; }
L_0040DE48:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040DE50:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040DE5Cu) [[unlikely]] return; }
L_0040DE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040DE70; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0040DE80; } }
L_0040DE70:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 68ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DE50u | kUnwind; return; } goto L_0040DE50; } }
L_0040DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE88u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x0040DE88u) [[unlikely]] return; }
L_0040DE88:
    c.r[1].d[0] = c.r[16].sd[0] < 68ll ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040DEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 7552u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { set32(c.r[4], c.r[4].w[0] + 304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DCF0u | kUnwind; return; } goto L_0040DCF0; }
L_0040DEE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[21].w[0] + 304u);  if (t) { goto L_0040DF28; } }
    st16((c.r[21].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0040DF28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0040E1F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0040DFB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040DF50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E248; } }
L_0040DF50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DF88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0040E248; } }
L_0040DF88:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 104u), c.f[0]);  if (t) { goto L_0040E248; } }
    c.budget -= 1;
L_0040DFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFC0u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x0040DFC0u) [[unlikely]] return; }
L_0040DFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFDCu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 200u, depth + 1u); else { c.pc = 0x0040DE30u; return; } if (c.pc != 0x0040DFDCu) [[unlikely]] return; }
L_0040DFDC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFECu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040DFECu) [[unlikely]] return; }
L_0040DFEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18044u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 8069u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E018u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x0040E018u) [[unlikely]] return; }
L_0040E018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E024u); c.r[4].d[0] = ld8((c.r[1].w[0] + 8117u));  if (depth < kMaxDepth) unit_004E(c, 44u, depth + 1u); else { c.pc = 0x00238490u; return; } if (c.pc != 0x0040E024u) [[unlikely]] return; }
L_0040E024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E248; } }
    c.budget -= 1;
L_0040E030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E038u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x0040E038u) [[unlikely]] return; }
L_0040E038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E060u); st16((c.r[21].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040E060u) [[unlikely]] return; }
L_0040E060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E248; } }
L_0040E068:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E080u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x0040E080u) [[unlikely]] return; }
L_0040E080:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0040E0C0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E1B8; } }
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040E0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0040E1B8; } }
L_0040E0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0040E1B8; } }
L_0040E0C0:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0040E0F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040E1B8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040E0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - 1u);  if (t) { goto L_0040E1B8; } }
    c.budget -= 1;
L_0040E0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { goto L_0040E1B8; } }
L_0040E0F0:
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040E170; } }
    set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);  if (t) { goto L_0040E1B8; } }
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_0040E140; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], c.r[18].w[0] - 1u);  if (t) { goto L_0040E130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040E1B8; } }
    c.budget -= 1;
L_0040E130:
    set32(c.r[20], c.r[18].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[17].w[0] - 1u);  if (t) { goto L_0040E1B8; } }
    c.budget -= 1;
L_0040E140:
    set32(c.r[4], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E168; } }
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_0040E1B8; } }
    c.budget -= 1;
L_0040E168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_0040E1B8; } }
L_0040E170:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040E1B8; } }
    set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - c.r[17].w[0]);  if (t) { goto L_0040E1B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0040E1B0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040E1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E1A8; } }
L_0040E1A0:
    set32(c.r[19], c.r[4].w[0] - c.r[17].w[0]);
    c.budget -= 2;
L_0040E1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040E1B8; } }
L_0040E1B0:
    set32(c.r[20], c.r[20].w[0] - c.r[17].w[0]);
    c.budget -= 2;
L_0040E1B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_0040E1D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_0040E248; } }
L_0040E1D0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1E4u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040E1E4u) [[unlikely]] return; }
L_0040E1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E248; } }
    c.budget -= 1;
L_0040E1F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[21].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0040E228; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040E258; } }
    c.budget -= 1;
L_0040E228:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_0040E248:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0040E258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040E280:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[19], ld32((c.r[1].w[0] + 18092u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], ld32((c.r[1].w[0] + 8880u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 307u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[21].w[0] + 304u);  if (t) { goto L_0040E3C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[16], 0u + 108u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[0], c.f[22]);
    c.budget -= 5;
L_0040E2F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E3C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.f[21] = c.f[20];  if (t) { goto L_0040E318; } }
    c.f[21] = c.f[22];
    c.budget -= 1;
L_0040E318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E320u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 200u, depth + 1u); else { c.pc = 0x0040DE30u; return; } if (c.pc != 0x0040E320u) [[unlikely]] return; }
L_0040E320:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E338u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0040E338u) [[unlikely]] return; }
L_0040E338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040E36C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_0040E388; } }
L_0040E36C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_0040E388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E390u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040E390u) [[unlikely]] return; }
L_0040E390:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E39Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x0040E39Cu) [[unlikely]] return; }
L_0040E39C:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    set32(c.r[4], 0u + 354u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3B4u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040E3B4u) [[unlikely]] return; }
L_0040E3B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 30u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E2F0u | kUnwind; return; } goto L_0040E2F0; } }
L_0040E3C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3D4u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040E3D4u) [[unlikely]] return; }
L_0040E3D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E404u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0040E404u) [[unlikely]] return; }
L_0040E404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.f[20] = fp::mul(c.f[22], c.f[0]);  if (t) { goto L_0040E460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E434u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040E434u) [[unlikely]] return; }
L_0040E434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F60000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E450u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040E450u) [[unlikely]] return; }
L_0040E450:
    set32(c.r[4], c.r[17].w[0] + 5280u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E460u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040E460u) [[unlikely]] return; }
L_0040E460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E4C8; } }
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E490u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040E490u) [[unlikely]] return; }
L_0040E490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2040000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4ACu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040E4ACu) [[unlikely]] return; }
L_0040E4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4B4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040E4B4u) [[unlikely]] return; }
L_0040E4B4:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[17].w[0] + 5280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4C4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040E4C4u) [[unlikely]] return; }
L_0040E4C4:
    c.budget -= 1;
L_0040E4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4D0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040E4D0u) [[unlikely]] return; }
L_0040E4D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], 0u + 105u);
    c.f[14] = 0u;
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E500u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040E500u) [[unlikely]] return; }
L_0040E500:
    set32(c.r[4], c.r[17].w[0] + 8400u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E510u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040E510u) [[unlikely]] return; }
L_0040E510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E518u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040E518u) [[unlikely]] return; }
L_0040E518:
    c.f[12] = c.f[22];
    set32(c.r[4], c.r[17].w[0] + 8160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E528u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040E528u) [[unlikely]] return; }
L_0040E528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 8640u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E53Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040E53Cu) [[unlikely]] return; }
L_0040E53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0040E570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 7776u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040E590:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[6].w[0] - 3568u);
    set32(c.r[3], 0u + 350u);
    set32(c.r[8], c.r[4].w[0] + 304u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 314u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0040E5F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0040E5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E610; } }
L_0040E5E0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 22u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0040E610; } }
L_0040E5F8:
    set32(c.r[3], 0u + 5u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 23u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
L_0040E610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 320u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4u);
    st16((c.r[4].w[0] + 320u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 324u));
    set32(c.r[5], c.r[5].w[0] - 4u);
    st16((c.r[4].w[0] + 324u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 326u)));
    set32(c.r[5], c.r[5].w[0] - 64u);
    st16((c.r[4].w[0] + 326u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 330u));
    set32(c.r[5], c.r[5].w[0] - 4u);
    st16((c.r[4].w[0] + 330u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 304u);  if (t) { goto L_0040E898; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 14656u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040E690:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040E700; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 100u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040E6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6DCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x0040E6DCu) [[unlikely]] return; }
L_0040E6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E898; } }
    c.budget -= 1;
L_0040E6E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6F4u); set32(c.r[5], 0u + 149u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040E6F4u) [[unlikely]] return; }
L_0040E6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E898; } }
    c.budget -= 1;
L_0040E700:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  if (t) { goto L_0040E728; } }
    set32(c.r[4], c.r[5].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_0040E728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0040E898; } }
L_0040E730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040E770; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040E760; } }
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E758u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 254u, depth + 1u); else { c.pc = 0x0040E8B0u; return; } if (c.pc != 0x0040E758u) [[unlikely]] return; }
L_0040E758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E898; } }
L_0040E760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E768u);  if (depth < kMaxDepth) unit_00C3(c, 256u, depth + 1u); else { c.pc = 0x0040EB00u; return; } if (c.pc != 0x0040E768u) [[unlikely]] return; }
L_0040E768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E898; } }
L_0040E770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E778u);  if (depth < kMaxDepth) unit_00C3(c, 258u, depth + 1u); else { c.pc = 0x0040EE60u; return; } if (c.pc != 0x0040E778u) [[unlikely]] return; }
L_0040E778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E898; } }
L_0040E780:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040E7B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0040E898; } }
L_0040E7B8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  if (t) { goto L_0040E7E0; } }
    set32(c.r[4], c.r[5].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_0040E7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0040E898; } }
L_0040E7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7F0u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x0040E7F0u) [[unlikely]] return; }
L_0040E7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E898; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040E898; } }
L_0040E810:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0040E860; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0040E858; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E858u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8069u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x0040E858u) [[unlikely]] return; }
L_0040E858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E8A0; } }
L_0040E860:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  if (t) { goto L_0040E888; } }
    set32(c.r[4], c.r[5].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_0040E888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0040E898; } }
L_0040E890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E8A0; } }
L_0040E898:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040E8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040E8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8CCu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x0040E8CCu) [[unlikely]] return; }
L_0040E8CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_0040E8D8; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0040E8D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040E8F8; } }
L_0040E8F0:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040E8F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[5].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { goto L_0040E948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040E950; } }
    c.budget -= 1;
L_0040E948:
    set32(c.r[3], 0u + 50u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040E950:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[5].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { goto L_0040E9A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EA00; } }
    c.budget -= 1;
L_0040E9A0:
    c.r[1].d[0] = c.r[5].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_0040E9F8; } }
    set32(c.r[5], c.r[5].w[0] - 30u);
    c.r[4].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EA00; } }
    c.budget -= 1;
L_0040E9F8:
    set32(c.r[3], 0u + 50u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040EA00:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[5].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { goto L_0040EA50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EAB0; } }
    c.budget -= 1;
L_0040EA50:
    c.r[1].d[0] = c.r[5].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_0040EAA8; } }
    set32(c.r[5], c.r[5].w[0] - 30u);
    c.r[4].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EAB0; } }
    c.budget -= 1;
L_0040EAA8:
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040EAB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040EAE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0040EAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EB1Cu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x0040EB1Cu) [[unlikely]] return; }
L_0040EB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_0040EB28; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0040EB28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040EB98; } }
L_0040EB40:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040EB90; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EB98; } }
    c.budget -= 1;
L_0040EB90:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040EB98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EBB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040EC60; } }
L_0040EBB0:
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040EC00; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EC60; } }
    c.budget -= 1;
L_0040EC00:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 40u);  if (t) { goto L_0040EC58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EC60; } }
    c.budget -= 1;
L_0040EC58:
    set32(c.r[3], 0u + 50u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040EC60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040ED28; } }
L_0040EC78:
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040ECC8; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040ED28; } }
    c.budget -= 1;
L_0040ECC8:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 40u);  if (t) { goto L_0040ED20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040ED28; } }
    c.budget -= 1;
L_0040ED20:
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040ED28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040ED40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040EE18; } }
L_0040ED40:
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 40u);  if (t) { goto L_0040EE08; } }
    set32(c.r[6], 0u + 60u);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[5], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[5], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.budget -= 46;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EE18; } }
    c.budget -= 1;
L_0040EE08:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0040EE18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040EE48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0040EE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE7Cu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x0040EE7Cu) [[unlikely]] return; }
L_0040EE7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_0040EE88; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0040EE88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040EEF8; } }
L_0040EEA0:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040EEF0; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EEF8; } }
    c.budget -= 1;
L_0040EEF0:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040EEF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040EF68; } }
L_0040EF10:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040EF60; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EF68; } }
    c.budget -= 1;
L_0040EF60:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040EF68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040EFD8; } }
L_0040EF80:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040EFD0; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040EFD8; } }
    c.budget -= 1;
L_0040EFD0:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040EFD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EFF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040F048; } }
L_0040EFF0:
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040F040; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040F048; } }
    c.budget -= 1;
L_0040F040:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0040F048:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040F060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040F110; } }
L_0040F060:
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 30u);  if (t) { goto L_0040F0B0; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040F110; } }
    c.budget -= 1;
L_0040F0B0:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 40u);  if (t) { goto L_0040F108; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040F110; } }
    c.budget -= 1;
L_0040F108:
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0040F110:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040F128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0040F1C0; } }
L_0040F128:
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 30u);  if (t) { goto L_0040F1B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[7].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], 0u + 700u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 800u);
    set32(c.r[8], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 30u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0040F1C0; } }
    c.budget -= 1;
L_0040F1B0:
    set32(c.r[3], 0u + 100u);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0040F1C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040F1F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0040F1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040F210:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 342u)));
    set32(c.r[18], ld32((c.r[1].w[0] + 8880u)));
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[2], c.f[1]);
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F280u); c.f[21] = fp::mul(c.f[21], c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F280u) [[unlikely]] return; }
L_0040F280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F298u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040F298u) [[unlikely]] return; }
L_0040F298:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F2ACu) [[unlikely]] return; }
L_0040F2AC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040F2B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 19744u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2C4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040F2C4u) [[unlikely]] return; }
L_0040F2C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F2B0u | kUnwind; return; } goto L_0040F2B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040F308; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_0040F324; } }
L_0040F308:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_0040F324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F32Cu);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040F32Cu) [[unlikely]] return; }
L_0040F32C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F338u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x0040F338u) [[unlikely]] return; }
L_0040F338:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F3E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F364u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0040F364u) [[unlikely]] return; }
L_0040F364:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 332u);
    set32(c.r[2], 0u + 640u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F394u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040F394u) [[unlikely]] return; }
L_0040F394:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3A0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 268u, depth + 1u); else { c.pc = 0x0040AA90u; return; } if (c.pc != 0x0040F3A0u) [[unlikely]] return; }
L_0040F3A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0040F3ACu) [[unlikely]] return; }
L_0040F3AC:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 362u);
    set32(c.r[2], 0u + 640u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3DCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040F3DCu) [[unlikely]] return; }
L_0040F3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F458; } }
    c.budget -= 1;
L_0040F3E8:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[20], 0u + 332u);
    set32(c.r[2], c.r[2].w[0] + 7364u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_0040F408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F410u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0040F410u) [[unlikely]] return; }
L_0040F410:
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[20].d[0] << 48;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 640u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F444u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0040F444u) [[unlikely]] return; }
L_0040F444:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 30u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F408u | kUnwind; return; } goto L_0040F408; } }
L_0040F458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F464u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0040F464u) [[unlikely]] return; }
L_0040F464:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040F4B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040F498; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F490u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C3(c, 314u, depth + 1u); else { c.pc = 0x0040F8C0u; return; } if (c.pc != 0x0040F490u) [[unlikely]] return; }
L_0040F490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F4C0; } }
L_0040F498:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4A8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C3(c, 321u, depth + 1u); else { c.pc = 0x0040FA50u; return; } if (c.pc != 0x0040F4A8u) [[unlikely]] return; }
L_0040F4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F4C0; } }
L_0040F4B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4C0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C3(c, 335u, depth + 1u); else { c.pc = 0x0040FED0u; return; } if (c.pc != 0x0040F4C0u) [[unlikely]] return; }
L_0040F4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4C8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F4C8u) [[unlikely]] return; }
L_0040F4C8:
    set32(c.r[4], c.r[18].w[0] + 8640u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040F4D8u) [[unlikely]] return; }
L_0040F4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040F510:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[1].w[0] + 9048u)));
    c.f[20] = c.f[15];
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.f[23] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = c.f[13];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 8880u)));
    c.f[21] = c.f[14];
    c.budget -= 29;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[29].w[0] + 148u), c.f[0]);  if (t) { goto L_0040F728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F58Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F58Cu) [[unlikely]] return; }
L_0040F58C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5A0u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040F5A0u) [[unlikely]] return; }
L_0040F5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421E0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5BCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F5BCu) [[unlikely]] return; }
L_0040F5BC:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[17].w[0] + 2640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040F5CCu) [[unlikely]] return; }
L_0040F5CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 172u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5E0u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040F5E0u) [[unlikely]] return; }
L_0040F5E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040F5F0; } }
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040F5F0:
    set32(c.r[2], c.r[16].w[0] + 3600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5FCu); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F5FCu) [[unlikely]] return; }
L_0040F5FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F610u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040F610u) [[unlikely]] return; }
L_0040F610:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421E0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F62Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F62Cu) [[unlikely]] return; }
L_0040F62C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F638u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040F638u) [[unlikely]] return; }
L_0040F638:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F648u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040F648u) [[unlikely]] return; }
L_0040F648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F65Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F65Cu) [[unlikely]] return; }
L_0040F65C:
    set32(c.r[16], c.r[29].w[0] + 173u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F66Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040F66Cu) [[unlikely]] return; }
L_0040F66C:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F67Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040F67Cu) [[unlikely]] return; }
L_0040F67C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F688u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x0040F688u) [[unlikely]] return; }
L_0040F688:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F698u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x0040F698u) [[unlikely]] return; }
L_0040F698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6A0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F6A0u) [[unlikely]] return; }
L_0040F6A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6B4u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040F6B4u) [[unlikely]] return; }
L_0040F6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6D0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F6D0u) [[unlikely]] return; }
L_0040F6D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0040F6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6E4u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040F6E4u) [[unlikely]] return; }
L_0040F6E4:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040F6F4u) [[unlikely]] return; }
L_0040F6F4:
    c.budget -= 1;
L_0040F6F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F70Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F70Cu) [[unlikely]] return; }
L_0040F70C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F718u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x0040F718u) [[unlikely]] return; }
L_0040F718:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F728u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040F728u) [[unlikely]] return; }
L_0040F728:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] - 8608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8400u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040F770; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040F788; } }
L_0040F770:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040F788:
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040F7A4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040F7BC; } }
L_0040F7A4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040F7BC:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0040F7DC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040F7F4; } }
L_0040F7DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040F7F4:
    set32(c.r[2], c.r[17].w[0] + 240u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F804u); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F804u) [[unlikely]] return; }
    goto L_0040F804;
L_0040F800:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_0040F804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F818u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040F818u) [[unlikely]] return; }
L_0040F818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[13] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F830u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040F830u) [[unlikely]] return; }
L_0040F830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    set32(c.r[4], c.r[19].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[3], c.r[4].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F860u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040F860u) [[unlikely]] return; }
L_0040F860:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F870u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040F870u) [[unlikely]] return; }
L_0040F870:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F87Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 269u, depth + 1u); else { c.pc = 0x0040AAF0u; return; } if (c.pc != 0x0040F87Cu) [[unlikely]] return; }
L_0040F87C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F88Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C2(c, 270u, depth + 1u); else { c.pc = 0x0040AB40u; return; } if (c.pc != 0x0040F88Cu) [[unlikely]] return; }
L_0040F88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0040F8C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] + 9216u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8F0u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040F8F0u) [[unlikely]] return; }
L_0040F8F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 3600u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F924u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040F924u) [[unlikely]] return; }
L_0040F924:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 3360u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F958u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040F958u) [[unlikely]] return; }
L_0040F958:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[7], 0u + 1u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[13] = c.f[12];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9A4u); c.f[15] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F510u; return; } if (c.pc != 0x0040F9A4u) [[unlikely]] return; }
L_0040F9A4:
    set32(c.r[2], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[16].w[0] + 2640u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = c.r[5].w[0];
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA20u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040FA20u) [[unlikely]] return; }
L_0040FA20:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040FA30u) [[unlikely]] return; }
L_0040FA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0040FA50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] + 9216u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA94u); c.f[22] = c.f[12];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040FA94u) [[unlikely]] return; }
L_0040FA94:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 23u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FAD4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040FAD4u) [[unlikely]] return; }
L_0040FAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FAE8u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040FAE8u) [[unlikely]] return; }
L_0040FAE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB18u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0040FB18u) [[unlikely]] return; }
L_0040FB18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 4080u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB4Cu); c.f[12] = fp::mul(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040FB4Cu) [[unlikely]] return; }
L_0040FB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB54u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040FB54u) [[unlikely]] return; }
L_0040FB54:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 3600u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB88u); c.f[12] = fp::mul(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040FB88u) [[unlikely]] return; }
L_0040FB88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 3360u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBBCu); c.f[12] = fp::mul(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040FBBCu) [[unlikely]] return; }
L_0040FBBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);  if (t) { goto L_0040FBF8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[14] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[15] = c.f[22];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBF4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F510u; return; } if (c.pc != 0x0040FBF4u) [[unlikely]] return; }
L_0040FBF4:
    c.budget -= 1;
L_0040FBF8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[1].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040FC30; } }
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FC70; } }
L_0040FC30:
    c.r[1].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] - 30u);  if (t) { goto L_0040FC68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[3] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0040FC70; } }
L_0040FC68:
    c.f[3] = 0u;
    c.budget -= 2;
L_0040FC70:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0040FE18; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 610u);  if (t) { goto L_0040FCC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3B40000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_0040FDB8; } }
    c.budget -= 1;
L_0040FCC8:
    c.r[1].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_0040FD50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[6], c.r[3].w[0] - 20u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[21] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0040FDB8; } }
L_0040FD50:
    c.r[1].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_0040FDB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[3].w[0] - 30u);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[21] = c.f[1] ^ fp::kSign;
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 23;
L_0040FDB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.f[23] = fp::mul(c.f[3], c.f[22]);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FDE8u); c.f[15] = c.f[23];  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F510u; return; } if (c.pc != 0x0040FDE8u) [[unlikely]] return; }
L_0040FDE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[21] ^ fp::kSign;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[15] = c.f[23];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE14u); c.f[13] = c.f[20] ^ fp::kSign;  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F510u; return; } if (c.pc != 0x0040FE14u) [[unlikely]] return; }
L_0040FE14:
    c.budget -= 1;
L_0040FE18:
    set32(c.r[4], 0u + 8u);
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[16].w[0] + 2640u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[3] = c.r[4].w[0];
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 124u), 0u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE94u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040FE94u) [[unlikely]] return; }
L_0040FE94:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FEA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0040FEA4u) [[unlikely]] return; }
L_0040FEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0040FED0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], c.r[16].w[0] + 304u);
    set32(c.r[19], ld32((c.r[1].w[0] + 9216u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF20u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040FF20u) [[unlikely]] return; }
L_0040FF20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF60u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040FF60u) [[unlikely]] return; }
L_0040FF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF74u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040FF74u) [[unlikely]] return; }
L_0040FF74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[4], c.r[19].w[0] + 4320u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFA8u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040FFA8u) [[unlikely]] return; }
L_0040FFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFB0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040FFB0u) [[unlikely]] return; }
L_0040FFB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 30u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[4], c.r[19].w[0] + 3600u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFE4u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0040FFE4u) [[unlikely]] return; }
L_0040FFE4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[4], c.r[19].w[0] + 3360u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 7;
    [[clang::musttail]] return unit_00C4(c, 1u, depth);
}

}
