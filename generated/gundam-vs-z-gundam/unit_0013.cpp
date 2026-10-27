#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0013[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15,
    0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    22, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0013(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0014C000;
    case 2u: goto L_0014C00C;
    case 3u: goto L_0014C048;
    case 4u: goto L_0014C070;
    case 5u: goto L_0014C0BC;
    case 6u: goto L_0014C0F0;
    case 7u: goto L_0014C128;
    case 8u: goto L_0014C138;
    case 9u: goto L_0014C14C;
    case 10u: goto L_0014C1C8;
    case 11u: goto L_0014C1D0;
    case 12u: goto L_0014C1E0;
    case 13u: goto L_0014C1E8;
    case 14u: goto L_0014C1F4;
    case 15u: goto L_0014C1FC;
    case 16u: goto L_0014C20C;
    case 17u: goto L_0014C214;
    case 18u: goto L_0014C2D8;
    case 19u: goto L_0014C2E8;
    case 20u: goto L_0014C2FC;
    case 21u: goto L_0014C378;
    case 22u: goto L_0014C380;
    case 23u: goto L_0014C390;
    case 24u: goto L_0014C398;
    case 25u: goto L_0014C3A4;
    case 26u: goto L_0014C3AC;
    case 27u: goto L_0014C3BC;
    case 28u: goto L_0014C3C4;
    case 29u: goto L_0014C488;
    case 30u: goto L_0014C498;
    case 31u: goto L_0014C4AC;
    case 32u: goto L_0014C528;
    case 33u: goto L_0014C530;
    case 34u: goto L_0014C540;
    case 35u: goto L_0014C548;
    case 36u: goto L_0014C554;
    case 37u: goto L_0014C55C;
    case 38u: goto L_0014C56C;
    case 39u: goto L_0014C574;
    case 40u: goto L_0014C600;
    case 41u: goto L_0014C640;
    case 42u: goto L_0014C678;
    case 43u: goto L_0014C688;
    case 44u: goto L_0014C6EC;
    case 45u: goto L_0014C6FC;
    case 46u: goto L_0014C764;
    case 47u: goto L_0014C774;
    case 48u: goto L_0014C7DC;
    case 49u: goto L_0014C7EC;
    case 50u: goto L_0014C860;
    case 51u: goto L_0014C880;
    case 52u: goto L_0014C8B4;
    case 53u: goto L_0014C8C4;
    case 54u: goto L_0014C8E8;
    case 55u: goto L_0014C908;
    case 56u: goto L_0014C958;
    case 57u: goto L_0014C968;
    case 58u: goto L_0014C990;
    case 59u: goto L_0014C9A0;
    case 60u: goto L_0014C9CC;
    case 61u: goto L_0014CA80;
    case 62u: goto L_0014CAD8;
    case 63u: goto L_0014CB30;
    case 64u: goto L_0014CB38;
    case 65u: goto L_0014CB68;
    case 66u: goto L_0014CB98;
    case 67u: goto L_0014CBA8;
    case 68u: goto L_0014CC40;
    case 69u: goto L_0014CC60;
    case 70u: goto L_0014CCE0;
    case 71u: goto L_0014CD00;
    case 72u: goto L_0014CD30;
    case 73u: goto L_0014CD5C;
    case 74u: goto L_0014CDB0;
    case 75u: goto L_0014CDC0;
    case 76u: goto L_0014CDD0;
    case 77u: goto L_0014CDF4;
    case 78u: goto L_0014CE60;
    case 79u: goto L_0014CE84;
    case 80u: goto L_0014CE94;
    case 81u: goto L_0014CEA8;
    case 82u: goto L_0014CF3C;
    case 83u: goto L_0014CF6C;
    case 84u: goto L_0014CFA0;
    case 85u: goto L_0014CFE0;
    case 86u: goto L_0014CFF4;
    case 87u: goto L_0014D008;
    case 88u: goto L_0014D05C;
    case 89u: goto L_0014D070;
    case 90u: goto L_0014D084;
    case 91u: goto L_0014D0A4;
    case 92u: goto L_0014D0B8;
    case 93u: goto L_0014D0D4;
    case 94u: goto L_0014D0DC;
    case 95u: goto L_0014D0F8;
    case 96u: goto L_0014D180;
    case 97u: goto L_0014D194;
    case 98u: goto L_0014D19C;
    case 99u: goto L_0014D1B0;
    case 100u: goto L_0014D1CC;
    case 101u: goto L_0014D1EC;
    case 102u: goto L_0014D200;
    case 103u: goto L_0014D21C;
    case 104u: goto L_0014D22C;
    case 105u: goto L_0014D240;
    case 106u: goto L_0014D27C;
    case 107u: goto L_0014D298;
    case 108u: goto L_0014D2DC;
    case 109u: goto L_0014D2F0;
    case 110u: goto L_0014D304;
    case 111u: goto L_0014D35C;
    case 112u: goto L_0014D370;
    case 113u: goto L_0014D384;
    case 114u: goto L_0014D3A4;
    case 115u: goto L_0014D3B8;
    case 116u: goto L_0014D3C0;
    case 117u: goto L_0014D3D4;
    case 118u: goto L_0014D3F0;
    case 119u: goto L_0014D404;
    case 120u: goto L_0014D420;
    case 121u: goto L_0014D474;
    case 122u: goto L_0014D484;
    case 123u: goto L_0014D498;
    case 124u: goto L_0014D4AC;
    case 125u: goto L_0014D50C;
    case 126u: goto L_0014D51C;
    case 127u: goto L_0014D528;
    case 128u: goto L_0014D550;
    case 129u: goto L_0014D580;
    case 130u: goto L_0014D59C;
    case 131u: goto L_0014D5B4;
    case 132u: goto L_0014D5C0;
    case 133u: goto L_0014D5D4;
    case 134u: goto L_0014D5F0;
    case 135u: goto L_0014D5F8;
    case 136u: goto L_0014D608;
    case 137u: goto L_0014D618;
    case 138u: goto L_0014D620;
    case 139u: goto L_0014D628;
    case 140u: goto L_0014D638;
    case 141u: goto L_0014D640;
    case 142u: goto L_0014D668;
    case 143u: goto L_0014D6A0;
    case 144u: goto L_0014D6AC;
    case 145u: goto L_0014D6C0;
    case 146u: goto L_0014D704;
    case 147u: goto L_0014D70C;
    case 148u: goto L_0014D7C0;
    case 149u: goto L_0014D7EC;
    case 150u: goto L_0014D800;
    case 151u: goto L_0014D810;
    case 152u: goto L_0014D860;
    case 153u: goto L_0014D884;
    case 154u: goto L_0014D950;
    case 155u: goto L_0014D9A8;
    case 156u: goto L_0014D9BC;
    case 157u: goto L_0014D9CC;
    case 158u: goto L_0014D9E0;
    case 159u: goto L_0014DA58;
    case 160u: goto L_0014DA94;
    case 161u: goto L_0014DAB0;
    case 162u: goto L_0014DAC4;
    case 163u: goto L_0014DB14;
    case 164u: goto L_0014DB28;
    case 165u: goto L_0014DB3C;
    case 166u: goto L_0014DB5C;
    case 167u: goto L_0014DB70;
    case 168u: goto L_0014DB84;
    case 169u: goto L_0014DBEC;
    case 170u: goto L_0014DC08;
    case 171u: goto L_0014DC1C;
    case 172u: goto L_0014DC6C;
    case 173u: goto L_0014DC80;
    case 174u: goto L_0014DC94;
    case 175u: goto L_0014DCB4;
    case 176u: goto L_0014DCC8;
    case 177u: goto L_0014DCDC;
    case 178u: goto L_0014DD00;
    case 179u: goto L_0014DD24;
    case 180u: goto L_0014DD98;
    case 181u: goto L_0014DF20;
    case 182u: goto L_0014DF88;
    case 183u: goto L_0014DF98;
    case 184u: goto L_0014DFAC;
    case 185u: goto L_0014DFC0;
    case 186u: goto L_0014DFD4;
    case 187u: goto L_0014DFF8;
    case 188u: goto L_0014E00C;
    case 189u: goto L_0014E020;
    case 190u: goto L_0014E034;
    case 191u: goto L_0014E044;
    case 192u: goto L_0014E058;
    case 193u: goto L_0014E06C;
    case 194u: goto L_0014E080;
    case 195u: goto L_0014E09C;
    case 196u: goto L_0014E0B0;
    case 197u: goto L_0014E0B8;
    case 198u: goto L_0014E0CC;
    case 199u: goto L_0014E0D8;
    case 200u: goto L_0014E0E0;
    case 201u: goto L_0014E15C;
    case 202u: goto L_0014E170;
    case 203u: goto L_0014E178;
    case 204u: goto L_0014E1CC;
    case 205u: goto L_0014E1E0;
    case 206u: goto L_0014E1E8;
    case 207u: goto L_0014E204;
    case 208u: goto L_0014E27C;
    case 209u: goto L_0014E284;
    case 210u: goto L_0014E2E8;
    case 211u: goto L_0014E304;
    case 212u: goto L_0014E318;
    case 213u: goto L_0014E360;
    case 214u: goto L_0014E374;
    case 215u: goto L_0014E388;
    case 216u: goto L_0014E3A8;
    case 217u: goto L_0014E3BC;
    case 218u: goto L_0014E3D0;
    case 219u: goto L_0014E3E0;
    case 220u: goto L_0014E3FC;
    case 221u: goto L_0014E488;
    case 222u: goto L_0014E490;
    case 223u: goto L_0014E500;
    case 224u: goto L_0014E51C;
    case 225u: goto L_0014E530;
    case 226u: goto L_0014E578;
    case 227u: goto L_0014E58C;
    case 228u: goto L_0014E5A0;
    case 229u: goto L_0014E5C0;
    case 230u: goto L_0014E5D4;
    case 231u: goto L_0014E5E8;
    case 232u: goto L_0014E610;
    case 233u: goto L_0014E624;
    case 234u: goto L_0014E6A0;
    case 235u: goto L_0014E6EC;
    case 236u: goto L_0014E700;
    case 237u: goto L_0014E714;
    case 238u: goto L_0014E724;
    case 239u: goto L_0014E738;
    case 240u: goto L_0014E76C;
    case 241u: goto L_0014E780;
    case 242u: goto L_0014E790;
    case 243u: goto L_0014E7AC;
    case 244u: goto L_0014E7F8;
    case 245u: goto L_0014E8D8;
    case 246u: goto L_0014E910;
    case 247u: goto L_0014E918;
    case 248u: goto L_0014E96C;
    case 249u: goto L_0014E990;
    case 250u: goto L_0014E9E0;
    case 251u: goto L_0014EA0C;
    case 252u: goto L_0014EA20;
    case 253u: goto L_0014EA30;
    case 254u: goto L_0014EA44;
    case 255u: goto L_0014EA7C;
    case 256u: goto L_0014EA98;
    case 257u: goto L_0014EAB0;
    case 258u: goto L_0014EAD8;
    case 259u: goto L_0014EAE0;
    case 260u: goto L_0014EB60;
    case 261u: goto L_0014EB74;
    case 262u: goto L_0014EB7C;
    case 263u: goto L_0014EBF8;
    case 264u: goto L_0014EC0C;
    case 265u: goto L_0014EC30;
    case 266u: goto L_0014EC38;
    case 267u: goto L_0014ECB8;
    case 268u: goto L_0014ECCC;
    case 269u: goto L_0014ECD4;
    case 270u: goto L_0014ED50;
    case 271u: goto L_0014ED64;
    case 272u: goto L_0014ED6C;
    case 273u: goto L_0014ED88;
    case 274u: goto L_0014EDB4;
    case 275u: goto L_0014EDD0;
    case 276u: goto L_0014EE00;
    case 277u: goto L_0014EE08;
    case 278u: goto L_0014EE64;
    case 279u: goto L_0014EEA0;
    case 280u: goto L_0014EEEC;
    case 281u: goto L_0014EF10;
    case 282u: goto L_0014EF18;
    case 283u: goto L_0014EF34;
    case 284u: goto L_0014EF4C;
    case 285u: goto L_0014EF78;
    case 286u: goto L_0014F00C;
    case 287u: goto L_0014F020;
    case 288u: goto L_0014F040;
    case 289u: goto L_0014F078;
    case 290u: goto L_0014F0D0;
    case 291u: goto L_0014F318;
    case 292u: goto L_0014F32C;
    case 293u: goto L_0014F3D0;
    case 294u: goto L_0014F480;
    case 295u: goto L_0014F494;
    case 296u: goto L_0014F49C;
    case 297u: goto L_0014F4CC;
    case 298u: goto L_0014F4E0;
    case 299u: goto L_0014F504;
    case 300u: goto L_0014F518;
    case 301u: goto L_0014F548;
    case 302u: goto L_0014F5C0;
    case 303u: goto L_0014F5D4;
    case 304u: goto L_0014F5DC;
    case 305u: goto L_0014F60C;
    case 306u: goto L_0014F620;
    case 307u: goto L_0014F644;
    case 308u: goto L_0014F658;
    case 309u: goto L_0014F69C;
    case 310u: goto L_0014F6C0;
    case 311u: goto L_0014F6E4;
    case 312u: goto L_0014F758;
    case 313u: goto L_0014F7F0;
    case 314u: goto L_0014F858;
    case 315u: goto L_0014F860;
    case 316u: goto L_0014F910;
    case 317u: goto L_0014F964;
    case 318u: goto L_0014F97C;
    case 319u: goto L_0014F9A8;
    case 320u: goto L_0014F9C0;
    case 321u: goto L_0014F9E4;
    case 322u: goto L_0014FA04;
    case 323u: goto L_0014FAA0;
    case 324u: goto L_0014FAB4;
    case 325u: goto L_0014FAFC;
    case 326u: goto L_0014FB14;
    case 327u: goto L_0014FB3C;
    case 328u: goto L_0014FB60;
    case 329u: goto L_0014FB70;
    case 330u: goto L_0014FBB0;
    case 331u: goto L_0014FBC0;
    case 332u: goto L_0014FBF0;
    case 333u: goto L_0014FC38;
    case 334u: goto L_0014FC4C;
    case 335u: goto L_0014FC5C;
    case 336u: goto L_0014FC70;
    case 337u: goto L_0014FC80;
    case 338u: goto L_0014FCA0;
    case 339u: goto L_0014FCB4;
    case 340u: goto L_0014FCC4;
    case 341u: goto L_0014FCD8;
    case 342u: goto L_0014FCE8;
    case 343u: goto L_0014FD34;
    case 344u: goto L_0014FD44;
    case 345u: goto L_0014FD58;
    case 346u: goto L_0014FD70;
    case 347u: goto L_0014FD8C;
    case 348u: goto L_0014FD9C;
    case 349u: goto L_0014FE28;
    case 350u: goto L_0014FE30;
    case 351u: goto L_0014FE3C;
    case 352u: goto L_0014FE70;
    case 353u: goto L_0014FECC;
    case 354u: goto L_0014FED0;
    case 355u: goto L_0014FF30;
    case 356u: goto L_0014FF98;
    case 357u: goto L_0014FFAC;
    case 358u: goto L_0014FFBC;
    case 359u: goto L_0014FFCC;
    case 360u: goto L_0014FFD8;
    default: bad_entry(c, 0x0014C000u); return;
    }
L_0014C000:
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C00Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C00Cu) [[unlikely]] return; }
L_0014C00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;  if (t) { goto L_0014C040; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[20].w[0] + 128u);  if (t) { goto L_0014C038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C040; } }
    c.budget -= 1;
L_0014C038:
    set32(c.r[22], c.r[20].w[0] - 128u);
    c.budget -= 2;
L_0014C040:
    st32((c.r[21].w[0] + 8328u), c.r[22].w[0]);
    c.budget -= 2;
L_0014C048:
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[20].d[0] = c.r[23].d[0] & 65535ull;  if (t) { goto L_0014C0A0; } }
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C070u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C070u) [[unlikely]] return; }
L_0014C070:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0014C098; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 128u);  if (t) { goto L_0014C090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C098; } }
    c.budget -= 1;
L_0014C090:
    set32(c.r[20], c.r[19].w[0] - 128u);
    c.budget -= 2;
L_0014C098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8332u), c.r[20].w[0]);  if (t) { goto L_0014C0E8; } }
L_0014C0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[23].w[0]);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C0BCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C0BCu) [[unlikely]] return; }
L_0014C0BC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0014C0E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 128u);  if (t) { goto L_0014C0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C0E0; } }
L_0014C0D8:
    set32(c.r[20], c.r[19].w[0] - 128u);
    c.budget -= 2;
L_0014C0E0:
    st32((c.r[21].w[0] + 8332u), c.r[20].w[0]);
    c.budget -= 2;
L_0014C0E8:
    st32((c.r[21].w[0] + 36u), c.f[21]);
    c.budget -= 2;
L_0014C0F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 3396u);
    set32(c.r[20], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3392u);
    set32(c.r[19], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3388u);
    set32(c.r[22], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C128u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x0014C128u) [[unlikely]] return; }
L_0014C128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_0014C2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C138u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0014C138u) [[unlikely]] return; }
L_0014C138:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C14Cu); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x0014C14Cu) [[unlikely]] return; }
L_0014C14C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 19136u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 192u));
    c.f[6] = ld32((c.r[29].w[0] + 196u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 19144u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 20u, c.f[0], c.f[6]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1C8u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0014C1C8u) [[unlikely]] return; }
L_0014C1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1D0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0014C1D0u) [[unlikely]] return; }
L_0014C1D0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1E0u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0014C1E0u) [[unlikely]] return; }
L_0014C1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1E8u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0014C1E8u) [[unlikely]] return; }
L_0014C1E8:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1F4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014C1F4u) [[unlikely]] return; }
L_0014C1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1FCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0014C1FCu) [[unlikely]] return; }
L_0014C1FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C20Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014C20Cu) [[unlikely]] return; }
L_0014C20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C214u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0014C214u) [[unlikely]] return; }
L_0014C214:
    c.r[1].d[0] = c.r[2].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014C228; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 2;
L_0014C228:
    c.r[1].d[0] = c.r[19].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014C238; } }
    set32(c.r[19], 0u + 4096u);
    c.budget -= 1;
L_0014C238:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014C260; } }
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8328u), c.r[2].w[0]);  if (t) { goto L_0014C268; } }
L_0014C260:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8328u), c.r[2].w[0]);
    c.budget -= 2;
L_0014C268:
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0014C288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8332u), c.r[2].w[0]);  if (t) { goto L_0014C298; } }
L_0014C288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8332u), c.r[2].w[0]);
    c.budget -= 4;
L_0014C298:
    st32((c.r[21].w[0] + 36u), c.f[20]);
    c.budget -= 2;
L_0014C2A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 3408u);
    set32(c.r[20], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3404u);
    set32(c.r[19], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3400u);
    set32(c.r[22], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2D8u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x0014C2D8u) [[unlikely]] return; }
L_0014C2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_0014C450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2E8u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0014C2E8u) [[unlikely]] return; }
L_0014C2E8:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2FCu); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x0014C2FCu) [[unlikely]] return; }
L_0014C2FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 19136u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 192u));
    c.f[6] = ld32((c.r[29].w[0] + 196u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 19144u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 20u, c.f[0], c.f[6]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C378u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0014C378u) [[unlikely]] return; }
L_0014C378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C380u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0014C380u) [[unlikely]] return; }
L_0014C380:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C390u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0014C390u) [[unlikely]] return; }
L_0014C390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C398u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0014C398u) [[unlikely]] return; }
L_0014C398:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3A4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014C3A4u) [[unlikely]] return; }
L_0014C3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3ACu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0014C3ACu) [[unlikely]] return; }
L_0014C3AC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3BCu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014C3BCu) [[unlikely]] return; }
L_0014C3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3C4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0014C3C4u) [[unlikely]] return; }
L_0014C3C4:
    c.r[1].d[0] = c.r[2].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014C3D8; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 2;
L_0014C3D8:
    c.r[1].d[0] = c.r[19].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014C3E8; } }
    set32(c.r[19], 0u + 4096u);
    c.budget -= 1;
L_0014C3E8:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014C410; } }
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8328u), c.r[2].w[0]);  if (t) { goto L_0014C418; } }
L_0014C410:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8328u), c.r[2].w[0]);
    c.budget -= 2;
L_0014C418:
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0014C438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8332u), c.r[2].w[0]);  if (t) { goto L_0014C448; } }
L_0014C438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8332u), c.r[2].w[0]);
    c.budget -= 4;
L_0014C448:
    st32((c.r[21].w[0] + 36u), c.f[20]);
    c.budget -= 2;
L_0014C450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 3420u);
    set32(c.r[20], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3416u);
    set32(c.r[19], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3412u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C488u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x00147E90u; return; } if (c.pc != 0x0014C488u) [[unlikely]] return; }
L_0014C488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_0014C600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C498u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0014C498u) [[unlikely]] return; }
L_0014C498:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C4ACu); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 205u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x0014C4ACu) [[unlikely]] return; }
L_0014C4AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 19136u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 196u));
    c.f[5] = ld32((c.r[29].w[0] + 192u));
    c.f[7] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 19144u);
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 20u, c.f[0], c.f[6]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C528u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0014C528u) [[unlikely]] return; }
L_0014C528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C530u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0014C530u) [[unlikely]] return; }
L_0014C530:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C540u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0014C540u) [[unlikely]] return; }
L_0014C540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C548u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0014C548u) [[unlikely]] return; }
L_0014C548:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C554u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014C554u) [[unlikely]] return; }
L_0014C554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C55Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0014C55Cu) [[unlikely]] return; }
L_0014C55C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C56Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014C56Cu) [[unlikely]] return; }
L_0014C56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C574u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0014C574u) [[unlikely]] return; }
L_0014C574:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014C588; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_0014C588:
    c.r[1].d[0] = c.r[16].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014C598; } }
    set32(c.r[16], 0u + 4096u);
    c.budget -= 1;
L_0014C598:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014C5C0; } }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8328u), c.r[3].w[0]);  if (t) { goto L_0014C5C8; } }
L_0014C5C0:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8328u), c.r[3].w[0]);
    c.budget -= 2;
L_0014C5C8:
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0014C5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8332u), c.r[3].w[0]);  if (t) { goto L_0014C5F8; } }
L_0014C5E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[21].w[0] + 8332u), c.r[3].w[0]);
    c.budget -= 4;
L_0014C5F8:
    st32((c.r[21].w[0] + 36u), c.f[20]);
    c.budget -= 2;
L_0014C600:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0014C640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C678u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 4u, depth + 1u); else { c.pc = 0x00148020u; return; } if (c.pc != 0x0014C678u) [[unlikely]] return; }
L_0014C678:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C688u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C688u) [[unlikely]] return; }
L_0014C688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C6A8; } }
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 2;
L_0014C6A8:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 1ull;  if (t) { goto L_0014C6D8; } }
    c.budget -= 1;
L_0014C6C8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C6D8; } }
    c.r[16].d[0] = c.r[16].d[0] | 16ull;
    c.budget -= 1;
L_0014C6D8:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C6ECu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 4u, depth + 1u); else { c.pc = 0x00148020u; return; } if (c.pc != 0x0014C6ECu) [[unlikely]] return; }
L_0014C6EC:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C6FCu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C6FCu) [[unlikely]] return; }
L_0014C6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C720; } }
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_0014C720:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 2ull;  if (t) { goto L_0014C750; } }
    c.budget -= 1;
L_0014C740:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C750; } }
    c.r[16].d[0] = c.r[16].d[0] | 32ull;
    c.budget -= 1;
L_0014C750:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], c.r[17].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C764u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 4u, depth + 1u); else { c.pc = 0x00148020u; return; } if (c.pc != 0x0014C764u) [[unlikely]] return; }
L_0014C764:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C774u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C774u) [[unlikely]] return; }
L_0014C774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C798; } }
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0014C798:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 4ull;  if (t) { goto L_0014C7C8; } }
    c.budget -= 1;
L_0014C7B8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C7C8; } }
    c.r[16].d[0] = c.r[16].d[0] | 64ull;
    c.budget -= 1;
L_0014C7C8:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C7DCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 4u, depth + 1u); else { c.pc = 0x00148020u; return; } if (c.pc != 0x0014C7DCu) [[unlikely]] return; }
L_0014C7DC:
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C7ECu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C7ECu) [[unlikely]] return; }
L_0014C7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C810; } }
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 3;
L_0014C810:
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014C830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 8ull;  if (t) { goto L_0014C840; } }
    c.budget -= 1;
L_0014C830:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C840; } }
    c.r[16].d[0] = c.r[16].d[0] | 128ull;
    c.budget -= 1;
L_0014C840:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014C860:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.budget -= 8;
L_0014C880:
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 4u));
    c.f[21] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C8B4u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 244u, depth + 1u); else { c.pc = 0x00147490u; return; } if (c.pc != 0x0014C8B4u) [[unlikely]] return; }
L_0014C8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0014CA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C8C4u);  if (depth < kMaxDepth) unit_0011(c, 245u, depth + 1u); else { c.pc = 0x00147560u; return; } if (c.pc != 0x0014C8C4u) [[unlikely]] return; }
L_0014C8C4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[18], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0014CA38; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[22], c.r[29].w[0] + 204u);
    set32(c.r[30], c.r[29].w[0] + 196u);
    set32(c.r[23], c.r[29].w[0] + 188u);
    c.budget -= 5;
L_0014C8E8:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0014CA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C908u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00147BF0u; return; } if (c.pc != 0x0014C908u) [[unlikely]] return; }
L_0014C908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014CA20; } }
    c.f[5] = ld32((c.r[17].w[0] + 48u));
    c.f[4] = ld32((c.r[21].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 56u));
    c.f[2] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 23u, c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0014C978; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C958u); c.f[12] = fp::sub(c.f[23], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C958u) [[unlikely]] return; }
L_0014C958:
    c.f[22] = c.f[0];
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C968u); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014C968u) [[unlikely]] return; }
L_0014C968:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014CA20; } }
    c.budget -= 1;
L_0014C978:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[23];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C990u); c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x0014C990u) [[unlikely]] return; }
L_0014C990:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C9A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x0014C9A0u) [[unlikely]] return; }
L_0014C9A0:
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[29].w[0] + 180u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[23].w[0]), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C9CCu); st32((c.r[22].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x0014C9CCu) [[unlikely]] return; }
L_0014C9CC:
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 208u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[21].w[0]));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[6] = ld32((c.r[2].w[0]));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_div(c, 21u, c.f[0], c.f[6]);
    c.budget -= 21;
L_0014CA20:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014C8E8u | kUnwind; return; } goto L_0014C8E8; } }
    c.budget -= 1;
L_0014CA38:
    st32((c.r[20].w[0]), c.f[20]);
    c.f[0] = c.f[21];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
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
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0014CA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[28].w[0] - 24164u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24156u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 24168u), 0u);
    st32((c.r[28].w[0] - 24160u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014CB68; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 13936u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0014C000u < 16384u) { entry = entries_0013[(t - 0x0014C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014CAD8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014CAF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014CB00; } }
    c.budget -= 1;
L_0014CAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_0014CB68; } }
L_0014CB00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014CB68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014CB68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014CB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_0014CB68; } }
    c.budget -= 1;
L_0014CB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_0014CB68; } }
L_0014CB38:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014CB58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014CB60; } }
    c.budget -= 1;
L_0014CB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 5u);  if (t) { goto L_0014CB68; } }
L_0014CB60:
    set32(c.r[7], 0u + 4u);
    c.budget -= 2;
L_0014CB68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4480u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 127u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014CC20; } }
L_0014CB98:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CBA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0014CBA8u) [[unlikely]] return; }
L_0014CBA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0014CC08; } }
    set32(c.r[4], 0u + 20u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_0014CBF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    set32(c.r[3], 0u - 128u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0014CBF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 13088u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0014CC10; } }
    c.budget -= 1;
L_0014CC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CC28; } }
L_0014CC10:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014CB98u | kUnwind; return; } goto L_0014CB98; } }
L_0014CC20:
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0014CC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014CC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CC60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0014CC60u) [[unlikely]] return; }
L_0014CC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0014CCC8; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 27u);  if (t) { goto L_0014CC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014CC98; } }
L_0014CC90:
    set32(c.r[3], 0u + 11u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014CC98:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 43u);  if (t) { goto L_0014CCB0; } }
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0014CCB0:
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13088u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_0014CCC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014CCE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 12800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0014C000u < 16384u) { entry = entries_0013[(t - 0x0014C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014CD00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 3776u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_0014CD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3568u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CD5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014CD5Cu) [[unlikely]] return; }
L_0014CD5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014CD98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_0014CD98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014CD98; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014CD98; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0014CD98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014CDB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0014CDC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0014CDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014CE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CDF4u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014CDF4u) [[unlikely]] return; }
L_0014CDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_0014CE48; } }
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014CE40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014CE38; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0014CE40; } }
    c.budget -= 1;
L_0014CE38:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014CE40:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014CE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014CE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014D3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CE84u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014CE84u) [[unlikely]] return; }
L_0014CE84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CE94u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014CE94u) [[unlikely]] return; }
L_0014CE94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CEA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014CEA8u) [[unlikely]] return; }
L_0014CEA8:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014CEF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_0014CF08; } }
L_0014CEF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_0014CF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0014CF48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 11840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014CF3Cu) [[unlikely]] return; }
L_0014CF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014D200; } }
    c.budget -= 1;
L_0014CF48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 3680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014CF6Cu) [[unlikely]] return; }
L_0014CF6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFA0u); st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014CFA0u) [[unlikely]] return; }
L_0014CFA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFE0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014CFE0u) [[unlikely]] return; }
L_0014CFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014CFF4u) [[unlikely]] return; }
L_0014CFF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D008u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D008u) [[unlikely]] return; }
L_0014D008:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 180u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D05Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D05Cu) [[unlikely]] return; }
L_0014D05C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D070u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D070u) [[unlikely]] return; }
L_0014D070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D084u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D084u) [[unlikely]] return; }
L_0014D084:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D0A4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D0A4u) [[unlikely]] return; }
L_0014D0A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D0B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D0B8u) [[unlikely]] return; }
L_0014D0B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D0D4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D0D4u) [[unlikely]] return; }
L_0014D0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D0DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0014D0DCu) [[unlikely]] return; }
L_0014D0DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D0F8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014D0F8u) [[unlikely]] return; }
L_0014D0F8:
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 60u);
    c.r[3].d[0] = c.r[3].d[0] | 15551ull;
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 182u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D180u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D180u) [[unlikely]] return; }
L_0014D180:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D194u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D194u) [[unlikely]] return; }
L_0014D194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D19Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0014D19Cu) [[unlikely]] return; }
L_0014D19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1B0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D1B0u) [[unlikely]] return; }
L_0014D1B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014D1CCu) [[unlikely]] return; }
L_0014D1CC:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1ECu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D1ECu) [[unlikely]] return; }
L_0014D1EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D200u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D200u) [[unlikely]] return; }
L_0014D200:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0014D3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D21Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014D21Cu) [[unlikely]] return; }
L_0014D21C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 79u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D22Cu); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014D22Cu) [[unlikely]] return; }
L_0014D22C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D240u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D240u) [[unlikely]] return; }
L_0014D240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1600u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D27Cu); st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014D27Cu) [[unlikely]] return; }
L_0014D27C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D298u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D298u) [[unlikely]] return; }
L_0014D298:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D2DCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D2DCu) [[unlikely]] return; }
L_0014D2DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D2F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D2F0u) [[unlikely]] return; }
L_0014D2F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D304u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D304u) [[unlikely]] return; }
L_0014D304:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 152u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D35Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D35Cu) [[unlikely]] return; }
L_0014D35C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D370u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D370u) [[unlikely]] return; }
L_0014D370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D384u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D384u) [[unlikely]] return; }
L_0014D384:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D3A4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014D3A4u) [[unlikely]] return; }
L_0014D3A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D3B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D3B8u) [[unlikely]] return; }
L_0014D3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D3C0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014D3C0u) [[unlikely]] return; }
L_0014D3C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 8720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D3D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014D3D4u) [[unlikely]] return; }
L_0014D3D4:
    c.budget -= 1;
L_0014D3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014D3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014D404u) [[unlikely]] return; }
L_0014D404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0014D410; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0014D410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014D420:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_0014D820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8930u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014D820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D474u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014D474u) [[unlikely]] return; }
L_0014D474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D484u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014D484u) [[unlikely]] return; }
L_0014D484:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D498u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D498u) [[unlikely]] return; }
L_0014D498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 4160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D4ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014D4ACu) [[unlikely]] return; }
L_0014D4AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0014D5D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { goto L_0014D560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D50Cu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0014D50Cu) [[unlikely]] return; }
L_0014D50C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D51Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0014D51Cu) [[unlikely]] return; }
L_0014D51C:
    set32(c.r[4], c.r[20].w[0] + 8624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D528u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0014D528u) [[unlikely]] return; }
L_0014D528:
    c.f[12] = ld32((c.r[29].w[0] + 256u));
    c.f[13] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014D578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D550u);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0014D550u) [[unlikely]] return; }
L_0014D550:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0014D578; } }
    c.budget -= 1;
L_0014D560:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1252u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 6;
L_0014D578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D580u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014D580u) [[unlikely]] return; }
L_0014D580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D59Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D59Cu) [[unlikely]] return; }
L_0014D59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5B4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014D5B4u) [[unlikely]] return; }
L_0014D5B4:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5C0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0014D5C0u) [[unlikely]] return; }
L_0014D5C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 3200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014D5D4u) [[unlikely]] return; }
L_0014D5D4:
    c.budget -= 1;
L_0014D5D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { goto L_0014D610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5F0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0014D5F0u) [[unlikely]] return; }
L_0014D5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5F8u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0014D5F8u) [[unlikely]] return; }
L_0014D5F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D608u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0014D608u) [[unlikely]] return; }
L_0014D608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014D638; } }
L_0014D610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D618u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0014D618u) [[unlikely]] return; }
L_0014D618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D620u); set32(c.r[4], ld32((c.r[20].w[0] + 1252u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0014D620u) [[unlikely]] return; }
L_0014D620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D628u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0014D628u) [[unlikely]] return; }
L_0014D628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D638u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0014D638u) [[unlikely]] return; }
L_0014D638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D640u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0014D640u) [[unlikely]] return; }
L_0014D640:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 27856u);
    set32(c.r[23], c.r[29].w[0] + 264u);
    set32(c.r[17], c.r[29].w[0] + 260u);
    set32(c.r[30], c.r[29].w[0] + 244u);
    set32(c.r[16], c.r[29].w[0] + 232u);
    set32(c.r[21], c.r[29].w[0] + 236u);
    set32(c.r[22], c.r[29].w[0] + 240u);
    c.budget -= 10;
L_0014D668:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_0014D810; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0014D810; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_0014D810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D6A0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0014D6A0u) [[unlikely]] return; }
L_0014D6A0:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D6ACu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0014D6ACu) [[unlikely]] return; }
L_0014D6AC:
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D6C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0014D6C0u) [[unlikely]] return; }
L_0014D6C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014D810; } }
    c.f[20] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D704u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0014D704u) [[unlikely]] return; }
L_0014D704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D70Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0014D70Cu) [[unlikely]] return; }
L_0014D70C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014D740; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0014D740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 3440u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 515u));
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.f[0] = c.r[4].w[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014D7A8; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[21].w[0]), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_0014D7B8; } }
    c.budget -= 1;
L_0014D7A8:
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[22].w[0]), 0u);
    c.budget -= 4;
L_0014D7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D7C0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014D7C0u) [[unlikely]] return; }
L_0014D7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D7ECu); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014D7ECu) [[unlikely]] return; }
L_0014D7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D800u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014D800u) [[unlikely]] return; }
L_0014D800:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D810u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D810u) [[unlikely]] return; }
L_0014D810:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014D668u | kUnwind; return; } goto L_0014D668; } }
L_0014D820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0014D860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014D940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D884u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014D884u) [[unlikely]] return; }
L_0014D884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014D940; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 496u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0014D8C4; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0014D8C4:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014D8F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0014D8F8; } }
    c.budget -= 1;
L_0014D8F0:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014D8F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 500u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_0014D938; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_0014D918; } }
    st16((c.r[6].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014D918:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 500u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014D938; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[6].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0014D938:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014D940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014D950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014DCE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014DCE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D9A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014D9A8u) [[unlikely]] return; }
L_0014D9A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 6800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D9BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014D9BCu) [[unlikely]] return; }
L_0014D9BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 37u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D9CCu); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014D9CCu) [[unlikely]] return; }
L_0014D9CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D9E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014D9E0u) [[unlikely]] return; }
L_0014D9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1600u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014DA38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_0014DA50; } }
L_0014DA38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_0014DA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DA58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014DA58u) [[unlikely]] return; }
L_0014DA58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 500u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DA94u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014DA94u) [[unlikely]] return; }
L_0014DA94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43450000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C60000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DAB0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DAB0u) [[unlikely]] return; }
L_0014DAB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DAC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DAC4u) [[unlikely]] return; }
L_0014DAC4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 500u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB14u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014DB14u) [[unlikely]] return; }
L_0014DB14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB28u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DB28u) [[unlikely]] return; }
L_0014DB28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DB3Cu) [[unlikely]] return; }
L_0014DB3C:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB5Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014DB5Cu) [[unlikely]] return; }
L_0014DB5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB70u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DB70u) [[unlikely]] return; }
L_0014DB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DB84u) [[unlikely]] return; }
L_0014DB84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DBECu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014DBECu) [[unlikely]] return; }
L_0014DBEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC08u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DC08u) [[unlikely]] return; }
L_0014DC08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC1Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DC1Cu) [[unlikely]] return; }
L_0014DC1C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC6Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014DC6Cu) [[unlikely]] return; }
L_0014DC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC80u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DC80u) [[unlikely]] return; }
L_0014DC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DC94u) [[unlikely]] return; }
L_0014DC94:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DCB4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014DCB4u) [[unlikely]] return; }
L_0014DCB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DCC8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DCC8u) [[unlikely]] return; }
L_0014DCC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DCDCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DCDCu) [[unlikely]] return; }
L_0014DCDC:
    c.budget -= 1;
L_0014DCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014DD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014DF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DD24u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014DD24u) [[unlikely]] return; }
L_0014DD24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DF08; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[5], c.r[16].w[0] + 304u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 1568u);  if (t) { goto L_0014DD70; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_0014DD70:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 24u)));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[12], 0u - 1u);
    c.f[2] = c.r[9].w[0];
    set32(c.r[11], 0u + 1u);
    c.budget -= 10;
L_0014DD98:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014DEE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[12].d[0];  if (t) { goto L_0014DDB8; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[11].w[0]));  if (t) { goto L_0014DEE8; } }
L_0014DDB8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[11].d[0];  if (t) { goto L_0014DDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[11].w[0]));  if (t) { goto L_0014DDD0; } }
L_0014DDC8:
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0014DDD0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[11].d[0];  if (t) { goto L_0014DE68; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014DDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DEC0; } }
    c.budget -= 1;
L_0014DDF0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[11].d[0];  if (t) { goto L_0014DE30; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[1] = c.r[8].w[0];
    c.f[0] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0014DEE8; } }
    c.budget -= 1;
L_0014DE30:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014DEE8; } }
    c.f[0] = c.r[7].w[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0014DEE8; } }
L_0014DE68:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014DEB8; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0014DEE8; } }
    c.budget -= 1;
L_0014DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[9].w[0]);  if (t) { goto L_0014DEE8; } }
L_0014DEC0:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[1] = c.r[8].w[0];
    c.f[0] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 10;
L_0014DEE8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014DD98u | kUnwind; return; } goto L_0014DD98; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014DF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014DF20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E5E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E5E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[18], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1568u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1584u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DF88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014DF88u) [[unlikely]] return; }
L_0014DF88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 42u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DF98u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014DF98u) [[unlikely]] return; }
L_0014DF98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014DFACu) [[unlikely]] return; }
L_0014DFAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 8480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014DFC0u) [[unlikely]] return; }
L_0014DFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 8000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014DFD4u) [[unlikely]] return; }
L_0014DFD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43720000u);  if (t) { goto L_0014E010; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30F0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFF8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014DFF8u) [[unlikely]] return; }
L_0014DFF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 7280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E00Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E00Cu) [[unlikely]] return; }
L_0014E00C:
    c.budget -= 1;
L_0014E010:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0014E0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E020u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E020u) [[unlikely]] return; }
L_0014E020:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2300000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E034u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E034u) [[unlikely]] return; }
L_0014E034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 42u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E044u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014E044u) [[unlikely]] return; }
L_0014E044:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E058u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E058u) [[unlikely]] return; }
L_0014E058:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 8480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E06Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E06Cu) [[unlikely]] return; }
L_0014E06C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0014E0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E080u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E080u) [[unlikely]] return; }
L_0014E080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E09Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E09Cu) [[unlikely]] return; }
L_0014E09C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 7280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E0B0u) [[unlikely]] return; }
L_0014E0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E0B8u) [[unlikely]] return; }
L_0014E0B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 14000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E0CCu) [[unlikely]] return; }
L_0014E0CC:
    c.budget -= 1;
L_0014E0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E0D8u) [[unlikely]] return; }
L_0014E0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0014E0E0u) [[unlikely]] return; }
L_0014E0E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] + 7520u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0014E148; } }
    c.budget -= 1;
L_0014E138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0014E148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E15Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014E15Cu) [[unlikely]] return; }
L_0014E15C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E170u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E170u) [[unlikely]] return; }
L_0014E170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E178u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0014E178u) [[unlikely]] return; }
L_0014E178:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0014E1E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 7760u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014E1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), 0u);  if (t) { goto L_0014E1B8; } }
    c.budget -= 1;
L_0014E1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0014E1B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1CCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014E1CCu) [[unlikely]] return; }
L_0014E1CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E1E0u) [[unlikely]] return; }
L_0014E1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E1E8u) [[unlikely]] return; }
L_0014E1E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3120000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E204u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E204u) [[unlikely]] return; }
L_0014E204:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014E258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0014E268; } }
L_0014E258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0014E268:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E27Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E27Cu) [[unlikely]] return; }
L_0014E27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E284u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E284u) [[unlikely]] return; }
L_0014E284:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 19408u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E2E8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014E2E8u) [[unlikely]] return; }
L_0014E2E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3140000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E304u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E304u) [[unlikely]] return; }
L_0014E304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E318u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E318u) [[unlikely]] return; }
L_0014E318:
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E360u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014E360u) [[unlikely]] return; }
L_0014E360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E374u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E374u) [[unlikely]] return; }
L_0014E374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E388u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E388u) [[unlikely]] return; }
L_0014E388:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3A8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014E3A8u) [[unlikely]] return; }
L_0014E3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3BCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E3BCu) [[unlikely]] return; }
L_0014E3BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E3D0u) [[unlikely]] return; }
L_0014E3D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0014E5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3E0u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E3E0u) [[unlikely]] return; }
L_0014E3E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3FCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E3FCu) [[unlikely]] return; }
L_0014E3FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014E450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0014E460; } }
L_0014E450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_0014E460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19412u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19416u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E488u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E488u) [[unlikely]] return; }
L_0014E488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E490u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x0014E490u) [[unlikely]] return; }
L_0014E490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 19408u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E500u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014E500u) [[unlikely]] return; }
L_0014E500:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3400000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E51Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E51Cu) [[unlikely]] return; }
L_0014E51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E530u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E530u) [[unlikely]] return; }
L_0014E530:
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E578u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014E578u) [[unlikely]] return; }
L_0014E578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E58Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E58Cu) [[unlikely]] return; }
L_0014E58C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E5A0u) [[unlikely]] return; }
L_0014E5A0:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5C0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0014E5C0u) [[unlikely]] return; }
L_0014E5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5D4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014E5D4u) [[unlikely]] return; }
L_0014E5D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E5E8u) [[unlikely]] return; }
L_0014E5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014E610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014E624u) [[unlikely]] return; }
L_0014E624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E690; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 824u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 826u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014E660; } }
    st16((c.r[5].w[0] + 826u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0014E660:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E690; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 824u)));
    set32(c.r[3], 0u + 4000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014E690; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0014E690; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0014E690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014E6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E780; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E780; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E6ECu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014E6ECu) [[unlikely]] return; }
L_0014E6EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 5840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E700u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E700u) [[unlikely]] return; }
L_0014E700:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 5360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E714u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E714u) [[unlikely]] return; }
L_0014E714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E724u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014E724u) [[unlikely]] return; }
L_0014E724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E738u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014E738u) [[unlikely]] return; }
L_0014E738:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 826u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.f[13];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E76Cu);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014E76Cu) [[unlikely]] return; }
L_0014E76C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 5120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E780u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014E780u) [[unlikely]] return; }
L_0014E780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014E790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E7ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014E7ACu) [[unlikely]] return; }
L_0014E7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E9C0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] - 27856u);
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 9);
    set32(c.r[17], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[18].w[0] + 304u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[13], c.r[5].w[0] + 128u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 40u);
    c.budget -= 17;
L_0014E7F8:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0]; set32(c.r[12], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0014E860; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[11], c.r[12].w[0] + 3u);  if (t) { goto L_0014E820; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0014E860; } }
L_0014E820:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[10], c.r[12].w[0] + 1u);  if (t) { goto L_0014E838; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0014E860; } }
L_0014E838:
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014E858; } }
    st16((c.r[13].w[0] + 4u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0014E860; } }
    c.budget -= 1;
L_0014E858:
    set32(c.r[5], c.r[9].w[0] - 5u);
    st16((c.r[13].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0014E860:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E7F8u | kUnwind; return; } goto L_0014E7F8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E9B8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 515u));
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 130u)));
    set32(c.r[16], c.r[3].w[0] + 128u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 128u)));
    c.budget -= 15;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0014E8C4; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0014E8C4:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014E940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E8D8u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0014E8D8u) [[unlikely]] return; }
L_0014E8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E940; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E938; } }
    set32(c.r[2], 0u + 1200u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E910u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0018(c, 241u, depth + 1u); else { c.pc = 0x00163160u; return; } if (c.pc != 0x0014E910u) [[unlikely]] return; }
L_0014E910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E918u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x0014E918u) [[unlikely]] return; }
L_0014E918:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0014E940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014E940; } }
L_0014E938:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014E940:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0014E958; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0014E958:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014E9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E96Cu);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0014E96Cu) [[unlikely]] return; }
L_0014E96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E9B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E9B0; } }
    set32(c.r[2], 0u + 1200u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E990u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x0014E990u) [[unlikely]] return; }
L_0014E990:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0014E9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014E9B8; } }
L_0014E9B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014E9B8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014E9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014E9E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014F020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA0Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EA0Cu) [[unlikely]] return; }
L_0014EA0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 2960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014EA20u) [[unlikely]] return; }
L_0014EA20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA30u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014EA30u) [[unlikely]] return; }
L_0014EA30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014EA44u) [[unlikely]] return; }
L_0014EA44:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[16].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0014EAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA7Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EA7Cu) [[unlikely]] return; }
L_0014EA7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA98u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014EA98u) [[unlikely]] return; }
L_0014EA98:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EAB0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x0014EAB0u) [[unlikely]] return; }
L_0014EAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F020; } }
L_0014EAB8:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EAD8u); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EAD8u) [[unlikely]] return; }
L_0014EAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EAE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0014EAE0u) [[unlikely]] return; }
L_0014EAE0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014EB50; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0014EB50; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014EB50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
L_0014EB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB60u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014EB60u) [[unlikely]] return; }
L_0014EB60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014EB74u) [[unlikely]] return; }
L_0014EB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB7Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0014EB7Cu) [[unlikely]] return; }
L_0014EB7C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014EBE8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0014EBE8; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014EBE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
L_0014EBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EBF8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014EBF8u) [[unlikely]] return; }
L_0014EBF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 2000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014EC0Cu) [[unlikely]] return; }
L_0014EC0C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC30u); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EC30u) [[unlikely]] return; }
L_0014EC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0014EC38u) [[unlikely]] return; }
L_0014EC38:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014ECA8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0014ECA8; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014ECA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
L_0014ECA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECB8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014ECB8u) [[unlikely]] return; }
L_0014ECB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECCCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014ECCCu) [[unlikely]] return; }
L_0014ECCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0014ECD4u) [[unlikely]] return; }
L_0014ECD4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014ED40; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_0014ED40; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014ED40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
L_0014ED40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ED50u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014ED50u) [[unlikely]] return; }
L_0014ED50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 2240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ED64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014ED64u) [[unlikely]] return; }
L_0014ED64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ED6Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014ED6Cu) [[unlikely]] return; }
L_0014ED6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43550000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ED88u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014ED88u) [[unlikely]] return; }
L_0014ED88:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 12u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EDB4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014EDB4u) [[unlikely]] return; }
L_0014EDB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43680000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EDD0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014EDD0u) [[unlikely]] return; }
L_0014EDD0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[4], c.r[3].w[0] + 12u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EE00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014EE00u) [[unlikely]] return; }
L_0014EE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EE08u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EE08u) [[unlikely]] return; }
L_0014EE08:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0014EE20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014EE38; } }
L_0014EE20:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0014EE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[14] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[12] = fp::mul(c.f[14], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EE64u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0014EE64u) [[unlikely]] return; }
L_0014EE64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EEA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014EEA0u) [[unlikely]] return; }
L_0014EEA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[14], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EEECu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0014EEECu) [[unlikely]] return; }
L_0014EEEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014EF10u) [[unlikely]] return; }
L_0014EF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF18u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EF18u) [[unlikely]] return; }
L_0014EF18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF34u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014EF34u) [[unlikely]] return; }
L_0014EF34:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF4Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x0014EF4Cu) [[unlikely]] return; }
L_0014EF4C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0014EF70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014EF70; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0014F020; } }
L_0014EF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF78u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014EF78u) [[unlikely]] return; }
L_0014EF78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 320u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8683u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] >= 0; c.f[12] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0014EFD0; } }
    set32(c.r[2], c.r[4].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0014EFD0:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[15] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[15], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F00Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0014F00Cu) [[unlikely]] return; }
L_0014F00C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F020u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014F020u) [[unlikely]] return; }
L_0014F020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014F040:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014F3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F078u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014F078u) [[unlikely]] return; }
L_0014F078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014F3A0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[18], c.r[21].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[20].w[0] + 1568u);  if (t) { goto L_0014F0C8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 16u)));
    st8((c.r[18].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0014F0C8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0014F0D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014F380; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[16].d[0] = c.r[17].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0014F128; } }
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0014F128; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0014F128:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0014F250; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0014F1A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F380; } }
L_0014F150:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0014F380; } }
    c.r[6].d[0] = ld8((c.r[18].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0014F380; } }
    c.budget -= 1;
L_0014F1A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F1F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_0014F1E0; } }
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F1E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0014F1E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014F220; } }
    c.budget -= 1;
L_0014F1F8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0014F220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0014F380; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0014F380; } }
L_0014F250:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F350; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld8((c.r[20].w[0] + 754u));  if (t) { goto L_0014F278; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_0014F278:
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014F298; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];  if (t) { goto L_0014F2A8; } }
L_0014F298:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
L_0014F2A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0014F350; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0014F350; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0014F2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0014F2E0; } }
    c.budget -= 1;
L_0014F2D8:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0014F2E0:
    set32(c.r[4], 0u + 32u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 8u);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0014F330; } }
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0014F320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F318u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x0014F318u) [[unlikely]] return; }
L_0014F318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F330; } }
L_0014F320:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F32Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x0014F32Cu) [[unlikely]] return; }
L_0014F32C:
    c.budget -= 1;
L_0014F330:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0014F350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0014F380; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0014F380:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F0D0u | kUnwind; return; } goto L_0014F0D0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0014F3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014F3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014F6A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014F6A0; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 306u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 304u);  if (t) { goto L_0014F548; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12785u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014F548; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 65u);  if (t) { goto L_0014F46C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F478; } }
L_0014F46C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], 0u + 56u);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_0014F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F480u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014F480u) [[unlikely]] return; }
L_0014F480:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2980000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F494u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F494u) [[unlikely]] return; }
L_0014F494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F49Cu);  if (depth < kMaxDepth) unit_0018(c, 210u, depth + 1u); else { c.pc = 0x001626F0u; return; } if (c.pc != 0x0014F49Cu) [[unlikely]] return; }
L_0014F49C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F4CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014F4CCu) [[unlikely]] return; }
L_0014F4CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F4E0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F4E0u) [[unlikely]] return; }
L_0014F4E0:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F504u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014F504u) [[unlikely]] return; }
L_0014F504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2960000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F518u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F518u) [[unlikely]] return; }
L_0014F518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 9904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F548u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014F548u) [[unlikely]] return; }
L_0014F548:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 26272u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0014F6A0; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12784u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014F6A0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F6A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 65u);  if (t) { goto L_0014F5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F5B8; } }
L_0014F5AC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[2], 0u + 56u);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_0014F5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F5C0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014F5C0u) [[unlikely]] return; }
L_0014F5C0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F5D4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F5D4u) [[unlikely]] return; }
L_0014F5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F5DCu);  if (depth < kMaxDepth) unit_0018(c, 210u, depth + 1u); else { c.pc = 0x001626F0u; return; } if (c.pc != 0x0014F5DCu) [[unlikely]] return; }
L_0014F5DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F60Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014F60Cu) [[unlikely]] return; }
L_0014F60C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F620u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F620u) [[unlikely]] return; }
L_0014F620:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F644u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014F644u) [[unlikely]] return; }
L_0014F644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2960000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F658u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F658u) [[unlikely]] return; }
L_0014F658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19412u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19416u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F69Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014F69Cu) [[unlikely]] return; }
L_0014F69C:
    c.budget -= 1;
L_0014F6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014F6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014F7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F6E4u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x0014F6E4u) [[unlikely]] return; }
L_0014F6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014F7D8; } }
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + 56u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F710; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0014F710:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + 54u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 54u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F730; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0014F730:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 52u);  if (t) { goto L_0014F790; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 6;
L_0014F758:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 36u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0014F778; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0014F778:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F758u | kUnwind; return; } goto L_0014F758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F7B0; } }
L_0014F790:
    c.r[4].d[0] = 0ull | 65535ull;
    st16((c.r[5].w[0] + 36u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
L_0014F7B0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[3], 0u + 2u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0014F7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014F7F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014FBC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014FBC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3940000u);
    set32(c.r[17], c.r[29].w[0] + 140u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F858u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 332u, depth + 1u); else { c.pc = 0x0014FBF0u; return; } if (c.pc != 0x0014F858u) [[unlikely]] return; }
L_0014F858:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0014F860:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 36u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0014FB90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);  if (t) { goto L_0014F8D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 54u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0014F8C0; } }
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), 0u);  if (t) { goto L_0014F8F8; } }
L_0014F8C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_0014F8F8; } }
    c.budget -= 1;
L_0014F8D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.budget -= 8;
L_0014F8F8:
    c.r[16].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 11));
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.r[19].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F910u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 346u, depth + 1u); else { c.pc = 0x0014FD70u; return; } if (c.pc != 0x0014F910u) [[unlikely]] return; }
L_0014F910:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 14));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014FB20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014FAC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014F940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FB70; } }
    c.budget -= 1;
L_0014F940:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 12));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 13));  if (t) { goto L_0014F988; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0014F970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F964u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 354u, depth + 1u); else { c.pc = 0x0014FED0u; return; } if (c.pc != 0x0014F964u) [[unlikely]] return; }
L_0014F964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FAA0; } }
    c.budget -= 1;
L_0014F970:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F97Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 352u, depth + 1u); else { c.pc = 0x0014FE70u; return; } if (c.pc != 0x0014F97Cu) [[unlikely]] return; }
L_0014F97C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FAA0; } }
    c.budget -= 1;
L_0014F988:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 8));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F9A8u); c.r[16].d[0] = c.r[3].d[0] & 7ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014F9A8u) [[unlikely]] return; }
L_0014F9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F9C0u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014F9C0u) [[unlikely]] return; }
L_0014F9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 14u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F9E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0014F9E4u) [[unlikely]] return; }
L_0014F9E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FA04u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0014FA04u) [[unlikely]] return; }
L_0014FA04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0014FA18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014FA30; } }
L_0014FA18:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0014FA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 23744u)));
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.r[8].d[0] = c.r[2].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[6], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    fpu_div(c, 3u, c.f[2], c.f[1]);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[2] = c.r[8].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAA0u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 30u, depth + 1u); else { c.pc = 0x002D87B0u; return; } if (c.pc != 0x0014FAA0u) [[unlikely]] return; }
L_0014FAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAB4u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 355u, depth + 1u); else { c.pc = 0x0014FF30u; return; } if (c.pc != 0x0014FAB4u) [[unlikely]] return; }
L_0014FAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FB70; } }
    c.budget -= 1;
L_0014FAC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 515u));
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0014FB00; } }
    set32(c.r[4], 0u + 5u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAFCu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 355u, depth + 1u); else { c.pc = 0x0014FF30u; return; } if (c.pc != 0x0014FAFCu) [[unlikely]] return; }
L_0014FAFC:
    c.budget -= 1;
L_0014FB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB14u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 355u, depth + 1u); else { c.pc = 0x0014FF30u; return; } if (c.pc != 0x0014FB14u) [[unlikely]] return; }
L_0014FB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FB70; } }
    c.budget -= 1;
L_0014FB20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0014FB48; } }
    set32(c.r[4], 0u + 8u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB3Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 355u, depth + 1u); else { c.pc = 0x0014FF30u; return; } if (c.pc != 0x0014FB3Cu) [[unlikely]] return; }
L_0014FB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FB60; } }
    c.budget -= 1;
L_0014FB48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[4], 0u + 9u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB60u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 355u, depth + 1u); else { c.pc = 0x0014FF30u; return; } if (c.pc != 0x0014FB60u) [[unlikely]] return; }
L_0014FB60:
    set32(c.r[4], 0u + 4u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB70u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 355u, depth + 1u); else { c.pc = 0x0014FF30u; return; } if (c.pc != 0x0014FB70u) [[unlikely]] return; }
L_0014FB70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3940000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 8;
L_0014FB90:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F860u | kUnwind; return; } goto L_0014F860; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FBB0u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 332u, depth + 1u); else { c.pc = 0x0014FBF0u; return; } if (c.pc != 0x0014FBB0u) [[unlikely]] return; }
L_0014FBB0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FBC0u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0013(c, 332u, depth + 1u); else { c.pc = 0x0014FBF0u; return; } if (c.pc != 0x0014FBC0u) [[unlikely]] return; }
L_0014FBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0014FBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014FCE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0014FC78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014FC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FD58; } }
    c.budget -= 1;
L_0014FC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FC38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014FC38u) [[unlikely]] return; }
L_0014FC38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 4400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FC4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0014FC4Cu) [[unlikely]] return; }
L_0014FC4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FC5Cu); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014FC5Cu) [[unlikely]] return; }
L_0014FC5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FC70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014FC70u) [[unlikely]] return; }
L_0014FC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FD58; } }
L_0014FC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FC80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014FC80u) [[unlikely]] return; }
L_0014FC80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC35A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3420000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCA0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014FCA0u) [[unlikely]] return; }
L_0014FCA0:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCB4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014FCB4u) [[unlikely]] return; }
L_0014FCB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCC4u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014FCC4u) [[unlikely]] return; }
L_0014FCC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014FCD8u) [[unlikely]] return; }
L_0014FCD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014FD58; } }
L_0014FCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCE8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014FCE8u) [[unlikely]] return; }
L_0014FCE8:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3940000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.f[14] = 0u;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD34u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014FD34u) [[unlikely]] return; }
L_0014FD34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 59u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD44u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x0014FD44u) [[unlikely]] return; }
L_0014FD44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014FD58u) [[unlikely]] return; }
L_0014FD58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014FD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014FD8Cu) [[unlikely]] return; }
L_0014FD8C:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD9Cu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014FD9Cu) [[unlikely]] return; }
L_0014FD9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[2], c.r[2].w[0] - 1120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[14] = c.r[3].w[0];
    set32(c.r[7], c.r[17].w[0] + 144u);
    set32(c.r[2], 0u + 13u);
    mmi::div(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 19408u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[7].w[0] >> 31);
    set32(c.r[4], 0u + 1u);
    c.f[15] = c.f[14];
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.r[6].d[0] = c.r[6].d[0] | 4ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4EC40000u);
    c.r[2].d[0] = c.r[2].d[0] | 60495ull;
    c.f[0] = c.r[6].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.f[12] = fp::mul(c.f[14], c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FE28u); c.f[13] = fp::mul(c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0014FE28u) [[unlikely]] return; }
L_0014FE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 2;
L_0014FE30:
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FE3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0014FE3Cu) [[unlikely]] return; }
L_0014FE3C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014FE70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014FE90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014FE98; } }
L_0014FE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0014FEA0; } }
L_0014FE98:
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0014FEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 4512u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  goto L_0014FF60; }
L_0014FECC:
    c.budget -= 1;
L_0014FED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014FEF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014FEF8; } }
L_0014FEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0014FF00; } }
L_0014FEF8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0014FF00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 9632u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  goto L_0014FF60; }
L_0014FF30:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & 127ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[2].w[0] << 5);
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    set32(c.r[3], c.r[3].w[0] + 11168u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 10;
    { set32(c.r[5], 0u + 3u);  goto L_0014FF60; }
L_0014FF60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF98u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0014FF98u) [[unlikely]] return; }
L_0014FF98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FFACu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0014FFACu) [[unlikely]] return; }
L_0014FFAC:
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FFBCu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0014FFBCu) [[unlikely]] return; }
L_0014FFBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[4], ld32((c.r[1].w[0] + 19408u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.budget -= 4;
L_0014FFCC:
    set32(c.r[6], c.r[3].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], c.r[5].w[0] - 1840u);
    c.budget -= 3;
L_0014FFD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = 0ull | 65535ull;
    st32((c.r[1].w[0] + 19460u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.budget -= 10;
    [[clang::musttail]] return unit_0014(c, 1u, depth);
}

}
